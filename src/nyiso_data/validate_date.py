import datetime

now = datetime.datetime.now()

def validate_date(_date, _window):
    '''
    VALIDATE_DATE

    DESCRIPTION:
    Auxiliary function to validate date

    INPUTS:
    - `_date`: date to validate
    - `_window`: time window to validate (i.e., `day`, `week`, or `month`)

    OUTPUTS:
    - Boolean showing whether the actual date is valid or not

    LAST MODIFICATION DATE:
    12/14/2021 by SADR
    '''

    if _window == 'day' or _window == 'week':

        # Validating the given date is not in the future
        given_date = datetime.datetime.strptime(_date, '%m/%d/%Y')
        if given_date > now:
            return False
        else:
            print("Date is valid. Data for power flow might not be available (not downloaded). Sanity check is left to the user\n")
            return True
    elif _window == 'month':
        # Converting the given date to 'datetime' format
        given_date = datetime.datetime.strptime(_date, '%m/%Y')

        if given_date > now:
            return False
        else:
            return True

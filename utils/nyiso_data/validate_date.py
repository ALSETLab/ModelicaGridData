import datetime

now = datetime.datetime.now()

def validate_date(_date, _window):
    '''
    Auxiliary function to validate date
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

from .extract_data import *
from .generate_component_list import *

import yaml
import platform

# List of machines in OpenIPSL 1.5.0
LIST_OF_MACHINES_150 = {'GENSAL' : ['Epq [q-axis voltage behind transient reactance (pu)]',
                    'PSIkd [d-axis rotor flux linkage (pu)]',
                    'PSIppd [d-axis subtransient flux linkage (pu)]',
                    'PSIppq [q-axis subtransient flux linkage (pu)]',
                    'PSId [d-axis flux linkage (pu)]',
                    'PSIq [q-axis flux linkage (pu)]',
                    'XadIfd [machine field current (pu)]'],
    'GENROU' : ['Epd [d-axis voltage behind transient reactance (pu)]',
                    'Epq [q-axis voltage behind transient reactance (pu)]',
                    'PSIkd [d-axis rotor flux linkage (pu)]',
                    'PSIkq [q-axis rotor flux linkage (pu)]',
                    'PSId [d-axis flux linkage (pu)]',
                    'PSIq [q-axis flux linkage (pu)]',
                    'PSIppd [d-axis subtransient flux linkage (pu)]',
                    'PSIppq [q-axis subtransient flux linkage (pu)]',
                    'XadIfd [d-axis machine field current (pu)]',
                    'XadIfq [q-axis machine field current (pu)]'],
    'GENROE' : ['Epd [d-axis voltage behind transient reactance (pu)]',
                    'Epq [q-axis voltage behind transient reactance (pu)]',
                    'PSIkd [d-axis rotor flux linkage (pu)]',
                    'PSIkq [q-axis rotor flux linkage (pu)]',
                    'PSId [d-axis flux linkage (pu)]',
                    'PSIq [q-axis flux linkage (pu)]',
                    'PSIppd [d-axis subtransient flux linkage (pu)]',
                    'PSIppq [q-axis subtransient flux linkage (pu)]',
                    'XadIfd [d-axis machine field current (pu)]',
                    'XadIfq [q-axis machine field current (pu)]'],
    'GENSAE' : ['Epq [q-axis voltage behind transient reactance (pu)]',
                    'PSIkd [d-axis rotor flux linkage (pu)]',
                    'PSId [d-axis flux linkage (pu)]',
                    'PSIq [q-axis flux linkage (pu)]',
                    'PSIppd [d-axis subtransient flux linkage (pu)]',
                    'PSIppq [q-axis subtransient flux linkage (pu)]',
                    'XadIfd [d-axis machine field current (pu)]'],
    'GENCLS' : ['delta [rotor angle (ang)]',
                    'omega [rotor speed (pu)]',
                    'V [bus voltage magnitude (pu)]',
                    'anglev [bus voltage angle (rad)]']}
# List of machines in OpenIPSL 2.0.0
LIST_OF_MACHINES_200 = ['GENSAL', 'GENROU', 'GENROE', 'GENSAE', 'GENCLS']

# List of exciters in OpenIPSL 1.5.0
LIST_OF_EXCITERS_150 = ['ESST4B', 'EXNI', 'ST5B', 'IEEEX1',
    'SEXS', 'ESDC1A', 'ESDC2A', 'EXAC1', 'EXAC2', 'SCRX',
    'IEEET1', 'IEEET2', 'EXST1', 'ESAC1A', 'ESAC2A', 'ESST1A', 'URST5T']
# List of exciters in OpenIPSL 2.0.0
LIST_OF_EXCITERS_200 = []

# List of PSS in OpenIPSL 1.5.0
LIST_OF_PSS_150 = ['PSS2A', 'PSS2B', 'STAB2A', 'STAB3', 'STABNI',
 'IEEEST', 'IEEE2ST', 'STBSVC']
# List of PSS in OpenIPSL 2.0.0
LIST_OF_PSS_200 = []

# List of turbine governor in OpenIPSL 1.5.0
LIST_OF_OPENIPSL_150 = ['IEEEG1', 'IEESGO', 'HYGOV',
    'TGOV1', 'GGOV1', 'GAST']
# List of turbine governor in OpenIPSL 2.0.0
LIST_OF_OPENIPSL_200 = []

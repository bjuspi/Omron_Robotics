#!d:\omron_robotics\dev_ws\venv\scripts\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'my-package==0.0.0','console_scripts','listener_hmd'
__requires__ = 'my-package==0.0.0'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('my-package==0.0.0', 'console_scripts', 'listener_hmd')()
    )

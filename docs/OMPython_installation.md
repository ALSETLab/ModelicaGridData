## OpenModelica and OMPython Installation

### OpenModelica installation

#### Windows

Download the 1.16.2 release installer here: [32-bit](https://build.openmodelica.org/omc/builds/windows/releases/1.16/2/32bit/)/[64-bit](https://build.openmodelica.org/omc/builds/windows/releases/1.16/2/64bit/).

#### Linux

This installation guide corresponds to OpenModelica 1.16.2. If you have a newer release in your system, first uninstall it and remote its dependencies by running

```
sudo apt remove openmodelica
sudo apt autoremove
```

Now, add the link to the 1.16.2 version of OpenModelica by executing the following in a terminal

```
echo "deb https://build.openmodelica.org/omc/builds/linux/releases/1.16.2 bionic release" | sudo tee /etc/apt/sources.list.d/openmodelica.list
```

Verify the key by running the next two commands in succession:

```
wget -q http://build.openmodelica.org/apt/openmodelica.asc -O- | sudo apt-key add -
apt-key fingerprint
```

In case of successful installation, the following key must be shown: `D229 AF1C E5AE D74E 5F59  DF30 3A59 B536 6497 0947`. Now, update the package list and install OpenModelica:

```
sudo apt update
sudo apt install openmodelica
```

Finally, install additional Modelica libraries

```
for PKG in `apt-cache search "omlib-.*" | cut -d" " -f1`; do sudo apt-get install -y "$PKG"; done
```

### OMPython

`OMPython`, the OpenModelica Python API, can be installed via `pip` by the command

```
pip install -U https://github.com/OpenModelica/OMPython/archive/master.zip
```

To check the installation, import OMPython in a Python console. No errors should arise.

```python
import OMPython
```
For additional details, please refer to the [OMPython GitHub page](https://github.com/OpenModelica/OMPython).

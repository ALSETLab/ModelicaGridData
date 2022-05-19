## Virtual Machine Installation with VirtualBox

This guideline gives instructions on how to run the Virtual Machines (VMs) released with `ModelicaGridData`. It is recommended to run the VMs using an Intel or an AMD processor. Compatibility with Apple M1 chips is not guaranteed.

First, download and install [Oracle's VirtualBox](https://www.virtualbox.org/) in your computer.

1. Create a new virtual machine. Select the corresponding operating system.

2. Add the given `*.vdi` hard drive ([Windows](); [Ubuntu]()) as the storage of the new virtual machine.

3. Run the virtual machine. Increase the RAM if you would like to have better performance. Some tips for optimal execution of the VMs are given below:

  - Set up the [guest additions](https://docs.oracle.com/cd/E36500_01/E36502/html/qs-guest-additions.html) in each operating machines.

  - Depending on your host OS, it may render useful to change the host key (defaults to `Right Ctrl` in Windows).

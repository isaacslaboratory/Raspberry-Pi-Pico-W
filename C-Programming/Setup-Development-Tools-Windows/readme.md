# Raspberry Pi Pico W: Easy Setup of C/C++ Development Tools on Windows 

## 1. Installing Windows Subsystem for Linux (WSL)

Open PowerShell or Windows Command Prompt in administrator mode, enter the following command, then restart your machine.

```
wsl --install 
```
The installation of WSL continues after the system restart. Once done, set username and password.  

start Windows Terminal  


## 2. Downloading and Installing all the development tools 

```
sudo apt update

sudo apt install gcc-arm-none-eabi libnewlib-arm-none-eabi libstdc++-arm-none-eabi-newlib build-essential libssl-dev git python3.9 vim cmake 
```

## 3. Downloading the Pico W SDK

```
cd /mnt/c/

mkdir home

cd home

mkdir pico

cd pico

git clone -b master https://github.com/raspberrypi/pico-sdk.git

cd pico-sdk

git submodule update --init
```

## 4. Testing the setup 


 
## References 
1. News about the release of the Raspberry Pi Pico W board: https://www.raspberrypi.com/news/raspberry-pi-pico-w-your-6-iot-platform/
2. For more information about WSL, see here https://learn.microsoft.com/en-us/windows/wsl/install




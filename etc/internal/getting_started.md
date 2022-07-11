# Getting started

* Download files from this [location:](http://192.168.11.175/devel/yocto/honister/build-ucm-imx8m-plus/tmp/deploy/images/iot-gate-imx8plus/yebian/images/)

|File|Description|
| :--- | :--- |
|[debian-bookworm-arm64-minbase-20220709081559.sdcard.img](http://192.168.11.175/devel/yocto/honister/build-ucm-imx8m-plus/tmp/deploy/images/iot-gate-imx8plus/yebian/images/debian-bookworm-arm64-minbase-20220709081559.sdcard.img)|Debian Image|
|[imx-boot-iot-gate-imx8plus-sd.bin-flash_evk](http://192.168.11.175/devel/yocto/honister/build-ucm-imx8m-plus/tmp/deploy/images/iot-gate-imx8plus/yebian/images/imx-boot-iot-gate-imx8plus-sd.bin-flash_evk)|Bootloader|


* Create a bootable usb media:
```
sudo dd if=/path/to/debian-bookworm-arm64-minbase-20220709081559.sdcard.img of=/dev/sdX bs=4M status=progress
```

* Update the device bootloader:
1) Connect the device using USBA~microsd cable to the host PC.
3) Power on the device and issue this command on host CP:
```
uuu -lsusb
```
```
Connected Known USB Devices
        Path     Chip    Pro     Vid     Pid     BcdVersion
        ==================================================
        1:8      MX865   SDPS:   0x1FC9 0x0146   0x0002
```

5) As soon as the device recognized by the host issue:
```
sudo uuu -v -d /path/to/imx-boot-iot-gate-imx8plus-sd.bin-flash_evk
```
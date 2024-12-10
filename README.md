## RX-LFS: What are the Efficient Write Patterns for Log-structured File Systems on Solid-state Drives?

# Build / Install
- Follow the same steps as the existing kernel build and installation
- Refer to https://docs.kernel.org/kbuild/index.html to build The Linux kernel
- For example,
```
make oldconfig
make -j
make modules -j
sudo make modules_install
sudo make install
sudo reboot
```
- The implementation of RX-LFS is based on F2FS. RX-LFS module is compiled as linux-6.6.52/fs/f2fs/f2fs.ko

# Usage
- MKfs/mount example with nvme0n1
```
mkfs.f2fs /dev/nvme0n1
insmod linux-6.6.52/fs/f2fs/f2fs.ko
sudo mount /dev/nvme0n1 /mnt/RXLFS
```

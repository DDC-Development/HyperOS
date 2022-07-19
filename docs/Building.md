# BUILDING HYPEROS

## Demonstration

You can see a demonstration of the techniques shown here by clicking [this link](https://www.youtube.com/watch?v=Kd_v84RRztQ).

## Prerequisites

- A text editor such as [VS Code](https://code.visualstudio.com/).
- [Docker](https://www.docker.com/) for creating our build-environment.
- [Qemu](https://www.qemu.org/) for emulating our operating system.
- Remember to add Qemu to the path so that you can access it from your command-line. ([Windows instructions here](https://dev.to/whaleshark271/using-qemu-on-windows-10-home-edition-4062))

## Setup

Build an image for our build-environment:

- `docker build buildenv -t hyper-buildenv`

## Build

Enter build environment:

- Linux or MacOS: `sudo docker run --rm -it -v "$(pwd)":/root/env hyper-buildenv`
- Windows (CMD): `docker run --rm -it -v "%cd%":/root/env hyper-buildenv`
- Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" hyper-buildenv`
- Please use the linux command if you are using `WSL`, `msys2` or `git bash`
- NOTE: If you are having trouble with an unshared drive, ensure your docker daemon has access to the drive you're development environment is in. For Docker Desktop, this is in "Settings > Shared Drives" or "Settings > Resources > File Sharing".

Build for x86 (other architectures may come in the future):

- `make build-x86_64`
- If you are using Qemu, please close it before running this command to prevent errors.

To leave the build environment, enter `exit`.

## Emulate

You can emulate your operating system using [Qemu](https://www.qemu.org/): (Don't forget to [add qemu to your path](https://dev.to/whaleshark271/using-qemu-on-windows-10-home-edition-4062#:~:text=2.-,Add%20Qemu%20path%20to%20environment%20variables%20settings,-Copy%20the%20Qemu)!)

- `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
- Note: Close the emulator when finished, so as to not block writing to `kernel.iso` for future builds.

If the above command fails, try one of the following:

- Windows: [`qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"`](https://stackoverflow.com/questions/66266448/qemu-could-not-load-pc-bios-bios-256k-bin)
- Linux: [`qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L /usr/share/qemu/`](https://unix.stackexchange.com/questions/134893/cannot-start-kvm-vm-because-missing-bios)
- Alternatively, install a custom BIOS binary file and link it to Qemu using the `-L` option.

Alternatively, you should be able to load the operating system on a USB drive and boot into it when you turn on your computer. (I haven't actually tested this yet.)

## Cleanup

Remove the build-evironment image:

- `docker rmi hyper-buildenv -f`

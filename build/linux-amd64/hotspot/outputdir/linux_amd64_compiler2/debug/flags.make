# Generated by /home/tandon/Projects/NVJVM/hotspot/make/linux/makefiles/buildtree.make

Platform_file = $(GAMMADIR)/make/linux/platform_amd64
Platform_os_family = linux
Platform_arch = x86
Platform_arch_model = x86_64
Platform_os_arch = linux_x86
Platform_os_arch_model = linux_x86_64
Platform_lib_arch = amd64
Platform_compiler = gcc
Platform_sysdefs = -DLINUX -D_GNU_SOURCE -DAMD64

GAMMADIR = /home/tandon/Projects/NVJVM/hotspot
SYSDEFS = $(Platform_sysdefs)
SRCARCH = x86
BUILDARCH = amd64
LIBARCH = amd64
TARGET = debug
HS_BUILD_VER = 21.0-b17
JRE_RELEASE_VER = 1.7.0-internal-tandon_2014_05_03_18_18-b00
SA_BUILD_VERSION = 21.0-b17
HOTSPOT_BUILD_USER = tandon
HOTSPOT_VM_DISTRO = OpenJDK

# Used for platform dispatching
TARGET_DEFINES  = -DTARGET_OS_FAMILY_$(Platform_os_family)
TARGET_DEFINES += -DTARGET_ARCH_$(Platform_arch)
TARGET_DEFINES += -DTARGET_ARCH_MODEL_$(Platform_arch_model)
TARGET_DEFINES += -DTARGET_OS_ARCH_$(Platform_os_arch)
TARGET_DEFINES += -DTARGET_OS_ARCH_MODEL_$(Platform_os_arch_model)
TARGET_DEFINES += -DTARGET_COMPILER_$(Platform_compiler)
CFLAGS += $(TARGET_DEFINES)

Src_Dirs_V = \
$(GAMMADIR)/src/share/vm/asm \
$(GAMMADIR)/src/share/vm/c1 \
$(GAMMADIR)/src/share/vm/ci \
$(GAMMADIR)/src/share/vm/classfile \
$(GAMMADIR)/src/share/vm/code \
$(GAMMADIR)/src/share/vm/compiler \
$(GAMMADIR)/src/share/vm/gc_implementation \
$(GAMMADIR)/src/share/vm/gc_implementation/shared \
$(GAMMADIR)/src/share/vm/gc_implementation/parallelScavenge \
$(GAMMADIR)/src/share/vm/gc_implementation/concurrentMarkSweep \
$(GAMMADIR)/src/share/vm/gc_implementation/g1 \
$(GAMMADIR)/src/share/vm/gc_implementation/parNew \
$(GAMMADIR)/src/share/vm/gc_interface \
$(GAMMADIR)/src/share/vm/interpreter \
$(GAMMADIR)/src/share/vm/libadt \
$(GAMMADIR)/src/share/vm/memory \
$(GAMMADIR)/src/share/vm/oops \
$(GAMMADIR)/src/share/vm/opto \
$(GAMMADIR)/src/share/vm/prims \
$(GAMMADIR)/src/share/vm/runtime \
$(GAMMADIR)/src/share/vm/services \
$(GAMMADIR)/src/share/vm/shark \
$(GAMMADIR)/src/share/vm/utilities \
 \
$(GAMMADIR)/src/cpu/x86/vm \
 \
$(GAMMADIR)/src/os_cpu/linux_x86/vm \
 \
$(GAMMADIR)/src/os/linux/vm \
 \
$(GAMMADIR)/src/os/posix/vm

Src_Dirs_I = \
 \
$(GAMMADIR)/src/share/vm/prims \
 \
$(GAMMADIR)/src/share/vm \
 \
$(GAMMADIR)/src/cpu/x86/vm \
 \
$(GAMMADIR)/src/os_cpu/linux_x86/vm \
 \
$(GAMMADIR)/src/os/linux/vm \
 \
$(GAMMADIR)/src/os/posix/vm

include $(GAMMADIR)/make/linux/makefiles/tiered.make
include $(GAMMADIR)/make/linux/makefiles/gcc.make

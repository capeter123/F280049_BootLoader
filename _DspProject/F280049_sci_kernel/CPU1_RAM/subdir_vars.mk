################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../28004x_generic_ram_lnk.cmd 

LIB_SRCS += \
../F021_API_F28004x_FPU32.lib \
C:/ti/c2000/C2000Ware_3_04_00_00/driverlib/f28004x/driverlib/ccs/Debug/driverlib.lib 

ASM_SRCS += \
../codestartbranch.asm 

C_SRCS += \
../boot.c \
../erase.c \
../sci_boot.c \
../sci_flash_kernel.c \
../sci_get_function.c \
../verify.c 

C_DEPS += \
./boot.d \
./erase.d \
./sci_boot.d \
./sci_flash_kernel.d \
./sci_get_function.d \
./verify.d 

OBJS += \
./boot.obj \
./codestartbranch.obj \
./erase.obj \
./sci_boot.obj \
./sci_flash_kernel.obj \
./sci_get_function.obj \
./verify.obj 

ASM_DEPS += \
./codestartbranch.d 

OBJS__QUOTED += \
"boot.obj" \
"codestartbranch.obj" \
"erase.obj" \
"sci_boot.obj" \
"sci_flash_kernel.obj" \
"sci_get_function.obj" \
"verify.obj" 

C_DEPS__QUOTED += \
"boot.d" \
"erase.d" \
"sci_boot.d" \
"sci_flash_kernel.d" \
"sci_get_function.d" \
"verify.d" 

ASM_DEPS__QUOTED += \
"codestartbranch.d" 

C_SRCS__QUOTED += \
"../boot.c" \
"../erase.c" \
"../sci_boot.c" \
"../sci_flash_kernel.c" \
"../sci_get_function.c" \
"../verify.c" 

ASM_SRCS__QUOTED += \
"../codestartbranch.asm" 


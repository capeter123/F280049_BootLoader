################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../28004x_generic_flash_lnk.cmd \
../f28004x_headers_nonbios.cmd 

LIB_SRCS += \
../F021_API_F28004x_FPU32.lib \
C:/ti/c2000/C2000Ware_3_04_00_00/driverlib/f28004x/driverlib/ccs/Debug/driverlib.lib 

ASM_SRCS += \
../codestartbranch.asm 

C_SRCS += \
../f28004x_globalvariabledefs.c \
../main.c 

C_DEPS += \
./f28004x_globalvariabledefs.d \
./main.d 

OBJS += \
./codestartbranch.obj \
./f28004x_globalvariabledefs.obj \
./main.obj 

ASM_DEPS += \
./codestartbranch.d 

OBJS__QUOTED += \
"codestartbranch.obj" \
"f28004x_globalvariabledefs.obj" \
"main.obj" 

C_DEPS__QUOTED += \
"f28004x_globalvariabledefs.d" \
"main.d" 

ASM_DEPS__QUOTED += \
"codestartbranch.d" 

ASM_SRCS__QUOTED += \
"../codestartbranch.asm" 

C_SRCS__QUOTED += \
"../f28004x_globalvariabledefs.c" \
"../main.c" 



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/archivo.o \
../src/guia_ejercicio_2.o 

C_SRCS += \
../src/archivo.c \
../src/guia_ejercicio_2.c 

OBJS += \
./src/archivo.o \
./src/guia_ejercicio_2.o 

C_DEPS += \
./src/archivo.d \
./src/guia_ejercicio_2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



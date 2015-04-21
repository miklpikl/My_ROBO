################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Appilication.c \
../Sources/Buzzer.c \
../Sources/Debounce.c \
../Sources/Event.c \
../Sources/Events.c \
../Sources/Function_Template.c \
../Sources/Key.c \
../Sources/KeyDebounce.c \
../Sources/LED.c \
../Sources/Mealy.c \
../Sources/Platform.c \
../Sources/RTOS.c \
../Sources/Timer.c \
../Sources/Trigger.c \
../Sources/main.c 

OBJS += \
./Sources/Appilication.o \
./Sources/Buzzer.o \
./Sources/Debounce.o \
./Sources/Event.o \
./Sources/Events.o \
./Sources/Function_Template.o \
./Sources/Key.o \
./Sources/KeyDebounce.o \
./Sources/LED.o \
./Sources/Mealy.o \
./Sources/Platform.o \
./Sources/RTOS.o \
./Sources/Timer.o \
./Sources/Trigger.o \
./Sources/main.o 

C_DEPS += \
./Sources/Appilication.d \
./Sources/Buzzer.d \
./Sources/Debounce.d \
./Sources/Event.d \
./Sources/Events.d \
./Sources/Function_Template.d \
./Sources/Key.d \
./Sources/KeyDebounce.d \
./Sources/LED.d \
./Sources/Mealy.d \
./Sources/Platform.d \
./Sources/RTOS.d \
./Sources/Timer.d \
./Sources/Trigger.d \
./Sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_2.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_2.0.0\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/MiklPikl/Desktop/School/6th Semester- Luzern/1 - Infotronics/My_ROBO/FRDM/Sources" -I"C:/Users/MiklPikl/Desktop/School/6th Semester- Luzern/1 - Infotronics/My_ROBO/FRDM/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



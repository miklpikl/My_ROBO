################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/AS1.c \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/BitIoLdd2.c \
../Generated_Code/BitIoLdd3.c \
../Generated_Code/BitIoLdd8.c \
../Generated_Code/BitIoLdd9.c \
../Generated_Code/CLS1.c \
../Generated_Code/CS1.c \
../Generated_Code/Cpu.c \
../Generated_Code/ExtIntLdd1.c \
../Generated_Code/ExtIntLdd2.c \
../Generated_Code/ExtIntLdd3.c \
../Generated_Code/ExtIntLdd4.c \
../Generated_Code/ExtIntLdd5.c \
../Generated_Code/FRTOS1.c \
../Generated_Code/HF1.c \
../Generated_Code/KeyA.c \
../Generated_Code/KeyB.c \
../Generated_Code/KeyC.c \
../Generated_Code/KeyD.c \
../Generated_Code/KeyE.c \
../Generated_Code/KeyF.c \
../Generated_Code/KeyKEY.c \
../Generated_Code/LED1.c \
../Generated_Code/LED2.c \
../Generated_Code/LED3.c \
../Generated_Code/LEDpin1.c \
../Generated_Code/LEDpin2.c \
../Generated_Code/LEDpin3.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PTA.c \
../Generated_Code/TI1.c \
../Generated_Code/TU1.c \
../Generated_Code/TimerIntLdd1.c \
../Generated_Code/UTIL1.c \
../Generated_Code/Vectors.c \
../Generated_Code/WAIT1.c \
../Generated_Code/croutine.c \
../Generated_Code/event_groups.c \
../Generated_Code/heap_1.c \
../Generated_Code/heap_2.c \
../Generated_Code/heap_3.c \
../Generated_Code/heap_4.c \
../Generated_Code/heap_5.c \
../Generated_Code/list.c \
../Generated_Code/port.c \
../Generated_Code/queue.c \
../Generated_Code/tasks.c \
../Generated_Code/timers.c 

OBJS += \
./Generated_Code/AS1.o \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitIoLdd3.o \
./Generated_Code/BitIoLdd8.o \
./Generated_Code/BitIoLdd9.o \
./Generated_Code/CLS1.o \
./Generated_Code/CS1.o \
./Generated_Code/Cpu.o \
./Generated_Code/ExtIntLdd1.o \
./Generated_Code/ExtIntLdd2.o \
./Generated_Code/ExtIntLdd3.o \
./Generated_Code/ExtIntLdd4.o \
./Generated_Code/ExtIntLdd5.o \
./Generated_Code/FRTOS1.o \
./Generated_Code/HF1.o \
./Generated_Code/KeyA.o \
./Generated_Code/KeyB.o \
./Generated_Code/KeyC.o \
./Generated_Code/KeyD.o \
./Generated_Code/KeyE.o \
./Generated_Code/KeyF.o \
./Generated_Code/KeyKEY.o \
./Generated_Code/LED1.o \
./Generated_Code/LED2.o \
./Generated_Code/LED3.o \
./Generated_Code/LEDpin1.o \
./Generated_Code/LEDpin2.o \
./Generated_Code/LEDpin3.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PTA.o \
./Generated_Code/TI1.o \
./Generated_Code/TU1.o \
./Generated_Code/TimerIntLdd1.o \
./Generated_Code/UTIL1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT1.o \
./Generated_Code/croutine.o \
./Generated_Code/event_groups.o \
./Generated_Code/heap_1.o \
./Generated_Code/heap_2.o \
./Generated_Code/heap_3.o \
./Generated_Code/heap_4.o \
./Generated_Code/heap_5.o \
./Generated_Code/list.o \
./Generated_Code/port.o \
./Generated_Code/queue.o \
./Generated_Code/tasks.o \
./Generated_Code/timers.o 

C_DEPS += \
./Generated_Code/AS1.d \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/BitIoLdd2.d \
./Generated_Code/BitIoLdd3.d \
./Generated_Code/BitIoLdd8.d \
./Generated_Code/BitIoLdd9.d \
./Generated_Code/CLS1.d \
./Generated_Code/CS1.d \
./Generated_Code/Cpu.d \
./Generated_Code/ExtIntLdd1.d \
./Generated_Code/ExtIntLdd2.d \
./Generated_Code/ExtIntLdd3.d \
./Generated_Code/ExtIntLdd4.d \
./Generated_Code/ExtIntLdd5.d \
./Generated_Code/FRTOS1.d \
./Generated_Code/HF1.d \
./Generated_Code/KeyA.d \
./Generated_Code/KeyB.d \
./Generated_Code/KeyC.d \
./Generated_Code/KeyD.d \
./Generated_Code/KeyE.d \
./Generated_Code/KeyF.d \
./Generated_Code/KeyKEY.d \
./Generated_Code/LED1.d \
./Generated_Code/LED2.d \
./Generated_Code/LED3.d \
./Generated_Code/LEDpin1.d \
./Generated_Code/LEDpin2.d \
./Generated_Code/LEDpin3.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PTA.d \
./Generated_Code/TI1.d \
./Generated_Code/TU1.d \
./Generated_Code/TimerIntLdd1.d \
./Generated_Code/UTIL1.d \
./Generated_Code/Vectors.d \
./Generated_Code/WAIT1.d \
./Generated_Code/croutine.d \
./Generated_Code/event_groups.d \
./Generated_Code/heap_1.d \
./Generated_Code/heap_2.d \
./Generated_Code/heap_3.d \
./Generated_Code/heap_4.d \
./Generated_Code/heap_5.d \
./Generated_Code/list.d \
./Generated_Code/port.d \
./Generated_Code/queue.d \
./Generated_Code/tasks.d \
./Generated_Code/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_2.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_2.0.0\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/MiklPikl/Desktop/School/6th Semester- Luzern/1 - Infotronics/My_ROBO/FRDM/Sources" -I"C:/Users/MiklPikl/Desktop/School/6th Semester- Luzern/1 - Infotronics/My_ROBO/FRDM/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



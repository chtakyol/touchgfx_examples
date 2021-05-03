# TouchGFX Hardware Button Example
This repo contains an example of hardware button and TouchGFX interaction with STM32F429 Discovery Board. TouchGFX and buttons are seperate tasks, communiation between task provided with Queues.

## Notes:
- ButtonTask generated with CubeMx.
- physical_buttons.c contains init and routine methods for related task.
- routine method sends queues.
- Model classes tick method will receive queues, sı its extern messageQ variable.
- 
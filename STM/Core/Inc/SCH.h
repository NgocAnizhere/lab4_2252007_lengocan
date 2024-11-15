/*
 * SCH.h
 *
 *  Created on: Nov 12, 2024
 *      Author: admin
 */

#ifndef INC_SCH_H_
#define INC_SCH_H_

#include <stdint.h>


typedef struct{
	void (*pTask)(void);
	uint32_t       Delay;
	uint32_t 	   Period;
	uint8_t		   RunMe;

	uint32_t 	   TaskID;
}sTasks;

#define SCH_MAX_TASKS 40


void SCH_Init(void);
void SCH_Add_Task (void (*pFunction)() ,
						  uint32_t DELAY,
						  uint32_t PERIOD);


void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

void SCH_Delete(unsigned char index);

#endif /* INC_SCH_H_ */


/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/dispatcher.h"
//
//	Dispatcher(CPU &cpu):cpu(&cpu),is_valid_job_on_cpu(false){};
//	virtual ~Dispatcher(){};

	//pull current process (if any) off CPU and return it
	//if nothing on CPU returns an uninitialized PCB
	PCB Dispatcher::get_from_CPU(){
		PCB temp;
		return temp;
	}

	//place the current process on the CPU for execution
	void Dispatcher::put_on_CPU(PCB  &process){}

	//is CPU idle or working
	bool Dispatcher::isValidJobOnCPU(){
		return false;
	}

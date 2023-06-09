/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content
#include "../includes/dispatcher.h"
#include "../includes/CPU.h"
using namespace std;
//
//	Dispatcher::Dispatcher(CPU &cpu):cpu(&cpu),is_valid_job_on_cpu(false){}
//	virtual ~Dispatcher(){};

	//pull current process (if any) off CPU and return it
	//if nothing on CPU returns an uninitialized PCB
	PCB Dispatcher::get_from_CPU(){
		PCB temp = cpu->get_process_off_core();
		return temp;
	}

	//place the current process on the CPU for execution
	void Dispatcher::put_on_CPU(PCB  &process){
		cpu->put_process_on_core(process);
	}

	//is CPU idle or working
	bool Dispatcher::isValidJobOnCPU(){
		if (cpu->get_COPY_of_Current_Process().isEmpty()) {
			return false;
		}
		return true;
	}

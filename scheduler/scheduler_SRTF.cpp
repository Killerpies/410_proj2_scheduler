/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

//TODO fill in content
#include <algorithm>
#include "../includes/scheduler_SRTF.h"
using namespace std;

	//this is a  preemptive scheduler, so set the preemptive member variable to true
	//when calling the base class
//	Scheduler_SRTF(std::queue<PCB> &queue):Scheduler(queue,true,UNINITIALIZED){};
//	virtual ~Scheduler_SRTF(){};

	//override base class behaviour if necessary, otherwise call it
	bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
		preemptive = true;
		sort();
		if (p.isEmpty()){
			return true;
		}
		if (p.remaining_cpu_time <= 0){
			return true;
		}
		if (p.remaining_cpu_time > ready_q->front().remaining_cpu_time){
			return true;
		}
		return false;
	}

	bool compareByLength(const PCB &a, const PCB &b)
	{
	    return a.remaining_cpu_time < b.remaining_cpu_time;
	}

	//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p) or time_to_switch_processes is called
	void Scheduler_SRTF::sort(){
//		std::cout << "CALLING SORT" << std::endl;
		std::vector<PCB> temp;
		   while(!ready_q->empty())
		   {
			   PCB temppcb = ready_q->front();
			   ready_q->pop();
		       temp.push_back(temppcb);
		   }
		   std::sort(temp.begin(), temp.end(), compareByLength);
//		   for (int i = 0; i < temp.size(); i++){
//			   cout << "remainingcpuTIme ";
//			   cout << temp[i].remaining_cpu_time << endl;
//			   ready_q->push(temp[i]);
//		   }
		   for (const auto& e: temp){
//			   cout << "remainingcputime ";
//			   cout << e.remaining_cpu_time << endl;
			   ready_q->push(e);
		   }


	}

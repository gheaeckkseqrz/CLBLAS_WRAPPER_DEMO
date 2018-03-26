#ifndef __CLBAS_WRAPPER_H__
#define __CLBAS_WRAPPER_H__

void printFromC();

clblasStatus clblasSgemmWrapper(clblasOrder  	order,
				clblasTranspose  	transA,
				clblasTranspose  	transB,
				size_t  	M,
				size_t  	N,
				size_t  	K,
				cl_float  	alpha,
				const cl_mem  	A,
				size_t  	offA,
				size_t  	lda,
				const cl_mem  	B,
				size_t  	offB,
				size_t  	ldb,
				cl_float  	beta,
				cl_mem  	C,
				size_t  	offC,
				size_t  	ldc,
				cl_uint  	numCommandQueues,
				cl_command_queue *  	commandQueues,
				cl_uint  	numEventsInWaitList,
				const cl_event *  	eventWaitList,
				cl_event *  	events
				);

#endif

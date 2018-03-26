#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <clBLAS.h>

void printFromC()
{
  printf("Hello From C\n");
  std::cout << "Hello from C++ stream" << std::endl;
}

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
	)
{
  std::cout << "clblasSgemm Wrapper" << std::endl;
  clblasSgemm(order, transA, transB, M, N, K, alpha, A, offA, lda, B, offB, ldb, beta, C, offC, ldc, numCommandQueues, commandQueues, numEventsInWaitList, eventWaitList, events);
}

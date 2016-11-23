
#include <benchmark.h>
#include <string.h>
#include <malloc.h>

int
benchmark_initialize() {
	return 0;
}

int
benchmark_finalize(void) {
	return 0;
}

int
benchmark_thread_initialize(void) {
	return 0;
}

int
benchmark_thread_finalize(void) {
	return 0;
}

void*
benchmark_malloc(size_t size) {
	return malloc(size);
}

extern void
benchmark_free(void* ptr) {
	free(ptr);
}

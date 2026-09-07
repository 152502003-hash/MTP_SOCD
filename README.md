# MTP_SOCD
//...................Design and Optimization of a Matrix Multiplication Accelerator Using C/C++ HLS..............//

//
 Implement matrix multiplication using C/C++ in HLS and then optimize the hardware implementation. First, I will create a basic matrix multiplier as the baseline and verify its correctness using C simulation and co-simulation. Then I will apply different HLS optimization techniques such as pipelining, array partitioning and loop unrolling. I will compare the different implementations based on latency, initiation interval, timing and FPGA resource utilization. Finally, I want to identify which implementation gives the best trade-off between performance and hardware resources.
//trip count how many times my loop execute
//Throughput means how much work a system can complete in a given amount of time.

The practical purpose of accelerating matrix multiplication using High-Level Synthesis (HLS) is to bridge the gap between heavy mathematical workloads and extreme hardware efficiency.
//
in MTP_2 ,By using Array_partition Initiation Interval convert from II=2 to II=1.
//
other things are not optimized.
//
in MTP_3 ,trying to use  Loop-unrolling,

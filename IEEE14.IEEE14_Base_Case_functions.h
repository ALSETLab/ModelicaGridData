#ifndef IEEE14_IEEE14_Base_Case__H
#define IEEE14_IEEE14_Base_Case__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _re;
  modelica_real _im;
} Complex;
extern struct record_description Complex__desc;

void Complex_construct_p(threadData_t *threadData, void* v_ths );
#define Complex_construct(td, ths ) Complex_construct_p(td, &ths )
void Complex_copy_p(void* v_src, void* v_dst);
#define Complex_copy(src,dst) Complex_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Complex omc_Complex(threadData_t *threadData , modelica_real in_re, modelica_real in_im);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Complex_copy_to_vars_p(void* v_src , modelica_real* in_re, modelica_real* in_im);
// #define Complex_copy_to_vars(src,...) Complex_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Complex_array;
#define alloc_Complex_array(dst,ndims,...) generic_array_create(NULL, dst, Complex_construct_p, ndims, sizeof(Complex), __VA_ARGS__)
#define Complex_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Complex_copy_p, sizeof(Complex))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_Complex_array_data(src,dst)   generic_array_copy_data(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, Complex_copy_p, sizeof(Complex))
#define Complex_array_get(src,ndims,...)         (*(Complex*)(generic_array_get(&src, sizeof(Complex), __VA_ARGS__)))
#define Complex_set(dst,val,...)           generic_array_set(&dst, &val, Complex_copy_p, sizeof(Complex), __VA_ARGS__)

typedef struct {
  modelica_real _V1;
  modelica_real _A1;
  modelica_real _V2;
  modelica_real _A2;
  modelica_real _V3;
  modelica_real _A3;
  modelica_real _V4;
  modelica_real _A4;
  modelica_real _V5;
  modelica_real _A5;
  modelica_real _V6;
  modelica_real _A6;
  modelica_real _V7;
  modelica_real _A7;
  modelica_real _V8;
  modelica_real _A8;
  modelica_real _V9;
  modelica_real _A9;
  modelica_real _V10;
  modelica_real _A10;
  modelica_real _V11;
  modelica_real _A11;
  modelica_real _V12;
  modelica_real _A12;
  modelica_real _V13;
  modelica_real _A13;
  modelica_real _V14;
  modelica_real _A14;
} IEEE14_PF__Data_Bus;
extern struct record_description IEEE14_PF__Data_Bus__desc;

void IEEE14_PF__Data_Bus_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Bus_construct(td, ths ) IEEE14_PF__Data_Bus_construct_p(td, &ths )
void IEEE14_PF__Data_Bus_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Bus_copy(src,dst) IEEE14_PF__Data_Bus_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Bus omc_IEEE14_PF__Data_Bus(threadData_t *threadData , modelica_real in_V1, modelica_real in_A1, modelica_real in_V2, modelica_real in_A2, modelica_real in_V3, modelica_real in_A3, modelica_real in_V4, modelica_real in_A4, modelica_real in_V5, modelica_real in_A5, modelica_real in_V6, modelica_real in_A6, modelica_real in_V7, modelica_real in_A7, modelica_real in_V8, modelica_real in_A8, modelica_real in_V9, modelica_real in_A9, modelica_real in_V10, modelica_real in_A10, modelica_real in_V11, modelica_real in_A11, modelica_real in_V12, modelica_real in_A12, modelica_real in_V13, modelica_real in_A13, modelica_real in_V14, modelica_real in_A14);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Bus_copy_to_vars_p(void* v_src , modelica_real* in_V1, modelica_real* in_A1, modelica_real* in_V2, modelica_real* in_A2, modelica_real* in_V3, modelica_real* in_A3, modelica_real* in_V4, modelica_real* in_A4, modelica_real* in_V5, modelica_real* in_A5, modelica_real* in_V6, modelica_real* in_A6, modelica_real* in_V7, modelica_real* in_A7, modelica_real* in_V8, modelica_real* in_A8, modelica_real* in_V9, modelica_real* in_A9, modelica_real* in_V10, modelica_real* in_A10, modelica_real* in_V11, modelica_real* in_A11, modelica_real* in_V12, modelica_real* in_A12, modelica_real* in_V13, modelica_real* in_A13, modelica_real* in_V14, modelica_real* in_A14);
// #define IEEE14_PF__Data_Bus_copy_to_vars(src,...) IEEE14_PF__Data_Bus_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Bus_array;
#define alloc_IEEE14_PF__Data_Bus_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Bus_construct_p, ndims, sizeof(IEEE14_PF__Data_Bus), __VA_ARGS__)
#define IEEE14_PF__Data_Bus_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Bus_copy_p, sizeof(IEEE14_PF__Data_Bus))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Bus_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Bus_copy_p, sizeof(IEEE14_PF__Data_Bus))
#define IEEE14_PF__Data_Bus_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Bus_copy_p, sizeof(IEEE14_PF__Data_Bus))
#define IEEE14_PF__Data_Bus_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Bus*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Bus), __VA_ARGS__)))
#define IEEE14_PF__Data_Bus_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Bus_copy_p, sizeof(IEEE14_PF__Data_Bus), __VA_ARGS__)

typedef struct {
  modelica_real _PL1;
  modelica_real _QL1;
  modelica_real _PL2;
  modelica_real _QL2;
  modelica_real _PL3;
  modelica_real _QL3;
  modelica_real _PL4;
  modelica_real _QL4;
  modelica_real _PL5;
  modelica_real _QL5;
  modelica_real _PL6;
  modelica_real _QL6;
  modelica_real _PL7;
  modelica_real _QL7;
  modelica_real _PL8;
  modelica_real _QL8;
  modelica_real _PL9;
  modelica_real _QL9;
  modelica_real _PL10;
  modelica_real _QL10;
  modelica_real _PL11;
  modelica_real _QL11;
} IEEE14_PF__Data_Loads;
extern struct record_description IEEE14_PF__Data_Loads__desc;

void IEEE14_PF__Data_Loads_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Loads_construct(td, ths ) IEEE14_PF__Data_Loads_construct_p(td, &ths )
void IEEE14_PF__Data_Loads_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Loads_copy(src,dst) IEEE14_PF__Data_Loads_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Loads omc_IEEE14_PF__Data_Loads(threadData_t *threadData , modelica_real in_PL1, modelica_real in_QL1, modelica_real in_PL2, modelica_real in_QL2, modelica_real in_PL3, modelica_real in_QL3, modelica_real in_PL4, modelica_real in_QL4, modelica_real in_PL5, modelica_real in_QL5, modelica_real in_PL6, modelica_real in_QL6, modelica_real in_PL7, modelica_real in_QL7, modelica_real in_PL8, modelica_real in_QL8, modelica_real in_PL9, modelica_real in_QL9, modelica_real in_PL10, modelica_real in_QL10, modelica_real in_PL11, modelica_real in_QL11);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Loads_copy_to_vars_p(void* v_src , modelica_real* in_PL1, modelica_real* in_QL1, modelica_real* in_PL2, modelica_real* in_QL2, modelica_real* in_PL3, modelica_real* in_QL3, modelica_real* in_PL4, modelica_real* in_QL4, modelica_real* in_PL5, modelica_real* in_QL5, modelica_real* in_PL6, modelica_real* in_QL6, modelica_real* in_PL7, modelica_real* in_QL7, modelica_real* in_PL8, modelica_real* in_QL8, modelica_real* in_PL9, modelica_real* in_QL9, modelica_real* in_PL10, modelica_real* in_QL10, modelica_real* in_PL11, modelica_real* in_QL11);
// #define IEEE14_PF__Data_Loads_copy_to_vars(src,...) IEEE14_PF__Data_Loads_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Loads_array;
#define alloc_IEEE14_PF__Data_Loads_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Loads_construct_p, ndims, sizeof(IEEE14_PF__Data_Loads), __VA_ARGS__)
#define IEEE14_PF__Data_Loads_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Loads_copy_p, sizeof(IEEE14_PF__Data_Loads))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Loads_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Loads_copy_p, sizeof(IEEE14_PF__Data_Loads))
#define IEEE14_PF__Data_Loads_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Loads_copy_p, sizeof(IEEE14_PF__Data_Loads))
#define IEEE14_PF__Data_Loads_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Loads*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Loads), __VA_ARGS__)))
#define IEEE14_PF__Data_Loads_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Loads_copy_p, sizeof(IEEE14_PF__Data_Loads), __VA_ARGS__)

typedef struct {
  modelica_real _PG1;
  modelica_real _QG1;
  modelica_real _PG2;
  modelica_real _QG2;
  modelica_real _PG3;
  modelica_real _QG3;
  modelica_real _PG4;
  modelica_real _QG4;
  modelica_real _PG5;
  modelica_real _QG5;
} IEEE14_PF__Data_Machines;
extern struct record_description IEEE14_PF__Data_Machines__desc;

void IEEE14_PF__Data_Machines_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Machines_construct(td, ths ) IEEE14_PF__Data_Machines_construct_p(td, &ths )
void IEEE14_PF__Data_Machines_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Machines_copy(src,dst) IEEE14_PF__Data_Machines_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Machines omc_IEEE14_PF__Data_Machines(threadData_t *threadData , modelica_real in_PG1, modelica_real in_QG1, modelica_real in_PG2, modelica_real in_QG2, modelica_real in_PG3, modelica_real in_QG3, modelica_real in_PG4, modelica_real in_QG4, modelica_real in_PG5, modelica_real in_QG5);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Machines_copy_to_vars_p(void* v_src , modelica_real* in_PG1, modelica_real* in_QG1, modelica_real* in_PG2, modelica_real* in_QG2, modelica_real* in_PG3, modelica_real* in_QG3, modelica_real* in_PG4, modelica_real* in_QG4, modelica_real* in_PG5, modelica_real* in_QG5);
// #define IEEE14_PF__Data_Machines_copy_to_vars(src,...) IEEE14_PF__Data_Machines_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Machines_array;
#define alloc_IEEE14_PF__Data_Machines_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Machines_construct_p, ndims, sizeof(IEEE14_PF__Data_Machines), __VA_ARGS__)
#define IEEE14_PF__Data_Machines_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Machines_copy_p, sizeof(IEEE14_PF__Data_Machines))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Machines_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Machines_copy_p, sizeof(IEEE14_PF__Data_Machines))
#define IEEE14_PF__Data_Machines_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Machines_copy_p, sizeof(IEEE14_PF__Data_Machines))
#define IEEE14_PF__Data_Machines_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Machines*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Machines), __VA_ARGS__)))
#define IEEE14_PF__Data_Machines_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Machines_copy_p, sizeof(IEEE14_PF__Data_Machines), __VA_ARGS__)

typedef struct {
} IEEE14_PF__Data_Power__Flow_PowerFlow;
extern struct record_description IEEE14_PF__Data_Power__Flow_PowerFlow__desc;

void IEEE14_PF__Data_Power__Flow_PowerFlow_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Power__Flow_PowerFlow_construct(td, ths ) IEEE14_PF__Data_Power__Flow_PowerFlow_construct_p(td, &ths )
void IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Power__Flow_PowerFlow_copy(src,dst) IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Power__Flow_PowerFlow omc_IEEE14_PF__Data_Power__Flow_PowerFlow(threadData_t *threadData );

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Power__Flow_PowerFlow_copy_to_vars_p(void* v_src );
// #define IEEE14_PF__Data_Power__Flow_PowerFlow_copy_to_vars(src,...) IEEE14_PF__Data_Power__Flow_PowerFlow_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Power__Flow_PowerFlow_array;
#define alloc_IEEE14_PF__Data_Power__Flow_PowerFlow_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Power__Flow_PowerFlow_construct_p, ndims, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow), __VA_ARGS__)
#define IEEE14_PF__Data_Power__Flow_PowerFlow_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Power__Flow_PowerFlow_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow))
#define IEEE14_PF__Data_Power__Flow_PowerFlow_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow))
#define IEEE14_PF__Data_Power__Flow_PowerFlow_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Power__Flow_PowerFlow*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow), __VA_ARGS__)))
#define IEEE14_PF__Data_Power__Flow_PowerFlow_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Power__Flow_PowerFlow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow_PowerFlow), __VA_ARGS__)

typedef struct {
  modelica_real _t1_trafo_1;
  modelica_real _t2_trafo_1;
  modelica_real _t1_trafo_2;
  modelica_real _t2_trafo_2;
  modelica_real _t1_trafo_3;
  modelica_real _t2_trafo_3;
  modelica_real _t1_trafo_4;
  modelica_real _t2_trafo_4;
} IEEE14_PF__Data_Trafos;
extern struct record_description IEEE14_PF__Data_Trafos__desc;

void IEEE14_PF__Data_Trafos_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Trafos_construct(td, ths ) IEEE14_PF__Data_Trafos_construct_p(td, &ths )
void IEEE14_PF__Data_Trafos_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Trafos_copy(src,dst) IEEE14_PF__Data_Trafos_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Trafos omc_IEEE14_PF__Data_Trafos(threadData_t *threadData , modelica_real in_t1_trafo_1, modelica_real in_t2_trafo_1, modelica_real in_t1_trafo_2, modelica_real in_t2_trafo_2, modelica_real in_t1_trafo_3, modelica_real in_t2_trafo_3, modelica_real in_t1_trafo_4, modelica_real in_t2_trafo_4);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Trafos_copy_to_vars_p(void* v_src , modelica_real* in_t1_trafo_1, modelica_real* in_t2_trafo_1, modelica_real* in_t1_trafo_2, modelica_real* in_t2_trafo_2, modelica_real* in_t1_trafo_3, modelica_real* in_t2_trafo_3, modelica_real* in_t1_trafo_4, modelica_real* in_t2_trafo_4);
// #define IEEE14_PF__Data_Trafos_copy_to_vars(src,...) IEEE14_PF__Data_Trafos_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Trafos_array;
#define alloc_IEEE14_PF__Data_Trafos_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Trafos_construct_p, ndims, sizeof(IEEE14_PF__Data_Trafos), __VA_ARGS__)
#define IEEE14_PF__Data_Trafos_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Trafos_copy_p, sizeof(IEEE14_PF__Data_Trafos))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Trafos_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Trafos_copy_p, sizeof(IEEE14_PF__Data_Trafos))
#define IEEE14_PF__Data_Trafos_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Trafos_copy_p, sizeof(IEEE14_PF__Data_Trafos))
#define IEEE14_PF__Data_Trafos_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Trafos*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Trafos), __VA_ARGS__)))
#define IEEE14_PF__Data_Trafos_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Trafos_copy_p, sizeof(IEEE14_PF__Data_Trafos), __VA_ARGS__)

typedef struct {
  modelica_real _S_b;
  modelica_real _fn;
} OpenIPSL_Electrical_SystemBase;
extern struct record_description OpenIPSL_Electrical_SystemBase__desc;

void OpenIPSL_Electrical_SystemBase_construct_p(threadData_t *threadData, void* v_ths );
#define OpenIPSL_Electrical_SystemBase_construct(td, ths ) OpenIPSL_Electrical_SystemBase_construct_p(td, &ths )
void OpenIPSL_Electrical_SystemBase_copy_p(void* v_src, void* v_dst);
#define OpenIPSL_Electrical_SystemBase_copy(src,dst) OpenIPSL_Electrical_SystemBase_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData , modelica_real in_S_b, modelica_real in_fn);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void OpenIPSL_Electrical_SystemBase_copy_to_vars_p(void* v_src , modelica_real* in_S_b, modelica_real* in_fn);
// #define OpenIPSL_Electrical_SystemBase_copy_to_vars(src,...) OpenIPSL_Electrical_SystemBase_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t OpenIPSL_Electrical_SystemBase_array;
#define alloc_OpenIPSL_Electrical_SystemBase_array(dst,ndims,...) generic_array_create(NULL, dst, OpenIPSL_Electrical_SystemBase_construct_p, ndims, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)
#define OpenIPSL_Electrical_SystemBase_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_OpenIPSL_Electrical_SystemBase_array_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
#define OpenIPSL_Electrical_SystemBase_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase))
#define OpenIPSL_Electrical_SystemBase_array_get(src,ndims,...)         (*(OpenIPSL_Electrical_SystemBase*)(generic_array_get(&src, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)))
#define OpenIPSL_Electrical_SystemBase_set(dst,val,...)           generic_array_set(&dst, &val, OpenIPSL_Electrical_SystemBase_copy_p, sizeof(OpenIPSL_Electrical_SystemBase), __VA_ARGS__)

typedef struct {
  IEEE14_PF__Data_Power__Flow_PowerFlow _powerflow;
} IEEE14_PF__Data_Power__Flow;
extern struct record_description IEEE14_PF__Data_Power__Flow__desc;

void IEEE14_PF__Data_Power__Flow_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data_Power__Flow_construct(td, ths ) IEEE14_PF__Data_Power__Flow_construct_p(td, &ths )
void IEEE14_PF__Data_Power__Flow_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data_Power__Flow_copy(src,dst) IEEE14_PF__Data_Power__Flow_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data_Power__Flow omc_IEEE14_PF__Data_Power__Flow(threadData_t *threadData , IEEE14_PF__Data_Power__Flow_PowerFlow in_powerflow);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data_Power__Flow_copy_to_vars_p(void* v_src , IEEE14_PF__Data_Power__Flow_PowerFlow* in_powerflow);
// #define IEEE14_PF__Data_Power__Flow_copy_to_vars(src,...) IEEE14_PF__Data_Power__Flow_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data_Power__Flow_array;
#define alloc_IEEE14_PF__Data_Power__Flow_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data_Power__Flow_construct_p, ndims, sizeof(IEEE14_PF__Data_Power__Flow), __VA_ARGS__)
#define IEEE14_PF__Data_Power__Flow_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Power__Flow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data_Power__Flow_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data_Power__Flow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow))
#define IEEE14_PF__Data_Power__Flow_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data_Power__Flow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow))
#define IEEE14_PF__Data_Power__Flow_array_get(src,ndims,...)         (*(IEEE14_PF__Data_Power__Flow*)(generic_array_get(&src, sizeof(IEEE14_PF__Data_Power__Flow), __VA_ARGS__)))
#define IEEE14_PF__Data_Power__Flow_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data_Power__Flow_copy_p, sizeof(IEEE14_PF__Data_Power__Flow), __VA_ARGS__)

typedef struct {
  IEEE14_PF__Data_Bus _bus;
  IEEE14_PF__Data_Loads _loads;
  IEEE14_PF__Data_Machines _machines;
  IEEE14_PF__Data_Trafos _trafos;
} IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow;
extern struct record_description IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow__desc;

void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_construct(td, ths ) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_construct_p(td, &ths )
void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy(src,dst) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow(threadData_t *threadData , IEEE14_PF__Data_Bus in_bus, IEEE14_PF__Data_Loads in_loads, IEEE14_PF__Data_Machines in_machines, IEEE14_PF__Data_Trafos in_trafos);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_to_vars_p(void* v_src , IEEE14_PF__Data_Bus* in_bus, IEEE14_PF__Data_Loads* in_loads, IEEE14_PF__Data_Machines* in_machines, IEEE14_PF__Data_Trafos* in_trafos);
// #define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_to_vars(src,...) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array;
#define alloc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_construct_p, ndims, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow), __VA_ARGS__)
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_array_get(src,ndims,...)         (*(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow*)(generic_array_get(&src, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow), __VA_ARGS__)))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow), __VA_ARGS__)

typedef OpenIPSL_Electrical_SystemBase OpenIPSL_Electrical__omcQSystemBase_24SysData;
extern struct record_description OpenIPSL_Electrical__omcQSystemBase_24SysData__desc;

void OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p(threadData_t *threadData, void* v_ths );
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_construct(td, ths ) OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p(td, &ths )
void OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p(void* v_src, void* v_dst);
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_copy(src,dst) OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData , modelica_real in_S_b, modelica_real in_fn);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars_p(void* v_src , modelica_real* in_S_b, modelica_real* in_fn);
// #define OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars(src,...) OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t OpenIPSL_Electrical__omcQSystemBase_24SysData_array;
#define alloc_OpenIPSL_Electrical__omcQSystemBase_24SysData_array(dst,ndims,...) generic_array_create(NULL, dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_construct_p, ndims, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_OpenIPSL_Electrical__omcQSystemBase_24SysData_array_data(src,dst)   generic_array_copy_data(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_array_get(src,ndims,...)         (*(OpenIPSL_Electrical__omcQSystemBase_24SysData*)(generic_array_get(&src, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)))
#define OpenIPSL_Electrical__omcQSystemBase_24SysData_set(dst,val,...)           generic_array_set(&dst, &val, OpenIPSL_Electrical__omcQSystemBase_24SysData_copy_p, sizeof(OpenIPSL_Electrical__omcQSystemBase_24SysData), __VA_ARGS__)

typedef IEEE14_PF__Data_Power__Flow IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf;
extern struct record_description IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf__desc;

void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_construct_p(threadData_t *threadData, void* v_ths );
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_construct(td, ths ) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_construct_p(td, &ths )
void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p(void* v_src, void* v_dst);
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy(src,dst) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf(threadData_t *threadData , IEEE14_PF__Data_Power__Flow_PowerFlow in_powerflow);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_to_vars_p(void* v_src , IEEE14_PF__Data_Power__Flow_PowerFlow* in_powerflow);
// #define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_to_vars(src,...) IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array;
#define alloc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array(dst,ndims,...) generic_array_create(NULL, dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_construct_p, ndims, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf), __VA_ARGS__)
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf))
// This is here unitl we remove all places where this function call is written out instead of the one above.
#define copy_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array_data(src,dst)   generic_array_copy_data(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array_alloc_copy(src,dst)   generic_array_alloc_copy(src, &dst, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_array_get(src,ndims,...)         (*(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf*)(generic_array_get(&src, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf), __VA_ARGS__)))
#define IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_set(dst,val,...)           generic_array_set(&dst, &val, IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_copy_p, sizeof(IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf), __VA_ARGS__)

DLLExport
Complex omc_Complex (threadData_t *threadData, modelica_real omc_re, modelica_real omc_im);

DLLExport
modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Complex,2,0) {(void*) boxptr_Complex,0}};
#define boxvar_Complex MMC_REFSTRUCTLIT(boxvar_lit_Complex)


DLLExport
IEEE14_PF__Data_Bus omc_IEEE14_PF__Data_Bus (threadData_t *threadData, modelica_real omc_V1, modelica_real omc_A1, modelica_real omc_V2, modelica_real omc_A2, modelica_real omc_V3, modelica_real omc_A3, modelica_real omc_V4, modelica_real omc_A4, modelica_real omc_V5, modelica_real omc_A5, modelica_real omc_V6, modelica_real omc_A6, modelica_real omc_V7, modelica_real omc_A7, modelica_real omc_V8, modelica_real omc_A8, modelica_real omc_V9, modelica_real omc_A9, modelica_real omc_V10, modelica_real omc_A10, modelica_real omc_V11, modelica_real omc_A11, modelica_real omc_V12, modelica_real omc_A12, modelica_real omc_V13, modelica_real omc_A13, modelica_real omc_V14, modelica_real omc_A14);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Bus(threadData_t *threadData, modelica_metatype _V1, modelica_metatype _A1, modelica_metatype _V2, modelica_metatype _A2, modelica_metatype _V3, modelica_metatype _A3, modelica_metatype _V4, modelica_metatype _A4, modelica_metatype _V5, modelica_metatype _A5, modelica_metatype _V6, modelica_metatype _A6, modelica_metatype _V7, modelica_metatype _A7, modelica_metatype _V8, modelica_metatype _A8, modelica_metatype _V9, modelica_metatype _A9, modelica_metatype _V10, modelica_metatype _A10, modelica_metatype _V11, modelica_metatype _A11, modelica_metatype _V12, modelica_metatype _A12, modelica_metatype _V13, modelica_metatype _A13, modelica_metatype _V14, modelica_metatype _A14);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Bus,2,0) {(void*) boxptr_IEEE14_PF__Data_Bus,0}};
#define boxvar_IEEE14_PF__Data_Bus MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Bus)


DLLExport
IEEE14_PF__Data_Loads omc_IEEE14_PF__Data_Loads (threadData_t *threadData, modelica_real omc_PL1, modelica_real omc_QL1, modelica_real omc_PL2, modelica_real omc_QL2, modelica_real omc_PL3, modelica_real omc_QL3, modelica_real omc_PL4, modelica_real omc_QL4, modelica_real omc_PL5, modelica_real omc_QL5, modelica_real omc_PL6, modelica_real omc_QL6, modelica_real omc_PL7, modelica_real omc_QL7, modelica_real omc_PL8, modelica_real omc_QL8, modelica_real omc_PL9, modelica_real omc_QL9, modelica_real omc_PL10, modelica_real omc_QL10, modelica_real omc_PL11, modelica_real omc_QL11);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Loads(threadData_t *threadData, modelica_metatype _PL1, modelica_metatype _QL1, modelica_metatype _PL2, modelica_metatype _QL2, modelica_metatype _PL3, modelica_metatype _QL3, modelica_metatype _PL4, modelica_metatype _QL4, modelica_metatype _PL5, modelica_metatype _QL5, modelica_metatype _PL6, modelica_metatype _QL6, modelica_metatype _PL7, modelica_metatype _QL7, modelica_metatype _PL8, modelica_metatype _QL8, modelica_metatype _PL9, modelica_metatype _QL9, modelica_metatype _PL10, modelica_metatype _QL10, modelica_metatype _PL11, modelica_metatype _QL11);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Loads,2,0) {(void*) boxptr_IEEE14_PF__Data_Loads,0}};
#define boxvar_IEEE14_PF__Data_Loads MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Loads)


DLLExport
IEEE14_PF__Data_Machines omc_IEEE14_PF__Data_Machines (threadData_t *threadData, modelica_real omc_PG1, modelica_real omc_QG1, modelica_real omc_PG2, modelica_real omc_QG2, modelica_real omc_PG3, modelica_real omc_QG3, modelica_real omc_PG4, modelica_real omc_QG4, modelica_real omc_PG5, modelica_real omc_QG5);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Machines(threadData_t *threadData, modelica_metatype _PG1, modelica_metatype _QG1, modelica_metatype _PG2, modelica_metatype _QG2, modelica_metatype _PG3, modelica_metatype _QG3, modelica_metatype _PG4, modelica_metatype _QG4, modelica_metatype _PG5, modelica_metatype _QG5);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Machines,2,0) {(void*) boxptr_IEEE14_PF__Data_Machines,0}};
#define boxvar_IEEE14_PF__Data_Machines MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Machines)


DLLExport
IEEE14_PF__Data_Power__Flow omc_IEEE14_PF__Data_Power__Flow (threadData_t *threadData, IEEE14_PF__Data_Power__Flow_PowerFlow omc_powerflow);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Power__Flow(threadData_t *threadData, modelica_metatype _powerflow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Power__Flow,2,0) {(void*) boxptr_IEEE14_PF__Data_Power__Flow,0}};
#define boxvar_IEEE14_PF__Data_Power__Flow MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Power__Flow)


DLLExport
IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf (threadData_t *threadData, IEEE14_PF__Data_Power__Flow_PowerFlow omc_powerflow);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf(threadData_t *threadData, modelica_metatype _powerflow);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf,2,0) {(void*) boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf,0}};
#define boxvar_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf)


DLLExport
IEEE14_PF__Data_Trafos omc_IEEE14_PF__Data_Trafos (threadData_t *threadData, modelica_real omc_t1_trafo_1, modelica_real omc_t2_trafo_1, modelica_real omc_t1_trafo_2, modelica_real omc_t2_trafo_2, modelica_real omc_t1_trafo_3, modelica_real omc_t2_trafo_3, modelica_real omc_t1_trafo_4, modelica_real omc_t2_trafo_4);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Trafos(threadData_t *threadData, modelica_metatype _t1_trafo_1, modelica_metatype _t2_trafo_1, modelica_metatype _t1_trafo_2, modelica_metatype _t2_trafo_2, modelica_metatype _t1_trafo_3, modelica_metatype _t2_trafo_3, modelica_metatype _t1_trafo_4, modelica_metatype _t2_trafo_4);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Trafos,2,0) {(void*) boxptr_IEEE14_PF__Data_Trafos,0}};
#define boxvar_IEEE14_PF__Data_Trafos MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Trafos)


DLLExport
IEEE14_PF__Data_Power__Flow_PowerFlow omc_IEEE14_PF__Data_Power__Flow_PowerFlow (threadData_t *threadData);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data_Power__Flow_PowerFlow(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Power__Flow_PowerFlow,2,0) {(void*) boxptr_IEEE14_PF__Data_Power__Flow_PowerFlow,0}};
#define boxvar_IEEE14_PF__Data_Power__Flow_PowerFlow MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data_Power__Flow_PowerFlow)


DLLExport
IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow (threadData_t *threadData, IEEE14_PF__Data_Bus omc_bus, IEEE14_PF__Data_Loads omc_loads, IEEE14_PF__Data_Machines omc_machines, IEEE14_PF__Data_Trafos omc_trafos);

DLLExport
modelica_metatype boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow(threadData_t *threadData, modelica_metatype _bus, modelica_metatype _loads, modelica_metatype _machines, modelica_metatype _trafos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow,2,0) {(void*) boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow,0}};
#define boxvar_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow MMC_REFSTRUCTLIT(boxvar_lit_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow)


DLLExport
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0);
DLLExport
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3,2,0) {(void*) boxptr_Modelica_Math_atan3,0}};
#define boxvar_Modelica_Math_atan3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_atan3)


DLLExport
OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase (threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn);

DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_SystemBase,2,0) {(void*) boxptr_OpenIPSL_Electrical_SystemBase,0}};
#define boxvar_OpenIPSL_Electrical_SystemBase MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_SystemBase)


DLLExport
OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData (threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn);

DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical__omcQSystemBase_24SysData,2,0) {(void*) boxptr_OpenIPSL_Electrical__omcQSystemBase_24SysData,0}};
#define boxvar_OpenIPSL_Electrical__omcQSystemBase_24SysData MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical__omcQSystemBase_24SysData)


DLLExport
modelica_real omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_real _V_RMAX_init, modelica_real _V_RMIN_init, modelica_real _K_E_init, modelica_real _E_2, modelica_real _S_EE_2, modelica_real _Efd0, modelica_real _SE_Efd0, modelica_real *out_V_RMIN, modelica_real *out_K_E);
DLLExport
modelica_metatype boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_metatype _V_RMAX_init, modelica_metatype _V_RMIN_init, modelica_metatype _K_E_init, modelica_metatype _E_2, modelica_metatype _S_EE_2, modelica_metatype _Efd0, modelica_metatype _SE_Efd0, modelica_metatype *out_V_RMIN, modelica_metatype *out_K_E);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params,2,0) {(void*) boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params,0}};
#define boxvar_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params)


DLLExport
modelica_real omc_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_real _u, modelica_real _SE1, modelica_real _SE2, modelica_real _E1, modelica_real _E2);
DLLExport
modelica_metatype boxptr_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_metatype _u, modelica_metatype _SE1, modelica_metatype _SE2, modelica_metatype _E1, modelica_metatype _E2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE,2,0) {(void*) boxptr_OpenIPSL_NonElectrical_Functions_SE,0}};
#define boxvar_OpenIPSL_NonElectrical_Functions_SE MMC_REFSTRUCTLIT(boxvar_lit_OpenIPSL_NonElectrical_Functions_SE)
#include "IEEE14.IEEE14_Base_Case_model.h"


#ifdef __cplusplus
}
#endif
#endif


%module test_swig

%{
#define SWIG_FILE_WITH_INIT
#include "test_swig.h"
%}

void Table99(int n);
void Fabocci(void);
int Max_value(int value1,int value2);


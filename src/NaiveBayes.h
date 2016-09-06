/*
 *
 *  The protype and related functions of NaiveBayes Algorithm
 *
 *
 * */

#ifndef NAIVE_BAYES_H
#define NAIVE_BAYES_H 

#include "DataType.h"

typedef DataType (*FuncType)(DataType *);
typedef DataType*  (*FuncTypePointer)(DataType *);

typedef enum NBModelType
{
	Multinomial,
	Bernoulli

}NBModelType;

typedef struct NaiveBayes
{
	DataType *labels;
	ProType  *pi;
	ProType  **theta;
	FuncType predict;
	FuncTypePointer calculation;
	
}NaiveBayes;


NaiveBayes *train(rawLabledPoint *input, double lambda, NBModelType modelType);

#endif



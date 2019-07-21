#include "stdio.h"
#define MAX2(a, b) (a) > (b) ? (a) : (b)

struct ex1
{
    /* data */
    double w_;
    double b_;
};
      

double getAct(const double& x)
{
    return x;
    //return MAX2()
}

double feedForward(const double& input, ex1 ex1)
{
    // output y = f(\sigma)
    //\sigma = w?* input x + b
    // for mulitiple  input
    // \sigma w0_ * x0_ + w1_ * x1 + ... + b

    const double sigma = ex1.w_ * input + ex1.b_;

    return getAct(sigma);
}

int main()
{
    //neural network

    //input and ouput are obvious unique values
    //double w; //weight related to input information level of importance
    //double b; //bias property of neuron not information from outsite,

    ex1 myneuron;
    myneuron.w_ = 2.0;
    myneuron.b_ = 1.0;


    // output is outcome or input of other neuron

    //double input;
    double output;

    printf("%f %f \n",0.0, feedForward(0.0, myneuron));
    printf("%f %f \n",1.0, feedForward(1.0, myneuron));
    printf("%f %f \n",2.0, feedForward(2.0, myneuron));

    // process in neuron sigma(sum) activation
    // sum = w * x+ b
    // ex, x= 0.5, w =2 , b= 1 sum = w * x + b -> sum = 2
    //affine sum matrix [w b] [x]
    //                        [1]
    // activation 
    // f(sum)
    //  kinds of  activation fuctions
    // idetity f(x) =x input = output linior fuction
    // ReLU f(x) =  max(x,0)  //most common now
    // Sigmoid   f(x) = 1/1 + e^-x
    // ex identity fuc feed-forward
    // y = f(sum) = f(w * x + b) = w * x + b
    //

}
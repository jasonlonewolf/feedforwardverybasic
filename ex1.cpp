#include "stdio.h"
#define MAX2(a, b) (a) > (b) ? (a) : (b)

struct ex1
{
    /* data */
    double w_;
    double b_;
    double input_, output_;
};
      

double getAct(const double& x)
{
    return x;
    //return MAX2()
}

double getActivation(const double& x)
{
    return x;
    //return MAX2()
}

double getActGrad(const double& x)
{
    return 1.0;
}

ex1 propBackward(const double& target,ex1 ex1)
{
    const double alpha = 0.1;
    
    const double grad = (ex1.output_ - target) * getActGrad(ex1.output_);

    ex1.w_ -= alpha * grad * ex1.input_;
    ex1.b_ -= alpha * grad * 1.0;
    return ex1;
}


// void feedForwardandPrint(const double& input, ex1 ex1)
// {
//  printf("%f %f \n",input, feedForward(input, ex1));
// }

ex1 feedForward(const double& input, ex1 ex1)
{
    // output y = f(\sigma)
    //\sigma = w?* input x + b
    // for mulitiple  input
    // \sigma w0_ * x0_ + w1_ * x1 + ... + b
    ex1.input_ = input;
    
    const double sigma = ex1.w_ *  ex1.input_+ ex1.b_;

    ex1.output_ = getAct(sigma);

    return ex1;
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
    //double output;
for(int r=0; r < 100; r++){
    myneuron = feedForward(1.0, myneuron);
    printf("%f %f \n", myneuron.input_,myneuron.output_);

    myneuron =  propBackward(4.0, myneuron);
    printf("%f %f \n",myneuron.w_,myneuron.b_);
}
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
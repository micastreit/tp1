#ifndef FUNCIONMATEMATICA_H_INCLUDED
#define FUNCIONMATEMATICA_H_INCLUDED

/** \brief Funcion usada para calcular las operaciones matematicas basicas
 *
 * \param float primer operando
 * \param float segundo operando
 * \return float resultado
 *
 */

float sumar(float a, float b)
{
    float resultado = a + b;
    return resultado;
}


float restar(float a, float b)
{
    float  resultado= a - b;
    return resultado;
}


float dividir(float a, float b)
{
    float  resultado= a / b;
    return resultado;
}


float multiplicar(float a, float b)
{
    float resultado= a * b;
    return resultado;
}


float factorial(float a)
{
    float resultado = 1;
    if(a==0||a==1)
    {
        resultado =1;
    }
    else if(a<0)
    {
        resultado=0;
    }
    else
    {
        for(int i=1; i <= a; i++)
        {
            resultado *= i;
        }
    }
    return resultado;
}

#endif // FUNCIONMATEMATICA_H_INCLUDED

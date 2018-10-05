/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** Task04 
*/

int my_compute_power_it(int nb, int p )
{
    int result = nb;
    
    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    else {
	for (p; p > 1; p--){
	    result = result * nb;
	}
    }
    return (result);
}





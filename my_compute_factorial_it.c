/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it.c
** File description:
** Task01
*/

void my_putchar(char c)
{
    writ(1, &c, 1);
}

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int cpt = 1;

    if (nb < 0 || nb > 12) {
	return (0);
    }
    if (nb == 0 || nb == 1) {
	return (1);
    }
    while (a <= nb) {
	result = result * cpt;
	cpt = cpt + 1;
    }
    
    return (result);
}

int main(void)
{
    my_compute_factorial_it();
    return (0);
}


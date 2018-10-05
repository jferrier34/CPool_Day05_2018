/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec.c
** File description:
** Task02
*/

int my_compute_factorial_rec (int nb)
{
    if (nb < 0 || nb  > 12) {
	return (0);
    }

    else if (nb > 1) {
	return (nb * my_compute_factorial_rec(nb - 1));
    }
    else {
	return (1);
    }
}

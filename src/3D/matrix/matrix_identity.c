/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_identity.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguibout <kguibout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:18:05 by kguibout          #+#    #+#             */
/*   Updated: 2019/10/26 16:29:38 by kguibout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw3d.h"

void	matrix_identity(t_matrix4 *out)
{
	out->m[0][0] = 1;
	out->m[1][0] = 0;
	out->m[2][0] = 0;
	out->m[3][0] = 0;
	out->m[0][1] = 0;
	out->m[1][1] = 1;
	out->m[2][1] = 0;
	out->m[3][1] = 0;
	out->m[0][2] = 0;
	out->m[1][2] = 0;
	out->m[2][2] = 1;
	out->m[3][2] = 0;
	out->m[0][3] = 0;
	out->m[1][3] = 0;
	out->m[2][3] = 0;
	out->m[3][3] = 1;
}

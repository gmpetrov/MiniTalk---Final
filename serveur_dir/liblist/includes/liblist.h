/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:19:12 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 18:01:09 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					<stdio.h>

#ifndef						LIBSIMPLELIST_H
# define					LIBSIMPLELIST_H

# include					<string.h>

typedef struct s_list		t_list;
typedef struct s_element	t_element;

struct						s_element
{
	void					*objet;
	t_element				*after;
};

struct						s_list
{
	size_t					count;
	t_element				*first;
	t_element				*after;
};

size_t						ft_str_len(const void *);
const char					*ft_lst_list_to_str(t_list *);
void						*ft_mem_malloc(unsigned long size);
void						ft_lst_free_objet(t_list *);
void						ft_mem_del(void **);
void						ft_put_str_hr(const void *, const unsigned char);
void						*ft_lst_malloc(void);
void 						ft_lst_after(t_element *, t_list *, void *);
void						ft_lst_first(t_element *, t_list *, void *);
void						ft_lst_add(t_list *, void *);
void						ft_lst_put_n(const t_list *, size_t,
										 const unsigned char);
void						ft_lst_put_before(const t_list *, size_t,
											  const unsigned char);
void						ft_lst_put_back(const t_list *, size_t,
											const unsigned char);
void						ft_lst_del_n(t_list *, size_t);
void						ft_lst_free(t_list *);

#endif						/* !LIBSIMPLELIST_H */

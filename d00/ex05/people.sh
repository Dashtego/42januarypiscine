# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 19:34:58 by imelvill          #+#    #+#              #
#    Updated: 2017/01/09 20:05:31 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
ldapsearch -LLL -Q "uid=z*" cn | grep cn | sort -r | sed "s/cn://g"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufern <manufern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:56:18 by manufern          #+#    #+#             */
/*   Updated: 2025/05/14 20:03:14 by manufern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"
#include <stdio.h>
#include <unistd.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <stdbool.h>



void easter_egg_platano() {
    printf("\033[2J\033[H"); // Limpiar pantalla
    
    // Arte ASCII del babuino comiendo plátano gigante
    printf("\033[1;33m"); // Amarillo
    printf("    ⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("    ⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀\n");
    printf("    ⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀\n");
    printf("    ⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀\n");
    printf("    ⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀\n");
    printf("    ⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀\n");
    printf("    🐒⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿🍌\n");
    printf("    ⠀⠈⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠁⠀⠀\n");
    printf("\033[1;31m"); // Rojo
    
    // Mensaje de la secta
    printf("\n  ¡LA SECTA DE LOS BABUINOS TE BENDICE!\n");
    printf("  » El plátano gigante ha sido devorado «\n\n");
    printf("\033[3;33m"); // Amarillo oscuro
    printf("       .-~~~~-.\n");
    printf("      /  o  o  \\\n");
    printf("     |    ▽    |\n");
    printf("      \\  ===  /\n");
    printf("       '.___.'\n");
    printf("\033[1;36m"); // Cian
    printf("  ¡El espíritu del plátano ahora vive en ti!\n\033[0m");
    
    sleep(5); // Mostrar por 5 segundos
}

void bauino(void)
{
	setlocale(LC_ALL, "");
    srand(time(NULL));

    // Hoguera animada con diferentes intensidades
    const char *hoguera[] = {
        "     (  🔥  )     ",
        "    (  🔥🔥  )    ",
        "   (  🔥🔥🔥  )   ",
        "  (  🔥🔥🔥🔥  )  "
    };

    // Diferentes poses de babuinos bailando
    const char *monos[] = { "🙈", "🙉", "🙊", "🐵", "🦍" };
    const char *colores[] = { "\033[1;31m", "\033[1;33m", "\033[1;32m", "\033[1;35m" };

    printf("\033[2J\033[H"); // Limpiar pantalla

    for(int ciclo = 0; ciclo < 20; ciclo++) {
        printf("\033[2J\033[H");
        
        // Cielo nocturno con estrellas aleatorias
        printf("\033[1;36m");
        for(int i = 0; i < 5; i++) {
            printf("%*s%s", rand() % 30, "", "✦");
        }
        printf("\n\n");

        // Hoguera centrada
        printf("%*s%s%s\n\n", 20, "", colores[ciclo % 4], hoguera[ciclo % 4]);

        // Babuinos bailando en círculo
        printf("%*s%s", 10, "", monos[(ciclo+0) % 5]);
        printf("%*s%s", 10, "", monos[(ciclo+2) % 5]);
        printf("\n");

        printf("%s", monos[(ciclo+4) % 5]);
        printf("%*s%s", 25, "", monos[(ciclo+1) % 5]);
        printf("\n");

        printf("%*s%s", 15, "", monos[(ciclo+3) % 5]);
        printf("\n\n");

        // Mensaje cambiante
        const char *mensajes[] = {
            "¡Ritual de la Luna Llena!",
            "¡Bailando para los dioses simios!",
            "¡Ofrenda al Gran Plátano!",
            "¡Uh-uh-ah-ah! 🎶"
        };
        printf("%*s\033[1;33m%s\033[0m\n", 15, "", mensajes[ciclo % 4]);

        usleep(300000);
        fflush(stdout);
    }

    // Final épico
    printf("\033[2J\033[H");
    printf("\n\n\033[1;31m");
    printf("    ╔════════════════════╗\n");
    printf("    ║ ¡RITUAL COMPLETADO!║\n");
    printf("    ║    LA TRIBU ES     ║\n");
    printf("    ║    BENDECIDA       ║\n");
    printf("    ╚════════════════════╝\n");
    printf("\033[3;33m");
    printf("       .-~~~~-.\n");
    printf("      /  o  o  \\\n");
    printf("     |    🎵    |\n");
    printf("      \\  ===  /\n");
    printf("       '.___.'\n");
    printf("    🙊🙉🙈🙊🙉🙈\n");
    printf("\033[0m");
}


int	build_up(t_cmd *comand, t_list_env *environ)
{
	if (handle_pwd(comand, environ) || handle_env(comand, environ)
		|| handle_echo(comand))
	{
		manage_error(0, 0);
		return (1);
	}
	return (0);
}

void	ft_exit(char *exits, t_list_env *envp)
{
	char	**aux;
	int		exit_code;
	char	*tmp;

	aux = ft_split(exits, ' ');
	exit_code = 0;
	if (aux_count(aux) >= 2)
	{
		tmp = aux[1];
		aux[1] = strip_quotes(tmp);
		free(tmp);
	}
	if (aux == NULL || aux_count(aux) > 2)
	{
		ft_putstr_fd("exit: too many arguments\n", 2);
		manage_error(1, 0);
		clean_up(aux, NULL, 0);
		return ;
	}
	aux_exit(aux, envp);
	printf("exit\n");
	if (aux_count(aux) == 2)
		exit_code = ft_atoi(aux[1]);
	free_list_env(envp);
	exit(exit_code);
}

void	process_input_aux(char *line, t_list_env *envp)
{
	char	*interpreted_line;

	if (line[0] == '\0')
		return ;
	interpreted_line = interpret_command(line, envp, 0);
	if (interpreted_line == NULL || is_blank_line(interpreted_line) == 1)
	{
		manage_error(0, 0);
		free(interpreted_line);
		return ;
	}
	executor(envp, interpreted_line);
	free(interpreted_line);
}

void	process_input(t_list_env *envp)
{
	char	*line;
	char	*aux;

	while (1)
	{
		siginit();
		line = readline(JUNGLE_GREEN "🦧BABUTERM🦧➤ " RESET);
		add_history(line);
		if (ft_strcmp(line, "babuino") == 0)
		{
			bauino();
			
			continue ;
		}
		if (ft_strcmp(line, "platano") == 0)
		{
			easter_egg_platano();
			
			continue ;
		}
		aux = ft_strtrim(line, " ");
		if (aux == NULL)
			exit(0);
		if (ft_parsing(aux) == 0)
		{
			process_input_aux2(aux, line, envp);
			continue ;
		}
		free(aux);
		free(line);
	}
}

void	siginit(void)
{
	struct sigaction	sa_int;

	ft_bzero(&sa_int, sizeof(sa_int));
	sa_int.sa_handler = sigint_handler;
	sa_int.sa_flags = 0;
	sigaction(SIGINT, &sa_int, NULL);
	sa_int.sa_handler = SIG_IGN;
	sigaction(SIGQUIT, &sa_int, NULL);
}

/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
//!Estructura para almacenar datos personales
typedef struct alumno_s {
    char apellidos[30]; //!< String de 30 caracteres que contiene el apellido del alumno
    char nombres[30]; //!< String de 30 caracteres que contiene los nombres del alumno
    char documento[11]; //!< String de 11 caracteres que contiene el DNI del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
*@brief    Funcion encargada de serializar UN ALUMNO en un JSON
*@param    cadena es un puntero a la cadena JSON
*@param    espacio cantidad de caracteres disponibles
*@param    alumno puntero a la estructura que contiene los datos del alumno
*@return   true si se han gurado los datos de manera exitosa
*@return   false si ha ocurrido un error al guardar los datos del alumno.
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

//!Funcion encargada de serializar varios alumnos.
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */

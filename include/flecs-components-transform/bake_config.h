/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_COMPONENTS_TRANSFORM_BAKE_CONFIG_H
#define FLECS_COMPONENTS_TRANSFORM_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_cglm.h>

/* Convenience macro for exporting symbols */
#ifndef flecs_components_transform_STATIC
#if flecs_components_transform_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_COMPONENTS_TRANSFORM_API __declspec(dllexport)
#elif flecs_components_transform_EXPORTS
  #define FLECS_COMPONENTS_TRANSFORM_API __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define FLECS_COMPONENTS_TRANSFORM_API __declspec(dllimport)
#else
  #define FLECS_COMPONENTS_TRANSFORM_API
#endif
#else
  #define FLECS_COMPONENTS_TRANSFORM_API
#endif

#endif


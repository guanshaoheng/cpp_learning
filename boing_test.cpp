//
// Created by tongming on 06/09/22.
//
#include "glfw3.h"
#include <cstdlib>

int main( void )
{
    GLFWwindow* window;

    /* Init GLFW */
    if( !glfwInit() )
        exit( EXIT_FAILURE );

    window = glfwCreateWindow( 400, 400, "Boing (classic Amiga demo)", NULL, NULL );
    if (!window)
    {
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    glfwSetWindowAspectRatio(window, 1, 1);

//    glfwSetFramebufferSizeCallback(window, reshape);
//    glfwSetKeyCallback(window, key_callback);
//    glfwSetMouseButtonCallback(window, mouse_button_callback);
//    glfwSetCursorPosCallback(window, cursor_position_callback);
//
//    glfwMakeContextCurrent(window);
//    gladLoadGL(glfwGetProcAddress);
//    glfwSwapInterval( 1 );
//
//    glfwGetFramebufferSize(window, &width, &height);
//    reshape(window, width, height);
//
//    glfwSetTime( 0.0 );
//
//    init();

    /* Main loop */
    for (;;)
    {
        /* Timing */
//        t = glfwGetTime();
//        dt = t - t_old;
//        t_old = t;
//
//        /* Draw one frame */
//        display();

        /* Swap buffers */
        glfwSwapBuffers(window);
        glfwPollEvents();

        /* Check if we are still running */
        if (glfwWindowShouldClose(window))
            break;
    }

    glfwTerminate();
    exit( EXIT_SUCCESS );
}
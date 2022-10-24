// Exp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <SFML\Graphics.hpp>
#include "Pollito.h"
    int main()
    {
        //Pollito pepe(15);
        //Pollito pio(90);
        //Pollito plumadizimo(2.5);
        //sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
        sf::RenderWindow window(sf::VideoMode(400, 400), "Un che pollo");
        //sf::CircleShape shape(100.f);
        //shape.setFillColor(sf::Color::Green);
        sf::CircleShape cabezita(60.f);
        sf::CircleShape cresta(20, 4);
        sf::CircleShape ojitoLeft(10.f);
        sf::RectangleShape pataLeft(sf::Vector2f(10, 50));
        sf::CircleShape ojitoRight(10.f);
        sf::RectangleShape pataRight(sf::Vector2f(10, 50));
        sf::CircleShape cuerpo(100.f);
        sf::CircleShape pico(20, 3);
        //sf::Vector2f a{ 1,2 };
        //b.setPosition(sf::Vector2f{ 100,0 });
        cabezita.setFillColor(sf::Color::Yellow);
        cresta.setFillColor(sf::Color::Red);
        ojitoLeft.setFillColor(sf::Color::Black);
        pataLeft.setFillColor(sf::Color::Red);
        ojitoLeft.setOutlineThickness(10);
        ojitoLeft.setOutlineColor(sf::Color(255, 255, 255));
        ojitoRight.setFillColor(sf::Color::Black);
        pataRight.setFillColor(sf::Color::Red);
        ojitoRight.setOutlineThickness(10);
        ojitoRight.setOutlineColor(sf::Color(255, 255, 255));
        cuerpo.setFillColor(sf::Color::Yellow);
        pico.setFillColor(sf::Color::Red);
        cabezita.setPosition(sf::Vector2f{ 160,40 });
        cresta.setPosition(sf::Vector2f{ 200,25 });
        ojitoLeft.setPosition(sf::Vector2f{ 180,70 });
        pataLeft.setPosition(sf::Vector2f{ 180,330 });
        ojitoRight.setPosition(sf::Vector2f{ 240,70 });
        ojitoRight.setPosition(sf::Vector2f{ 240,70 });
        pataRight.setPosition(sf::Vector2f{ 250,330 });
        cuerpo.setPosition(sf::Vector2f{ 120,150 });
        pico.setPosition(sf::Vector2f{ 200,100 });
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            //window.draw(shape);
            window.draw(cabezita);
            window.draw(cresta);
            window.draw(ojitoLeft);
            window.draw(pataLeft);
            window.draw(ojitoRight);
            window.draw(pataRight);
            window.draw(cuerpo);
            window.draw(pico);
            window.display();
        }

        return 0;
    }

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

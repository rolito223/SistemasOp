# Sistemas Operativos de Red y Distribuidos

---

## Introducción

Sin el software una computadora es en esencia una masa metálica sin utilidad. Con el software, una computadora puede almacenar, procesar y recuperar información, encontrar errores de ortografía e intervenir en muchas otras valiosas actividades para ganar el sustento. El software para computadoras puede clasificarse en general, en 2 clases: los programas de sistema, que controlan la operación de la computadora en sí y los programas de aplicación, los cuales resuelven problemas para sus usuarios. El programa fundamental de todos los programas de sistema, es el Sistema Operativo, que controla todos los recursos de la computadora y proporciona la base sobre la cual pueden escribirse los programas de aplicación.

Un Sistema Operativo es un programa que actúa como intermediario entre el usuario y el hardware de un computador y su propósito es proporcionar un entorno en el cual el usuario pueda ejecutar programas. El objetivo principal de un Sistema Operativo es, entonces, lograr que el Sistema de computación se use de manera cómoda, y el objetivo secundario es que el hardware del computador se emplee de manera eficiente.

Con el paso del tiempo, los Sistemas Operativos fueron clasificándose de diferentes maneras, dependiendo del uso o de la aplicación que se les daba. A continuación se mostrarán diversos tipos de Sistemas Operativos que existen en la actualidad, con algunas de sus características:

### Sistemas Operativos por lotes.

Se reúnen todos los trabajos comunes para realizarlos al mismo tiempo, evitando la espera de dos o más trabajos como sucede en el procesamiento en serie. Estos sistemas son de los más tradicionales y antiguos, y fueron introducidos alrededor de 1956 para aumentar la capacidad de procesamiento de los programas.

### Sistemas Operativos de tiempo real.

Los Sistemas Operativos de tiempo real son aquellos en los cuales no tiene importancia el usuario, sino los procesos. Por lo general, están subutilizados sus recursos con la finalidad de prestar atención a los procesos en el momento que lo requieran. se utilizan en entornos donde son procesados un gran número de sucesos o eventos.

### Sistemas Operativos de multiprogramación (o Sistemas Operativos de multitarea).

Se distinguen por sus habilidades para poder soportar la ejecución de dos o más trabajos activos (que se están ejecutado) al mismo tiempo. Esto trae como resultado que la Unidad Central de Procesamiento (CPU) siempre tenga alguna tarea que ejecutar, aprovechando al máximo su utilización.

### Sistemas Operativos de tiempo compartido.

Permiten la simulación de que el sistema y sus recursos son todos para cada usuario. El usuario hace una petición a la computadora, esta la procesa tan pronto como le es posible, y la respuesta aparecerá en la terminal del usuario.

### Sistemas Operativos paralelos.

En estos tipos de Sistemas Operativos se pretende que cuando existan dos o más procesos que compitan por algún recurso se puedan realizar o ejecutar al mismo tiempo.

### Sistemas Operativos distribuidos.

Permiten distribuir trabajos, tareas o procesos, entre un conjunto de procesadores. Puede ser que este conjunto de procesadores esté en un equipo o en diferentes, en este caso es trasparente para el usuario.

Los sistemas distribuidos deben de ser muy confiables, ya que si un componente del sistema se descompone otro componente debe de ser capaz de reemplazarlo.

Entre los diferentes Sistemas Operativos distribuidos que existen tenemos los siguientes: Sprite, Solaris-MC, Mach, Chorus, Spring, Amoeba, Taos, etc.

#### Características de los Sistemas Operativos distribuidos:

> - Colección de sistemas autónomos capaces de comunicación y cooperación mediante interconexiones hardware y software

> - Objetivo clave es la transparencia.

> - Generalmente proporcionan medios para la compartición global de recursos.

> - Servicios añadidos: denominación global, sistemas de archivos distribuidos, facilidades para distribución de cálculos (a través de comunicación de procesos internodos, llamadas a procedimientos remotos, etc.).

### Sistemas Operativos de red.

Son aquellos sistemas que mantienen a dos o más computadoras unidas através de algún medio de comunicación (físico o no), con el objetivo primordial de poder compartir los diferentes recursos y la información del sistema.

---

## Principios De Los Sistemas Operativos

El diseño e investigación de herramientas para los sistemas operativos centralizados convencionales, los cuales corren en sistemas de uno o varios procesadores, esta muy bien entendido. Sin embargo la proliferación de estaciones de trabajo personales y redes de área local ha llevado al desarrollo de nuevos conceptos del sistema operativo, a saber sobre, sistemas operativos en red y sistemas operativos distribuidos. Es por eso que nos enfocaremos más en estos dos tipos de sistemas.

Antes de empezar no hay que confundir un Sistema Operativo de Red con un Sistema Operativo Distribuido. En un Sistema Operativo de Red las computadoras están interconectadas por medios de comunicación: software y hardware. En este tipo de red los usuarios saben donde están ejecutando su trabajo y guardando su información. En cambio en los Sistemas Operativos Distribuidos existe un software que distribuye las tareas de los usuarios sobre una red de computadoras y para los usuarios es transparente donde realizan sus tareas y guardan su información.

Existen dos esquemas básicos de éstos sistemas. Un sistema fuertemente acoplado es a es aquel que comparte la memoria y un reloj global, cuyos tiempos de acceso son similares para todos los procesadores. En un sistema débilmente acoplado los procesadores no comparten ni memoria ni reloj, ya que cada uno cuenta con su memoria local.

A medida que se van desarrollando los sistemas operativos, van adquiriendo nuevos conceptos, como son:

Interoperabilidad, que es la habilidad del sistema de facilitar intercambio de información entre los componentes heterogéneos en el sistema.

Transparencia, este concepto es muy parecido al de máquina virtual en los sistemas operativos tradicionales, la transparencia en los sistemas operativos distribuidos, ya que esta es la propiedad que permite a los usuarios ver al conjunto de máquinas en las que esta trabajando como un sola máquina.

Autonomía, esto es la independencia de los sistemas operativos con respecto al hardware, lo que permite que el sistema trabaje con unidades autónomas.

### Sistemas Operativos Centralizados

Esta clase de sistemas es fuertemente acoplado ya que sus recursos son compartidos internamente. Un sistema operativo es una pieza grande de software formado por miles de millones de líneas de código. Cuando se implementa esta clase de sistemas es necesarios estructurar el software en módulos manejables.

Podemos considerar un módulo como una colección de instrucciones que realiza un servicio del sistema.

#### Servicios de los sistemas operativos

Tipos de servicios

> - Ejecución de programas. El sistema tiene que ser capaz de cargar un programa en memoria y ejecutarlo.
> - Operaciones de entrada/salida. Como un programa no puede acceder directamente a un dispositivo de E/S el sistema operativo debe facilitarle algunos medios para realizarlo.
> - Manipulación del sistema de archivos. El sistema operativo debe facilitar las herramientas necesarias para que los programas puedan leer, escribir y eliminar archivos.
> - Detección de errores. El sistema operativo necesita constantemente detectar posibles errores. Los errores pueden producirse en la CPU y en el hardware de la memoria, en los dispositivos de E/S o bien en el programa de usuario. Para cada tipo de error, el sistema operativo debe adoptar la iniciativa apropiada que garantice una computación correcta y consistente.

La estructura del Kernel en estos sistemas generalmente es monolítica, es decir, está dividido en dos partes estructuradas: el núcleo dependiente del hardware y el núcleo independiente del hardware. El núcleo dependiente se encarga de manejar las interrupciones del hardware, hacer el manejo de bajo nivel de memoria y discos y trabajar con los manejadores de dispositivos de bajo nivel, principalmente. El núcleo independiente del hardware se encarga de ofrecer las llamadas al sistema, manejar los sistemas de archivos y la planificación de procesos. Para el usuario esta división generalmente pasa desapercibida. Para un mismo sistema operativo corriendo en diferentes plataformas, el núcleo independiente es exactamente el mismo, mientras que el dependiente debe re-escribirse. Esto hace que el Kernel sea más manejable.

El modelo de Cliente-Servidor es una forma de describir la iteración entre procesos, a través del paso de mensajes, en donde el proceso cliente espera algún servicio (por ejemplo la lectura de datos de algún archivo) entonces envía un mensaje al servidor y después espera el mensaje de respuesta, en la forma más simple de este modelo, el sistema tiene solo dos primitivas Enviar y Recibir. La primera primitiva indica el destino y un mensaje, la segunda indica de quien es el mensaje y provee de un buffer donde será almacenado el mensaje.

Un sistema operativo estándar puede ser implementado en un núcleo mínimo, esto es un Microkernel, Un núcleo con 'arquitectura' micronúcleo es aquél que contiene únicamente el manejo de procesos y threads, el de manejo bajo de memoria, da soporte a las comunicaciones y maneja las interrupciones y operaciones de bajo nivel de entrada-salida. En los sistemas operativos que cuentan con este tipo de núcleo se usan procesos 'servidores' que se encargan de ofrecer el resto de servicios (por ejemplo el de sistema de archivos) y que utilizan al núcleo a través del soporte de comunicaciones.

Este diseño permite que los servidores no estén atados a un fabricante en especial, incluso el usuario puede escoger o programar sus propios servidores. La mayoría de los sistemas operativos que usan este esquema manejan los recursos de la computadora como si fueran objetos: los servidores ofrecen una serie de 'llamadas' o 'métodos' utilizables con un comportamiento coherente y estructurado. Otra de las características importantes de los micronúcleos es el manejo de threads. Cuando un proceso está formado de un solo thread, éste es un proceso normal como en cualquier sistema operativo.

Los usos más comunes de los micronúcleos es en los sistemas operativos que intentan ser distribuidos, y en aquellos que sirven como base para instalar sobre ellos otros sistemas operativos. Por ejemplo, el sistema operativo AMOEBA intenta ser distribuido y el sistema operativo MACH sirve como base para instalar sobre él DOS, UNIX, etc.

#### Funciones de Manejo

Uno de los módulos más importantes de un sistema operativo es la de administrar los procesos y tareas del sistema de cómputo. Para realizar esto el sistema operativo ocupa la multiprogramación, este es un método para incrementar el empleo de la CPU disponiendo en todo momento de algo que la CPU pueda ejecutar. El trabajo que se realiza es el siguiente, cuando un proceso deja libre la CPU para realizar una E/S, el sistema operativo cambia a otro trabajo y lo ejecuta. Cuando este último deba esperar por una E/S, la CPU pasará a otro trabajo y así sucesivamente.

Un sistema operativo multiprogramado es bastante sofisticado. Tener varios trabajos para ejecutar significa tenerlos simultáneamente en memoria. Tener varios programas en memoria requiere una gestión de memoria, además el sistema operativo deberá seleccionar para elegir uno de ellos. Esto se denomine planificación de CPU.

La planificación del procesador se refiere a la manera o técnicas que se usan para decidir cuánto tiempo de ejecución y cuando se le asignan a cada proceso del sistema. Obviamente, si el sistema es monousuario y monotarea no hay mucho que decidir, pero en el resto de los sistemas esto es crucial para el buen funcionamiento del sistema.

Lo más importante en esto es el uso de semáforos, en 1965, E.W. Dijkstra sugirió el uso de una variable entera para contar el número de despertares almacenados para su uso posterior.

En su propuesta se presentó un nuevo tipo de variable, llamada Semáforo. Un semáforo puede tener el valor 0, lo que indica que no existen despertares almacenados; o bien algún valor positivo si están pendientes uno o más despertares.

Dijkstra, propuso dos operaciones, DOWN y UP (generalizaciones de SLEEP y WAKEUP, respectivamente). La operación Down verifica si el valor de un semáforo es mayor que 0. En este caso, decrementa el valor (es decir, utiliza un despertar almacenado) y continúa. Si el valor es cero, el proceso se va a dormir. La verificación y modificación del valor, así como la posibilidad de irse a dormir se realiza en conjunto, como una sola e indivisible acción atómica. Se garantiza que al iniciar una operación con un semáforo, ningún otro proceso puede tener acceso a semáforo hasta que la operación termine o se bloquee. Esta atomicidad es absolutamente esencial para resolver los problemas de sincronización y evitar condiciones de competencia.

La operación UP incrementa el valor del semáforo correspondiente. Si uno o más procesos dormían en ese semáforo y no podían completar una operación Down anterior, el sistema elige alguno de ellos (por ejemplo, en forma aleatoria) y se le permite terminar Down. Así, después de un UP en un semáforo con procesos durmiendo, el semáforo seguirá con valor cero, pero habrá un menor número de procesos durmiendo. La operación de incremento del semáforo y despertar de un proceso también es indivisible. Ningún proceso llega a bloquear mediante un UP.

Un semáforo es una variable protegida, cuyo valor sólo puede ser leído y alterado mediante las operaciones P y V, y una operación de asignación de valores iniciales y (Inicia semáforo).

Operación P (Sobre el semáforo S)

si S>0

entonces S:=S-1;

sino (esperar S)

Operación V (Sobre el semáforo S)

si (Uno o más procesos esperan S)

entonces (dejar que prosiga uno de esos procesos)

sino S:=S+1

Otra forma de controlar la comunicación entre procesos es la sincronización. En muchos casos, los procesos se reúnen para realizar tareas en conjunto, a este tipo de relación se le llama procesos cooperativos. Para lograr la comunicación, los procesos deben sincronizarse, de no ser así pueden ocurrir problemas no deseados. La sincronización es la transmisión y recepción de señales que tiene por objeto llevar a cabo el trabajo de un grupo de procesos cooperativos. Es la coordinación y cooperación de un conjunto de procesos para asegurar la comparación de recursos de cómputo. La sincronización entre procesos es necesaria para prevenir y/o corregir errores de sincronización debidos al acceso concurrente a recursos compartidos, tales como estructuras de datos o dispositivos de E/S, de procesos contendientes. La sincronización entre procesos también permite intercambiar señales de tiempo (ARRANQUE/PARADA) entre procesos cooperantes para garantizar las relaciones específicas de precedencia impuestas por el problema que se resuelve. Sin una sincronización adecuada entre procesos, la actualización de variables compartidas puede inducir a errores de tiempo relacionados con la concurrencia que son con frecuencia difíciles de depurar. Una de las causas principales de este problema es que procesos concurrentes puedan observar valores temporalmente inconsistentes de una variable compartida mientras se actualizan. una aproximación para resolver este problema es realizar actualizaciones de variables compartidas de manera mutuamente exclusiva. Se pueden mejorar permitiendo que a lo más un proceso entre a la vez en la sección crítica de código en la que se actualiza una variable compartida o estructura de datos en particular.

La sincronización en sistemas de un único ordenador no requiere ningún aspecto especial en el diseño del sistema operativo, ya que un reloj único proporciona de forma regular y precisa el tiempo en cada momento; sin embargo los sistemas distribuidos tienen un reloj por cada máquina por lo que es fundamental una coordinación entre todos los relojes para mostrar una hora única. Debemos sincronizar los relojes; ésta no es trivial por que se realiza a través de mensajes por la red, cuyo envío puede ser variable y depender de muchos factores, como la distancia, velocidad de transmisión o la propia saturación de la red.

Esto también para evitar las regiones criticas, cuando hablamos de región crítica nos referimos a un recurso que quiere ser utilizado por uno o varios procesos. Siempre es un recurso que está siendo utilizado por un proceso y existe otro proceso lo desea por lo que debe esperar que el primer recurso lo libere y de esta manera pueda utilizarlo.

Si un proceso se encuentra en su sección crítica, otros procesos pueden seguir ejecutándose fuera de sus secciones críticas. Cuando un proceso abandona su región, otro proceso que esperaba entrar en su propia sección podrá hacerlo. El problema de la programación concurrente está en que se cumpla la exclusión mutua.

Cuando un proceso se encuentra en una región crítica se está hablando de un estado especial que se concede a un proceso. El proceso tiene acceso exclusivo a los datos compartidos y los demás procesos que requieren acceso a esos datos y en ese momento deben esperar; por esto las secciones críticas deben ejecutarse tan rápido como sea posible. Un proceso no se debe bloquear dentro de su propia sección crítica y estas deben codificarse con mucho cuidado

Necesitamos 4 condiciones para poder obtener una buena solución:

1. Dos procesos no deben encontrarse al mismo tiempo dentro de sus secciones críticas entonces S:=S-1;

2. No se deben hacer hipótesis sobre la velocidad o el número de UCP.

3. Ninguno de los procesos que estén en ejecución fuera de su sección crítica puede bloquear a otros procesos.

4. Ningún proceso debe esperar eternamente para entrar a su sección crítica.

#### Manejo de los dispositivos de E/S

El código destinado a manejar la entrada y salida de los diferentes periféricos en un sistema operativo es de una extensión considerable y sumamente complejo. Resuelve la necesidades de sincronizar, atrapar interrupciones y ofrecer llamadas al sistema para los programadores.

Los dispositivos de entrada salida se dividen, en general, en dos tipos: dispositivos orientados a bloques y dispositivos orientados a caracteres. Los dispositivos orientados a bloques tienen la propiedad de que se pueden direccionar, esto es, el programador puede escribir o leer cualquier bloque del dispositivo realizando primero una operación de posicionamiento sobre el dispositivo. Los dispositivos más comunes orientados a bloques son los discos duros, la memoria, discos compactos y, posiblemente, unidades de cinta. Por otro lado, los dispositivos orientados a caracteres son aquellos que trabajan con secuencias de bytes sin importar su longitud ni ninguna agrupación en especial. No son dispositivos direccionables. Ejemplos de estos dispositivos son el teclado, la pantalla o display y las impresoras.

* En el manejo de los dispositivos de E/S es necesario, introducir dos nuevos términos:* 

- Buffering (uso de memoria intermedia)

El buffering trata de mantener ocupados tanto la CPU como los dispositivos de E/S. La idea es sencilla, los datos se leen y se almacenan en un buffer, una vez que los datos se han leido y la CPU va a iniciar inmediatamente la operación con ellos, el dispositivo de entrada es instruido para iniciar inmediatamente la siguiente lectura. La CPU y el dispositivo de entrada permanecen ocupados. Cuando la CPU esté libre para el siguiente grupo de datos, el dispositivo de entrada habrá terminado de leerlos. La CPU podrá empezar el proceso de los últimos datos leídos, mientras el dispositivo de entrada iniciará la lectura de los datos siguientes.

Para la salida, el proceso es análogo. En este caso los datos de salida se descargan en otro buffer hasta que el dispositivo de salida pueda procesarlos.

Este sistema soluciona en forma parcial el problema de mantener ocupados todo el tiempo la CPU y los dispositivos de E/S. Ya que todo depende del tamaño del buffer y de la velocidad de procesamiento tanto de la CPU como de los dispositivos de E/S.

El manejo de buffer es complicado. Uno de los principales problemas reside en determinar tan pronto como sea posible que un dispositivo de E/S a finalizado una operación. Este problema se resuelve mediante las interrupciones. Tan pronto como un dispositivo de E/S acaba con una operación interrumpe a la CPU, en ese momento la CPU detiene lo que está haciendo e inmediatamente transfiere el control a una posición determinada. Normalmente las instrucciones que existen en esta posición corresponden a una rutina de servicio de interrupciones. La rutina de servicio de interrupción comprueba si el buffer no está lleno o no está vacío y entonces inicia la siguiente petición de E/S. La CPU puede continuar entonces el proceso interrumpido.

Cada diseño de computadora tiene su propio mecanismo de interrupción, pero hay varias funciones comunes que todos contemplan.

El buffering puede ser de gran ayuda pero pocas veces es suficiente.

- Spooling

El problema con los sistemas de cintas es que una lectora de tarjetas no podía escribir sobre un extremo mientras la CPU leía el otro. Los sistemas de disco eliminaron esa dificultad, moviendo la cabeza de un área del disco a otra.

En un sistema de discos, las tarjetas se leen directamente desde la lectora sobre el disco. La posición de las imágenes de las tarjetas se registran en una tabla mantenida por el sistema operativo. En la tabla se anota cada trabajo una vez leído. Cuando se ejecuta un trabajo sus peticiones de entrada desde la tarjeta se satisfacen leyendo el disco. Cuando el trabajo solicita la salida, ésta se copia en el buffer del sistema y se escribe en el disco. Cuando la tarea se ha completado se escribe en la salida realmente.

Esta forma de procesamiento se denomina spooling, utiliza el disco como un buffer muy grande para leer tan por delante como sea posible de los dispositivos de entrada y para almacenar los ficheros hasta que los dispositivos de salida sean capaces de aceptarlos.

La ventaja sobre el buffering es que el spooling solapa la E/S de un trabajo con la computación de otro. Es una característica utilizada en la mayoría de los sistemas operativos.

Afecta directamente a las prestaciones. Por el costo de algo de espacio en disco y algunas tablas, la CPU puede simultanear la computacion de un trabajo con la E/S de otros. De esta manera, puede mantener tanto a la CPU como a los dispositivos de E/S trabajando con un rendimiento mucho mayor.

Además mantiene una estructura de datos llama job spooling, que hace que los trabajos ya leidos permanezcan en el disco y el sistema operativo puede seleccionar cual ejecutar, por lo tanto se hace posible la planificación de trabajos.

#### Manejo de Archivos

Un archivo es un conjunto de información, que se encuentra almacenada o guardada en la memoria principal del computador, en el disco duro, en el disquete flexible o en los discos compactos (Cd-Rom).

Antes de que un archivo pueda leerse o escribirse en él, debe abrirse, momento en el cual se verifican los permisos. Estos archivos se abren especificando en el computador la ruta de acceso al archivo desde el directorio raíz, que es la unidad principal del disco del computador, este puede ser un disco duro o disco flexible. Entonces el sistema operativo visualiza el entorno al abrir un archivo.

Uno de los problemas mas frecuentes en el manejo de archivos son los deadlock, un deadlock es una situación no deseada de espera indefinida y se da cuando en un grupo de procesos, dos o más procesos de ese grupo esperan por llevar a cabo una tarea que será ejecutada por otro proceso del mismo grupo, entonces se produce el bloqueo. Los bloqueos se dan tanto en los sistemas operativos tradicionales como en los distribuidos, solo que en estos últimos es más difícil de prevenirlos, evitarlos e incluso detectarlos, y si se los logra detectar es muy complicado solucionarlos ya que la información se encuentra dispersa por todo el sistema.

Una vez que un deadlock se detecta, es obvio que el sistema está en problemas y lo único que resta por hacer es una de dos cosas: tener algún mecanismo de suspensión o reanudación que permita copiar todo el contexto de un proceso incluyendo valores de memoria y aspecto de los periféricos que esté usando para reanudarlo otro día, o simplemente eliminar un proceso o arrebatarle el recurso, causando para ese proceso la pérdida de datos y tiempo.

#### Seguridad en los Sistemas Operativos

En los sistemas operativos se requiere tener una buena seguridad informática, tanto del hardware, programas y datos, previamente haciendo un balance de los requerimientos y mecanismos necesarios. Con el fin de asegurar la integridad de la información contenida.

Dependiendo de los mecanismos utilizados y de su grado de efectividad, se puede hablar de sistemas seguros e inseguros. En primer lugar, deben imponerse ciertas características en el entorno donde se encuentra la instalación de los equipos, con el fin de impedir el acceso a personas no autorizadas, mantener un buen estado y uso del material y equipos, así como eliminar los riesgos de causas de fuerza mayor, que puedan destruir la instalación y la información contenida.

En la actualidad son muchas las violaciones que se producen en los sistemas informáticos, en general por acceso de personas no autorizadas que obtienen información confidencial pudiendo incluso manipularla. En ocasiones este tipo de incidencias resulta grave por la naturaleza de los datos; por ejemplo si se trata de datos bancarios, datos oficiales que puedan afectar a la seguridad de los estados, etc.

El software mal intencionado que se produce por diversas causas, es decir pequeños programas que poseen gran facilidad para reproducirse y ejecutarse, cuyos efectos son destructivos nos estamos refiriendo a los virus informáticos.

Para esto, se analizan cuestiones de seguridad desde dos perspectivas diferentes la seguridad externa y la seguridad interna.

Todos los mecanismos dirigidos a asegurar el sistema informático sin que el propio sistema intervenga en el mismo se engloban en lo que podemos denominar seguridad externa.

La seguridad externa puede dividirse en dos grandes grupos:

Seguridad física. Engloba aquellos mecanismos que impiden a los agentes físicos la destrucción de la información existente en el sistema; entre ellos podemos citar el fuego, el humo, inundaciones descargas eléctricas, campos magnéticos, acceso físico de personas con no muy buena intención, entre otros.

Seguridad de administración. Engloba los mecanismos más usuales para impedir el acceso lógico de personas físicas al sistema.

Todos los mecanismos dirigidos a asegurar el sistema informático, siendo el propio sistema el que controla dichos mecanismos, se engloban en lo que podemos denominar seguridad interna.

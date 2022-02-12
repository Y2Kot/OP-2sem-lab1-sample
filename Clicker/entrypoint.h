#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#include "appcontext.h"
#include "logic.h"

// Перечисляемый тип (enum) и структуры описываются существительными
// Операции, описывающие действия, выполняемые в (бизнес) логике приложения
enum Operation {
    Increment,
    Decrement,
    Update,
    Initialization
};

// Структура, описывающая дополнительные поля-значения, необходимые для выполнения операции
struct AppParams {
    int newValue;
};

// Единая точа входа - метод, являющийся прослойкой между слоем представления (Presentation)
// и слоем (бизнес) логики приложения.
void doOperation(Operation operation, AppContext* context, AppParams* params);



#endif // ENTRYPOINT_H

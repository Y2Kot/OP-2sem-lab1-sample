#ifndef LOGIC_H
#define LOGIC_H

#include "appcontext.h"

// Файл, представляющий основную (бизнес) логику приложения,
// ничего не должен знать о Qt объектах, должен быть полностью написан на c/c++ (ОП/ООП)
#define DEFAULT_VALUE 11

// Не забывайте что функции - это действия и должны описываться глаголами
void doIncrement(AppContext* context);
void doDecrement(AppContext* context);
void update(AppContext* context, int newValue);
void initialize(AppContext* context);

#endif // LOGIC_H

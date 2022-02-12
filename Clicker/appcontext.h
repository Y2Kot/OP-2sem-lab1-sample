#ifndef APPCONTEXT_H
#define APPCONTEXT_H

// Структура, описывающая контекст приложения.
// Включает переменные, описывающие состояние компонентов интерфейса,
// изменяемые в основной (бизнес) логике приложения.
struct AppContext {
    int currentValue;
    int clickCount;
};

#endif // APPCONTEXT_H

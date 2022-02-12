#include "logic.h"

void doIncrement(AppContext* context) {
    context->currentValue++;
}
void doDecrement(AppContext* context) {
    context->currentValue--;
}
void update(AppContext* context, int newValue) {
    context->currentValue = newValue;
}
void initialize(AppContext* context) {
    context->currentValue = DEFAULT_VALUE;
    context->clickCount = 0;
}

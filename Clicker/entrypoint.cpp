#include "entrypoint.h"

void updateClickCount(Operation operation, AppContext* context);

void doOperation(Operation operation, AppContext* context, AppParams* params) {
    switch(operation) {
    case Increment:
        doIncrement(context);
        break;
    case Decrement:
        doDecrement(context);
        break;
    case Update:
        update(context, params->newValue);
        break;
    case Initialization:
        initialize(context);
        break;
    }
    updateClickCount(operation, context);
}

void updateClickCount(Operation operation, AppContext* context) {
    switch(operation) {
    case Increment:
    case Decrement:
    case Update:
        context->clickCount++;
        break;
    case Initialization:
        break;
    }
}

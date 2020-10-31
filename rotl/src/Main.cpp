#include "rotl.h"

int main() {
    CUnitTestingSet *unitTestingSet = new CUnitTestingSet();

    unitTestingSet->AddTest(new CUnitTestingAction(), true);
    unitTestingSet->AddTest(new CUnitTestingCity(), true);
    unitTestingSet->AddTest(new CUnitTestingMap(), true);
    unitTestingSet->Execute();

    delete unitTestingSet;
}

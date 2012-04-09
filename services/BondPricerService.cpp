#include "BondCalculationTask.h"
#include "BondPricerService.h"

#include <iostream>
#include <iomanip>

using namespace QuantLib;

BondPricerService::BondPricerService():taskManager() {
}

BondPricerService::~BondPricerService() {
}

BondPricingResult BondPricerService::run(const BondDataList & data) {
    taskManager.start(new BondCalculationTask(data, "Bond Task"));
    return BondPricingResult();
}


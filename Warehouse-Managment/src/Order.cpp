#include <iostream>
#include <../include/Order.h>


Order::Order(int id, int customerId, int distance) : id(id), customerId(customerId), distance(distance), status(OrderStatus::PENDING), collectorId(NO_VOLUNTEER), driverId(NO_VOLUNTEER) {
}


int Order::getId() const {
    return id;
}


int Order::getCustomerId() const {
    return customerId;
}

int Order::getDistance() const {
    return distance;
}

void Order::setStatus(OrderStatus status) {
    this->status = status;
}


void Order::setCollectorId(int collectorId) {
    this->collectorId = collectorId;
}


void Order::setDriverId(int driverId) {
    this->driverId = driverId;
}


int Order::getCollectorId() const {
    return collectorId;
}


int Order::getDriverId() const {
    return driverId;
}


OrderStatus Order::getStatus() const {
    return status;
}


string Order::getStatusString() const {
    string statusString;
    switch (status) {
        case OrderStatus::PENDING:
            statusString = "PENDING";
            break;
        case OrderStatus::COLLECTING:
            statusString = "COLLECTING";
            break;
        case OrderStatus::DELIVERING:
            statusString = "DELIVERING";
            break;
        case OrderStatus::COMPLETED:
            statusString = "COMPLETED";
            break;
    }
    return statusString;
}


const string Order::toString() const {
    string statusString;
    string collectorIdString;
    string driverIdString;
    switch (status) {
        case OrderStatus::PENDING:
            statusString = "PENDING";
            break;
        case OrderStatus::COLLECTING:
            statusString = "COLLECTING";
            break;
        case OrderStatus::DELIVERING:
            statusString = "DELIVERING";
            break;
        case OrderStatus::COMPLETED:
            statusString = "COMPLETED";
            break;
    }

    if (collectorId == NO_VOLUNTEER)
        collectorIdString = "None";
    else
        collectorIdString = std::to_string(collectorId);
    
    if (driverId == NO_VOLUNTEER)
        driverIdString = "None";
    else
        driverIdString = std::to_string(driverId);
    

    return "OrderId: " + std::to_string(id) + "\nOrderStatus: " + statusString + "\nCustomerId: " + std::to_string(customerId) + "\nCollector: " + collectorIdString + "\nDriver: " + driverIdString;
}





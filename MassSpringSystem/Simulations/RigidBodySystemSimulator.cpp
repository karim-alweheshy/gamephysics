#include "RigidBodySystemSimulator.h"

// Construtors
RigidBodySystemSimulator::RigidBodySystemSimulator() {

}

// Functions
const char * RigidBodySystemSimulator::getTestCasesStr() {
	return "";
}

void RigidBodySystemSimulator::initUI(DrawingUtilitiesClass * DUC) {

}

void RigidBodySystemSimulator::reset() {

}

void RigidBodySystemSimulator::drawFrame(ID3D11DeviceContext* pd3dImmediateContext) {

}

void RigidBodySystemSimulator::notifyCaseChanged(int testCase) {

}

void RigidBodySystemSimulator::externalForcesCalculations(float timeElapsed) {

}

void RigidBodySystemSimulator::simulateTimestep(float timeStep) {

}

void RigidBodySystemSimulator::onClick(int x, int y) {

}

void RigidBodySystemSimulator::onMouse(int x, int y) {

}

// ExtraFunctions
int RigidBodySystemSimulator::getNumberOfRigidBodies() {
	return 0;
}

Vec3 RigidBodySystemSimulator::getPositionOfRigidBody(int i) {
	return Vec3(0, 0, 0);
}

Vec3 RigidBodySystemSimulator::getLinearVelocityOfRigidBody(int i) {
	return Vec3(0, 0, 0);
}

Vec3 RigidBodySystemSimulator::getAngularVelocityOfRigidBody(int i) {
	return Vec3(0, 0, 0);
}

void RigidBodySystemSimulator::applyForceOnBody(int i, Vec3 loc, Vec3 force) {

}

void RigidBodySystemSimulator::addRigidBody(Vec3 position, Vec3 size, int mass) {

}

void RigidBodySystemSimulator::setOrientationOf(int i, Quat orientation) {

}

void setVelocityOf(int i, Vec3 velocity) {

}
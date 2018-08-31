#include "utils.h"
#include "index.h"
#include "VkOffset2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkOffset2D::constructor;

_VkOffset2D::_VkOffset2D() {
  instance = (VkOffset2D*) malloc(sizeof(VkOffset2D));
}

_VkOffset2D::~_VkOffset2D() { }

void _VkOffset2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkOffset2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkOffset2D").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  
  Nan::Set(target, Nan::New("VkOffset2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkOffset2D::New) {
  _VkOffset2D* self = new _VkOffset2D();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// x
NAN_GETTER(_VkOffset2D::Getx) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  VkOffset2D *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->x));
}
NAN_SETTER(_VkOffset2D::Setx) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  VkOffset2D *instance = self->instance;
  self->instance->x = static_cast<int32_t>(value->NumberValue());
}// y
NAN_GETTER(_VkOffset2D::Gety) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  VkOffset2D *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->y));
}
NAN_SETTER(_VkOffset2D::Sety) {
  _VkOffset2D *self = Nan::ObjectWrap::Unwrap<_VkOffset2D>(info.This());
  VkOffset2D *instance = self->instance;
  self->instance->y = static_cast<int32_t>(value->NumberValue());
}
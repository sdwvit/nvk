#include "utils.h"
#include "VkDebugReportCallbackEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDebugReportCallbackEXT::constructor;

_VkDebugReportCallbackEXT::_VkDebugReportCallbackEXT() {
  instance = (VkDebugReportCallbackEXT*) malloc(sizeof(VkDebugReportCallbackEXT));
}

_VkDebugReportCallbackEXT::~_VkDebugReportCallbackEXT() { }

void _VkDebugReportCallbackEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDebugReportCallbackEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDebugReportCallbackEXT").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDebugReportCallbackEXT").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDebugReportCallbackEXT::New) {
  _VkDebugReportCallbackEXT* self = new _VkDebugReportCallbackEXT();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

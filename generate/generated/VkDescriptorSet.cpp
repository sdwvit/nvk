#include "utils.h"
#include "VkDescriptorSet.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSet::constructor;

_VkDescriptorSet::_VkDescriptorSet() {
  instance = (VkDescriptorSet*) malloc(sizeof(VkDescriptorSet));
}

_VkDescriptorSet::~_VkDescriptorSet() { }

void _VkDescriptorSet::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSet::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSet").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDescriptorSet").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorSet::New) {
  _VkDescriptorSet* self = new _VkDescriptorSet();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

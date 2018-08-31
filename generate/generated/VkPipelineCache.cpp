#include "utils.h"
#include "VkPipelineCache.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineCache::constructor;

_VkPipelineCache::_VkPipelineCache() {
  instance = (VkPipelineCache*) malloc(sizeof(VkPipelineCache));
}

_VkPipelineCache::~_VkPipelineCache() { }

void _VkPipelineCache::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineCache::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineCache").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkPipelineCache").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineCache::New) {
  _VkPipelineCache* self = new _VkPipelineCache();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.3
 */
#include "utils.h"
#include "index.h"
#include "VkAttachmentReference.h"

Nan::Persistent<v8::FunctionTemplate> _VkAttachmentReference::constructor;

_VkAttachmentReference::_VkAttachmentReference() {
  
}

_VkAttachmentReference::~_VkAttachmentReference() {
  //printf("VkAttachmentReference deconstructed!!\n");
}

void _VkAttachmentReference::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAttachmentReference::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAttachmentReference").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("attachment").ToLocalChecked(), Getattachment, Setattachment, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  Nan::Set(target, Nan::New("VkAttachmentReference").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkAttachmentReference::New) {
  if (info.IsConstructCall()) {
    _VkAttachmentReference* self = new _VkAttachmentReference();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("attachment").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("layout").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAttachmentReference constructor cannot be invoked without 'new'");
  }
};

// attachment
NAN_GETTER(_VkAttachmentReference::Getattachment) {
  _VkAttachmentReference *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachment));
}NAN_SETTER(_VkAttachmentReference::Setattachment) {
  _VkAttachmentReference *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference>(info.This());
  self->instance.attachment = static_cast<uint32_t>(value->NumberValue());
}// layout
NAN_GETTER(_VkAttachmentReference::Getlayout) {
  _VkAttachmentReference *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layout));
}NAN_SETTER(_VkAttachmentReference::Setlayout) {
  _VkAttachmentReference *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference>(info.This());
  self->instance.layout = static_cast<VkImageLayout>((int32_t)value->NumberValue());
}
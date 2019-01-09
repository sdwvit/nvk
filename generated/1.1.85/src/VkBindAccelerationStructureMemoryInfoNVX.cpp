/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkBindAccelerationStructureMemoryInfoNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindAccelerationStructureMemoryInfoNVX::constructor;

_VkBindAccelerationStructureMemoryInfoNVX::_VkBindAccelerationStructureMemoryInfoNVX() {
  instance.sType = VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NVX;
  
}

_VkBindAccelerationStructureMemoryInfoNVX::~_VkBindAccelerationStructureMemoryInfoNVX() {
  //printf("VkBindAccelerationStructureMemoryInfoNVX deconstructed!!\n");
  
  
  
  
  
  
  pDeviceIndices.Reset();
  
}

void _VkBindAccelerationStructureMemoryInfoNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindAccelerationStructureMemoryInfoNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindAccelerationStructureMemoryInfoNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("accelerationStructure").ToLocalChecked(), GetaccelerationStructure, SetaccelerationStructure, ctor);
  SetPrototypeAccessor(proto, Nan::New("memory").ToLocalChecked(), Getmemory, Setmemory, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryOffset").ToLocalChecked(), GetmemoryOffset, SetmemoryOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceIndexCount").ToLocalChecked(), GetdeviceIndexCount, SetdeviceIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDeviceIndices").ToLocalChecked(), GetpDeviceIndices, SetpDeviceIndices, ctor);
  Nan::Set(target, Nan::New("VkBindAccelerationStructureMemoryInfoNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindAccelerationStructureMemoryInfoNVX::flush() {
  _VkBindAccelerationStructureMemoryInfoNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkBindAccelerationStructureMemoryInfoNVX::New) {
  if (info.IsConstructCall()) {
    _VkBindAccelerationStructureMemoryInfoNVX* self = new _VkBindAccelerationStructureMemoryInfoNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("accelerationStructure").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("memory").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("memoryOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("deviceIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pDeviceIndices").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindAccelerationStructureMemoryInfoNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::GetsType) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::SetsType) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindAccelerationStructureMemoryInfoNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// accelerationStructure
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::GetaccelerationStructure) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (self->accelerationStructure.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->accelerationStructure);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::SetaccelerationStructure) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkAccelerationStructureNVX::constructor)->HasInstance(obj)) {
      self->accelerationStructure.Reset<v8::Object>(value.As<v8::Object>());
      _VkAccelerationStructureNVX* inst = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureNVX>(obj);
      ;
      self->instance.accelerationStructure = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAccelerationStructureNVX]' for 'VkBindAccelerationStructureMemoryInfoNVX.accelerationStructure' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->accelerationStructure.Reset();
    self->instance.accelerationStructure = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAccelerationStructureNVX]' for 'VkBindAccelerationStructureMemoryInfoNVX.accelerationStructure' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// memory
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::Getmemory) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (self->memory.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->memory);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::Setmemory) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj)) {
      self->memory.Reset<v8::Object>(value.As<v8::Object>());
      _VkDeviceMemory* inst = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      ;
      self->instance.memory = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkBindAccelerationStructureMemoryInfoNVX.memory' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->memory.Reset();
    self->instance.memory = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkBindAccelerationStructureMemoryInfoNVX.memory' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// memoryOffset
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::GetmemoryOffset) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.memoryOffset));
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::SetmemoryOffset) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.memoryOffset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindAccelerationStructureMemoryInfoNVX.memoryOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// deviceIndexCount
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::GetdeviceIndexCount) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceIndexCount));
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::SetdeviceIndexCount) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceIndexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindAccelerationStructureMemoryInfoNVX.deviceIndexCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDeviceIndices
NAN_GETTER(_VkBindAccelerationStructureMemoryInfoNVX::GetpDeviceIndices) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  if (self->pDeviceIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDeviceIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindAccelerationStructureMemoryInfoNVX::SetpDeviceIndices) {
  _VkBindAccelerationStructureMemoryInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkBindAccelerationStructureMemoryInfoNVX>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pDeviceIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindAccelerationStructureMemoryInfoNVX.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pDeviceIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindAccelerationStructureMemoryInfoNVX.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDeviceIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pDeviceIndices = nullptr;
  }
}
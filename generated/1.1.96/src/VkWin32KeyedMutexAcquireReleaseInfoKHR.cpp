/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkWin32KeyedMutexAcquireReleaseInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkWin32KeyedMutexAcquireReleaseInfoKHR::constructor;

_VkWin32KeyedMutexAcquireReleaseInfoKHR::_VkWin32KeyedMutexAcquireReleaseInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
  vpAcquireSyncs = new std::vector<VkDeviceMemory>;
  vpReleaseSyncs = new std::vector<VkDeviceMemory>;
  
}

_VkWin32KeyedMutexAcquireReleaseInfoKHR::~_VkWin32KeyedMutexAcquireReleaseInfoKHR() {
  //printf("VkWin32KeyedMutexAcquireReleaseInfoKHR deconstructed!!\n");
  
  
  
  vpAcquireSyncs->clear();
  delete vpAcquireSyncs;
  
  pAcquireSyncs.Reset();
  
  pAcquireKeys.Reset();
  
  pAcquireTimeouts.Reset();
  
  
  vpReleaseSyncs->clear();
  delete vpReleaseSyncs;
  
  pReleaseSyncs.Reset();
  
  pReleaseKeys.Reset();
  
}

void _VkWin32KeyedMutexAcquireReleaseInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWin32KeyedMutexAcquireReleaseInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWin32KeyedMutexAcquireReleaseInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("acquireCount").ToLocalChecked(), GetacquireCount, SetacquireCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireSyncs").ToLocalChecked(), GetpAcquireSyncs, SetpAcquireSyncs, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireKeys").ToLocalChecked(), GetpAcquireKeys, SetpAcquireKeys, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireTimeouts").ToLocalChecked(), GetpAcquireTimeouts, SetpAcquireTimeouts, ctor);
  SetPrototypeAccessor(proto, Nan::New("releaseCount").ToLocalChecked(), GetreleaseCount, SetreleaseCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pReleaseSyncs").ToLocalChecked(), GetpReleaseSyncs, SetpReleaseSyncs, ctor);
  SetPrototypeAccessor(proto, Nan::New("pReleaseKeys").ToLocalChecked(), GetpReleaseKeys, SetpReleaseKeys, ctor);
  Nan::Set(target, Nan::New("VkWin32KeyedMutexAcquireReleaseInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkWin32KeyedMutexAcquireReleaseInfoKHR::flush() {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = this;
  if (!(self->pAcquireSyncs.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pAcquireSyncs);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.acquireCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'acquireCount' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireSyncs'");
      return false;
    }
    std::vector<VkDeviceMemory>* data = self->vpAcquireSyncs;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDeviceMemory* result = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pAcquireSyncs = data->data();
  }if (!(self->pReleaseSyncs.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pReleaseSyncs);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.releaseCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'releaseCount' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseSyncs'");
      return false;
    }
    std::vector<VkDeviceMemory>* data = self->vpReleaseSyncs;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDeviceMemory* result = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pReleaseSyncs = data->data();
  }
  return true;
}

NAN_METHOD(_VkWin32KeyedMutexAcquireReleaseInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkWin32KeyedMutexAcquireReleaseInfoKHR* self = new _VkWin32KeyedMutexAcquireReleaseInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("acquireCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pAcquireSyncs").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pAcquireKeys").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pAcquireTimeouts").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("releaseCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pReleaseSyncs").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pReleaseKeys").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWin32KeyedMutexAcquireReleaseInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetsType) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetsType) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// acquireCount
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetacquireCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.acquireCount));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetacquireCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.acquireCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.acquireCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAcquireSyncs
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetpAcquireSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (self->pAcquireSyncs.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireSyncs);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetpAcquireSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAcquireSyncs.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAcquireSyncs.Reset();
      self->instance.pAcquireSyncs = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pAcquireSyncs = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAcquireKeys
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetpAcquireKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (self->pAcquireKeys.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireKeys);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetpAcquireKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pAcquireKeys.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pAcquireKeys.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pAcquireKeys = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pAcquireKeys = nullptr;
  }
}// pAcquireTimeouts
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetpAcquireTimeouts) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (self->pAcquireTimeouts.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireTimeouts);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetpAcquireTimeouts) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pAcquireTimeouts.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireTimeouts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pAcquireTimeouts.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pAcquireTimeouts' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pAcquireTimeouts = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pAcquireTimeouts = nullptr;
  }
}// releaseCount
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetreleaseCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.releaseCount));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetreleaseCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.releaseCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.releaseCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pReleaseSyncs
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetpReleaseSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (self->pReleaseSyncs.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pReleaseSyncs);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetpReleaseSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pReleaseSyncs.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pReleaseSyncs.Reset();
      self->instance.pReleaseSyncs = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pReleaseSyncs = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pReleaseKeys
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::GetpReleaseKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  if (self->pReleaseKeys.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pReleaseKeys);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoKHR::SetpReleaseKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pReleaseKeys.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pReleaseKeys.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoKHR.pReleaseKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pReleaseKeys = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pReleaseKeys = nullptr;
  }
}
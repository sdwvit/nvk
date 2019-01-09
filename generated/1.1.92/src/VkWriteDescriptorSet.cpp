/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkWriteDescriptorSet.h"

Nan::Persistent<v8::FunctionTemplate> _VkWriteDescriptorSet::constructor;

_VkWriteDescriptorSet::_VkWriteDescriptorSet() {
  instance.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
  vpImageInfo = new std::vector<VkDescriptorImageInfo>;
  vpBufferInfo = new std::vector<VkDescriptorBufferInfo>;
  vpTexelBufferView = new std::vector<VkBufferView>;
  
}

_VkWriteDescriptorSet::~_VkWriteDescriptorSet() {
  //printf("VkWriteDescriptorSet deconstructed!!\n");
  
  
  
  
  
  
  
  vpImageInfo->clear();
  delete vpImageInfo;
  
  pImageInfo.Reset();
  
  vpBufferInfo->clear();
  delete vpBufferInfo;
  
  pBufferInfo.Reset();
  
  vpTexelBufferView->clear();
  delete vpTexelBufferView;
  
  pTexelBufferView.Reset();
  
}

void _VkWriteDescriptorSet::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWriteDescriptorSet::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWriteDescriptorSet").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstSet").ToLocalChecked(), GetdstSet, SetdstSet, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstBinding").ToLocalChecked(), GetdstBinding, SetdstBinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstArrayElement").ToLocalChecked(), GetdstArrayElement, SetdstArrayElement, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorType").ToLocalChecked(), GetdescriptorType, SetdescriptorType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageInfo").ToLocalChecked(), GetpImageInfo, SetpImageInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("pBufferInfo").ToLocalChecked(), GetpBufferInfo, SetpBufferInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTexelBufferView").ToLocalChecked(), GetpTexelBufferView, SetpTexelBufferView, ctor);
  Nan::Set(target, Nan::New("VkWriteDescriptorSet").ToLocalChecked(), ctor->GetFunction());
}

bool _VkWriteDescriptorSet::flush() {
  _VkWriteDescriptorSet *self = this;
  if (!(self->pImageInfo.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pImageInfo);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.descriptorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'descriptorCount' for 'VkWriteDescriptorSet.pImageInfo'");
      return false;
    }
    std::vector<VkDescriptorImageInfo>* data = self->vpImageInfo;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorImageInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorImageInfo]' for 'VkWriteDescriptorSet.pImageInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDescriptorImageInfo* result = Nan::ObjectWrap::Unwrap<_VkDescriptorImageInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pImageInfo = data->data();
  }if (!(self->pBufferInfo.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pBufferInfo);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.descriptorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'descriptorCount' for 'VkWriteDescriptorSet.pBufferInfo'");
      return false;
    }
    std::vector<VkDescriptorBufferInfo>* data = self->vpBufferInfo;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorBufferInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorBufferInfo]' for 'VkWriteDescriptorSet.pBufferInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDescriptorBufferInfo* result = Nan::ObjectWrap::Unwrap<_VkDescriptorBufferInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pBufferInfo = data->data();
  }if (!(self->pTexelBufferView.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pTexelBufferView);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.descriptorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'descriptorCount' for 'VkWriteDescriptorSet.pTexelBufferView'");
      return false;
    }
    std::vector<VkBufferView>* data = self->vpTexelBufferView;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkBufferView::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBufferView]' for 'VkWriteDescriptorSet.pTexelBufferView' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkBufferView* result = Nan::ObjectWrap::Unwrap<_VkBufferView>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pTexelBufferView = data->data();
  }
  return true;
}

NAN_METHOD(_VkWriteDescriptorSet::New) {
  if (info.IsConstructCall()) {
    _VkWriteDescriptorSet* self = new _VkWriteDescriptorSet();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dstSet").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dstBinding").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("dstArrayElement").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("descriptorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("descriptorType").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pImageInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pBufferInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pTexelBufferView").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWriteDescriptorSet constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWriteDescriptorSet::GetsType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWriteDescriptorSet::SetsType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSet.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstSet
NAN_GETTER(_VkWriteDescriptorSet::GetdstSet) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->dstSet.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->dstSet);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetdstSet) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDescriptorSet::constructor)->HasInstance(obj)) {
      self->dstSet.Reset<v8::Object>(value.As<v8::Object>());
      _VkDescriptorSet* inst = Nan::ObjectWrap::Unwrap<_VkDescriptorSet>(obj);
      ;
      self->instance.dstSet = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSet]' for 'VkWriteDescriptorSet.dstSet' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->dstSet.Reset();
    self->instance.dstSet = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSet]' for 'VkWriteDescriptorSet.dstSet' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstBinding
NAN_GETTER(_VkWriteDescriptorSet::GetdstBinding) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstBinding));
}NAN_SETTER(_VkWriteDescriptorSet::SetdstBinding) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.dstBinding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSet.dstBinding' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstArrayElement
NAN_GETTER(_VkWriteDescriptorSet::GetdstArrayElement) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstArrayElement));
}NAN_SETTER(_VkWriteDescriptorSet::SetdstArrayElement) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.dstArrayElement = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSet.dstArrayElement' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorCount
NAN_GETTER(_VkWriteDescriptorSet::GetdescriptorCount) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkWriteDescriptorSet::SetdescriptorCount) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSet.descriptorCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorType
NAN_GETTER(_VkWriteDescriptorSet::GetdescriptorType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorType));
}NAN_SETTER(_VkWriteDescriptorSet::SetdescriptorType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorType = static_cast<VkDescriptorType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSet.descriptorType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pImageInfo
NAN_GETTER(_VkWriteDescriptorSet::GetpImageInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pImageInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpImageInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pImageInfo.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pImageInfo.Reset();
      self->instance.pImageInfo = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorImageInfo]' for 'VkWriteDescriptorSet.pImageInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pImageInfo = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorImageInfo]' for 'VkWriteDescriptorSet.pImageInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pBufferInfo
NAN_GETTER(_VkWriteDescriptorSet::GetpBufferInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pBufferInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pBufferInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpBufferInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pBufferInfo.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pBufferInfo.Reset();
      self->instance.pBufferInfo = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorBufferInfo]' for 'VkWriteDescriptorSet.pBufferInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pBufferInfo = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorBufferInfo]' for 'VkWriteDescriptorSet.pBufferInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pTexelBufferView
NAN_GETTER(_VkWriteDescriptorSet::GetpTexelBufferView) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pTexelBufferView.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTexelBufferView);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpTexelBufferView) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pTexelBufferView.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pTexelBufferView.Reset();
      self->instance.pTexelBufferView = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBufferView]' for 'VkWriteDescriptorSet.pTexelBufferView' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pTexelBufferView = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBufferView]' for 'VkWriteDescriptorSet.pTexelBufferView' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}
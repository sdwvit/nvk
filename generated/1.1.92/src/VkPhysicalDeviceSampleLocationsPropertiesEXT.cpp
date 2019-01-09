/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPhysicalDeviceSampleLocationsPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceSampleLocationsPropertiesEXT::constructor;

_VkPhysicalDeviceSampleLocationsPropertiesEXT::_VkPhysicalDeviceSampleLocationsPropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
  vsampleLocationCoordinateRange = new std::vector<float>;
  
}

_VkPhysicalDeviceSampleLocationsPropertiesEXT::~_VkPhysicalDeviceSampleLocationsPropertiesEXT() {
  //printf("VkPhysicalDeviceSampleLocationsPropertiesEXT deconstructed!!\n");
  
  
  
  
  vsampleLocationCoordinateRange->clear();
  delete vsampleLocationCoordinateRange;
  
  
  
  
}

void _VkPhysicalDeviceSampleLocationsPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceSampleLocationsPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceSampleLocationsPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationSampleCounts").ToLocalChecked(), GetsampleLocationSampleCounts, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxSampleLocationGridSize").ToLocalChecked(), GetmaxSampleLocationGridSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationCoordinateRange").ToLocalChecked(), GetsampleLocationCoordinateRange, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationSubPixelBits").ToLocalChecked(), GetsampleLocationSubPixelBits, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("variableSampleLocations").ToLocalChecked(), GetvariableSampleLocations, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceSampleLocationsPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceSampleLocationsPropertiesEXT::flush() {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = this;
  if (!(self->maxSampleLocationGridSize.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->maxSampleLocationGridSize);
    
  }if (!(self->sampleLocationCoordinateRange.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->sampleLocationCoordinateRange);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceSampleLocationsPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceSampleLocationsPropertiesEXT* self = new _VkPhysicalDeviceSampleLocationsPropertiesEXT();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceSampleLocationsPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetsType) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// sampleLocationSampleCounts
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetsampleLocationSampleCounts) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleLocationSampleCounts));
}// maxSampleLocationGridSize
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetmaxSampleLocationGridSize) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  if (self->maxSampleLocationGridSize.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->maxSampleLocationGridSize);
    info.GetReturnValue().Set(obj);
  }
}// sampleLocationCoordinateRange
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetsampleLocationCoordinateRange) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  if (self->sampleLocationCoordinateRange.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->sampleLocationCoordinateRange));
  }
}// sampleLocationSubPixelBits
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetsampleLocationSubPixelBits) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleLocationSubPixelBits));
}// variableSampleLocations
NAN_GETTER(_VkPhysicalDeviceSampleLocationsPropertiesEXT::GetvariableSampleLocations) {
  _VkPhysicalDeviceSampleLocationsPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSampleLocationsPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.variableSampleLocations));
}
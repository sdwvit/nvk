#ifndef __VK_VKSWAPCHAINCREATEINFOKHR_H__
#define __VK_VKSWAPCHAINCREATEINFOKHR_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSwapchainCreateInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
     
    static NAN_SETTER(Setsurface);
    
    static NAN_GETTER(GetminImageCount);
    static NAN_SETTER(SetminImageCount);
    
    static NAN_GETTER(GetimageFormat);
    static NAN_SETTER(SetimageFormat);
    
    static NAN_GETTER(GetimageColorSpace);
    static NAN_SETTER(SetimageColorSpace);
    
      _VkExtent2D *imageExtent;
      static NAN_GETTER(GetimageExtent);
    static NAN_SETTER(SetimageExtent);
    
    static NAN_GETTER(GetimageArrayLayers);
    static NAN_SETTER(SetimageArrayLayers);
    
      static NAN_GETTER(GetimageUsage);
    static NAN_SETTER(SetimageUsage);
    
    static NAN_GETTER(GetimageSharingMode);
    static NAN_SETTER(SetimageSharingMode);
    
    static NAN_GETTER(GetqueueFamilyIndexCount);
    static NAN_SETTER(SetqueueFamilyIndexCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueFamilyIndices;
    static NAN_GETTER(GetpQueueFamilyIndices);
    static NAN_SETTER(SetpQueueFamilyIndices);
    
      static NAN_GETTER(GetpreTransform);
    static NAN_SETTER(SetpreTransform);
    
      static NAN_GETTER(GetcompositeAlpha);
    static NAN_SETTER(SetcompositeAlpha);
    
    static NAN_GETTER(GetpresentMode);
    static NAN_SETTER(SetpresentMode);
    
      static NAN_GETTER(Getclipped);
    static NAN_SETTER(Setclipped);
     
    static NAN_SETTER(SetoldSwapchain);
    

    // real instance
    VkSwapchainCreateInfoKHR *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSwapchainCreateInfoKHR();
    ~_VkSwapchainCreateInfoKHR();

};

#endif
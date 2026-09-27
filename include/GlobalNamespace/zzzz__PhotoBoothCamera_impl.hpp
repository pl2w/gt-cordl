#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotoBoothCamera.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotoBoothCamera_def.hpp"
#include "GlobalNamespace/zzzz__PhotoBoothCamera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera.SetSaveImageToDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)(bool)>(&::GlobalNamespace::PhotoBoothCamera::SetSaveImageToDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5710c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"SetSaveImageToDevice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)()>(&::GlobalNamespace::PhotoBoothCamera::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5710c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera.Capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)(float_t)>(&::GlobalNamespace::PhotoBoothCamera::Capture)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5710c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Capture", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera._print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)()>(&::GlobalNamespace::PhotoBoothCamera::_print)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5710ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"_print", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera.Print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)()>(&::GlobalNamespace::PhotoBoothCamera::Print)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5711330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Print", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera.SaveImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)(::UnityEngine::Texture*, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, ::StringW, ::StringW)>(&::GlobalNamespace::PhotoBoothCamera::SaveImage)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5711340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"SaveImage", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera::*)()>(&::GlobalNamespace::PhotoBoothCamera::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5711508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_renderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_renderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderTexture;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderTexture = value;
}
constexpr ::StringW& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_saveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveName;
}
constexpr ::StringW const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_saveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveName;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_saveName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveName = value;
}
constexpr bool& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_appendDateToFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appendDateToFile;
}
constexpr bool const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_appendDateToFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appendDateToFile;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_appendDateToFile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appendDateToFile = value;
}
constexpr ::StringW& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_imageDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageDescription;
}
constexpr ::StringW const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_imageDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageDescription;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_imageDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imageDescription = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_overlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlay;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_overlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlay;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_overlay(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlay = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnCaptureImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCaptureImage;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnCaptureImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCaptureImage;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_OnCaptureImage(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCaptureImage = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnSaveImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveImage;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnSaveImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSaveImage;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_OnSaveImage(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSaveImage = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_rt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rt;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_rt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rt;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_rt(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rt = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCapture;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>* const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_OnCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCapture;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_OnCapture(::System::Action_2<::UnityW<::UnityEngine::Texture>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCapture = value;
}
constexpr bool& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_saveImageToDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveImageToDevice;
}
constexpr bool const& GlobalNamespace::PhotoBoothCamera::__cordl_internal_get_saveImageToDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveImageToDevice;
}
constexpr void GlobalNamespace::PhotoBoothCamera::__cordl_internal_set_saveImageToDevice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveImageToDevice = value;
}
inline void GlobalNamespace::PhotoBoothCamera::SetSaveImageToDevice(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"SetSaveImageToDevice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void GlobalNamespace::PhotoBoothCamera::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothCamera::Capture(float_t  FOV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Capture", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, FOV);
}
inline void GlobalNamespace::PhotoBoothCamera::_print()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"_print", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothCamera::Print()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"Print", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothCamera::SaveImage(::UnityEngine::Texture*  rt, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  narray, ::StringW  fileName, ::StringW  desc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {"SaveImage", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, narray, fileName, desc);
}
inline void GlobalNamespace::PhotoBoothCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotoBoothCamera* GlobalNamespace::PhotoBoothCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotoBoothCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotoBoothCamera::PhotoBoothCamera()   {
}
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::*)()>(&::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5711328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0.__print_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__print_b__0)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57115e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*>(),
                        {"<_print>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera>& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PhotoBoothCamera> const& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PhotoBoothCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_narray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> const& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_narray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_set_narray(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___narray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_print()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___print;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_print() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___print;
}
constexpr void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_set_print(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___print = value;
}
constexpr ::StringW& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
inline void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::__print_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*>(),
                        {"<_print>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0* GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotoBoothCamera___c__DisplayClass14_0::PhotoBoothCamera___c__DisplayClass14_0()   {
}

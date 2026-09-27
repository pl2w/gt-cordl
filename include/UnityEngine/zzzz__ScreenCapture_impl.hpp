#pragma once
// IWYU pragma private; include "UnityEngine/ScreenCapture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshotIntoRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::ScreenCapture::CaptureScreenshotIntoRenderTexture)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb6abf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                        {"CaptureScreenshotIntoRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshotIntoRenderTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ScreenCapture::CaptureScreenshotIntoRenderTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb6abf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                        {"CaptureScreenshotIntoRenderTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ScreenCapture::CaptureScreenshotIntoRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                        {"CaptureScreenshotIntoRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTexture);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshotIntoRenderTexture_Injected(::System::IntPtr  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScreenCapture*>(),
                        {"CaptureScreenshotIntoRenderTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScreenCapture::ScreenCapture()   {
}

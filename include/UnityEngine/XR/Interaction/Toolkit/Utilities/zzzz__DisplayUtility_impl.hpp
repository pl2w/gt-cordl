#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/DisplayUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__DisplayUtility_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility.get_screenDpi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::get_screenDpi)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb425180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"get_screenDpi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility.get_screenDpiRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::get_screenDpiRatio)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4252f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"get_screenDpiRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility.CacheScreenDpi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::CacheScreenDpi)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4251dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"CacheScreenDpi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility.PixelsToInches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::PixelsToInches)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb42534c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"PixelsToInches", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility.InchesToPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::InchesToPixels)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4253ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"InchesToPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::setStaticF_s_ScreenDpi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_ScreenDpi", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::getStaticF_s_ScreenDpi()  {
return ::cordl_internals::getStaticField<float_t, "s_ScreenDpi", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::setStaticF_s_OneOverScreenDpi(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_OneOverScreenDpi", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::getStaticF_s_OneOverScreenDpi()  {
return ::cordl_internals::getStaticField<float_t, "s_OneOverScreenDpi", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::setStaticF_s_ScreenDpiChecked(bool  value)  {
::cordl_internals::setStaticField<bool, "s_ScreenDpiChecked", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::getStaticF_s_ScreenDpiChecked()  {
return ::cordl_internals::getStaticField<bool, "s_ScreenDpiChecked", ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>();
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::get_screenDpi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"get_screenDpi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::get_screenDpiRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"get_screenDpiRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::CacheScreenDpi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"CacheScreenDpi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::PixelsToInches(float_t  pixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"PixelsToInches", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pixels);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::InchesToPixels(float_t  inches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility*>(),
                        {"InchesToPixels", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, inches);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::DisplayUtility::DisplayUtility()   {
}

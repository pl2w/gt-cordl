#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RenderSettings_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__AmbientMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_fog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::RenderSettings::get_fog)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb58bca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_fog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AmbientMode (*)()>(&::UnityEngine::RenderSettings::get_ambientMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb58bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientSkyColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::RenderSettings::get_ambientSkyColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb58bcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientSkyColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientEquatorColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::RenderSettings::get_ambientEquatorColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb58bd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientEquatorColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientGroundColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::RenderSettings::get_ambientGroundColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb58be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientGroundColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_subtractiveShadowColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::RenderSettings::get_subtractiveShadowColor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb58be84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_subtractiveShadowColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_skybox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::RenderSettings::get_skybox)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb58bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_skybox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.set_skybox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::UnityEngine::RenderSettings::set_skybox)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb58bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"set_skybox", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_sun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (*)()>(&::UnityEngine::RenderSettings::get_sun)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb58c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_sun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientProbe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SphericalHarmonicsL2 (*)()>(&::UnityEngine::RenderSettings::get_ambientProbe)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb58c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientProbe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_reflectionIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::RenderSettings::get_reflectionIntensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb58c178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_reflectionIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientSkyColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::RenderSettings::get_ambientSkyColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientSkyColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientEquatorColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::RenderSettings::get_ambientEquatorColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58bdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientEquatorColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientGroundColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::RenderSettings::get_ambientGroundColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58be48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientGroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_subtractiveShadowColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::RenderSettings::get_subtractiveShadowColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_subtractiveShadowColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_skybox_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::RenderSettings::get_skybox_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb58bf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_skybox_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.set_skybox_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::RenderSettings::set_skybox_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"set_skybox_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_sun_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::RenderSettings::get_sun_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb58c0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_sun_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderSettings.get_ambientProbe_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::RenderSettings::get_ambientProbe_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientProbe_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::RenderSettings::get_fog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_fog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::AmbientMode UnityEngine::RenderSettings::get_ambientMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AmbientMode>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::RenderSettings::get_ambientSkyColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientSkyColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::RenderSettings::get_ambientEquatorColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientEquatorColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::RenderSettings::get_ambientGroundColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientGroundColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::RenderSettings::get_subtractiveShadowColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_subtractiveShadowColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::RenderSettings::get_skybox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_skybox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderSettings::set_skybox(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"set_skybox", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Light> UnityEngine::RenderSettings::get_sun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_sun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::SphericalHarmonicsL2 UnityEngine::RenderSettings::get_ambientProbe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientProbe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SphericalHarmonicsL2>(nullptr, ___internal_method);
}
inline float_t UnityEngine::RenderSettings::get_reflectionIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_reflectionIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderSettings::get_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientSkyColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::RenderSettings::get_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientEquatorColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::RenderSettings::get_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientGroundColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::RenderSettings::get_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_subtractiveShadowColor_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline ::System::IntPtr UnityEngine::RenderSettings::get_skybox_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_skybox_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderSettings::set_skybox_Injected(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"set_skybox_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::RenderSettings::get_sun_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_sun_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::RenderSettings::get_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderSettings*>(),
                        {"get_ambientProbe_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderSettings::RenderSettings()   {
}

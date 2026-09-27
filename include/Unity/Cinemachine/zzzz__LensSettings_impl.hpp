#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_PhysicalSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_PhysicalSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.get_Orthographic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::LensSettings::*)()>(&::Unity::Cinemachine::LensSettings::get_Orthographic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeac838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Orthographic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.get_IsPhysicalCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::LensSettings::*)()>(&::Unity::Cinemachine::LensSettings::get_IsPhysicalCamera)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeb8544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_IsPhysicalCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.get_Aspect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::LensSettings::*)()>(&::Unity::Cinemachine::LensSettings::get_Aspect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaead158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Aspect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LensSettings (*)()>(&::Unity::Cinemachine::LensSettings::get_Default)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaeab38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.FromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LensSettings (*)(::UnityEngine::Camera*)>(&::Unity::Cinemachine::LensSettings::FromCamera)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xaeb8574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"FromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.PullInheritedPropertiesFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LensSettings::*)(::UnityEngine::Camera*)>(&::Unity::Cinemachine::LensSettings::PullInheritedPropertiesFromCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaeb4cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"PullInheritedPropertiesFromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.CopyCameraMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LensSettings::*)(::by_ref<::Unity::Cinemachine::LensSettings>)>(&::Unity::Cinemachine::LensSettings::CopyCameraMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"CopyCameraMode", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LensSettings (*)(::Unity::Cinemachine::LensSettings, ::Unity::Cinemachine::LensSettings, float_t)>(&::Unity::Cinemachine::LensSettings::Lerp)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaeac6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LensSettings::*)(::by_ref<::Unity::Cinemachine::LensSettings>, float_t)>(&::Unity::Cinemachine::LensSettings::Lerp)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xaeb8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LensSettings::*)()>(&::Unity::Cinemachine::LensSettings::Validate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaeb8ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LensSettings.AreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Cinemachine::LensSettings>, ::by_ref<::Unity::Cinemachine::LensSettings>)>(&::Unity::Cinemachine::LensSettings::AreEqual)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xaeb8c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"AreEqual", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::LensSettings::get_Orthographic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Orthographic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::LensSettings::get_IsPhysicalCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_IsPhysicalCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Unity::Cinemachine::LensSettings::get_Aspect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Aspect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Cinemachine::LensSettings Unity::Cinemachine::LensSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LensSettings>(nullptr, ___internal_method);
}
inline ::Unity::Cinemachine::LensSettings Unity::Cinemachine::LensSettings::FromCamera(::UnityEngine::Camera*  fromCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"FromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LensSettings>(nullptr, ___internal_method, fromCamera);
}
inline void Unity::Cinemachine::LensSettings::PullInheritedPropertiesFromCamera(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"PullInheritedPropertiesFromCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
inline void Unity::Cinemachine::LensSettings::CopyCameraMode(::by_ref<::Unity::Cinemachine::LensSettings>  fromLens)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"CopyCameraMode", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fromLens);
}
inline ::Unity::Cinemachine::LensSettings Unity::Cinemachine::LensSettings::Lerp(::Unity::Cinemachine::LensSettings  lensA, ::Unity::Cinemachine::LensSettings  lensB, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LensSettings>(nullptr, ___internal_method, lensA, lensB, t);
}
inline void Unity::Cinemachine::LensSettings::Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::LensSettings>  lensB, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lensB, t);
}
inline void Unity::Cinemachine::LensSettings::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::LensSettings::AreEqual(::by_ref<::Unity::Cinemachine::LensSettings>  a, ::by_ref<::Unity::Cinemachine::LensSettings>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettings>(),
                        {"AreEqual", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "FieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OrthographicSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FarClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dutch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModeOverride", ty: "::GlobalNamespace::LensSettings_OverrideModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PhysicalProperties", ty: "::GlobalNamespace::LensSettings_PhysicalSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OrthoFromCamera", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PhysicalFromCamera", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AspectFromCamera", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::LensSettings::LensSettings(float_t  FieldOfView, float_t  OrthographicSize, float_t  NearClipPlane, float_t  FarClipPlane, float_t  Dutch, ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride, ::GlobalNamespace::LensSettings_PhysicalSettings  PhysicalProperties, bool  m_OrthoFromCamera, bool  m_PhysicalFromCamera, float_t  m_AspectFromCamera) noexcept  {
this->FieldOfView = FieldOfView;
this->OrthographicSize = OrthographicSize;
this->NearClipPlane = NearClipPlane;
this->FarClipPlane = FarClipPlane;
this->Dutch = Dutch;
this->ModeOverride = ModeOverride;
this->PhysicalProperties = PhysicalProperties;
this->m_OrthoFromCamera = m_OrthoFromCamera;
this->m_PhysicalFromCamera = m_PhysicalFromCamera;
this->m_AspectFromCamera = m_AspectFromCamera;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LensSettings::LensSettings()   {
}

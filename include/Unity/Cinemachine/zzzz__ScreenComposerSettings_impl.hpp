#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ScreenComposerSettings.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_DeadZoneSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_HardLimitSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_DeadZoneSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_HardLimitSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ScreenComposerSettings::*)()>(&::Unity::Cinemachine::ScreenComposerSettings::Validate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaebafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.get_EffectiveDeadZoneSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::ScreenComposerSettings::*)()>(&::Unity::Cinemachine::ScreenComposerSettings::get_EffectiveDeadZoneSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaebb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_EffectiveDeadZoneSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.get_EffectiveHardLimitSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::ScreenComposerSettings::*)()>(&::Unity::Cinemachine::ScreenComposerSettings::get_EffectiveHardLimitSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaebb078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_EffectiveHardLimitSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.get_DeadZoneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::ScreenComposerSettings::*)()>(&::Unity::Cinemachine::ScreenComposerSettings::get_DeadZoneRect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaebb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_DeadZoneRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.set_DeadZoneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ScreenComposerSettings::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::ScreenComposerSettings::set_DeadZoneRect)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaebb0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"set_DeadZoneRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.get_HardLimitsRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::ScreenComposerSettings::*)()>(&::Unity::Cinemachine::ScreenComposerSettings::get_HardLimitsRect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaebb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_HardLimitsRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.set_HardLimitsRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ScreenComposerSettings::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::ScreenComposerSettings::set_HardLimitsRect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaebb1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"set_HardLimitsRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (*)(::by_ref<::Unity::Cinemachine::ScreenComposerSettings>, ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>, float_t)>(&::Unity::Cinemachine::ScreenComposerSettings::Lerp)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xaebb228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Cinemachine::ScreenComposerSettings>, ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>)>(&::Unity::Cinemachine::ScreenComposerSettings::Approximately)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xaebb3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Approximately", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ScreenComposerSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (*)()>(&::Unity::Cinemachine::ScreenComposerSettings::get_Default)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaebb6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::ScreenComposerSettings::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::ScreenComposerSettings::get_EffectiveDeadZoneSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_EffectiveDeadZoneSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::ScreenComposerSettings::get_EffectiveHardLimitSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_EffectiveHardLimitSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Rect Unity::Cinemachine::ScreenComposerSettings::get_DeadZoneRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_DeadZoneRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline void Unity::Cinemachine::ScreenComposerSettings::set_DeadZoneRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"set_DeadZoneRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rect Unity::Cinemachine::ScreenComposerSettings::get_HardLimitsRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_HardLimitsRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method);
}
inline void Unity::Cinemachine::ScreenComposerSettings::set_HardLimitsRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"set_HardLimitsRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::ScreenComposerSettings::Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(nullptr, ___internal_method, a, b, t);
}
inline bool Unity::Cinemachine::ScreenComposerSettings::Approximately(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::ScreenComposerSettings>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"Approximately", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::ScreenComposerSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::ScreenComposerSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ScreenComposerSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeadZone", ty: "::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HardLimits", ty: "::GlobalNamespace::ScreenComposerSettings_HardLimitSettings", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::ScreenComposerSettings::ScreenComposerSettings(::UnityEngine::Vector2  ScreenPosition, ::GlobalNamespace::ScreenComposerSettings_DeadZoneSettings  DeadZone, ::GlobalNamespace::ScreenComposerSettings_HardLimitSettings  HardLimits) noexcept  {
this->ScreenPosition = ScreenPosition;
this->DeadZone = DeadZone;
this->HardLimits = HardLimits;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ScreenComposerSettings::ScreenComposerSettings()   {
}

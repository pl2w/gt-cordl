#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisState_Recentering.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)(bool, float_t, float_t)>(&::GlobalNamespace::AxisState_Recentering::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaec2fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)()>(&::GlobalNamespace::AxisState_Recentering::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaec3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.CopyStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)(::by_ref<::GlobalNamespace::AxisState_Recentering>)>(&::GlobalNamespace::AxisState_Recentering::CopyStateFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaec3754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AxisState_Recentering>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.CancelRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)()>(&::GlobalNamespace::AxisState_Recentering::CancelRecentering)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaec3770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"CancelRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.RecenterNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)()>(&::GlobalNamespace::AxisState_Recentering::RecenterNow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec3790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"RecenterNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.DoRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AxisState_Recentering::*)(::by_ref<::Unity::Cinemachine::AxisState>, float_t, float_t)>(&::GlobalNamespace::AxisState_Recentering::DoRecentering)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaec379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"DoRecentering", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AxisState_Recentering.LegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AxisState_Recentering::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::AxisState_Recentering::LegacyUpgrade)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaec39cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"LegacyUpgrade", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AxisState_Recentering::_ctor(bool  enabled, float_t  waitTime, float_t  recenteringTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enabled, waitTime, recenteringTime);
}
inline void GlobalNamespace::AxisState_Recentering::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AxisState_Recentering::CopyStateFrom(::by_ref<::GlobalNamespace::AxisState_Recentering>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AxisState_Recentering>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void GlobalNamespace::AxisState_Recentering::CancelRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"CancelRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AxisState_Recentering::RecenterNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"RecenterNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AxisState_Recentering::DoRecentering(::by_ref<::Unity::Cinemachine::AxisState>  axis, float_t  deltaTime, float_t  recenterTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"DoRecentering", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, axis, deltaTime, recenterTarget);
}
inline bool GlobalNamespace::AxisState_Recentering::LegacyUpgrade(::by_ref<int32_t>  heading, ::by_ref<int32_t>  velocityFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AxisState_Recentering>(),
                        {"LegacyUpgrade", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, heading, velocityFilter);
}
// Ctor Parameters [CppParam { name: "m_enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WaitTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RecenteringTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LastUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mLastAxisInputTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mRecenteringVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LegacyHeadingDefinition", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LegacyVelocityFilterStrength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AxisState_Recentering::AxisState_Recentering(bool  m_enabled, float_t  m_WaitTime, float_t  m_RecenteringTime, float_t  m_LastUpdateTime, float_t  mLastAxisInputTime, float_t  mRecenteringVelocity, int32_t  m_LegacyHeadingDefinition, int32_t  m_LegacyVelocityFilterStrength) noexcept  {
this->m_enabled = m_enabled;
this->m_WaitTime = m_WaitTime;
this->m_RecenteringTime = m_RecenteringTime;
this->m_LastUpdateTime = m_LastUpdateTime;
this->mLastAxisInputTime = mLastAxisInputTime;
this->mRecenteringVelocity = mRecenteringVelocity;
this->m_LegacyHeadingDefinition = m_LegacyHeadingDefinition;
this->m_LegacyVelocityFilterStrength = m_LegacyVelocityFilterStrength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AxisState_Recentering::AxisState_Recentering()   {
}

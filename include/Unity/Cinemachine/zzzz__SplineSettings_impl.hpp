#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SplineSettings.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CachedScaledSpline_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::SplineSettings.ChangeUnitPreservePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineSettings::*)(::UnityEngine::Splines::PathIndexUnit)>(&::Unity::Cinemachine::SplineSettings::ChangeUnitPreservePosition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaebe0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"ChangeUnitPreservePosition", {}, {::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineSettings.GetCachedSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CachedScaledSpline* (::Unity::Cinemachine::SplineSettings::*)()>(&::Unity::Cinemachine::SplineSettings::GetCachedSpline)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaebe144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"GetCachedSpline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SplineSettings.InvalidateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SplineSettings::*)()>(&::Unity::Cinemachine::SplineSettings::InvalidateCache)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaebe284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"InvalidateCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::SplineSettings::ChangeUnitPreservePosition(::UnityEngine::Splines::PathIndexUnit  newUnits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"ChangeUnitPreservePosition", {}, {::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newUnits);
}
inline ::Unity::Cinemachine::CachedScaledSpline* Unity::Cinemachine::SplineSettings::GetCachedSpline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"GetCachedSpline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CachedScaledSpline*>(*this, ___internal_method);
}
inline void Unity::Cinemachine::SplineSettings::InvalidateCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SplineSettings>(),
                        {"InvalidateCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityW<::UnityEngine::Splines::SplineContainer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Units", ty: "::UnityEngine::Splines::PathIndexUnit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CachedSpline", ty: "::Unity::Cinemachine::CachedScaledSpline*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CachedFrame", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::SplineSettings::SplineSettings(::UnityW<::UnityEngine::Splines::SplineContainer>  Spline, float_t  Position, ::UnityEngine::Splines::PathIndexUnit  Units, ::Unity::Cinemachine::CachedScaledSpline*  m_CachedSpline, int32_t  m_CachedFrame) noexcept  {
this->Spline = Spline;
this->Position = Position;
this->Units = Units;
this->m_CachedSpline = m_CachedSpline;
this->m_CachedFrame = m_CachedFrame;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SplineSettings::SplineSettings()   {
}

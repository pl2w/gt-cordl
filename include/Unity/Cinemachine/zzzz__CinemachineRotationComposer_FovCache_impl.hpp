#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotationComposer_FovCache.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineRotationComposer_FovCache.UpdateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineRotationComposer_FovCache::*)(::by_ref<::Unity::Cinemachine::LensSettings>, ::UnityEngine::Rect, ::UnityEngine::Rect, float_t)>(&::GlobalNamespace::CinemachineRotationComposer_FovCache::UpdateCache)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xaea57dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"UpdateCache", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineRotationComposer_FovCache.ScreenToAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::CinemachineRotationComposer_FovCache::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::CinemachineRotationComposer_FovCache::ScreenToAngle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaea5fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"ScreenToAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineRotationComposer_FovCache.DirectionFromScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CinemachineRotationComposer_FovCache::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::CinemachineRotationComposer_FovCache::DirectionFromScreen)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaea5d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"DirectionFromScreen", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineRotationComposer_FovCache::UpdateCache(::by_ref<::Unity::Cinemachine::LensSettings>  lens, ::UnityEngine::Rect  softGuide, ::UnityEngine::Rect  hardGuide, float_t  targetDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"UpdateCache", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lens, softGuide, hardGuide, targetDistance);
}
inline ::UnityEngine::Vector2 GlobalNamespace::CinemachineRotationComposer_FovCache::ScreenToAngle(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"ScreenToAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, p);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CinemachineRotationComposer_FovCache::DirectionFromScreen(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineRotationComposer_FovCache>(),
                        {"DirectionFromScreen", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, p);
}
// Ctor Parameters [CppParam { name: "FovSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FovHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OrthoSizeOverDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Aspect", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DeadZoneRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HardLimitRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ScreenBounds", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HalfFovRad", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache::CinemachineRotationComposer_FovCache(::UnityEngine::Rect  FovSoftGuideRect, ::UnityEngine::Rect  FovHardGuideRect, ::UnityEngine::Vector2  Fov, float_t  m_OrthoSizeOverDistance, float_t  m_Aspect, ::UnityEngine::Rect  m_DeadZoneRect, ::UnityEngine::Rect  m_HardLimitRect, ::UnityEngine::Vector2  m_ScreenBounds, ::UnityEngine::Vector2  m_HalfFovRad) noexcept  {
this->FovSoftGuideRect = FovSoftGuideRect;
this->FovHardGuideRect = FovHardGuideRect;
this->Fov = Fov;
this->m_OrthoSizeOverDistance = m_OrthoSizeOverDistance;
this->m_Aspect = m_Aspect;
this->m_DeadZoneRect = m_DeadZoneRect;
this->m_HardLimitRect = m_HardLimitRect;
this->m_ScreenBounds = m_ScreenBounds;
this->m_HalfFovRad = m_HalfFovRad;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache::CinemachineRotationComposer_FovCache()   {
}

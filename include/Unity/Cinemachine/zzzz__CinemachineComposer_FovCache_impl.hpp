#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComposer_FovCache.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineComposer_FovCache.UpdateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineComposer_FovCache::*)(::Unity::Cinemachine::LensSettings, ::UnityEngine::Rect, ::UnityEngine::Rect, float_t)>(&::GlobalNamespace::CinemachineComposer_FovCache::UpdateCache)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xaec9cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineComposer_FovCache>(),
                        {"UpdateCache", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineComposer_FovCache.ScreenToFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::GlobalNamespace::CinemachineComposer_FovCache::*)(::UnityEngine::Rect, float_t, float_t, float_t)>(&::GlobalNamespace::CinemachineComposer_FovCache::ScreenToFOV)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xaeca514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineComposer_FovCache>(),
                        {"ScreenToFOV", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineComposer_FovCache::UpdateCache(::Unity::Cinemachine::LensSettings  lens, ::UnityEngine::Rect  softGuide, ::UnityEngine::Rect  hardGuide, float_t  targetDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineComposer_FovCache>(),
                        {"UpdateCache", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lens, softGuide, hardGuide, targetDistance);
}
inline ::UnityEngine::Rect GlobalNamespace::CinemachineComposer_FovCache::ScreenToFOV(::UnityEngine::Rect  rScreen, float_t  fov, float_t  fovH, float_t  aspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineComposer_FovCache>(),
                        {"ScreenToFOV", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(*this, ___internal_method, rScreen, fov, fovH, aspect);
}
// Ctor Parameters [CppParam { name: "mFovSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mFovHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mFovH", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mFov", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mOrthoSizeOverDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mAspect", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineComposer_FovCache::CinemachineComposer_FovCache(::UnityEngine::Rect  mFovSoftGuideRect, ::UnityEngine::Rect  mFovHardGuideRect, float_t  mFovH, float_t  mFov, float_t  mOrthoSizeOverDistance, float_t  mAspect, ::UnityEngine::Rect  mSoftGuideRect, ::UnityEngine::Rect  mHardGuideRect) noexcept  {
this->mFovSoftGuideRect = mFovSoftGuideRect;
this->mFovHardGuideRect = mFovHardGuideRect;
this->mFovH = mFovH;
this->mFov = mFov;
this->mOrthoSizeOverDistance = mOrthoSizeOverDistance;
this->mAspect = mAspect;
this->mSoftGuideRect = mSoftGuideRect;
this->mHardGuideRect = mHardGuideRect;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineComposer_FovCache::CinemachineComposer_FovCache()   {
}

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComposer_FovCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineComposer_FovCache)
namespace Unity::Cinemachine {
struct LensSettings;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineComposer_FovCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineComposer_FovCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineComposer_FovCache, "Unity.Cinemachine", "CinemachineComposer/FovCache");
// Dependencies UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineComposer/FovCache
struct CORDL_TYPE CinemachineComposer_FovCache {
public:
// Declarations
/// @brief Method ScreenToFOV, addr 0xaeca514, size 0x404, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ScreenToFOV(::UnityEngine::Rect  rScreen, float_t  fov, float_t  fovH, float_t  aspect) ;

/// @brief Method UpdateCache, addr 0xaec9cac, size 0x2a0, virtual false, abstract: false, final false
inline void UpdateCache(::Unity::Cinemachine::LensSettings  lens, ::UnityEngine::Rect  softGuide, ::UnityEngine::Rect  hardGuide, float_t  targetDistance) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineComposer_FovCache() ;

// Ctor Parameters [CppParam { name: "mFovSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "mFovHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "mFovH", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mFov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mOrthoSizeOverDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mAspect", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "mHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineComposer_FovCache(::UnityEngine::Rect  mFovSoftGuideRect, ::UnityEngine::Rect  mFovHardGuideRect, float_t  mFovH, float_t  mFov, float_t  mOrthoSizeOverDistance, float_t  mAspect, ::UnityEngine::Rect  mSoftGuideRect, ::UnityEngine::Rect  mHardGuideRect) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field mFovSoftGuideRect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  mFovSoftGuideRect;

/// @brief Field mFovHardGuideRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  mFovHardGuideRect;

/// @brief Field mFovH, offset: 0x20, size: 0x4, def value: None
 float_t  mFovH;

/// @brief Field mFov, offset: 0x24, size: 0x4, def value: None
 float_t  mFov;

/// @brief Field mOrthoSizeOverDistance, offset: 0x28, size: 0x4, def value: None
 float_t  mOrthoSizeOverDistance;

/// @brief Field mAspect, offset: 0x2c, size: 0x4, def value: None
 float_t  mAspect;

/// @brief Field mSoftGuideRect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  mSoftGuideRect;

/// @brief Field mHardGuideRect, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rect  mHardGuideRect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mFovSoftGuideRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mFovHardGuideRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mFovH) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mFov) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mOrthoSizeOverDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mAspect) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mSoftGuideRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineComposer_FovCache, mHardGuideRect) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineComposer_FovCache) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotationComposer_FovCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineRotationComposer_FovCache)
namespace Unity::Cinemachine {
struct LensSettings;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineRotationComposer_FovCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineRotationComposer_FovCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineRotationComposer_FovCache, "Unity.Cinemachine", "CinemachineRotationComposer/FovCache");
// Dependencies UnityEngine.Rect, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineRotationComposer/FovCache
struct CORDL_TYPE CinemachineRotationComposer_FovCache {
public:
// Declarations
/// [IsReadOnly]
/// @brief Method DirectionFromScreen, addr 0xaea5d4c, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DirectionFromScreen(::UnityEngine::Vector2  p) ;

/// [IsReadOnly]
/// @brief Method ScreenToAngle, addr 0xaea5fa4, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ScreenToAngle(::UnityEngine::Vector2  p) ;

/// @brief Method UpdateCache, addr 0xaea57dc, size 0x350, virtual false, abstract: false, final false
inline void UpdateCache(::by_ref<::Unity::Cinemachine::LensSettings>  lens, ::UnityEngine::Rect  softGuide, ::UnityEngine::Rect  hardGuide, float_t  targetDistance) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineRotationComposer_FovCache() ;

// Ctor Parameters [CppParam { name: "FovSoftGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "FovHardGuideRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OrthoSizeOverDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Aspect", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeadZoneRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HardLimitRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ScreenBounds", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HalfFovRad", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineRotationComposer_FovCache(::UnityEngine::Rect  FovSoftGuideRect, ::UnityEngine::Rect  FovHardGuideRect, ::UnityEngine::Vector2  Fov, float_t  m_OrthoSizeOverDistance, float_t  m_Aspect, ::UnityEngine::Rect  m_DeadZoneRect, ::UnityEngine::Rect  m_HardLimitRect, ::UnityEngine::Vector2  m_ScreenBounds, ::UnityEngine::Vector2  m_HalfFovRad) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field FovSoftGuideRect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  FovSoftGuideRect;

/// @brief Field FovHardGuideRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  FovHardGuideRect;

/// @brief Field Fov, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  Fov;

/// @brief Field m_OrthoSizeOverDistance, offset: 0x28, size: 0x4, def value: None
 float_t  m_OrthoSizeOverDistance;

/// @brief Field m_Aspect, offset: 0x2c, size: 0x4, def value: None
 float_t  m_Aspect;

/// @brief Field m_DeadZoneRect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  m_DeadZoneRect;

/// @brief Field m_HardLimitRect, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rect  m_HardLimitRect;

/// @brief Field m_ScreenBounds, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_ScreenBounds;

/// @brief Field m_HalfFovRad, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_HalfFovRad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, FovSoftGuideRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, FovHardGuideRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, Fov) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_OrthoSizeOverDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_Aspect) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_DeadZoneRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_HardLimitRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_ScreenBounds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineRotationComposer_FovCache, m_HalfFovRad) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineRotationComposer_FovCache) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

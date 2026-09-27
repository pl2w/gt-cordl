#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner2D_ShapeCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineConfiner2D_ShapeCache)
namespace GlobalNamespace {
struct CinemachineConfiner2D_OversizeWindowSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class ConfinerOven;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineConfiner2D_ShapeCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineConfiner2D_ShapeCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, "Unity.Cinemachine", "CinemachineConfiner2D/ShapeCache");
// Dependencies Unity.Cinemachine.CinemachineConfiner2D::OversizeWindowSettings, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineConfiner2D/ShapeCache
struct CORDL_TYPE CinemachineConfiner2D_ShapeCache {
public:
// Declarations
/// @brief Method CalculateDeltaTransformationMatrix, addr 0xae8b3f4, size 0x10c, virtual false, abstract: false, final false
inline void CalculateDeltaTransformationMatrix() ;

/// @brief Method Invalidate, addr 0xae89e84, size 0xb0, virtual false, abstract: false, final false
inline void Invalidate() ;

/// @brief Method IsValid, addr 0xae8b294, size 0x160, virtual false, abstract: false, final false
inline bool IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider2D*>  boundingShape2D, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings>  oversize, float_t  aspectRatio) ;

/// @brief Method ValidateCache, addr 0xae8a060, size 0xa00, virtual false, abstract: false, final false
inline bool ValidateCache(::UnityEngine::Collider2D*  boundingShape2D, ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  oversize, float_t  aspectRatio, ::by_ref<bool>  confinerStateChanged) ;

/// [CompilerGenerated]
/// @brief Method <ValidateCache>g__HasAnyPoints|10_0, addr 0xae8b500, size 0xb4, virtual false, abstract: false, final false
static inline bool _ValidateCache_g__HasAnyPoints_10_0(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  originalPath) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner2D_ShapeCache() ;

// Ctor Parameters [CppParam { name: "ConfinerOven", ty: "::Unity::Cinemachine::ConfinerOven*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OriginalPath", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaWorldToBaked", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaBakedToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "AspectRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OversizeWindowSettings", ty: "::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxComputationTimePerFrameInSeconds", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BakedToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BoundingShape2D", ty: "::UnityW<::UnityEngine::Collider2D>", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineConfiner2D_ShapeCache(::Unity::Cinemachine::ConfinerOven*  ConfinerOven, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  OriginalPath, ::UnityEngine::Matrix4x4  DeltaWorldToBaked, ::UnityEngine::Matrix4x4  DeltaBakedToWorld, float_t  AspectRatio, ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  m_OversizeWindowSettings, float_t  MaxComputationTimePerFrameInSeconds, ::UnityEngine::Matrix4x4  m_BakedToWorld, ::UnityW<::UnityEngine::Collider2D>  m_BoundingShape2D) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field ConfinerOven, offset: 0x0, size: 0x8, def value: None
 ::Unity::Cinemachine::ConfinerOven*  ConfinerOven;

/// @brief Field OriginalPath, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  OriginalPath;

/// @brief Field DeltaWorldToBaked, offset: 0x10, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  DeltaWorldToBaked;

/// @brief Field DeltaBakedToWorld, offset: 0x50, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  DeltaBakedToWorld;

/// @brief Field AspectRatio, offset: 0x90, size: 0x4, def value: None
 float_t  AspectRatio;

/// @brief Field m_OversizeWindowSettings, offset: 0x94, size: 0xc, def value: None
 ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  m_OversizeWindowSettings;

/// @brief Field MaxComputationTimePerFrameInSeconds, offset: 0xa0, size: 0x4, def value: None
 float_t  MaxComputationTimePerFrameInSeconds;

/// @brief Field m_BakedToWorld, offset: 0xa4, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  m_BakedToWorld;

/// @brief Field m_BoundingShape2D, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  m_BoundingShape2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, ConfinerOven) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, OriginalPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, DeltaWorldToBaked) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, DeltaBakedToWorld) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, AspectRatio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, m_OversizeWindowSettings) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, MaxComputationTimePerFrameInSeconds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, m_BakedToWorld) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache, m_BoundingShape2D) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineConfiner2D_ShapeCache) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace

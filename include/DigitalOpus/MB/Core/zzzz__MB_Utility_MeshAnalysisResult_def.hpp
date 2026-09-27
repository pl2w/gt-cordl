#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MB_Utility_MeshAnalysisResult)
// Forward declare root types
namespace GlobalNamespace {
struct MB_Utility_MeshAnalysisResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB_Utility_MeshAnalysisResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_Utility_MeshAnalysisResult, "DigitalOpus.MB.Core", "MB_Utility/MeshAnalysisResult");
// Dependencies UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult
struct CORDL_TYPE MB_Utility_MeshAnalysisResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MB_Utility_MeshAnalysisResult() ;

// Ctor Parameters [CppParam { name: "uvRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasOutOfBoundsUVs", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasOverlappingSubmeshVerts", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasUVs", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "submeshArea", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MB_Utility_MeshAnalysisResult(::UnityEngine::Rect  uvRect, bool  hasOutOfBoundsUVs, bool  hasOverlappingSubmeshVerts, bool  hasUVs, float_t  submeshArea) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field uvRect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  uvRect;

/// @brief Field hasOutOfBoundsUVs, offset: 0x10, size: 0x1, def value: None
 bool  hasOutOfBoundsUVs;

/// @brief Field hasOverlappingSubmeshVerts, offset: 0x11, size: 0x1, def value: None
 bool  hasOverlappingSubmeshVerts;

/// @brief Field hasUVs, offset: 0x12, size: 0x1, def value: None
 bool  hasUVs;

/// @brief Field submeshArea, offset: 0x14, size: 0x4, def value: None
 float_t  submeshArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_Utility_MeshAnalysisResult, uvRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_Utility_MeshAnalysisResult, hasOutOfBoundsUVs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_Utility_MeshAnalysisResult, hasOverlappingSubmeshVerts) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_Utility_MeshAnalysisResult, hasUVs) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_Utility_MeshAnalysisResult, submeshArea) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_Utility_MeshAnalysisResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

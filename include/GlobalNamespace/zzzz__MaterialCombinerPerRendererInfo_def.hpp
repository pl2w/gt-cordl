#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialCombinerPerRendererInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialCombinerPerRendererInfo)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct MaterialCombinerPerRendererInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MaterialCombinerPerRendererInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialCombinerPerRendererInfo, "", "MaterialCombinerPerRendererInfo");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: MaterialCombinerPerRendererInfo
struct CORDL_TYPE MaterialCombinerPerRendererInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MaterialCombinerPerRendererInfo() ;

// Ctor Parameters [CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "slotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sliceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "oldMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "wasMeshCombined", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MaterialCombinerPerRendererInfo(::UnityW<::UnityEngine::Renderer>  renderer, int32_t  slotIndex, int32_t  sliceIndex, ::UnityEngine::Color  baseColor, ::UnityW<::UnityEngine::Material>  oldMat, bool  wasMeshCombined) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field renderer, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field slotIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  slotIndex;

/// @brief Field sliceIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  sliceIndex;

/// @brief Field baseColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  baseColor;

/// @brief Field oldMat, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  oldMat;

/// @brief Field wasMeshCombined, offset: 0x28, size: 0x1, def value: None
 bool  wasMeshCombined;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, renderer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, slotIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, sliceIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, baseColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, oldMat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererInfo, wasMeshCombined) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialCombinerPerRendererInfo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

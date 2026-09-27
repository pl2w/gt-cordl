#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass_BloomMaterialParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PostProcessPass_BloomMaterialParams)
// Forward declare root types
namespace GlobalNamespace {
struct PostProcessPass_BloomMaterialParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostProcessPass_BloomMaterialParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostProcessPass_BloomMaterialParams, "UnityEngine.Rendering.Universal", "PostProcessPass/BloomMaterialParams");
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/BloomMaterialParams
struct CORDL_TYPE PostProcessPass_BloomMaterialParams {
public:
// Declarations
/// @brief Method Equals, addr 0xb279e00, size 0x68, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::GlobalNamespace::PostProcessPass_BloomMaterialParams>  other) ;

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessPass_BloomMaterialParams() ;

// Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PostProcessPass_BloomMaterialParams(::UnityEngine::Vector4  parameters, bool  highQualityFiltering, bool  enableAlphaOutput) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field parameters, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  parameters;

/// @brief Field highQualityFiltering, offset: 0x10, size: 0x1, def value: None
 bool  highQualityFiltering;

/// @brief Field enableAlphaOutput, offset: 0x11, size: 0x1, def value: None
 bool  enableAlphaOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PostProcessPass_BloomMaterialParams, parameters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_BloomMaterialParams, highQualityFiltering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PostProcessPass_BloomMaterialParams, enableAlphaOutput) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PostProcessPass_BloomMaterialParams) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass_BlitMaterialData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FinalBlitPass_BlitMaterialData)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct FinalBlitPass_BlitMaterialData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FinalBlitPass_BlitMaterialData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FinalBlitPass_BlitMaterialData, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/BlitMaterialData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/BlitMaterialData
struct CORDL_TYPE FinalBlitPass_BlitMaterialData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FinalBlitPass_BlitMaterialData() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "nearestSamplerPass", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bilinearSamplerPass", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FinalBlitPass_BlitMaterialData(::UnityW<::UnityEngine::Material>  material, int32_t  nearestSamplerPass, int32_t  bilinearSamplerPass) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field nearestSamplerPass, offset: 0x8, size: 0x4, def value: None
 int32_t  nearestSamplerPass;

/// @brief Field bilinearSamplerPass, offset: 0xc, size: 0x4, def value: None
 int32_t  bilinearSamplerPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FinalBlitPass_BlitMaterialData, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FinalBlitPass_BlitMaterialData, nearestSamplerPass) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FinalBlitPass_BlitMaterialData, bilinearSamplerPass) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FinalBlitPass_BlitMaterialData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_DisableByLiquidData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScienceExperimentManager_DisableByLiquidData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_DisableByLiquidData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData, "GorillaTag", "ScienceExperimentManager/DisableByLiquidData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/DisableByLiquidData
struct CORDL_TYPE ScienceExperimentManager_DisableByLiquidData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_DisableByLiquidData() ;

// Ctor Parameters [CppParam { name: "target", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_DisableByLiquidData(::UnityW<::UnityEngine::Transform>  target, float_t  heightOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4640};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field target, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field heightOffset, offset: 0x8, size: 0x4, def value: None
 float_t  heightOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData, heightOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

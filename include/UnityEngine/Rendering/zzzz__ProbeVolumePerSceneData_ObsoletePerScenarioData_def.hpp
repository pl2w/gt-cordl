#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumePerSceneData_ObsoletePerScenarioData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumePerSceneData_ObsoletePerScenarioData)
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumePerSceneData_ObsoletePerScenarioData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData, "UnityEngine.Rendering", "ProbeVolumePerSceneData/ObsoletePerScenarioData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData/ObsoletePerScenarioData
struct CORDL_TYPE ProbeVolumePerSceneData_ObsoletePerScenarioData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumePerSceneData_ObsoletePerScenarioData() ;

// Ctor Parameters [CppParam { name: "sceneHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cellDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cellOptionalDataAsset", ty: "::UnityW<::UnityEngine::TextAsset>", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumePerSceneData_ObsoletePerScenarioData(int32_t  sceneHash, ::UnityW<::UnityEngine::TextAsset>  cellDataAsset, ::UnityW<::UnityEngine::TextAsset>  cellOptionalDataAsset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sceneHash, offset: 0x0, size: 0x4, def value: None
 int32_t  sceneHash;

/// @brief Field cellDataAsset, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  cellDataAsset;

/// @brief Field cellOptionalDataAsset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  cellOptionalDataAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData, sceneHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData, cellDataAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData, cellOptionalDataAsset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

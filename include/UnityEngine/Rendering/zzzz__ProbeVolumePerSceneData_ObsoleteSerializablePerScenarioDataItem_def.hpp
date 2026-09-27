#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeVolumePerSceneData_ObsoletePerScenarioData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, "UnityEngine.Rendering", "ProbeVolumePerSceneData/ObsoleteSerializablePerScenarioDataItem");
// Dependencies UnityEngine.Rendering.ProbeVolumePerSceneData::ObsoletePerScenarioData
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData/ObsoleteSerializablePerScenarioDataItem
struct CORDL_TYPE ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem() ;

// Ctor Parameters [CppParam { name: "scenario", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem(::StringW  scenario, ::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16867};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field scenario, offset: 0x0, size: 0x8, def value: None
 ::StringW  scenario;

/// @brief Field data, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, scenario) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem, data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

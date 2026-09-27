#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet_SerializedPerSceneCellList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSet_SerializedPerSceneCellList)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeBakingSet_SerializedPerSceneCellList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeBakingSet_SerializedPerSceneCellList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeBakingSet_SerializedPerSceneCellList, "UnityEngine.Rendering", "ProbeVolumeBakingSet/SerializedPerSceneCellList");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/SerializedPerSceneCellList
struct CORDL_TYPE ProbeVolumeBakingSet_SerializedPerSceneCellList {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingSet_SerializedPerSceneCellList() ;

// Ctor Parameters [CppParam { name: "sceneGUID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "cellList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingSet_SerializedPerSceneCellList(::StringW  sceneGUID, ::System::Collections::Generic::List_1<int32_t>*  cellList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16856};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sceneGUID, offset: 0x0, size: 0x8, def value: None
 ::StringW  sceneGUID;

/// @brief Field cellList, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  cellList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_SerializedPerSceneCellList, sceneGUID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_SerializedPerSceneCellList, cellList) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeBakingSet_SerializedPerSceneCellList) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumePerSceneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProbeVolumePerSceneData)
namespace GlobalNamespace {
struct ProbeVolumePerSceneData_ObsoletePerScenarioData;
}
namespace GlobalNamespace {
struct ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
class ObsoleteProbeVolumeAsset;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumePerSceneData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeVolumePerSceneData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeVolumePerSceneData*, "UnityEngine.Rendering", "ProbeVolumePerSceneData");
// [ExecuteAlways]
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumePerSceneData
class CORDL_TYPE ProbeVolumePerSceneData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ObsoletePerScenarioData = ::GlobalNamespace::ProbeVolumePerSceneData_ObsoletePerScenarioData;

using ObsoleteSerializablePerScenarioDataItem = ::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem;

 __declspec(property(get=get_bakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>  bakingSet;

/// @brief Field obsoleteAsset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_obsoleteAsset, put=__cordl_internal_set_obsoleteAsset)) ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>  obsoleteAsset;

/// @brief Field obsoleteCellSharedDataAsset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_obsoleteCellSharedDataAsset, put=__cordl_internal_set_obsoleteCellSharedDataAsset)) ::UnityW<::UnityEngine::TextAsset>  obsoleteCellSharedDataAsset;

/// @brief Field obsoleteCellSupportDataAsset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_obsoleteCellSupportDataAsset, put=__cordl_internal_set_obsoleteCellSupportDataAsset)) ::UnityW<::UnityEngine::TextAsset>  obsoleteCellSupportDataAsset;

/// @brief Field obsoleteSerializedScenarios, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_obsoleteSerializedScenarios, put=__cordl_internal_set_obsoleteSerializedScenarios)) ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*  obsoleteSerializedScenarios;

/// @brief Field sceneGUID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneGUID, put=__cordl_internal_set_sceneGUID)) ::StringW  sceneGUID;

/// @brief Field serializedBakingSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedBakingSet, put=__cordl_internal_set_serializedBakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>  serializedBakingSet;

/// @brief Method Clear, addr 0xb166a74, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Initialize, addr 0xb166da0, size 0xac, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::UnityEngine::Rendering::ProbeVolumePerSceneData* New_ctor() ;

/// @brief Method OnDisable, addr 0xb166cf8, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb166c5c, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb166d9c, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method QueueSceneLoading, addr 0xb166b78, size 0xe4, virtual false, abstract: false, final false
inline void QueueSceneLoading() ;

/// @brief Method QueueSceneRemoval, addr 0xb166a94, size 0xe4, virtual false, abstract: false, final false
inline void QueueSceneRemoval() ;

/// @brief Method ResolveCellData, addr 0xb166e4c, size 0x98, virtual false, abstract: false, final false
inline bool ResolveCellData() ;

constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset> const& __cordl_internal_get_obsoleteAsset() const;

constexpr ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>& __cordl_internal_get_obsoleteAsset() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_obsoleteCellSharedDataAsset() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_obsoleteCellSharedDataAsset() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_obsoleteCellSupportDataAsset() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_obsoleteCellSupportDataAsset() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>* const& __cordl_internal_get_obsoleteSerializedScenarios() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*& __cordl_internal_get_obsoleteSerializedScenarios() ;

constexpr ::StringW const& __cordl_internal_get_sceneGUID() const;

constexpr ::StringW& __cordl_internal_get_sceneGUID() ;

constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> const& __cordl_internal_get_serializedBakingSet() const;

constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>& __cordl_internal_get_serializedBakingSet() ;

constexpr void __cordl_internal_set_obsoleteAsset(::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>  value) ;

constexpr void __cordl_internal_set_obsoleteCellSharedDataAsset(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_obsoleteCellSupportDataAsset(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_obsoleteSerializedScenarios(::System::Collections::Generic::List_1<::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*  value) ;

constexpr void __cordl_internal_set_sceneGUID(::StringW  value) ;

constexpr void __cordl_internal_set_serializedBakingSet(::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>  value) ;

/// @brief Method .ctor, addr 0xb166ee4, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bakingSet, addr 0xb166a6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> get_bakingSet() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumePerSceneData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProbeVolumePerSceneData(ProbeVolumePerSceneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProbeVolumePerSceneData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProbeVolumePerSceneData(ProbeVolumePerSceneData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16868};

/// [SerializeField]
/// [FormerlySerializedAs("bakingSet")]
/// @brief Field serializedBakingSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>  ___serializedBakingSet;

/// [SerializeField]
/// @brief Field sceneGUID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___sceneGUID;

/// [FormerlySerializedAs("asset")]
/// [SerializeField]
/// @brief Field obsoleteAsset, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::ObsoleteProbeVolumeAsset>  ___obsoleteAsset;

/// [FormerlySerializedAs("cellSharedDataAsset")]
/// [SerializeField]
/// @brief Field obsoleteCellSharedDataAsset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___obsoleteCellSharedDataAsset;

/// [FormerlySerializedAs("cellSupportDataAsset")]
/// [SerializeField]
/// @brief Field obsoleteCellSupportDataAsset, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___obsoleteCellSupportDataAsset;

/// [FormerlySerializedAs("serializedScenarios")]
/// [SerializeField]
/// @brief Field obsoleteSerializedScenarios, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>*  ___obsoleteSerializedScenarios;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___serializedBakingSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___sceneGUID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteAsset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteCellSharedDataAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteCellSupportDataAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumePerSceneData, ___obsoleteSerializedScenarios) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeVolumePerSceneData) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

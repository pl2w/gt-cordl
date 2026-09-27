#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerGrouper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouper)
namespace DigitalOpus::MB::Core {
class GrouperData;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperBehaviour;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSettingsData;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSettings;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettingsHolder;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace GlobalNamespace {
class MB3_MeshBakerCommon;
}
namespace GlobalNamespace {
struct MB3_MeshBakerGrouper_ClusterType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_MeshBakerGrouper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_MeshBakerGrouper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerGrouper*, "", "MB3_MeshBakerGrouper");
// Dependencies MB3_MeshBakerGrouper::ClusterType, UnityEngine.Bounds, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerGrouper
class CORDL_TYPE MB3_MeshBakerGrouper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClusterType = ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType;

/// @brief Field WHITE_TRANSP, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_WHITE_TRANSP, put=setStaticF_WHITE_TRANSP)) ::UnityEngine::Color  WHITE_TRANSP;

/// @brief Field clusterType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_clusterType, put=__cordl_internal_set_clusterType)) ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  clusterType;

/// @brief Field data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::GrouperData*  data;

/// @brief Field grouper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_grouper, put=__cordl_internal_set_grouper)) ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*  grouper;

/// @brief Field meshBakerSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBakerSettings, put=__cordl_internal_set_meshBakerSettings)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  meshBakerSettings;

/// @brief Field meshBakerSettingsAsset, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBakerSettingsAsset, put=__cordl_internal_set_meshBakerSettingsAsset)) ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>  meshBakerSettingsAsset;

/// @brief Field parentSceneObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentSceneObject, put=__cordl_internal_set_parentSceneObject)) ::UnityW<::UnityEngine::Transform>  parentSceneObject;

/// @brief Field prefabOptions_autoGeneratePrefabs, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_prefabOptions_autoGeneratePrefabs, put=__cordl_internal_set_prefabOptions_autoGeneratePrefabs)) bool  prefabOptions_autoGeneratePrefabs;

/// @brief Field prefabOptions_mergeOutputIntoSinglePrefab, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_prefabOptions_mergeOutputIntoSinglePrefab, put=__cordl_internal_set_prefabOptions_mergeOutputIntoSinglePrefab)) bool  prefabOptions_mergeOutputIntoSinglePrefab;

/// @brief Field prefabOptions_outputFolder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabOptions_outputFolder, put=__cordl_internal_set_prefabOptions_outputFolder)) ::StringW  prefabOptions_outputFolder;

/// @brief Field sourceObjectBounds, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get_sourceObjectBounds, put=__cordl_internal_set_sourceObjectBounds)) ::UnityEngine::Bounds  sourceObjectBounds;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*() noexcept;

/// @brief Method CreateGrouper, addr 0x9d78038, size 0x114, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* CreateGrouper(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  t) ;

/// @brief Method DeleteAllChildMeshBakers, addr 0x9d7814c, size 0xd8, virtual false, abstract: false, final false
inline void DeleteAllChildMeshBakers() ;

/// @brief Method GenerateMeshBakers, addr 0x9d78224, size 0x4dc, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* GenerateMeshBakers() ;

/// @brief Method GetMeshBakerSettings, addr 0x9d77e08, size 0xc0, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GetMeshBakerSettings() ;

/// @brief Method GetMeshBakerSettingsAsSerializedProperty, addr 0x9d77ec8, size 0xd0, virtual true, abstract: false, final true
inline void GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj) ;

static inline ::GlobalNamespace::MB3_MeshBakerGrouper* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x9d77f98, size 0xa0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType const& __cordl_internal_get_clusterType() const;

constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType& __cordl_internal_get_clusterType() ;

constexpr ::DigitalOpus::MB::Core::GrouperData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::GrouperData*& __cordl_internal_get_data() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* const& __cordl_internal_get_grouper() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*& __cordl_internal_get_grouper() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* const& __cordl_internal_get_meshBakerSettings() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*& __cordl_internal_get_meshBakerSettings() ;

constexpr ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings> const& __cordl_internal_get_meshBakerSettingsAsset() const;

constexpr ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>& __cordl_internal_get_meshBakerSettingsAsset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentSceneObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentSceneObject() ;

constexpr bool const& __cordl_internal_get_prefabOptions_autoGeneratePrefabs() const;

constexpr bool& __cordl_internal_get_prefabOptions_autoGeneratePrefabs() ;

constexpr bool const& __cordl_internal_get_prefabOptions_mergeOutputIntoSinglePrefab() const;

constexpr bool& __cordl_internal_get_prefabOptions_mergeOutputIntoSinglePrefab() ;

constexpr ::StringW const& __cordl_internal_get_prefabOptions_outputFolder() const;

constexpr ::StringW& __cordl_internal_get_prefabOptions_outputFolder() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_sourceObjectBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_sourceObjectBounds() ;

constexpr void __cordl_internal_set_clusterType(::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  value) ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::GrouperData*  value) ;

constexpr void __cordl_internal_set_grouper(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*  value) ;

constexpr void __cordl_internal_set_meshBakerSettings(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  value) ;

constexpr void __cordl_internal_set_meshBakerSettingsAsset(::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>  value) ;

constexpr void __cordl_internal_set_parentSceneObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_prefabOptions_autoGeneratePrefabs(bool  value) ;

constexpr void __cordl_internal_set_prefabOptions_mergeOutputIntoSinglePrefab(bool  value) ;

constexpr void __cordl_internal_set_prefabOptions_outputFolder(::StringW  value) ;

constexpr void __cordl_internal_set_sourceObjectBounds(::UnityEngine::Bounds  value) ;

/// @brief Method .ctor, addr 0x9d78700, size 0xec, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_WHITE_TRANSP() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* i___DigitalOpus__MB__Core__MB_IMeshBakerSettingsHolder() noexcept;

static inline void setStaticF_WHITE_TRANSP(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouper(MB3_MeshBakerGrouper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouper(MB3_MeshBakerGrouper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22573};

/// @brief Field grouper, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*  ___grouper;

/// @brief Field clusterType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  ___clusterType;

/// @brief Field parentSceneObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentSceneObject;

/// @brief Field data, offset: 0x38, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::GrouperData*  ___data;

/// [HideInInspector]
/// @brief Field sourceObjectBounds, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___sourceObjectBounds;

/// @brief Field prefabOptions_outputFolder, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___prefabOptions_outputFolder;

/// @brief Field prefabOptions_autoGeneratePrefabs, offset: 0x60, size: 0x1, def value: None
 bool  ___prefabOptions_autoGeneratePrefabs;

/// @brief Field prefabOptions_mergeOutputIntoSinglePrefab, offset: 0x61, size: 0x1, def value: None
 bool  ___prefabOptions_mergeOutputIntoSinglePrefab;

/// @brief Field meshBakerSettingsAsset, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings>  ___meshBakerSettingsAsset;

/// @brief Field meshBakerSettings, offset: 0x70, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  ___meshBakerSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___grouper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___clusterType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___parentSceneObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___sourceObjectBounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___prefabOptions_outputFolder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___prefabOptions_autoGeneratePrefabs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___prefabOptions_mergeOutputIntoSinglePrefab) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___meshBakerSettingsAsset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerGrouper, ___meshBakerSettings) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerGrouper) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

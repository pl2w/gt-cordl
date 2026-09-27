#pragma once
// IWYU pragma private; include "Pathfinding/AstarData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AstarData)
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
struct PathProcessor_GraphUpdateLock;
}
namespace Pathfinding::Serialization {
class AstarSerializer;
}
namespace Pathfinding::Serialization {
class SerializeSettings;
}
namespace Pathfinding {
class AstarData__FindGraphsOfType_d__66;
}
namespace Pathfinding {
class AstarData__GetRaycastableGraphs_d__68;
}
namespace Pathfinding {
class AstarData__GetUpdateableGraphs_d__67;
}
namespace Pathfinding {
class AstarData___c__DisplayClass53_0;
}
namespace Pathfinding {
class AstarData___c__DisplayClass64_0;
}
namespace Pathfinding {
class AstarData___c__DisplayClass65_0;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GridGraph;
}
namespace Pathfinding {
class LayerGridGraph;
}
namespace Pathfinding {
class NavGraph;
}
namespace Pathfinding {
class NavMeshGraph;
}
namespace Pathfinding {
class PointGraph;
}
namespace Pathfinding {
class RecastGraph;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Pathfinding {
class AstarData;
}
namespace Pathfinding {
class AstarData__FindGraphsOfType_d__66;
}
namespace Pathfinding {
class AstarData__GetRaycastableGraphs_d__68;
}
namespace Pathfinding {
class AstarData__GetUpdateableGraphs_d__67;
}
namespace Pathfinding {
class AstarData___c__DisplayClass53_0;
}
namespace Pathfinding {
class AstarData___c__DisplayClass64_0;
}
namespace Pathfinding {
class AstarData___c__DisplayClass65_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarData*);
MARK_REF_T(::Pathfinding::AstarData__FindGraphsOfType_d__66*);
MARK_REF_T(::Pathfinding::AstarData__GetRaycastableGraphs_d__68*);
MARK_REF_T(::Pathfinding::AstarData__GetUpdateableGraphs_d__67*);
MARK_REF_T(::Pathfinding::AstarData___c__DisplayClass53_0*);
MARK_REF_T(::Pathfinding::AstarData___c__DisplayClass64_0*);
MARK_REF_T(::Pathfinding::AstarData___c__DisplayClass65_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData*, "Pathfinding", "AstarData");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData__FindGraphsOfType_d__66*, "Pathfinding", "AstarData/<FindGraphsOfType>d__66");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData__GetRaycastableGraphs_d__68*, "Pathfinding", "AstarData/<GetRaycastableGraphs>d__68");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData__GetUpdateableGraphs_d__67*, "Pathfinding", "AstarData/<GetUpdateableGraphs>d__67");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData___c__DisplayClass53_0*, "Pathfinding", "AstarData/<>c__DisplayClass53_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData___c__DisplayClass64_0*, "Pathfinding", "AstarData/<>c__DisplayClass64_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarData___c__DisplayClass65_0*, "Pathfinding", "AstarData/<>c__DisplayClass65_0");
// Dependencies Pathfinding.NavGraph, System.Object, System.Type
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData
class CORDL_TYPE AstarData : public ::System::Object {
public:
// Declarations
using _FindGraphsOfType_d__66 = ::Pathfinding::AstarData__FindGraphsOfType_d__66;

using _GetRaycastableGraphs_d__68 = ::Pathfinding::AstarData__GetRaycastableGraphs_d__68;

using _GetUpdateableGraphs_d__67 = ::Pathfinding::AstarData__GetUpdateableGraphs_d__67;

using __c__DisplayClass53_0 = ::Pathfinding::AstarData___c__DisplayClass53_0;

using __c__DisplayClass64_0 = ::Pathfinding::AstarData___c__DisplayClass64_0;

using __c__DisplayClass65_0 = ::Pathfinding::AstarData___c__DisplayClass65_0;

/// @brief Field <graphTypes>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__graphTypes_k__BackingField, put=__cordl_internal_set__graphTypes_k__BackingField)) ::ArrayW<::System::Type*>  _graphTypes_k__BackingField;

/// @brief Field <gridGraph>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__gridGraph_k__BackingField, put=__cordl_internal_set__gridGraph_k__BackingField)) ::Pathfinding::GridGraph*  _gridGraph_k__BackingField;

/// @brief Field <layerGridGraph>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerGridGraph_k__BackingField, put=__cordl_internal_set__layerGridGraph_k__BackingField)) ::Pathfinding::LayerGridGraph*  _layerGridGraph_k__BackingField;

/// @brief Field <navmesh>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__navmesh_k__BackingField, put=__cordl_internal_set__navmesh_k__BackingField)) ::Pathfinding::NavMeshGraph*  _navmesh_k__BackingField;

/// @brief Field <pointGraph>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointGraph_k__BackingField, put=__cordl_internal_set__pointGraph_k__BackingField)) ::Pathfinding::PointGraph*  _pointGraph_k__BackingField;

/// @brief Field <recastGraph>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recastGraph_k__BackingField, put=__cordl_internal_set__recastGraph_k__BackingField)) ::Pathfinding::RecastGraph*  _recastGraph_k__BackingField;

/// @brief Field cacheStartup, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_cacheStartup, put=__cordl_internal_set_cacheStartup)) bool  cacheStartup;

 __declspec(property(get=get_data, put=set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field dataString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataString, put=__cordl_internal_set_dataString)) ::StringW  dataString;

/// @brief Field data_cachedStartup, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_data_cachedStartup, put=__cordl_internal_set_data_cachedStartup)) ::ArrayW<uint8_t>  data_cachedStartup;

/// @brief Field file_cachedStartup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_file_cachedStartup, put=__cordl_internal_set_file_cachedStartup)) ::UnityW<::UnityEngine::TextAsset>  file_cachedStartup;

/// @brief Field graphStructureLocked, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphStructureLocked, put=__cordl_internal_set_graphStructureLocked)) ::System::Collections::Generic::List_1<bool>*  graphStructureLocked;

 __declspec(property(get=get_graphTypes, put=set_graphTypes)) ::ArrayW<::System::Type*>  graphTypes;

/// @brief Field graphs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphs, put=__cordl_internal_set_graphs)) ::ArrayW<::Pathfinding::NavGraph*>  graphs;

 __declspec(property(get=get_gridGraph, put=set_gridGraph)) ::Pathfinding::GridGraph*  gridGraph;

 __declspec(property(get=get_layerGridGraph, put=set_layerGridGraph)) ::Pathfinding::LayerGridGraph*  layerGridGraph;

 __declspec(property(get=get_navmesh, put=set_navmesh)) ::Pathfinding::NavMeshGraph*  navmesh;

 __declspec(property(get=get_pointGraph, put=set_pointGraph)) ::Pathfinding::PointGraph*  pointGraph;

 __declspec(property(get=get_recastGraph, put=set_recastGraph)) ::Pathfinding::RecastGraph*  recastGraph;

/// @brief Field upgradeData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeData, put=__cordl_internal_set_upgradeData)) ::ArrayW<uint8_t>  upgradeData;

/// [Obsolete("Use AddGraph(System.Type) instead")]
/// @brief Method AddGraph, addr 0x5e4bb48, size 0x14c, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* AddGraph(::StringW  type) ;

/// @brief Method AddGraph, addr 0x5e4bfa0, size 0x23c, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* AddGraph(::System::Type*  type) ;

/// @brief Method AddGraph, addr 0x5e4bc94, size 0x30c, virtual false, abstract: false, final false
inline void AddGraph(::Pathfinding::NavGraph*  graph) ;

/// @brief Method AssertSafe, addr 0x5e4a484, size 0x230, virtual false, abstract: false, final false
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock AssertSafe(bool  onlyAddingGraph) ;

/// @brief Method Awake, addr 0x5e4a12c, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearGraphs, addr 0x5e4aca4, size 0x164, virtual false, abstract: false, final false
inline void ClearGraphs() ;

/// [Obsolete("Use CreateGraph(System.Type) instead")]
/// @brief Method CreateGraph, addr 0x5e4b8c8, size 0x1a0, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* CreateGraph(::StringW  type) ;

/// @brief Method CreateGraph, addr 0x5e4ba68, size 0xe0, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* CreateGraph(::System::Type*  type) ;

/// @brief Method DeserializeGraphs, addr 0x5e4a310, size 0x30, virtual false, abstract: false, final false
inline void DeserializeGraphs() ;

/// @brief Method DeserializeGraphs, addr 0x5e4aac8, size 0x54, virtual false, abstract: false, final false
inline void DeserializeGraphs(::ArrayW<uint8_t>  bytes) ;

/// @brief Method DeserializeGraphsAdditive, addr 0x5e4ae0c, size 0x328, virtual false, abstract: false, final false
inline void DeserializeGraphsAdditive(::ArrayW<uint8_t>  bytes) ;

/// @brief Method DeserializeGraphsPartAdditive, addr 0x5e4b134, size 0x3f4, virtual false, abstract: false, final false
inline void DeserializeGraphsPartAdditive(::Pathfinding::Serialization::AstarSerializer*  sr) ;

/// @brief Method FindGraph, addr 0x5e49980, size 0x94, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* FindGraph(::System::Func_2<::Pathfinding::NavGraph*,bool>*  predicate) ;

/// @brief Method FindGraphOfType, addr 0x5e4aa04, size 0xc4, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* FindGraphOfType(::System::Type*  type) ;

/// @brief Method FindGraphTypes, addr 0x5e4b528, size 0x2f8, virtual false, abstract: false, final false
inline void FindGraphTypes() ;

/// @brief Method FindGraphWhichInheritsFrom, addr 0x5e4c42c, size 0xc4, virtual false, abstract: false, final false
inline ::Pathfinding::NavGraph* FindGraphWhichInheritsFrom(::System::Type*  type) ;

/// [IteratorStateMachine(typeof(Pathfinding.AstarData::<FindGraphsOfType>d__66))]
/// @brief Method FindGraphsOfType, addr 0x5e4c4f8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerable* FindGraphsOfType(::System::Type*  type) ;

/// @brief Method GetData, addr 0x5e4a124, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetData() ;

/// @brief Method GetGraph, addr 0x5e4c328, size 0xfc, virtual false, abstract: false, final false
static inline ::Pathfinding::NavGraph* GetGraph(::Pathfinding::GraphNode*  node) ;

/// @brief Method GetGraphIndex, addr 0x5e4c730, size 0xf4, virtual false, abstract: false, final false
inline int32_t GetGraphIndex(::Pathfinding::NavGraph*  graph) ;

/// [Obsolete("If really necessary. Use System.Type.GetType instead.")]
/// @brief Method GetGraphType, addr 0x5e4b828, size 0xa0, virtual false, abstract: false, final false
inline ::System::Type* GetGraphType(::StringW  type) ;

/// @brief Method GetNodes, addr 0x5e4a6b4, size 0x70, virtual false, abstract: false, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  callback) ;

/// [IteratorStateMachine(typeof(Pathfinding.AstarData::<GetRaycastableGraphs>d__68))]
/// [Obsolete("Obsolete because it is not used by the package internally and the use cases are few. Iterate through the graphs array instead.")]
/// @brief Method GetRaycastableGraphs, addr 0x5e4c67c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerable* GetRaycastableGraphs() ;

/// [IteratorStateMachine(typeof(Pathfinding.AstarData::<GetUpdateableGraphs>d__67))]
/// @brief Method GetUpdateableGraphs, addr 0x5e4c5c8, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerable* GetUpdateableGraphs() ;

/// @brief Method LoadFromCache, addr 0x5e4a1e4, size 0x12c, virtual false, abstract: false, final false
inline void LoadFromCache() ;

/// @brief Method LockGraphStructure, addr 0x5e4a340, size 0xa8, virtual false, abstract: false, final false
inline void LockGraphStructure(bool  allowAddingGraphs) ;

static inline ::Pathfinding::AstarData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e4ae08, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveGraph, addr 0x5e4c1dc, size 0x14c, virtual false, abstract: false, final false
inline bool RemoveGraph(::Pathfinding::NavGraph*  graph) ;

/// @brief Method SerializeGraphs, addr 0x5e4ab1c, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SerializeGraphs() ;

/// @brief Method SerializeGraphs, addr 0x5e4ab50, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SerializeGraphs(::Pathfinding::Serialization::SerializeSettings*  settings) ;

/// @brief Method SerializeGraphs, addr 0x5e4ab68, size 0x13c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SerializeGraphs(::Pathfinding::Serialization::SerializeSettings*  settings, ::by_ref<uint32_t>  checksum) ;

/// @brief Method SetData, addr 0x5e4a128, size 0x4, virtual false, abstract: false, final false
inline void SetData(::ArrayW<uint8_t>  data) ;

/// @brief Method UnlockGraphStructure, addr 0x5e4a3e8, size 0x9c, virtual false, abstract: false, final false
inline void UnlockGraphStructure() ;

/// @brief Method UpdateShortcuts, addr 0x5e4a724, size 0x2e0, virtual false, abstract: false, final false
inline void UpdateShortcuts() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__graphTypes_k__BackingField() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__graphTypes_k__BackingField() ;

constexpr ::Pathfinding::GridGraph* const& __cordl_internal_get__gridGraph_k__BackingField() const;

constexpr ::Pathfinding::GridGraph*& __cordl_internal_get__gridGraph_k__BackingField() ;

constexpr ::Pathfinding::LayerGridGraph* const& __cordl_internal_get__layerGridGraph_k__BackingField() const;

constexpr ::Pathfinding::LayerGridGraph*& __cordl_internal_get__layerGridGraph_k__BackingField() ;

constexpr ::Pathfinding::NavMeshGraph* const& __cordl_internal_get__navmesh_k__BackingField() const;

constexpr ::Pathfinding::NavMeshGraph*& __cordl_internal_get__navmesh_k__BackingField() ;

constexpr ::Pathfinding::PointGraph* const& __cordl_internal_get__pointGraph_k__BackingField() const;

constexpr ::Pathfinding::PointGraph*& __cordl_internal_get__pointGraph_k__BackingField() ;

constexpr ::Pathfinding::RecastGraph* const& __cordl_internal_get__recastGraph_k__BackingField() const;

constexpr ::Pathfinding::RecastGraph*& __cordl_internal_get__recastGraph_k__BackingField() ;

constexpr bool const& __cordl_internal_get_cacheStartup() const;

constexpr bool& __cordl_internal_get_cacheStartup() ;

constexpr ::StringW const& __cordl_internal_get_dataString() const;

constexpr ::StringW& __cordl_internal_get_dataString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data_cachedStartup() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data_cachedStartup() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_file_cachedStartup() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_file_cachedStartup() ;

constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_graphStructureLocked() const;

constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_graphStructureLocked() ;

constexpr ::ArrayW<::Pathfinding::NavGraph*> const& __cordl_internal_get_graphs() const;

constexpr ::ArrayW<::Pathfinding::NavGraph*>& __cordl_internal_get_graphs() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_upgradeData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_upgradeData() ;

constexpr void __cordl_internal_set__graphTypes_k__BackingField(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set__gridGraph_k__BackingField(::Pathfinding::GridGraph*  value) ;

constexpr void __cordl_internal_set__layerGridGraph_k__BackingField(::Pathfinding::LayerGridGraph*  value) ;

constexpr void __cordl_internal_set__navmesh_k__BackingField(::Pathfinding::NavMeshGraph*  value) ;

constexpr void __cordl_internal_set__pointGraph_k__BackingField(::Pathfinding::PointGraph*  value) ;

constexpr void __cordl_internal_set__recastGraph_k__BackingField(::Pathfinding::RecastGraph*  value) ;

constexpr void __cordl_internal_set_cacheStartup(bool  value) ;

constexpr void __cordl_internal_set_dataString(::StringW  value) ;

constexpr void __cordl_internal_set_data_cachedStartup(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_file_cachedStartup(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_graphStructureLocked(::System::Collections::Generic::List_1<bool>*  value) ;

constexpr void __cordl_internal_set_graphs(::ArrayW<::Pathfinding::NavGraph*>  value) ;

constexpr void __cordl_internal_set_upgradeData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x5e4c824, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_active, addr 0x5e49f50, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AstarPath> get_active() ;

/// @brief Method get_data, addr 0x5e4a008, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_data() ;

/// [CompilerGenerated]
/// @brief Method get_graphTypes, addr 0x5e49ff8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> get_graphTypes() ;

/// [CompilerGenerated]
/// @brief Method get_gridGraph, addr 0x5e49fb8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GridGraph* get_gridGraph() ;

/// [CompilerGenerated]
/// @brief Method get_layerGridGraph, addr 0x5e49fc8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::LayerGridGraph* get_layerGridGraph() ;

/// [CompilerGenerated]
/// @brief Method get_navmesh, addr 0x5e49fa8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::NavMeshGraph* get_navmesh() ;

/// [CompilerGenerated]
/// @brief Method get_pointGraph, addr 0x5e49fd8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PointGraph* get_pointGraph() ;

/// [CompilerGenerated]
/// @brief Method get_recastGraph, addr 0x5e49fe8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::RecastGraph* get_recastGraph() ;

/// @brief Method set_data, addr 0x5e4a0a4, size 0x80, virtual false, abstract: false, final false
inline void set_data(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_graphTypes, addr 0x5e4a000, size 0x8, virtual false, abstract: false, final false
inline void set_graphTypes(::ArrayW<::System::Type*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_gridGraph, addr 0x5e49fc0, size 0x8, virtual false, abstract: false, final false
inline void set_gridGraph(::Pathfinding::GridGraph*  value) ;

/// [CompilerGenerated]
/// @brief Method set_layerGridGraph, addr 0x5e49fd0, size 0x8, virtual false, abstract: false, final false
inline void set_layerGridGraph(::Pathfinding::LayerGridGraph*  value) ;

/// [CompilerGenerated]
/// @brief Method set_navmesh, addr 0x5e49fb0, size 0x8, virtual false, abstract: false, final false
inline void set_navmesh(::Pathfinding::NavMeshGraph*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointGraph, addr 0x5e49fe0, size 0x8, virtual false, abstract: false, final false
inline void set_pointGraph(::Pathfinding::PointGraph*  value) ;

/// [CompilerGenerated]
/// @brief Method set_recastGraph, addr 0x5e49ff0, size 0x8, virtual false, abstract: false, final false
inline void set_recastGraph(::Pathfinding::RecastGraph*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData(AstarData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData(AstarData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21226};

/// [CompilerGenerated]
/// @brief Field <navmesh>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::NavMeshGraph*  ____navmesh_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <gridGraph>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GridGraph*  ____gridGraph_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <layerGridGraph>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::LayerGridGraph*  ____layerGridGraph_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointGraph>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::PointGraph*  ____pointGraph_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <recastGraph>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RecastGraph*  ____recastGraph_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <graphTypes>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____graphTypes_k__BackingField;

/// @brief Field graphs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::NavGraph*>  ___graphs;

/// [SerializeField]
/// @brief Field dataString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___dataString;

/// [SerializeField]
/// [FormerlySerializedAs("data")]
/// @brief Field upgradeData, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___upgradeData;

/// @brief Field file_cachedStartup, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___file_cachedStartup;

/// @brief Field data_cachedStartup, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data_cachedStartup;

/// [SerializeField]
/// @brief Field cacheStartup, offset: 0x68, size: 0x1, def value: None
 bool  ___cacheStartup;

/// @brief Field graphStructureLocked, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<bool>*  ___graphStructureLocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData, ____navmesh_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ____gridGraph_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ____layerGridGraph_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ____pointGraph_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ____recastGraph_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ____graphTypes_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___graphs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___dataString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___upgradeData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___file_cachedStartup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___data_cachedStartup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___cacheStartup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData, ___graphStructureLocked) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<GetUpdateableGraphs>d__67
class CORDL_TYPE AstarData__GetUpdateableGraphs_d__67 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::AstarData*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e4cd68, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::AstarData__GetUpdateableGraphs_d__67* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x5e4ceb0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e4ce68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e4cf54, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e4ce70, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e4cea8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e4cd64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::AstarData* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::AstarData*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::AstarData*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e4c648, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData__GetUpdateableGraphs_d__67() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData__GetUpdateableGraphs_d__67", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData__GetUpdateableGraphs_d__67(AstarData__GetUpdateableGraphs_d__67 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData__GetUpdateableGraphs_d__67", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData__GetUpdateableGraphs_d__67(AstarData__GetUpdateableGraphs_d__67 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21225};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::AstarData*  _____4__this;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67, ____i_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData__GetUpdateableGraphs_d__67) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<GetRaycastableGraphs>d__68
class CORDL_TYPE AstarData__GetRaycastableGraphs_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::AstarData*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e4cb74, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::AstarData__GetRaycastableGraphs_d__68* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x5e4ccbc, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e4cc74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e4cd60, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e4cc7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e4ccb4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e4cb70, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::AstarData* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::AstarData*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::AstarData*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e4c6fc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData__GetRaycastableGraphs_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData__GetRaycastableGraphs_d__68", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData__GetRaycastableGraphs_d__68(AstarData__GetRaycastableGraphs_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData__GetRaycastableGraphs_d__68", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData__GetRaycastableGraphs_d__68(AstarData__GetRaycastableGraphs_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21224};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::AstarData*  _____4__this;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68, ____i_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData__GetRaycastableGraphs_d__68) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<FindGraphsOfType>d__66
class CORDL_TYPE AstarData__FindGraphsOfType_d__66 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>3__type, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__type, put=__cordl_internal_set___3__type)) ::System::Type*  __3__type;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::AstarData*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field type, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e4c988, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::AstarData__FindGraphsOfType_d__66* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x5e4cab8, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e4ca70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e4cb6c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e4ca78, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e4cab0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e4c984, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Type* const& __cordl_internal_get___3__type() const;

constexpr ::System::Type*& __cordl_internal_get___3__type() ;

constexpr ::Pathfinding::AstarData* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::AstarData*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___3__type(::System::Type*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::AstarData*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e4c594, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData__FindGraphsOfType_d__66() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData__FindGraphsOfType_d__66", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData__FindGraphsOfType_d__66(AstarData__FindGraphsOfType_d__66 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData__FindGraphsOfType_d__66", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData__FindGraphsOfType_d__66(AstarData__FindGraphsOfType_d__66 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21223};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::AstarData*  _____4__this;

/// @brief Field type, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field <>3__type, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  _____3__type;

/// @brief Field <i>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, ___type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, _____3__type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarData__FindGraphsOfType_d__66, ____i_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData__FindGraphsOfType_d__66) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<>c__DisplayClass65_0
class CORDL_TYPE AstarData___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Pathfinding::AstarData___c__DisplayClass65_0* New_ctor() ;

/// @brief Method <FindGraphWhichInheritsFrom>b__0, addr 0x5e4c928, size 0x5c, virtual false, abstract: false, final false
inline bool _FindGraphWhichInheritsFrom_b__0(::Pathfinding::NavGraph*  graph) ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5e4c4f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass65_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData___c__DisplayClass65_0(AstarData___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass65_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData___c__DisplayClass65_0(AstarData___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21222};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData___c__DisplayClass65_0, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData___c__DisplayClass65_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<>c__DisplayClass64_0
class CORDL_TYPE AstarData___c__DisplayClass64_0 : public ::System::Object {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Pathfinding::AstarData___c__DisplayClass64_0* New_ctor() ;

/// @brief Method <FindGraphOfType>b__0, addr 0x5e4c8fc, size 0x2c, virtual false, abstract: false, final false
inline bool _FindGraphOfType_b__0(::Pathfinding::NavGraph*  graph) ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5e4c424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData___c__DisplayClass64_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass64_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData___c__DisplayClass64_0(AstarData___c__DisplayClass64_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass64_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData___c__DisplayClass64_0(AstarData___c__DisplayClass64_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21221};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData___c__DisplayClass64_0, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData___c__DisplayClass64_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarData/<>c__DisplayClass53_0
class CORDL_TYPE AstarData___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field i, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

static inline ::Pathfinding::AstarData___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <DeserializeGraphsPartAdditive>b__0, addr 0x5e4c8dc, size 0x20, virtual false, abstract: false, final false
inline void _DeserializeGraphsPartAdditive_b__0(::Pathfinding::GraphNode*  node) ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e4b820, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarData___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass53_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarData___c__DisplayClass53_0(AstarData___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarData___c__DisplayClass53_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarData___c__DisplayClass53_0(AstarData___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21220};

/// @brief Field i, offset: 0x10, size: 0x4, def value: None
 int32_t  ___i;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarData___c__DisplayClass53_0, ___i) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarData___c__DisplayClass53_0) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding

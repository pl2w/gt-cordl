#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SITechTreePage_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeSO)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITechTreeSO___c;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
class SITechTreeSO___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreeSO*);
MARK_REF_T(::GlobalNamespace::SITechTreeSO___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeSO*, "", "SITechTreeSO");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeSO___c*, "", "SITechTreeSO/<>c");
// Dependencies SITechTreePage, SIUpgradeType, Unity.Collections.NativeHashMap`2<TKey, TValue>, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeSO
class CORDL_TYPE SITechTreeSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::SITechTreeSO___c;

 __declspec(property(get=get_AllNodes, put=set_AllNodes)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  AllNodes;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_SpawnableEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  SpawnableEntities;

 __declspec(property(get=get_TreeNodeCounts, put=set_TreeNodeCounts)) ::ArrayW<int32_t>  TreeNodeCounts;

 __declspec(property(get=get_TreePageCount, put=set_TreePageCount)) int32_t  TreePageCount;

 __declspec(property(get=get_TreePages, put=set_TreePages)) ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  TreePages;

/// @brief Field <AllNodes>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__AllNodes_k__BackingField, put=__cordl_internal_set__AllNodes_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  _AllNodes_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field <TreeNodeCounts>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__TreeNodeCounts_k__BackingField, put=__cordl_internal_set__TreeNodeCounts_k__BackingField)) ::ArrayW<int32_t>  _TreeNodeCounts_k__BackingField;

/// @brief Field <TreePageCount>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__TreePageCount_k__BackingField, put=__cordl_internal_set__TreePageCount_k__BackingField)) int32_t  _TreePageCount_k__BackingField;

/// @brief Field <TreePages>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__TreePages_k__BackingField, put=__cordl_internal_set__TreePages_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  _TreePages_k__BackingField;

/// @brief Field _nodeLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodeLookup, put=__cordl_internal_set__nodeLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  _nodeLookup;

/// @brief Field _spawnableEntities, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnableEntities, put=__cordl_internal_set__spawnableEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  _spawnableEntities;

/// @brief Field _spawnableEntityTypeIds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnableEntityTypeIds, put=__cordl_internal_set__spawnableEntityTypeIds)) ::System::Collections::Generic::HashSet_1<int32_t>*  _spawnableEntityTypeIds;

/// @brief Field _upgradeTypeByEntityTypeId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__upgradeTypeByEntityTypeId, put=__cordl_internal_set__upgradeTypeByEntityTypeId)) ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>  _upgradeTypeByEntityTypeId;

/// @brief Field treePages, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_treePages, put=__cordl_internal_set_treePages)) ::ArrayW<::GlobalNamespace::SITechTreePage*>  treePages;

/// @brief Method AddSpawnableGadget, addr 0x5aeee14, size 0x4d0, virtual false, abstract: false, final false
inline void AddSpawnableGadget(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method ClearTechTree, addr 0x5aee8a8, size 0x144, virtual false, abstract: false, final false
inline void ClearTechTree() ;

/// @brief Method EnsureInitialized, addr 0x5aed558, size 0x10, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method GetTreeNode, addr 0x5aeda6c, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreeNode* GetTreeNode(int32_t  pageId, int32_t  nodeId) ;

/// @brief Method GetTreeNode, addr 0x5aeda94, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreeNode* GetTreeNode(::GlobalNamespace::SIUpgradeType  upgradeType) ;

/// @brief Method GetTreePage, addr 0x5aed838, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreePage* GetTreePage(::GlobalNamespace::SITechTreePageId  id) ;

/// @brief Method InitTechTree, addr 0x5aedb24, size 0xd84, virtual false, abstract: false, final false
inline void InitTechTree() ;

/// @brief Method IsSpawnableEntityTypeId, addr 0x5aed630, size 0x68, virtual false, abstract: false, final false
inline bool IsSpawnableEntityTypeId(int32_t  entityTypeId) ;

/// @brief Method IsValidNode, addr 0x5aed9ec, size 0x28, virtual false, abstract: false, final false
inline bool IsValidNode(int32_t  pageId, int32_t  nodeId) ;

/// @brief Method IsValidNode, addr 0x5aeda14, size 0x58, virtual false, abstract: false, final false
inline bool IsValidNode(::GlobalNamespace::SIUpgradeType  upgradeType) ;

/// @brief Method IsValidPage, addr 0x5aed698, size 0x168, virtual false, abstract: false, final false
inline bool IsValidPage(::GlobalNamespace::SITechTreePageId  id) ;

static inline ::GlobalNamespace::SITechTreeSO* New_ctor() ;

/// @brief Method TryGetNode, addr 0x5aed568, size 0x68, virtual false, abstract: false, final false
inline bool TryGetNode(::GlobalNamespace::SIUpgradeType  upgradeType, ::by_ref<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>  node) ;

/// @brief Method TryGetTreePage, addr 0x5aed858, size 0x194, virtual false, abstract: false, final false
inline bool TryGetTreePage(::GlobalNamespace::SITechTreePageId  id, ::by_ref<::GlobalNamespace::SITechTreePage*>  treePage) ;

/// @brief Method TryGetUpgradeTypeByEntityTypeId, addr 0x5aed5d0, size 0x60, virtual false, abstract: false, final false
inline bool TryGetUpgradeTypeByEntityTypeId(int32_t  entityTypeId, ::by_ref<::GlobalNamespace::SIUpgradeType>  upgradeType) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& __cordl_internal_get__AllNodes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& __cordl_internal_get__AllNodes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__TreeNodeCounts_k__BackingField() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__TreeNodeCounts_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TreePageCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TreePageCount_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>* const& __cordl_internal_get__TreePages_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*& __cordl_internal_get__TreePages_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* const& __cordl_internal_get__nodeLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*& __cordl_internal_get__nodeLookup() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get__spawnableEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get__spawnableEntities() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__spawnableEntityTypeIds() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__spawnableEntityTypeIds() ;

constexpr ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType> const& __cordl_internal_get__upgradeTypeByEntityTypeId() const;

constexpr ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>& __cordl_internal_get__upgradeTypeByEntityTypeId() ;

constexpr ::ArrayW<::GlobalNamespace::SITechTreePage*> const& __cordl_internal_get_treePages() const;

constexpr ::ArrayW<::GlobalNamespace::SITechTreePage*>& __cordl_internal_get_treePages() ;

constexpr void __cordl_internal_set__AllNodes_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TreeNodeCounts_k__BackingField(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__TreePageCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TreePages_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  value) ;

constexpr void __cordl_internal_set__nodeLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

constexpr void __cordl_internal_set__spawnableEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set__spawnableEntityTypeIds(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__upgradeTypeByEntityTypeId(::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>  value) ;

constexpr void __cordl_internal_set_treePages(::ArrayW<::GlobalNamespace::SITechTreePage*>  value) ;

/// @brief Method .ctor, addr 0x5aef30c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AllNodes, addr 0x5aed514, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>* get_AllNodes() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5aed524, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_SpawnableEntities, addr 0x5aed534, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* get_SpawnableEntities() ;

/// [CompilerGenerated]
/// @brief Method get_TreeNodeCounts, addr 0x5aed504, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_TreeNodeCounts() ;

/// [CompilerGenerated]
/// @brief Method get_TreePageCount, addr 0x5aed4f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TreePageCount() ;

/// [CompilerGenerated]
/// @brief Method get_TreePages, addr 0x5aed4e4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>* get_TreePages() ;

/// [CompilerGenerated]
/// @brief Method set_AllNodes, addr 0x5aed51c, size 0x8, virtual false, abstract: false, final false
inline void set_AllNodes(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5aed52c, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TreeNodeCounts, addr 0x5aed50c, size 0x8, virtual false, abstract: false, final false
inline void set_TreeNodeCounts(::ArrayW<int32_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TreePageCount, addr 0x5aed4fc, size 0x8, virtual false, abstract: false, final false
inline void set_TreePageCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TreePages, addr 0x5aed4ec, size 0x8, virtual false, abstract: false, final false
inline void set_TreePages(::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeSO(SITechTreeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeSO(SITechTreeSO const& ) = delete;

/// @brief Field RESOURCE_CAP offset 0xffffffff size 0x4
static constexpr int32_t  RESOURCE_CAP{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{358};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SITechTreeSO]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SITechTreeSO]  "};

/// [SerializeField]
/// @brief Field treePages, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SITechTreePage*>  ___treePages;

/// @brief Field _nodeLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  ____nodeLookup;

/// @brief Field _upgradeTypeByEntityTypeId, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::SIUpgradeType>  ____upgradeTypeByEntityTypeId;

/// @brief Field _spawnableEntityTypeIds, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____spawnableEntityTypeIds;

/// [CompilerGenerated]
/// @brief Field <TreePages>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SITechTreePage*>*  ____TreePages_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TreePageCount>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____TreePageCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TreeNodeCounts>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____TreeNodeCounts_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllNodes>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  ____AllNodes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// @brief Field _spawnableEntities, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ____spawnableEntities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ___treePages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____nodeLookup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____upgradeTypeByEntityTypeId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____spawnableEntityTypeIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____TreePages_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____TreePageCount_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____TreeNodeCounts_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____AllNodes_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____Initialized_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeSO, ____spawnableEntities) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeSO) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeSO/<>c
class CORDL_TYPE SITechTreeSO___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SITechTreeSO___c*  __9;

/// @brief Field <>9__41_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__41_0, put=setStaticF___9__41_0)) ::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*  __9__41_0;

static inline ::GlobalNamespace::SITechTreeSO___c* New_ctor() ;

/// @brief Method <InitTechTree>b__41_0, addr 0x5aef458, size 0xc, virtual false, abstract: false, final false
inline int32_t _InitTechTree_b__41_0(::GlobalNamespace::SIUpgradeType  v) ;

/// @brief Method .ctor, addr 0x5aef450, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SITechTreeSO___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>* getStaticF___9__41_0() ;

static inline void setStaticF___9(::GlobalNamespace::SITechTreeSO___c*  value) ;

static inline void setStaticF___9__41_0(::System::Func_2<::GlobalNamespace::SIUpgradeType,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeSO___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeSO___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeSO___c(SITechTreeSO___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeSO___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeSO___c(SITechTreeSO___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SITechTreeSO___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

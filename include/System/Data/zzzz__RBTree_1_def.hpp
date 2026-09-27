#pragma once
// IWYU pragma private; include "System/Data/RBTree_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__RBTree`1_Node_def.hpp"
#include "System/Data/zzzz__TreeAccessMethod_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree_1)
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_NodeColor;
}
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_NodePath;
}
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_Node;
}
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_RBTreeEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
template<typename K>
class RBTree_1_TreePage;
}
namespace System::Data {
struct TreeAccessMethod;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Data {
template<typename K>
class RBTree_1;
}
namespace System::Data {
template<typename K>
class RBTree_1_TreePage;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Data::RBTree_1);
MARK_GEN_REF_T_PTR(::System::Data::RBTree_1_TreePage);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Data::RBTree_1, "System.Data", "RBTree`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Data::RBTree_1_TreePage, "System.Data", "RBTree`1/TreePage");
// [DefaultMember("Item")]
// Dependencies System.Data.RBTree`1::TreePage<K>, System.Data.TreeAccessMethod, System.Object
namespace System::Data {
// cpp template
template<typename K>
// Is value type: false
// CS Name: System.Data.RBTree`1<K>
class CORDL_TYPE RBTree_1 : public ::System::Object {
public:
// Declarations
using Node = ::GlobalNamespace::RBTree_1_Node<K>;

using NodeColor = ::GlobalNamespace::RBTree_1_NodeColor<K>;

using NodePath = ::GlobalNamespace::RBTree_1_NodePath<K>;

using RBTreeEnumerator = ::GlobalNamespace::RBTree_1_RBTreeEnumerator<K>;

using TreePage = ::System::Data::RBTree_1_TreePage<K>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_HasDuplicates)) bool  HasDuplicates;

 __declspec(property(get=get_Item)) K  Item[];

/// @brief Field _accessMethod, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__accessMethod, put=__cordl_internal_set__accessMethod)) ::System::Data::TreeAccessMethod  _accessMethod;

/// @brief Field _inUseNodeCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__inUseNodeCount, put=__cordl_internal_set__inUseNodeCount)) int32_t  _inUseNodeCount;

/// @brief Field _inUsePageCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__inUsePageCount, put=__cordl_internal_set__inUsePageCount)) int32_t  _inUsePageCount;

/// @brief Field _inUseSatelliteTreeCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__inUseSatelliteTreeCount, put=__cordl_internal_set__inUseSatelliteTreeCount)) int32_t  _inUseSatelliteTreeCount;

/// @brief Field _nextFreePageLine, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextFreePageLine, put=__cordl_internal_set__nextFreePageLine)) int32_t  _nextFreePageLine;

/// @brief Field _pageTable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageTable, put=__cordl_internal_set__pageTable)) ::ArrayW<::System::Data::RBTree_1_TreePage<K>*>  _pageTable;

/// @brief Field _pageTableMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageTableMap, put=__cordl_internal_set__pageTableMap)) ::ArrayW<int32_t>  _pageTableMap;

/// @brief Field _version, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Field root, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) int32_t  root;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Add(K  item) ;

/// @brief Method AllocPage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Data::RBTree_1_TreePage<K>* AllocPage(int32_t  size) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CompareNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CompareNode(K  record1, K  record2) ;

/// @brief Method CompareSateliteTreeNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CompareSateliteTreeNode(K  record1, K  record2) ;

/// @brief Method ComputeIndexByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeIndexByNode(int32_t  nodeId) ;

/// @brief Method ComputeIndexWithSatelliteByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeIndexWithSatelliteByNode(int32_t  nodeId) ;

/// @brief Method ComputeNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeNodeByIndex(int32_t  index, ::by_ref<int32_t>  satelliteRootId) ;

/// @brief Method ComputeNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ComputeNodeByIndex(int32_t  x_id, int32_t  index) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<K>  array, int32_t  index) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method DecreaseSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DecreaseSize(int32_t  nodeId) ;

/// @brief Method DeleteByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline K DeleteByIndex(int32_t  i) ;

/// @brief Method FreeNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FreeNode(int32_t  nodeId) ;

/// @brief Method FreePage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FreePage(::System::Data::RBTree_1_TreePage<K>*  page) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetIndexByKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetIndexByKey(K  key) ;

/// @brief Method GetIndexByNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetIndexByNode(int32_t  node) ;

/// @brief Method GetIndexByNodePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetIndexByNodePath(::GlobalNamespace::RBTree_1_NodePath<K>  path) ;

/// @brief Method GetIndexOfPageWithFreeSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetIndexOfPageWithFreeSlot(bool  allocatedPage) ;

/// @brief Method GetIntValueFromBitMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetIntValueFromBitMap(uint32_t  bitMap) ;

/// @brief Method GetNewNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetNewNode(K  key) ;

/// @brief Method GetNodeByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::RBTree_1_NodePath<K> GetNodeByIndex(int32_t  userIndex) ;

/// @brief Method GetNodeByKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::RBTree_1_NodePath<K> GetNodeByKey(K  key) ;

/// @brief Method IncreaseSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void IncreaseSize(int32_t  nodeId) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(int32_t  nodeId, K  item) ;

/// @brief Method InitTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitTree() ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Insert(K  item) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Insert(int32_t  position, K  item) ;

/// @brief Method InsertAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t InsertAt(int32_t  position, K  item, bool  append) ;

/// @brief Method Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline K Key(int32_t  nodeId) ;

/// @brief Method Left, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Left(int32_t  nodeId) ;

/// @brief Method LeftRotate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t LeftRotate(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNode) ;

/// @brief Method MarkPageFree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MarkPageFree(::System::Data::RBTree_1_TreePage<K>*  page) ;

/// @brief Method MarkPageFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MarkPageFull(::System::Data::RBTree_1_TreePage<K>*  page) ;

/// @brief Method Minimum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Minimum(int32_t  x_id) ;

static inline ::System::Data::RBTree_1<K>* New_ctor(::System::Data::TreeAccessMethod  accessMethod) ;

/// @brief Method Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Next(int32_t  nodeId) ;

/// @brief Method Parent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Parent(int32_t  nodeId) ;

/// @brief Method RBDelete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RBDelete(int32_t  z_id) ;

/// @brief Method RBDeleteFixup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RBDeleteFixup(int32_t  root_id, int32_t  x_id, int32_t  px_id, int32_t  mainTreeNodeID) ;

/// @brief Method RBDeleteX, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RBDeleteX(int32_t  root_id, int32_t  z_id, int32_t  mainTreeNodeID) ;

/// @brief Method RBInsert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RBInsert(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNodeID, int32_t  position, bool  append) ;

/// @brief Method RecomputeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RecomputeSize(int32_t  nodeId) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  position) ;

/// @brief Method Right, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Right(int32_t  nodeId) ;

/// @brief Method RightRotate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RightRotate(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNode) ;

/// @brief Method SearchSubTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t SearchSubTree(int32_t  root_id, K  key) ;

/// @brief Method SetColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetColor(int32_t  nodeId, ::GlobalNamespace::RBTree_1_NodeColor<K>  color) ;

/// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetKey(int32_t  nodeId, K  key) ;

/// @brief Method SetLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetLeft(int32_t  nodeId, int32_t  leftNodeId) ;

/// @brief Method SetNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetNext(int32_t  nodeId, int32_t  nextNodeId) ;

/// @brief Method SetParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetParent(int32_t  nodeId, int32_t  parentNodeId) ;

/// @brief Method SetRight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetRight(int32_t  nodeId, int32_t  rightNodeId) ;

/// @brief Method SetSubTreeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetSubTreeSize(int32_t  nodeId, int32_t  size) ;

/// @brief Method SubTreeSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t SubTreeSize(int32_t  nodeId) ;

/// @brief Method Successor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Successor(::by_ref<int32_t>  nodeId, ::by_ref<int32_t>  mainTreeNodeId) ;

/// @brief Method Successor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Successor(int32_t  x_id) ;

/// @brief Method UpdateNodeKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateNodeKey(K  currentKey, K  newKey) ;

constexpr ::System::Data::TreeAccessMethod const& __cordl_internal_get__accessMethod() const;

constexpr ::System::Data::TreeAccessMethod& __cordl_internal_get__accessMethod() ;

constexpr int32_t const& __cordl_internal_get__inUseNodeCount() const;

constexpr int32_t& __cordl_internal_get__inUseNodeCount() ;

constexpr int32_t const& __cordl_internal_get__inUsePageCount() const;

constexpr int32_t& __cordl_internal_get__inUsePageCount() ;

constexpr int32_t const& __cordl_internal_get__inUseSatelliteTreeCount() const;

constexpr int32_t& __cordl_internal_get__inUseSatelliteTreeCount() ;

constexpr int32_t const& __cordl_internal_get__nextFreePageLine() const;

constexpr int32_t& __cordl_internal_get__nextFreePageLine() ;

constexpr ::ArrayW<::System::Data::RBTree_1_TreePage<K>*> const& __cordl_internal_get__pageTable() const;

constexpr ::ArrayW<::System::Data::RBTree_1_TreePage<K>*>& __cordl_internal_get__pageTable() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__pageTableMap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__pageTableMap() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr int32_t const& __cordl_internal_get_root() const;

constexpr int32_t& __cordl_internal_get_root() ;

constexpr void __cordl_internal_set__accessMethod(::System::Data::TreeAccessMethod  value) ;

constexpr void __cordl_internal_set__inUseNodeCount(int32_t  value) ;

constexpr void __cordl_internal_set__inUsePageCount(int32_t  value) ;

constexpr void __cordl_internal_set__inUseSatelliteTreeCount(int32_t  value) ;

constexpr void __cordl_internal_set__nextFreePageLine(int32_t  value) ;

constexpr void __cordl_internal_set__pageTable(::ArrayW<::System::Data::RBTree_1_TreePage<K>*>  value) ;

constexpr void __cordl_internal_set__pageTableMap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

constexpr void __cordl_internal_set_root(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Data::TreeAccessMethod  accessMethod) ;

/// @brief Method color, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::RBTree_1_NodeColor<K> color(int32_t  nodeId) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_HasDuplicates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasDuplicates() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline K get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RBTree_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RBTree_1(RBTree_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RBTree_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RBTree_1(RBTree_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21047};

/// @brief Field _pageTable, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Data::RBTree_1_TreePage<K>*>  ____pageTable;

/// @brief Field _pageTableMap, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____pageTableMap;

/// @brief Field _inUsePageCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____inUsePageCount;

/// @brief Field _nextFreePageLine, offset: 0x24, size: 0x4, def value: None
 int32_t  ____nextFreePageLine;

/// @brief Field root, offset: 0x28, size: 0x4, def value: None
 int32_t  ___root;

/// @brief Field _version, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _inUseNodeCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____inUseNodeCount;

/// @brief Field _inUseSatelliteTreeCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ____inUseSatelliteTreeCount;

/// @brief Field _accessMethod, offset: 0x38, size: 0x4, def value: None
 ::System::Data::TreeAccessMethod  ____accessMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Data
// Dependencies System.Data.RBTree`1::Node<K>, System.Object
namespace System::Data {
// cpp template
template<typename K>
// Is value type: false
// CS Name: System.Data.RBTree`1/TreePage<K>
class CORDL_TYPE RBTree_1_TreePage : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InUseCount, put=set_InUseCount)) int32_t  InUseCount;

 __declspec(property(get=get_PageId, put=set_PageId)) int32_t  PageId;

/// @brief Field _inUseCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__inUseCount, put=__cordl_internal_set__inUseCount)) int32_t  _inUseCount;

/// @brief Field _nextFreeSlotLine, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextFreeSlotLine, put=__cordl_internal_set__nextFreeSlotLine)) int32_t  _nextFreeSlotLine;

/// @brief Field _pageId, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageId, put=__cordl_internal_set__pageId)) int32_t  _pageId;

/// @brief Field _slotMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__slotMap, put=__cordl_internal_set__slotMap)) ::ArrayW<int32_t>  _slotMap;

/// @brief Field _slots, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__slots, put=__cordl_internal_set__slots)) ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>  _slots;

/// @brief Method AllocSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AllocSlot(::System::Data::RBTree_1<K>*  tree) ;

static inline ::System::Data::RBTree_1_TreePage<K>* New_ctor(int32_t  size) ;

constexpr int32_t const& __cordl_internal_get__inUseCount() const;

constexpr int32_t& __cordl_internal_get__inUseCount() ;

constexpr int32_t const& __cordl_internal_get__nextFreeSlotLine() const;

constexpr int32_t& __cordl_internal_get__nextFreeSlotLine() ;

constexpr int32_t const& __cordl_internal_get__pageId() const;

constexpr int32_t& __cordl_internal_get__pageId() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__slotMap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__slotMap() ;

constexpr ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>> const& __cordl_internal_get__slots() const;

constexpr ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>& __cordl_internal_get__slots() ;

constexpr void __cordl_internal_set__inUseCount(int32_t  value) ;

constexpr void __cordl_internal_set__nextFreeSlotLine(int32_t  value) ;

constexpr void __cordl_internal_set__pageId(int32_t  value) ;

constexpr void __cordl_internal_set__slotMap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__slots(::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_InUseCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_InUseCount() ;

/// @brief Method get_PageId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_PageId() ;

/// @brief Method set_InUseCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_InUseCount(int32_t  value) ;

/// @brief Method set_PageId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_PageId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1_TreePage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RBTree_1_TreePage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RBTree_1_TreePage(RBTree_1_TreePage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RBTree_1_TreePage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RBTree_1_TreePage(RBTree_1_TreePage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21045};

/// @brief Field _slots, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>  ____slots;

/// @brief Field _slotMap, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____slotMap;

/// @brief Field _inUseCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____inUseCount;

/// @brief Field _pageId, offset: 0x24, size: 0x4, def value: None
 int32_t  ____pageId;

/// @brief Field _nextFreeSlotLine, offset: 0x28, size: 0x4, def value: None
 int32_t  ____nextFreeSlotLine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Data

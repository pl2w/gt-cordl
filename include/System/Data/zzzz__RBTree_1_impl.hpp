#pragma once
// IWYU pragma private; include "System/Data/RBTree_1.hpp"
#include "System/Data/zzzz__RBTree`1_Node_impl.hpp"
#include "System/Data/zzzz__TreeAccessMethod_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/Data/zzzz__RBTree`1_NodeColor_def.hpp"
#include "System/Data/zzzz__RBTree`1_NodePath_def.hpp"
#include "System/Data/zzzz__RBTree`1_Node_def.hpp"
#include "System/Data/zzzz__RBTree`1_RBTreeEnumerator_def.hpp"
#include "System/Data/zzzz__TreeAccessMethod_def.hpp"
#include "System/zzzz__Array_def.hpp"
template<typename K>
constexpr ::ArrayW<::System::Data::RBTree_1_TreePage<K>*>& System::Data::RBTree_1<K>::__cordl_internal_get__pageTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageTable;
}
template<typename K>
constexpr ::ArrayW<::System::Data::RBTree_1_TreePage<K>*> const& System::Data::RBTree_1<K>::__cordl_internal_get__pageTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageTable;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__pageTable(::ArrayW<::System::Data::RBTree_1_TreePage<K>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageTable = value;
}
template<typename K>
constexpr ::ArrayW<int32_t>& System::Data::RBTree_1<K>::__cordl_internal_get__pageTableMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageTableMap;
}
template<typename K>
constexpr ::ArrayW<int32_t> const& System::Data::RBTree_1<K>::__cordl_internal_get__pageTableMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageTableMap;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__pageTableMap(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageTableMap = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUsePageCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUsePageCount;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUsePageCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUsePageCount;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUsePageCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inUsePageCount = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__nextFreePageLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFreePageLine;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__nextFreePageLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFreePageLine;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__nextFreePageLine(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextFreePageLine = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set_root(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUseNodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseNodeCount;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUseNodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseNodeCount;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUseNodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inUseNodeCount = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1<K>::__cordl_internal_get__inUseSatelliteTreeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseSatelliteTreeCount;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1<K>::__cordl_internal_get__inUseSatelliteTreeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseSatelliteTreeCount;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__inUseSatelliteTreeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inUseSatelliteTreeCount = value;
}
template<typename K>
constexpr ::System::Data::TreeAccessMethod& System::Data::RBTree_1<K>::__cordl_internal_get__accessMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accessMethod;
}
template<typename K>
constexpr ::System::Data::TreeAccessMethod const& System::Data::RBTree_1<K>::__cordl_internal_get__accessMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accessMethod;
}
template<typename K>
constexpr void System::Data::RBTree_1<K>::__cordl_internal_set__accessMethod(::System::Data::TreeAccessMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accessMethod = value;
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::CompareNode(K  record1, K  record2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::RBTree_1<K>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::CompareSateliteTreeNode(K  record1, K  record2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::RBTree_1<K>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, record1, record2);
}
template<typename K>
inline void System::Data::RBTree_1<K>::_ctor(::System::Data::TreeAccessMethod  accessMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::TreeAccessMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accessMethod);
}
template<typename K>
inline void System::Data::RBTree_1<K>::InitTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"InitTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K>
inline void System::Data::RBTree_1<K>::FreePage(::System::Data::RBTree_1_TreePage<K>*  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"FreePage", {}, {::i2c::type_of<::System::Data::RBTree_1_TreePage<K>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, page);
}
template<typename K>
inline ::System::Data::RBTree_1_TreePage<K>* System::Data::RBTree_1<K>::AllocPage(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"AllocPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::RBTree_1_TreePage<K>*>(this, ___internal_method, size);
}
template<typename K>
inline void System::Data::RBTree_1<K>::MarkPageFull(::System::Data::RBTree_1_TreePage<K>*  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"MarkPageFull", {}, {::i2c::type_of<::System::Data::RBTree_1_TreePage<K>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, page);
}
template<typename K>
inline void System::Data::RBTree_1<K>::MarkPageFree(::System::Data::RBTree_1_TreePage<K>*  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"MarkPageFree", {}, {::i2c::type_of<::System::Data::RBTree_1_TreePage<K>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, page);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetIntValueFromBitMap(uint32_t  bitMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetIntValueFromBitMap", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitMap);
}
template<typename K>
inline void System::Data::RBTree_1<K>::FreeNode(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"FreeNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetIndexOfPageWithFreeSlot(bool  allocatedPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetIndexOfPageWithFreeSlot", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allocatedPage);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename K>
inline bool System::Data::RBTree_1<K>::get_HasDuplicates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"get_HasDuplicates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetNewNode(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetNewNode", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Successor(int32_t  x_id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Successor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x_id);
}
template<typename K>
inline bool System::Data::RBTree_1<K>::Successor(::by_ref<int32_t>  nodeId, ::by_ref<int32_t>  mainTreeNodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Successor", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeId, mainTreeNodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Minimum(int32_t  x_id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Minimum", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x_id);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::LeftRotate(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"LeftRotate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, x_id, mainTreeNode);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::RightRotate(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RightRotate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, x_id, mainTreeNode);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::RBInsert(int32_t  root_id, int32_t  x_id, int32_t  mainTreeNodeID, int32_t  position, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RBInsert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, x_id, mainTreeNodeID, position, append);
}
template<typename K>
inline void System::Data::RBTree_1<K>::UpdateNodeKey(K  currentKey, K  newKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"UpdateNodeKey", {}, {::i2c::type_of<K>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentKey, newKey);
}
template<typename K>
inline K System::Data::RBTree_1<K>::DeleteByIndex(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"DeleteByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, i);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::RBDelete(int32_t  z_id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RBDelete", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z_id);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::RBDeleteX(int32_t  root_id, int32_t  z_id, int32_t  mainTreeNodeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RBDeleteX", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, z_id, mainTreeNodeID);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::RBDeleteFixup(int32_t  root_id, int32_t  x_id, int32_t  px_id, int32_t  mainTreeNodeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RBDeleteFixup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, x_id, px_id, mainTreeNodeID);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::SearchSubTree(int32_t  root_id, K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SearchSubTree", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root_id, key);
}
template<typename K>
inline K System::Data::RBTree_1<K>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, index);
}
template<typename K>
inline ::GlobalNamespace::RBTree_1_NodePath<K> System::Data::RBTree_1<K>::GetNodeByKey(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetNodeByKey", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RBTree_1_NodePath<K>>(this, ___internal_method, key);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetIndexByKey(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetIndexByKey", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetIndexByNode(int32_t  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetIndexByNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, node);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::GetIndexByNodePath(::GlobalNamespace::RBTree_1_NodePath<K>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetIndexByNodePath", {}, {::i2c::type_of<::GlobalNamespace::RBTree_1_NodePath<K>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, path);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::ComputeIndexByNode(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"ComputeIndexByNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::ComputeIndexWithSatelliteByNode(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"ComputeIndexWithSatelliteByNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline ::GlobalNamespace::RBTree_1_NodePath<K> System::Data::RBTree_1<K>::GetNodeByIndex(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetNodeByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RBTree_1_NodePath<K>>(this, ___internal_method, userIndex);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::ComputeNodeByIndex(int32_t  index, ::by_ref<int32_t>  satelliteRootId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"ComputeNodeByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, satelliteRootId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::ComputeNodeByIndex(int32_t  x_id, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"ComputeNodeByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x_id, index);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Insert(K  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Insert", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Add(K  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Add", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template<typename K>
inline ::System::Collections::IEnumerator* System::Data::RBTree_1<K>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::IndexOf(int32_t  nodeId, K  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId, item);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Insert(int32_t  position, K  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, item);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::InsertAt(int32_t  position, K  item, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"InsertAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, item, append);
}
template<typename K>
inline void System::Data::RBTree_1<K>::RemoveAt(int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
template<typename K>
inline void System::Data::RBTree_1<K>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K>
inline void System::Data::RBTree_1<K>::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename K>
inline void System::Data::RBTree_1<K>::CopyTo(::ArrayW<K>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<K>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetRight(int32_t  nodeId, int32_t  rightNodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetRight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, rightNodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetLeft(int32_t  nodeId, int32_t  leftNodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetLeft", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, leftNodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetParent(int32_t  nodeId, int32_t  parentNodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetParent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, parentNodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetColor(int32_t  nodeId, ::GlobalNamespace::RBTree_1_NodeColor<K>  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RBTree_1_NodeColor<K>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, color);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetKey(int32_t  nodeId, K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, key);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetNext(int32_t  nodeId, int32_t  nextNodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetNext", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, nextNodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::SetSubTreeSize(int32_t  nodeId, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SetSubTreeSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId, size);
}
template<typename K>
inline void System::Data::RBTree_1<K>::IncreaseSize(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"IncreaseSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::RecomputeSize(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"RecomputeSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId);
}
template<typename K>
inline void System::Data::RBTree_1<K>::DecreaseSize(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"DecreaseSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Right(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Right", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Left(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Left", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Parent(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Parent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline ::GlobalNamespace::RBTree_1_NodeColor<K> System::Data::RBTree_1<K>::color(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"color", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RBTree_1_NodeColor<K>>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::Next(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Next", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline int32_t System::Data::RBTree_1<K>::SubTreeSize(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"SubTreeSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodeId);
}
template<typename K>
inline K System::Data::RBTree_1<K>::Key(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1<K>*>(),
                        {"Key", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, nodeId);
}
template<typename K>
inline ::System::Data::RBTree_1<K>* System::Data::RBTree_1<K>::New_ctor(::System::Data::TreeAccessMethod  accessMethod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::RBTree_1<K>*>(accessMethod));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename K>
constexpr  System::Data::RBTree_1<K>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename K>
constexpr ::System::Collections::IEnumerable* System::Data::RBTree_1<K>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename K>
constexpr ::System::Data::RBTree_1<K>::RBTree_1()   {
}
template<typename K>
constexpr ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__slots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slots;
}
template<typename K>
constexpr ::ArrayW<::GlobalNamespace::RBTree_1_Node<K>> const& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__slots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slots;
}
template<typename K>
constexpr void System::Data::RBTree_1_TreePage<K>::__cordl_internal_set__slots(::ArrayW<::GlobalNamespace::RBTree_1_Node<K>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slots = value;
}
template<typename K>
constexpr ::ArrayW<int32_t>& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__slotMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slotMap;
}
template<typename K>
constexpr ::ArrayW<int32_t> const& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__slotMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slotMap;
}
template<typename K>
constexpr void System::Data::RBTree_1_TreePage<K>::__cordl_internal_set__slotMap(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slotMap = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__inUseCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseCount;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__inUseCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUseCount;
}
template<typename K>
constexpr void System::Data::RBTree_1_TreePage<K>::__cordl_internal_set__inUseCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inUseCount = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__pageId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageId;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__pageId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageId;
}
template<typename K>
constexpr void System::Data::RBTree_1_TreePage<K>::__cordl_internal_set__pageId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageId = value;
}
template<typename K>
constexpr int32_t& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__nextFreeSlotLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFreeSlotLine;
}
template<typename K>
constexpr int32_t const& System::Data::RBTree_1_TreePage<K>::__cordl_internal_get__nextFreeSlotLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFreeSlotLine;
}
template<typename K>
constexpr void System::Data::RBTree_1_TreePage<K>::__cordl_internal_set__nextFreeSlotLine(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextFreeSlotLine = value;
}
template<typename K>
inline void System::Data::RBTree_1_TreePage<K>::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template<typename K>
inline int32_t System::Data::RBTree_1_TreePage<K>::AllocSlot(::System::Data::RBTree_1<K>*  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {"AllocSlot", {}, {::i2c::type_of<::System::Data::RBTree_1<K>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, tree);
}
template<typename K>
inline int32_t System::Data::RBTree_1_TreePage<K>::get_InUseCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {"get_InUseCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename K>
inline void System::Data::RBTree_1_TreePage<K>::set_InUseCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {"set_InUseCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename K>
inline int32_t System::Data::RBTree_1_TreePage<K>::get_PageId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {"get_PageId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename K>
inline void System::Data::RBTree_1_TreePage<K>::set_PageId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::RBTree_1_TreePage<K>*>(),
                        {"set_PageId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename K>
inline ::System::Data::RBTree_1_TreePage<K>* System::Data::RBTree_1_TreePage<K>::New_ctor(int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::RBTree_1_TreePage<K>*>(size));
}
// Ctor Parameters []
template<typename K>
constexpr ::System::Data::RBTree_1_TreePage<K>::RBTree_1_TreePage()   {
}

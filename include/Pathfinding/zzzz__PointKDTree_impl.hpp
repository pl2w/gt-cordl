#pragma once
// IWYU pragma private; include "Pathfinding/PointKDTree.hpp"
#include "Pathfinding/zzzz__PointKDTree_Node_impl.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PointKDTree_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__PointKDTree_Node_def.hpp"
#include "Pathfinding/zzzz__PointKDTree_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::PointKDTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)()>(&::Pathfinding::PointKDTree::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e99fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PointKDTree::Add)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e9a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(::ArrayW<::Pathfinding::GraphNode*>, int32_t, int32_t)>(&::Pathfinding::PointKDTree::Rebuild)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5e9a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Rebuild", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetOrCreateList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::GraphNode*> (::Pathfinding::PointKDTree::*)()>(&::Pathfinding::PointKDTree::GetOrCreateList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e9a134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetOrCreateList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointKDTree::*)(int32_t)>(&::Pathfinding::PointKDTree::Size)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e9a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.CollectAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PointKDTree::CollectAndClear)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5e9aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"CollectAndClear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.MaxAllowedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::PointKDTree::MaxAllowedSize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e9abec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"MaxAllowedSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Rebalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t)>(&::Pathfinding::PointKDTree::Rebalance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e9ac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Rebalance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.EnsureSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t)>(&::Pathfinding::PointKDTree::EnsureSize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e9acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"EnsureSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, int32_t, int32_t)>(&::Pathfinding::PointKDTree::Build)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5e9a578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Build", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(::Pathfinding::GraphNode*, int32_t, int32_t)>(&::Pathfinding::PointKDTree::Add)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5e9a1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::PointKDTree::*)(::Pathfinding::Int3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::PointKDTree::GetNearest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e9add8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearest", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetNearestInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t, ::Pathfinding::Int3, ::Pathfinding::NNConstraint*, ::by_ref<::Pathfinding::GraphNode*>, ::by_ref<int64_t>)>(&::Pathfinding::PointKDTree::GetNearestInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5e9ae14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphNode*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetNearestConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::PointKDTree::*)(::Pathfinding::Int3, ::Pathfinding::NNConstraint*, int64_t)>(&::Pathfinding::PointKDTree::GetNearestConnection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e9b008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestConnection", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetNearestConnectionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t, ::Pathfinding::Int3, ::Pathfinding::NNConstraint*, ::by_ref<::Pathfinding::GraphNode*>, ::by_ref<int64_t>, int64_t)>(&::Pathfinding::PointKDTree::GetNearestConnectionInternal)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5e9b05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestConnectionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphNode*>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(::Pathfinding::Int3, int64_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PointKDTree::GetInRange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e9b454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetInRange", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree.GetInRangeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree::*)(int32_t, ::Pathfinding::Int3, int64_t, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::PointKDTree::GetInRangeInternal)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5e9b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetInRangeInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PointKDTree_Node>& Pathfinding::PointKDTree::__cordl_internal_get_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr ::ArrayW<::GlobalNamespace::PointKDTree_Node> const& Pathfinding::PointKDTree::__cordl_internal_get_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr void Pathfinding::PointKDTree::__cordl_internal_set_tree(::ArrayW<::GlobalNamespace::PointKDTree_Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tree = value;
}
constexpr int32_t& Pathfinding::PointKDTree::__cordl_internal_get_numNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numNodes;
}
constexpr int32_t const& Pathfinding::PointKDTree::__cordl_internal_get_numNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numNodes;
}
constexpr void Pathfinding::PointKDTree::__cordl_internal_set_numNodes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numNodes = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::PointKDTree::__cordl_internal_get_largeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largeList;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::PointKDTree::__cordl_internal_get_largeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largeList;
}
constexpr void Pathfinding::PointKDTree::__cordl_internal_set_largeList(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___largeList = value;
}
constexpr ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*& Pathfinding::PointKDTree::__cordl_internal_get_arrayCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayCache;
}
constexpr ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>* const& Pathfinding::PointKDTree::__cordl_internal_get_arrayCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayCache;
}
constexpr void Pathfinding::PointKDTree::__cordl_internal_set_arrayCache(::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrayCache = value;
}
inline void Pathfinding::PointKDTree::setStaticF_comparers(::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>, "comparers", ::Pathfinding::PointKDTree*>(std::forward<::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*> Pathfinding::PointKDTree::getStaticF_comparers()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>, "comparers", ::Pathfinding::PointKDTree*>();
}
inline void Pathfinding::PointKDTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PointKDTree::Add(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PointKDTree::Rebuild(::ArrayW<::Pathfinding::GraphNode*>  nodes, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Rebuild", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes, start, end);
}
inline ::ArrayW<::Pathfinding::GraphNode*> Pathfinding::PointKDTree::GetOrCreateList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetOrCreateList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::GraphNode*>>(this, ___internal_method);
}
inline int32_t Pathfinding::PointKDTree::Size(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Pathfinding::PointKDTree::CollectAndClear(int32_t  index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"CollectAndClear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, buffer);
}
inline int32_t Pathfinding::PointKDTree::MaxAllowedSize(int32_t  numNodes, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"MaxAllowedSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, numNodes, depth);
}
inline void Pathfinding::PointKDTree::Rebalance(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Rebalance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Pathfinding::PointKDTree::EnsureSize(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"EnsureSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Pathfinding::PointKDTree::Build(int32_t  index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Build", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, nodes, start, end);
}
inline void Pathfinding::PointKDTree::Add(::Pathfinding::GraphNode*  point, int32_t  index, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, index, depth);
}
inline ::Pathfinding::GraphNode* Pathfinding::PointKDTree::GetNearest(::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearest", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, point, constraint);
}
inline void Pathfinding::PointKDTree::GetNearestInternal(int32_t  index, ::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::GraphNode*>  best, ::by_ref<int64_t>  bestSqrDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphNode*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, point, constraint, best, bestSqrDist);
}
inline ::Pathfinding::GraphNode* Pathfinding::PointKDTree::GetNearestConnection(::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, int64_t  maximumSqrConnectionLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestConnection", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, point, constraint, maximumSqrConnectionLength);
}
inline void Pathfinding::PointKDTree::GetNearestConnectionInternal(int32_t  index, ::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::GraphNode*>  best, ::by_ref<int64_t>  bestSqrDist, int64_t  distanceThresholdOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetNearestConnectionInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphNode*>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, point, constraint, best, bestSqrDist, distanceThresholdOffset);
}
inline void Pathfinding::PointKDTree::GetInRange(::Pathfinding::Int3  point, int64_t  sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetInRange", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, sqrRadius, buffer);
}
inline void Pathfinding::PointKDTree::GetInRangeInternal(int32_t  index, ::Pathfinding::Int3  point, int64_t  sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree*>(),
                        {"GetInRangeInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, point, sqrRadius, buffer);
}
inline ::Pathfinding::PointKDTree* Pathfinding::PointKDTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointKDTree*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PointKDTree::PointKDTree()   {
}
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareZ.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointKDTree_CompareZ::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*)>(&::Pathfinding::PointKDTree_CompareZ::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e9b898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareZ*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareZ._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree_CompareZ::*)()>(&::Pathfinding::PointKDTree_CompareZ::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9b840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareZ*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::PointKDTree_CompareZ::Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareZ*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Pathfinding::PointKDTree_CompareZ::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareZ*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PointKDTree_CompareZ* Pathfinding::PointKDTree_CompareZ::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointKDTree_CompareZ*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr  Pathfinding::PointKDTree_CompareZ::operator ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* Pathfinding::PointKDTree_CompareZ::i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointKDTree_CompareZ::PointKDTree_CompareZ()   {
}
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareY.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointKDTree_CompareY::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*)>(&::Pathfinding::PointKDTree_CompareY::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e9b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareY*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareY._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree_CompareY::*)()>(&::Pathfinding::PointKDTree_CompareY::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9b838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareY*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::PointKDTree_CompareY::Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareY*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Pathfinding::PointKDTree_CompareY::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareY*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PointKDTree_CompareY* Pathfinding::PointKDTree_CompareY::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointKDTree_CompareY*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr  Pathfinding::PointKDTree_CompareY::operator ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* Pathfinding::PointKDTree_CompareY::i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointKDTree_CompareY::PointKDTree_CompareY()   {
}
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareX.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PointKDTree_CompareX::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*)>(&::Pathfinding::PointKDTree_CompareX::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e9b848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareX*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PointKDTree_CompareX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PointKDTree_CompareX::*)()>(&::Pathfinding::PointKDTree_CompareX::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Pathfinding::PointKDTree_CompareX::Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareX*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Pathfinding::PointKDTree_CompareX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PointKDTree_CompareX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PointKDTree_CompareX* Pathfinding::PointKDTree_CompareX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PointKDTree_CompareX*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr  Pathfinding::PointKDTree_CompareX::operator ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* Pathfinding::PointKDTree_CompareX::i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PointKDTree_CompareX::PointKDTree_CompareX()   {
}

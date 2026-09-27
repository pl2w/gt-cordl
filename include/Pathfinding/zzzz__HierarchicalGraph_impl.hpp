#pragma once
// IWYU pragma private; include "Pathfinding/HierarchicalGraph.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__HierarchicalGraph_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5ae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.set_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(int32_t)>(&::Pathfinding::HierarchicalGraph::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5ae78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"set_version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5e5ae80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::Grow)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5e5b0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"Grow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.GetHierarchicalNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::GetHierarchicalNodeIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e5b444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"GetHierarchicalNodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.OnCreatedNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::HierarchicalGraph::OnCreatedNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e5b4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"OnCreatedNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.AddDirtyNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::HierarchicalGraph::AddDirtyNode)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5e5b5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"AddDirtyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.get_NumConnectedComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::get_NumConnectedComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5b97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"get_NumConnectedComponents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.set_NumConnectedComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(int32_t)>(&::Pathfinding::HierarchicalGraph::set_NumConnectedComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5b984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"set_NumConnectedComponents", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.GetConnectedComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::HierarchicalGraph::*)(int32_t)>(&::Pathfinding::HierarchicalGraph::GetConnectedComponent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e5b98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"GetConnectedComponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.RemoveHierarchicalNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(int32_t, bool)>(&::Pathfinding::HierarchicalGraph::RemoveHierarchicalNode)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5e5b9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RemoveHierarchicalNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.RecalculateIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::RecalculateIfNecessary)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5e5bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RecalculateIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.RecalculateAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::RecalculateAll)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e5c2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RecalculateAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.FloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)()>(&::Pathfinding::HierarchicalGraph::FloodFill)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5e5c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"FloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.FindHierarchicalNodeChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(int32_t, ::Pathfinding::GraphNode*)>(&::Pathfinding::HierarchicalGraph::FindHierarchicalNodeChildren)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5e5be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"FindHierarchicalNodeChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(::Pathfinding::Util::RetainedGizmos*)>(&::Pathfinding::HierarchicalGraph::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5e5c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph.__ctor_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::HierarchicalGraph::__ctor_b__22_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5e5c9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::HierarchicalGraph._RecalculateAll_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::HierarchicalGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::HierarchicalGraph::_RecalculateAll_b__34_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e5cbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"<RecalculateAll>b__34_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>& Pathfinding::HierarchicalGraph::__cordl_internal_get_children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*> const& Pathfinding::HierarchicalGraph::__cordl_internal_get_children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_children(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___children = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& Pathfinding::HierarchicalGraph::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& Pathfinding::HierarchicalGraph::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_connections(::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::HierarchicalGraph::__cordl_internal_get_areas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areas;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::HierarchicalGraph::__cordl_internal_get_areas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areas;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_areas(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areas = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::HierarchicalGraph::__cordl_internal_get_dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::HierarchicalGraph::__cordl_internal_get_dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirty;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_dirty(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirty = value;
}
constexpr int32_t& Pathfinding::HierarchicalGraph::__cordl_internal_get__version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr int32_t const& Pathfinding::HierarchicalGraph::__cordl_internal_get__version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set__version_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version_k__BackingField = value;
}
constexpr ::System::Action*& Pathfinding::HierarchicalGraph::__cordl_internal_get_onConnectedComponentsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnectedComponentsChanged;
}
constexpr ::System::Action* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_onConnectedComponentsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnectedComponentsChanged;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_onConnectedComponentsChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onConnectedComponentsChanged = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_connectionCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionCallback;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_connectionCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionCallback;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_connectionCallback(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionCallback = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_temporaryQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_temporaryQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryQueue;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_temporaryQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporaryQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChildren;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChildren;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_currentChildren(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChildren = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentConnections;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentConnections;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_currentConnections(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentConnections = value;
}
constexpr int32_t& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentHierarchicalNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHierarchicalNodeIndex;
}
constexpr int32_t const& Pathfinding::HierarchicalGraph::__cordl_internal_get_currentHierarchicalNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHierarchicalNodeIndex;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_currentHierarchicalNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHierarchicalNodeIndex = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_temporaryStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStack;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_temporaryStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStack;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_temporaryStack(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporaryStack = value;
}
constexpr int32_t& Pathfinding::HierarchicalGraph::__cordl_internal_get_numDirtyNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numDirtyNodes;
}
constexpr int32_t const& Pathfinding::HierarchicalGraph::__cordl_internal_get_numDirtyNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numDirtyNodes;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_numDirtyNodes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numDirtyNodes = value;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*>& Pathfinding::HierarchicalGraph::__cordl_internal_get_dirtyNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyNodes;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*> const& Pathfinding::HierarchicalGraph::__cordl_internal_get_dirtyNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyNodes;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_dirtyNodes(::ArrayW<::Pathfinding::GraphNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtyNodes = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& Pathfinding::HierarchicalGraph::__cordl_internal_get_freeNodeIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeNodeIndices;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& Pathfinding::HierarchicalGraph::__cordl_internal_get_freeNodeIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeNodeIndices;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_freeNodeIndices(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeNodeIndices = value;
}
constexpr int32_t& Pathfinding::HierarchicalGraph::__cordl_internal_get_gizmoVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoVersion;
}
constexpr int32_t const& Pathfinding::HierarchicalGraph::__cordl_internal_get_gizmoVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoVersion;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set_gizmoVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoVersion = value;
}
constexpr int32_t& Pathfinding::HierarchicalGraph::__cordl_internal_get__NumConnectedComponents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NumConnectedComponents_k__BackingField;
}
constexpr int32_t const& Pathfinding::HierarchicalGraph::__cordl_internal_get__NumConnectedComponents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NumConnectedComponents_k__BackingField;
}
constexpr void Pathfinding::HierarchicalGraph::__cordl_internal_set__NumConnectedComponents_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NumConnectedComponents_k__BackingField = value;
}
inline int32_t Pathfinding::HierarchicalGraph::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::set_version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"set_version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::HierarchicalGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::HierarchicalGraph::GetHierarchicalNodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"GetHierarchicalNodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::OnCreatedNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"OnCreatedNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::HierarchicalGraph::AddDirtyNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"AddDirtyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline int32_t Pathfinding::HierarchicalGraph::get_NumConnectedComponents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"get_NumConnectedComponents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::set_NumConnectedComponents(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"set_NumConnectedComponents", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::HierarchicalGraph::GetConnectedComponent(int32_t  hierarchicalNodeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"GetConnectedComponent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, hierarchicalNodeIndex);
}
inline void Pathfinding::HierarchicalGraph::RemoveHierarchicalNode(int32_t  hierarchicalNode, bool  removeAdjacentSmallNodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RemoveHierarchicalNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hierarchicalNode, removeAdjacentSmallNodes);
}
inline void Pathfinding::HierarchicalGraph::RecalculateIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RecalculateIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::RecalculateAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"RecalculateAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::FloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"FloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::HierarchicalGraph::FindHierarchicalNodeChildren(int32_t  hierarchicalNode, ::Pathfinding::GraphNode*  startNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"FindHierarchicalNodeChildren", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hierarchicalNode, startNode);
}
inline void Pathfinding::HierarchicalGraph::OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<::Pathfinding::Util::RetainedGizmos*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos);
}
inline void Pathfinding::HierarchicalGraph::__ctor_b__22_0(::Pathfinding::GraphNode*  neighbour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, neighbour);
}
inline void Pathfinding::HierarchicalGraph::_RecalculateAll_b__34_0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::HierarchicalGraph*>(),
                        {"<RecalculateAll>b__34_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::HierarchicalGraph* Pathfinding::HierarchicalGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::HierarchicalGraph*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::HierarchicalGraph::HierarchicalGraph()   {
}

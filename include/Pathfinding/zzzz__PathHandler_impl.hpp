#pragma once
// IWYU pragma private; include "Pathfinding/PathHandler.hpp"
#include "Pathfinding/zzzz__PathNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__BinaryHeap_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathHandler.get_PathID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Pathfinding::PathHandler::*)()>(&::Pathfinding::PathHandler::get_PathID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"get_PathID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathHandler::*)(int32_t, int32_t)>(&::Pathfinding::PathHandler::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e63cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.InitializeForPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathHandler::*)(::Pathfinding::Path*)>(&::Pathfinding::PathHandler::InitializeForPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e6a8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"InitializeForPath", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.DestroyNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathHandler::DestroyNode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e64ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.InitializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathHandler::InitializeNode)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e64c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.GetPathNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathNode* (::Pathfinding::PathHandler::*)(int32_t)>(&::Pathfinding::PathHandler::GetPathNode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e6acb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"GetPathNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.GetPathNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathNode* (::Pathfinding::PathHandler::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathHandler::GetPathNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e680f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"GetPathNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathHandler.ClearPathIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathHandler::*)()>(&::Pathfinding::PathHandler::ClearPathIDs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"ClearPathIDs", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Pathfinding::PathHandler::__cordl_internal_get_pathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathID;
}
constexpr uint16_t const& Pathfinding::PathHandler::__cordl_internal_get_pathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathID;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_pathID(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathID = value;
}
constexpr int32_t& Pathfinding::PathHandler::__cordl_internal_get_threadID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadID;
}
constexpr int32_t const& Pathfinding::PathHandler::__cordl_internal_get_threadID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadID;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_threadID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadID = value;
}
constexpr int32_t& Pathfinding::PathHandler::__cordl_internal_get_totalThreadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalThreadCount;
}
constexpr int32_t const& Pathfinding::PathHandler::__cordl_internal_get_totalThreadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalThreadCount;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_totalThreadCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalThreadCount = value;
}
constexpr ::Pathfinding::BinaryHeap*& Pathfinding::PathHandler::__cordl_internal_get_heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr ::Pathfinding::BinaryHeap* const& Pathfinding::PathHandler::__cordl_internal_get_heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_heap(::Pathfinding::BinaryHeap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heap = value;
}
constexpr ::ArrayW<::Pathfinding::PathNode*>& Pathfinding::PathHandler::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::Pathfinding::PathNode*> const& Pathfinding::PathHandler::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_nodes(::ArrayW<::Pathfinding::PathNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::System::Text::StringBuilder*& Pathfinding::PathHandler::__cordl_internal_get_DebugStringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& Pathfinding::PathHandler::__cordl_internal_get_DebugStringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugStringBuilder;
}
constexpr void Pathfinding::PathHandler::__cordl_internal_set_DebugStringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugStringBuilder = value;
}
inline uint16_t Pathfinding::PathHandler::get_PathID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"get_PathID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Pathfinding::PathHandler::_ctor(int32_t  threadID, int32_t  totalThreadCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threadID, totalThreadCount);
}
inline void Pathfinding::PathHandler::InitializeForPath(::Pathfinding::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"InitializeForPath", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::PathHandler::DestroyNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathHandler::InitializeNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::PathNode* Pathfinding::PathHandler::GetPathNode(int32_t  nodeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"GetPathNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathNode*>(this, ___internal_method, nodeIndex);
}
inline ::Pathfinding::PathNode* Pathfinding::PathHandler::GetPathNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"GetPathNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathNode*>(this, ___internal_method, node);
}
inline void Pathfinding::PathHandler::ClearPathIDs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathHandler*>(),
                        {"ClearPathIDs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathHandler* Pathfinding::PathHandler::New_ctor(int32_t  threadID, int32_t  totalThreadCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathHandler*>(threadID, totalThreadCount));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathHandler::PathHandler()   {
}

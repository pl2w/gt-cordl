#pragma once
// IWYU pragma private; include "Pathfinding/PathProcessor.hpp"
#include "Pathfinding/zzzz__PathHandler_impl.hpp"
#include "System/Threading/zzzz__Thread_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathProcessor_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IPathInternals_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_def.hpp"
#include "Pathfinding/zzzz__PathReturnQueue_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__ThreadControlQueue_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathProcessor.add_OnPathPreSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action_1<::Pathfinding::Path*>*)>(&::Pathfinding::PathProcessor::add_OnPathPreSearch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e63250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnPathPreSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.remove_OnPathPreSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action_1<::Pathfinding::Path*>*)>(&::Pathfinding::PathProcessor::remove_OnPathPreSearch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e63300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnPathPreSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.add_OnPathPostSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action_1<::Pathfinding::Path*>*)>(&::Pathfinding::PathProcessor::add_OnPathPostSearch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e633b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnPathPostSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.remove_OnPathPostSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action_1<::Pathfinding::Path*>*)>(&::Pathfinding::PathProcessor::remove_OnPathPostSearch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e63460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnPathPostSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.add_OnQueueUnblocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action*)>(&::Pathfinding::PathProcessor::add_OnQueueUnblocked)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e63510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnQueueUnblocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.remove_OnQueueUnblocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::System::Action*)>(&::Pathfinding::PathProcessor::remove_OnQueueUnblocked)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e635ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnQueueUnblocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.get_NumThreads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::get_NumThreads)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e63648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"get_NumThreads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.get_IsUsingMultithreading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::get_IsUsingMultithreading)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e63660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"get_IsUsingMultithreading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::GlobalNamespace::AstarPath*, ::Pathfinding::PathReturnQueue*, int32_t, bool)>(&::Pathfinding::PathProcessor::_ctor)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5e63670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::Pathfinding::PathReturnQueue*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PathProcessor::*)(bool)>(&::Pathfinding::PathProcessor::Lock)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e63e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"Lock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(int32_t)>(&::Pathfinding::PathProcessor::Unlock)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e64320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"Unlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.PausePathfinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PathProcessor_GraphUpdateLock (::Pathfinding::PathProcessor::*)(bool)>(&::Pathfinding::PathProcessor::PausePathfinding)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e644e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"PausePathfinding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.TickNonMultithreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::TickNonMultithreaded)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5e63ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"TickNonMultithreaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.JoinThreads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::JoinThreads)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e6491c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"JoinThreads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.AbortThreads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::AbortThreads)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e64a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"AbortThreads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.GetNewNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PathProcessor::*)()>(&::Pathfinding::PathProcessor::GetNewNodeIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e64aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"GetNewNodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.InitializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathProcessor::InitializeNode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e64b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.DestroyNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::PathProcessor::DestroyNode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e64e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.CalculatePathsThreaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor::*)(::Pathfinding::PathHandler*)>(&::Pathfinding::PathProcessor::CalculatePathsThreaded)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x5e64f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"CalculatePathsThreaded", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor.CalculatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::PathProcessor::*)(::Pathfinding::PathHandler*)>(&::Pathfinding::PathProcessor::CalculatePaths)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e63dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"CalculatePaths", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Pathfinding::Path*>*& Pathfinding::PathProcessor::__cordl_internal_get_OnPathPreSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPathPreSearch;
}
constexpr ::System::Action_1<::Pathfinding::Path*>* const& Pathfinding::PathProcessor::__cordl_internal_get_OnPathPreSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPathPreSearch;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPathPreSearch = value;
}
constexpr ::System::Action_1<::Pathfinding::Path*>*& Pathfinding::PathProcessor::__cordl_internal_get_OnPathPostSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPathPostSearch;
}
constexpr ::System::Action_1<::Pathfinding::Path*>* const& Pathfinding::PathProcessor::__cordl_internal_get_OnPathPostSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPathPostSearch;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPathPostSearch = value;
}
constexpr ::System::Action*& Pathfinding::PathProcessor::__cordl_internal_get_OnQueueUnblocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQueueUnblocked;
}
constexpr ::System::Action* const& Pathfinding::PathProcessor::__cordl_internal_get_OnQueueUnblocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnQueueUnblocked;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_OnQueueUnblocked(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnQueueUnblocked = value;
}
constexpr ::Pathfinding::ThreadControlQueue*& Pathfinding::PathProcessor::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::Pathfinding::ThreadControlQueue* const& Pathfinding::PathProcessor::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_queue(::Pathfinding::ThreadControlQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& Pathfinding::PathProcessor::__cordl_internal_get_astar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& Pathfinding::PathProcessor::__cordl_internal_get_astar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___astar = value;
}
constexpr ::Pathfinding::PathReturnQueue*& Pathfinding::PathProcessor::__cordl_internal_get_returnQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnQueue;
}
constexpr ::Pathfinding::PathReturnQueue* const& Pathfinding::PathProcessor::__cordl_internal_get_returnQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnQueue;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_returnQueue(::Pathfinding::PathReturnQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnQueue = value;
}
constexpr ::ArrayW<::Pathfinding::PathHandler*>& Pathfinding::PathProcessor::__cordl_internal_get_pathHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandlers;
}
constexpr ::ArrayW<::Pathfinding::PathHandler*> const& Pathfinding::PathProcessor::__cordl_internal_get_pathHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandlers;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_pathHandlers(::ArrayW<::Pathfinding::PathHandler*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathHandlers = value;
}
constexpr ::ArrayW<::System::Threading::Thread*>& Pathfinding::PathProcessor::__cordl_internal_get_threads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threads;
}
constexpr ::ArrayW<::System::Threading::Thread*> const& Pathfinding::PathProcessor::__cordl_internal_get_threads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threads;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_threads(::ArrayW<::System::Threading::Thread*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threads = value;
}
constexpr ::System::Collections::IEnumerator*& Pathfinding::PathProcessor::__cordl_internal_get_threadCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCoroutine;
}
constexpr ::System::Collections::IEnumerator* const& Pathfinding::PathProcessor::__cordl_internal_get_threadCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCoroutine;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_threadCoroutine(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadCoroutine = value;
}
constexpr int32_t& Pathfinding::PathProcessor::__cordl_internal_get_nextNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNodeIndex;
}
constexpr int32_t const& Pathfinding::PathProcessor::__cordl_internal_get_nextNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNodeIndex;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_nextNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNodeIndex = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& Pathfinding::PathProcessor::__cordl_internal_get_nodeIndexPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeIndexPool;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& Pathfinding::PathProcessor::__cordl_internal_get_nodeIndexPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeIndexPool;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_nodeIndexPool(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeIndexPool = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Pathfinding::PathProcessor::__cordl_internal_get_locks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locks;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Pathfinding::PathProcessor::__cordl_internal_get_locks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locks;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_locks(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locks = value;
}
constexpr int32_t& Pathfinding::PathProcessor::__cordl_internal_get_nextLockID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLockID;
}
constexpr int32_t const& Pathfinding::PathProcessor::__cordl_internal_get_nextLockID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLockID;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_nextLockID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLockID = value;
}
constexpr ::UnityEngine::Profiling::CustomSampler*& Pathfinding::PathProcessor::__cordl_internal_get_profilingSampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___profilingSampler;
}
constexpr ::UnityEngine::Profiling::CustomSampler* const& Pathfinding::PathProcessor::__cordl_internal_get_profilingSampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___profilingSampler;
}
constexpr void Pathfinding::PathProcessor::__cordl_internal_set_profilingSampler(::UnityEngine::Profiling::CustomSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___profilingSampler = value;
}
inline void Pathfinding::PathProcessor::add_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnPathPreSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PathProcessor::remove_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnPathPreSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PathProcessor::add_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnPathPostSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PathProcessor::remove_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnPathPostSearch", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::Path*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PathProcessor::add_OnQueueUnblocked(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"add_OnQueueUnblocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::PathProcessor::remove_OnQueueUnblocked(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"remove_OnQueueUnblocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::PathProcessor::get_NumThreads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"get_NumThreads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Pathfinding::PathProcessor::get_IsUsingMultithreading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"get_IsUsingMultithreading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor::_ctor(::GlobalNamespace::AstarPath*  astar, ::Pathfinding::PathReturnQueue*  returnQueue, int32_t  processors, bool  multithreaded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>(), ::i2c::type_of<::Pathfinding::PathReturnQueue*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar, returnQueue, processors, multithreaded);
}
inline int32_t Pathfinding::PathProcessor::Lock(bool  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"Lock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, block);
}
inline void Pathfinding::PathProcessor::Unlock(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"Unlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock Pathfinding::PathProcessor::PausePathfinding(bool  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"PausePathfinding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathProcessor_GraphUpdateLock>(this, ___internal_method, block);
}
inline void Pathfinding::PathProcessor::TickNonMultithreaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"TickNonMultithreaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor::JoinThreads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"JoinThreads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor::AbortThreads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"AbortThreads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::PathProcessor::GetNewNodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"GetNewNodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor::InitializeNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathProcessor::DestroyNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::PathProcessor::CalculatePathsThreaded(::Pathfinding::PathHandler*  pathHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"CalculatePathsThreaded", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathHandler);
}
inline ::System::Collections::IEnumerator* Pathfinding::PathProcessor::CalculatePaths(::Pathfinding::PathHandler*  pathHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor*>(),
                        {"CalculatePaths", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, pathHandler);
}
inline ::Pathfinding::PathProcessor* Pathfinding::PathProcessor::New_ctor(::GlobalNamespace::AstarPath*  astar, ::Pathfinding::PathReturnQueue*  returnQueue, int32_t  processors, bool  multithreaded)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathProcessor*>(astar, returnQueue, processors, multithreaded));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathProcessor::PathProcessor()   {
}
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)(int32_t)>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e65c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)()>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e65d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)()>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x8c4;
  constexpr static std::size_t addrs = 0x5e65d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)()>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e66630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)()>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e66638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor__CalculatePaths_d__36.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::PathProcessor__CalculatePaths_d__36::*)()>(&::Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e66670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::PathProcessor*& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::PathProcessor* const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set___4__this(::Pathfinding::PathProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::PathHandler*& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get_pathHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr ::Pathfinding::PathHandler* const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get_pathHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathHandler = value;
}
constexpr int64_t& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__maxTicks_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTicks_5__2;
}
constexpr int64_t const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__maxTicks_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTicks_5__2;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__maxTicks_5__2(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTicks_5__2 = value;
}
constexpr int64_t& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__targetTick_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTick_5__3;
}
constexpr int64_t const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__targetTick_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTick_5__3;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__targetTick_5__3(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetTick_5__3 = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__p_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p_5__4;
}
constexpr ::Pathfinding::Path* const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__p_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p_5__4;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__p_5__4(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____p_5__4 = value;
}
constexpr bool& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__blockedBefore_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockedBefore_5__5;
}
constexpr bool const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__blockedBefore_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockedBefore_5__5;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__blockedBefore_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockedBefore_5__5 = value;
}
constexpr ::Pathfinding::IPathInternals*& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__ip_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ip_5__6;
}
constexpr ::Pathfinding::IPathInternals* const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__ip_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ip_5__6;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__ip_5__6(::Pathfinding::IPathInternals*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ip_5__6 = value;
}
constexpr int64_t& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__totalTicks_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalTicks_5__7;
}
constexpr int64_t const& Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_get__totalTicks_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalTicks_5__7;
}
constexpr void Pathfinding::PathProcessor__CalculatePaths_d__36::__cordl_internal_set__totalTicks_5__7(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalTicks_5__7 = value;
}
inline void Pathfinding::PathProcessor__CalculatePaths_d__36::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::PathProcessor__CalculatePaths_d__36::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::PathProcessor__CalculatePaths_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::PathProcessor__CalculatePaths_d__36::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::PathProcessor__CalculatePaths_d__36* Pathfinding::PathProcessor__CalculatePaths_d__36::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathProcessor__CalculatePaths_d__36*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::PathProcessor__CalculatePaths_d__36::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::PathProcessor__CalculatePaths_d__36::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::PathProcessor__CalculatePaths_d__36::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::PathProcessor__CalculatePaths_d__36::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::PathProcessor__CalculatePaths_d__36::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::PathProcessor__CalculatePaths_d__36::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathProcessor__CalculatePaths_d__36::PathProcessor__CalculatePaths_d__36()   {
}
//  Writing Method size for method: ::Pathfinding::PathProcessor___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor___c__DisplayClass24_0::*)()>(&::Pathfinding::PathProcessor___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e63da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathProcessor___c__DisplayClass24_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathProcessor___c__DisplayClass24_0::*)()>(&::Pathfinding::PathProcessor___c__DisplayClass24_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e65d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor___c__DisplayClass24_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::PathHandler*& Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_get_pathHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr ::Pathfinding::PathHandler* const& Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_get_pathHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr void Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathHandler = value;
}
constexpr ::Pathfinding::PathProcessor*& Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::PathProcessor* const& Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::PathProcessor___c__DisplayClass24_0::__cordl_internal_set___4__this(::Pathfinding::PathProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::PathProcessor___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::PathProcessor___c__DisplayClass24_0::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathProcessor___c__DisplayClass24_0*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathProcessor___c__DisplayClass24_0* Pathfinding::PathProcessor___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathProcessor___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PathProcessor___c__DisplayClass24_0::PathProcessor___c__DisplayClass24_0()   {
}

#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_GUOSingle_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_GraphUpdateOrder_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.add_OnGraphsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)(::System::Action*)>(&::Pathfinding::GraphUpdateProcessor::add_OnGraphsUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e57ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"add_OnGraphsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.remove_OnGraphsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)(::System::Action*)>(&::Pathfinding::GraphUpdateProcessor::remove_OnGraphsUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e57f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"remove_OnGraphsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.get_IsAnyGraphUpdateQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::get_IsAnyGraphUpdateQueued)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e57ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"get_IsAnyGraphUpdateQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.get_IsAnyGraphUpdateInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::get_IsAnyGraphUpdateInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5804c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"get_IsAnyGraphUpdateInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::GraphUpdateProcessor::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e58054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.GetWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::AstarWorkItem (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::GetWorkItem)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e58234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"GetWorkItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.EnableMultithreading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::EnableMultithreading)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e58360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"EnableMultithreading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.DisableMultithreading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::DisableMultithreading)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e584d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"DisableMultithreading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.AddToQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::GraphUpdateProcessor::AddToQueue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e585a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"AddToQueue", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.QueueGraphUpdatesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::QueueGraphUpdatesInternal)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5e585fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"QueueGraphUpdatesInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.ProcessGraphUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateProcessor::*)(bool)>(&::Pathfinding::GraphUpdateProcessor::ProcessGraphUpdates)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e58b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessGraphUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.ProcessRegularUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateProcessor::*)(bool)>(&::Pathfinding::GraphUpdateProcessor::ProcessRegularUpdates)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5e58eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessRegularUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.StartAsyncUpdatesIfQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::StartAsyncUpdatesIfQueued)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e59334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"StartAsyncUpdatesIfQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.ProcessPostUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::ProcessPostUpdates)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e58c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessPostUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateProcessor.ProcessGraphUpdatesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphUpdateProcessor::*)()>(&::Pathfinding::GraphUpdateProcessor::ProcessGraphUpdatesAsync)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5e593ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessGraphUpdatesAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_OnGraphsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsUpdated;
}
constexpr ::System::Action* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_OnGraphsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsUpdated;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_OnGraphsUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGraphsUpdated = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_astar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_astar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___astar = value;
}
constexpr ::System::Threading::Thread*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateThread;
}
constexpr ::System::Threading::Thread* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateThread;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateThread = value;
}
constexpr bool& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_anyGraphUpdateInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyGraphUpdateInProgress;
}
constexpr bool const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_anyGraphUpdateInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyGraphUpdateInProgress;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_anyGraphUpdateInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyGraphUpdateInProgress = value;
}
constexpr ::UnityEngine::Profiling::CustomSampler*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_asyncUpdateProfilingSampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncUpdateProfilingSampler;
}
constexpr ::UnityEngine::Profiling::CustomSampler* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_asyncUpdateProfilingSampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncUpdateProfilingSampler;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_asyncUpdateProfilingSampler(::UnityEngine::Profiling::CustomSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncUpdateProfilingSampler = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueue;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateQueue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueueAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueueAsync;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueueAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueueAsync;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateQueueAsync(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateQueueAsync = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueuePost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueuePost;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueuePost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueuePost;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateQueuePost(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateQueuePost = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueueRegular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueueRegular;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateQueueRegular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateQueueRegular;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateQueueRegular(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateQueueRegular = value;
}
constexpr ::System::Threading::ManualResetEvent*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_asyncGraphUpdatesComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncGraphUpdatesComplete;
}
constexpr ::System::Threading::ManualResetEvent* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_asyncGraphUpdatesComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncGraphUpdatesComplete;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_asyncGraphUpdatesComplete(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncGraphUpdatesComplete = value;
}
constexpr ::System::Threading::AutoResetEvent*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateAsyncEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateAsyncEvent;
}
constexpr ::System::Threading::AutoResetEvent* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_graphUpdateAsyncEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateAsyncEvent;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_graphUpdateAsyncEvent(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateAsyncEvent = value;
}
constexpr ::System::Threading::AutoResetEvent*& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_exitAsyncThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitAsyncThread;
}
constexpr ::System::Threading::AutoResetEvent* const& Pathfinding::GraphUpdateProcessor::__cordl_internal_get_exitAsyncThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitAsyncThread;
}
constexpr void Pathfinding::GraphUpdateProcessor::__cordl_internal_set_exitAsyncThread(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitAsyncThread = value;
}
inline void Pathfinding::GraphUpdateProcessor::add_OnGraphsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"add_OnGraphsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::GraphUpdateProcessor::remove_OnGraphsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"remove_OnGraphsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GraphUpdateProcessor::get_IsAnyGraphUpdateQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"get_IsAnyGraphUpdateQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::GraphUpdateProcessor::get_IsAnyGraphUpdateInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"get_IsAnyGraphUpdateInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline ::Pathfinding::AstarWorkItem Pathfinding::GraphUpdateProcessor::GetWorkItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"GetWorkItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::AstarWorkItem>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::EnableMultithreading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"EnableMultithreading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::DisableMultithreading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"DisableMultithreading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::AddToQueue(::Pathfinding::GraphUpdateObject*  ob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"AddToQueue", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob);
}
inline void Pathfinding::GraphUpdateProcessor::QueueGraphUpdatesInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"QueueGraphUpdatesInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GraphUpdateProcessor::ProcessGraphUpdates(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessGraphUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline bool Pathfinding::GraphUpdateProcessor::ProcessRegularUpdates(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessRegularUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline bool Pathfinding::GraphUpdateProcessor::StartAsyncUpdatesIfQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"StartAsyncUpdatesIfQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::ProcessPostUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessPostUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphUpdateProcessor::ProcessGraphUpdatesAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateProcessor*>(),
                        {"ProcessGraphUpdatesAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GraphUpdateProcessor* Pathfinding::GraphUpdateProcessor::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphUpdateProcessor*>(astar));
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateProcessor::GraphUpdateProcessor()   {
}

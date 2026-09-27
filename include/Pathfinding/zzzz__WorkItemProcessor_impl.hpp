#pragma once
// IWYU pragma private; include "Pathfinding/WorkItemProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__WorkItemProcessor_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_def.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__WorkItemProcessor_def.hpp"
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.get_workItemsInProgressRightNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::get_workItemsInProgressRightNow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_workItemsInProgressRightNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.set_workItemsInProgressRightNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)(bool)>(&::Pathfinding::WorkItemProcessor::set_workItemsInProgressRightNow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"set_workItemsInProgressRightNow", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.get_anyQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::get_anyQueued)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e67134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_anyQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.get_workItemsInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::get_workItemsInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_workItemsInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.set_workItemsInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)(bool)>(&::Pathfinding::WorkItemProcessor::set_workItemsInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6718c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"set_workItemsInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.Pathfinding_IWorkItemContext_QueueFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_QueueFloodFill)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e67194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"Pathfinding.IWorkItemContext.QueueFloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.Pathfinding_IWorkItemContext_SetGraphDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_SetGraphDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e671a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"Pathfinding.IWorkItemContext.SetGraphDirty", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.EnsureValidFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::EnsureValidFloodFill)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e671ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"EnsureValidFloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::WorkItemProcessor::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e671e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.OnFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)()>(&::Pathfinding::WorkItemProcessor::OnFloodFill)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6728c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"OnFloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.AddWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::WorkItemProcessor::*)(::Pathfinding::AstarWorkItem)>(&::Pathfinding::WorkItemProcessor::AddWorkItem)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e67294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::Pathfinding::AstarWorkItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::WorkItemProcessor.ProcessWorkItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::WorkItemProcessor::*)(bool)>(&::Pathfinding::WorkItemProcessor::ProcessWorkItems)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5e67300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"ProcessWorkItems", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::WorkItemProcessor::__cordl_internal_get__workItemsInProgressRightNow_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemsInProgressRightNow_k__BackingField;
}
constexpr bool const& Pathfinding::WorkItemProcessor::__cordl_internal_get__workItemsInProgressRightNow_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemsInProgressRightNow_k__BackingField;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set__workItemsInProgressRightNow_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workItemsInProgressRightNow_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& Pathfinding::WorkItemProcessor::__cordl_internal_get_astar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& Pathfinding::WorkItemProcessor::__cordl_internal_get_astar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___astar;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___astar = value;
}
constexpr ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*& Pathfinding::WorkItemProcessor::__cordl_internal_get_workItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItems;
}
constexpr ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>* const& Pathfinding::WorkItemProcessor::__cordl_internal_get_workItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItems;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set_workItems(::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workItems = value;
}
constexpr bool& Pathfinding::WorkItemProcessor::__cordl_internal_get_queuedWorkItemFloodFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedWorkItemFloodFill;
}
constexpr bool const& Pathfinding::WorkItemProcessor::__cordl_internal_get_queuedWorkItemFloodFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedWorkItemFloodFill;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set_queuedWorkItemFloodFill(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedWorkItemFloodFill = value;
}
constexpr bool& Pathfinding::WorkItemProcessor::__cordl_internal_get_anyGraphsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyGraphsDirty;
}
constexpr bool const& Pathfinding::WorkItemProcessor::__cordl_internal_get_anyGraphsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyGraphsDirty;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set_anyGraphsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyGraphsDirty = value;
}
constexpr bool& Pathfinding::WorkItemProcessor::__cordl_internal_get__workItemsInProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemsInProgress_k__BackingField;
}
constexpr bool const& Pathfinding::WorkItemProcessor::__cordl_internal_get__workItemsInProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemsInProgress_k__BackingField;
}
constexpr void Pathfinding::WorkItemProcessor::__cordl_internal_set__workItemsInProgress_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workItemsInProgress_k__BackingField = value;
}
inline bool Pathfinding::WorkItemProcessor::get_workItemsInProgressRightNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_workItemsInProgressRightNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::WorkItemProcessor::set_workItemsInProgressRightNow(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"set_workItemsInProgressRightNow", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::WorkItemProcessor::get_anyQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_anyQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::WorkItemProcessor::get_workItemsInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"get_workItemsInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::WorkItemProcessor::set_workItemsInProgress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"set_workItemsInProgress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_QueueFloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"Pathfinding.IWorkItemContext.QueueFloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_SetGraphDirty(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"Pathfinding.IWorkItemContext.SetGraphDirty", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Pathfinding::WorkItemProcessor::EnsureValidFloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"EnsureValidFloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::WorkItemProcessor::_ctor(::GlobalNamespace::AstarPath*  astar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, astar);
}
inline void Pathfinding::WorkItemProcessor::OnFloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"OnFloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::WorkItemProcessor::AddWorkItem(::Pathfinding::AstarWorkItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::Pathfinding::AstarWorkItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool Pathfinding::WorkItemProcessor::ProcessWorkItems(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor*>(),
                        {"ProcessWorkItems", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline ::Pathfinding::WorkItemProcessor* Pathfinding::WorkItemProcessor::New_ctor(::GlobalNamespace::AstarPath*  astar)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::WorkItemProcessor*>(astar));
}
/// @brief Convert operator to "::Pathfinding::IWorkItemContext"
constexpr  Pathfinding::WorkItemProcessor::operator ::Pathfinding::IWorkItemContext*() noexcept {
return static_cast<::Pathfinding::IWorkItemContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IWorkItemContext"
constexpr ::Pathfinding::IWorkItemContext* Pathfinding::WorkItemProcessor::i___Pathfinding__IWorkItemContext() noexcept {
return static_cast<::Pathfinding::IWorkItemContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::WorkItemProcessor::WorkItemProcessor()   {
}
template<typename T>
constexpr ::ArrayW<T>& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_set_buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename T>
constexpr int32_t& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
template<typename T>
constexpr int32_t const& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
template<typename T>
constexpr void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_set_start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
template<typename T>
constexpr int32_t& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr int32_t const& Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
template<typename T>
constexpr void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
template<typename T>
inline T Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline int32_t Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::Enqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>* Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>::WorkItemProcessor_IndexedQueue_1()   {
}

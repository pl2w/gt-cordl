#pragma once
// IWYU pragma private; include "Pathfinding/ThreadControlQueue.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__ThreadControlQueue_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__ThreadControlQueue_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)(int32_t)>(&::Pathfinding::ThreadControlQueue::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e63bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e66d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.get_IsTerminating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e66d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_IsTerminating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Block)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e63f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Block", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Unblock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Unblock)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e64410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Unblock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Lock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e66d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Unlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e66d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Unlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.get_AllReceiversBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::get_AllReceiversBlocked)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e6423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_AllReceiversBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.PushFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)(::Pathfinding::Path*)>(&::Pathfinding::ThreadControlQueue::PushFront)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5e66d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"PushFront", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)(::Pathfinding::Path*)>(&::Pathfinding::ThreadControlQueue::Push)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e66ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Push", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Starving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Starving)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e66ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Starving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.TerminateReceivers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::TerminateReceivers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e6454c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"TerminateReceivers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.Pop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::Pop)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5e6577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Pop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.ReceiverTerminated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue::*)()>(&::Pathfinding::ThreadControlQueue::ReceiverTerminated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e65c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"ReceiverTerminated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue.PopNoBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::ThreadControlQueue::*)(bool)>(&::Pathfinding::ThreadControlQueue::PopNoBlock)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5e64620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"PopNoBlock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Path*& Pathfinding::ThreadControlQueue::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::Pathfinding::Path* const& Pathfinding::ThreadControlQueue::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_head(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::ThreadControlQueue::__cordl_internal_get_tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr ::Pathfinding::Path* const& Pathfinding::ThreadControlQueue::__cordl_internal_get_tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_tail(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tail = value;
}
constexpr ::System::Object*& Pathfinding::ThreadControlQueue::__cordl_internal_get_lockObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObj;
}
constexpr ::System::Object* const& Pathfinding::ThreadControlQueue::__cordl_internal_get_lockObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObj;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_lockObj(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockObj = value;
}
constexpr int32_t& Pathfinding::ThreadControlQueue::__cordl_internal_get_numReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numReceivers;
}
constexpr int32_t const& Pathfinding::ThreadControlQueue::__cordl_internal_get_numReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numReceivers;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_numReceivers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numReceivers = value;
}
constexpr bool& Pathfinding::ThreadControlQueue::__cordl_internal_get_blocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocked;
}
constexpr bool const& Pathfinding::ThreadControlQueue::__cordl_internal_get_blocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocked;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_blocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocked = value;
}
constexpr int32_t& Pathfinding::ThreadControlQueue::__cordl_internal_get_blockedReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedReceivers;
}
constexpr int32_t const& Pathfinding::ThreadControlQueue::__cordl_internal_get_blockedReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedReceivers;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_blockedReceivers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedReceivers = value;
}
constexpr bool& Pathfinding::ThreadControlQueue::__cordl_internal_get_starving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starving;
}
constexpr bool const& Pathfinding::ThreadControlQueue::__cordl_internal_get_starving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___starving;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_starving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___starving = value;
}
constexpr bool& Pathfinding::ThreadControlQueue::__cordl_internal_get_terminate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminate;
}
constexpr bool const& Pathfinding::ThreadControlQueue::__cordl_internal_get_terminate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminate;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_terminate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminate = value;
}
constexpr ::System::Threading::ManualResetEvent*& Pathfinding::ThreadControlQueue::__cordl_internal_get_block()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block;
}
constexpr ::System::Threading::ManualResetEvent* const& Pathfinding::ThreadControlQueue::__cordl_internal_get_block() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___block;
}
constexpr void Pathfinding::ThreadControlQueue::__cordl_internal_set_block(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___block = value;
}
inline void Pathfinding::ThreadControlQueue::_ctor(int32_t  numReceivers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numReceivers);
}
inline bool Pathfinding::ThreadControlQueue::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::ThreadControlQueue::get_IsTerminating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_IsTerminating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::Block()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Block", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::Unblock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Unblock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ThreadControlQueue::get_AllReceiversBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"get_AllReceiversBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::PushFront(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"PushFront", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::ThreadControlQueue::Push(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Push", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::ThreadControlQueue::Starving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Starving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::TerminateReceivers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"TerminateReceivers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Path* Pathfinding::ThreadControlQueue::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method);
}
inline void Pathfinding::ThreadControlQueue::ReceiverTerminated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"ReceiverTerminated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Path* Pathfinding::ThreadControlQueue::PopNoBlock(bool  blockedBefore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue*>(),
                        {"PopNoBlock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, blockedBefore);
}
inline ::Pathfinding::ThreadControlQueue* Pathfinding::ThreadControlQueue::New_ctor(int32_t  numReceivers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ThreadControlQueue*>(numReceivers));
}
// Ctor Parameters []
constexpr ::Pathfinding::ThreadControlQueue::ThreadControlQueue()   {
}
//  Writing Method size for method: ::Pathfinding::ThreadControlQueue_QueueTerminationException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ThreadControlQueue_QueueTerminationException::*)()>(&::Pathfinding::ThreadControlQueue_QueueTerminationException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e67020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue_QueueTerminationException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::ThreadControlQueue_QueueTerminationException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ThreadControlQueue_QueueTerminationException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ThreadControlQueue_QueueTerminationException* Pathfinding::ThreadControlQueue_QueueTerminationException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ThreadControlQueue_QueueTerminationException*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ThreadControlQueue_QueueTerminationException::ThreadControlQueue_QueueTerminationException()   {
}

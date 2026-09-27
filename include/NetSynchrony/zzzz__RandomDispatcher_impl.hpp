#pragma once
// IWYU pragma private; include "NetSynchrony/RandomDispatcher.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "NetSynchrony/zzzz__RandomDispatcher_def.hpp"
#include "NetSynchrony/zzzz__RandomDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher.add_Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*)>(&::NetSynchrony::RandomDispatcher::add_Dispatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cb7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"add_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher.remove_Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*)>(&::NetSynchrony::RandomDispatcher::remove_Dispatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cb71ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"remove_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)(double_t)>(&::NetSynchrony::RandomDispatcher::Init)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5cb7248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Init", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)(double_t)>(&::NetSynchrony::RandomDispatcher::Sync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cb7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Sync", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)(double_t)>(&::NetSynchrony::RandomDispatcher::Tick)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cb75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Tick", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher::*)()>(&::NetSynchrony::RandomDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb76c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*& NetSynchrony::RandomDispatcher::__cordl_internal_get_Dispatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dispatch;
}
constexpr ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* const& NetSynchrony::RandomDispatcher::__cordl_internal_get_Dispatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dispatch;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dispatch = value;
}
constexpr float_t& NetSynchrony::RandomDispatcher::__cordl_internal_get_minWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWaitTime;
}
constexpr float_t const& NetSynchrony::RandomDispatcher::__cordl_internal_get_minWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWaitTime;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_minWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minWaitTime = value;
}
constexpr float_t& NetSynchrony::RandomDispatcher::__cordl_internal_get_maxWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWaitTime;
}
constexpr float_t const& NetSynchrony::RandomDispatcher::__cordl_internal_get_maxWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWaitTime;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_maxWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxWaitTime = value;
}
constexpr float_t& NetSynchrony::RandomDispatcher::__cordl_internal_get_totalMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalMinutes;
}
constexpr float_t const& NetSynchrony::RandomDispatcher::__cordl_internal_get_totalMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalMinutes;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_totalMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalMinutes = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& NetSynchrony::RandomDispatcher::__cordl_internal_get_dispatchTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispatchTimes;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& NetSynchrony::RandomDispatcher::__cordl_internal_get_dispatchTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispatchTimes;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_dispatchTimes(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispatchTimes = value;
}
constexpr int32_t& NetSynchrony::RandomDispatcher::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& NetSynchrony::RandomDispatcher::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void NetSynchrony::RandomDispatcher::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void NetSynchrony::RandomDispatcher::add_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"add_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NetSynchrony::RandomDispatcher::remove_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"remove_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NetSynchrony::RandomDispatcher::Init(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Init", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void NetSynchrony::RandomDispatcher::Sync(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Sync", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void NetSynchrony::RandomDispatcher::Tick(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {"Tick", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void NetSynchrony::RandomDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::NetSynchrony::RandomDispatcher* NetSynchrony::RandomDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NetSynchrony::RandomDispatcher*>());
}
// Ctor Parameters []
constexpr ::NetSynchrony::RandomDispatcher::RandomDispatcher()   {
}
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::*)(::System::Object*, ::System::IntPtr)>(&::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cb76ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::*)(::NetSynchrony::RandomDispatcher*)>(&::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb77f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(),
                    {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::*)(::NetSynchrony::RandomDispatcher*, ::System::AsyncCallback*, ::System::Object*)>(&::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(),
                    {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::*)(::System::IAsyncResult*)>(&::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb7828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(),
                    {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void NetSynchrony::RandomDispatcher_RandomDispatcherEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void NetSynchrony::RandomDispatcher_RandomDispatcherEvent::Invoke(::NetSynchrony::RandomDispatcher*  randomDispatcher)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomDispatcher);
}
inline ::System::IAsyncResult* NetSynchrony::RandomDispatcher_RandomDispatcherEvent::BeginInvoke(::NetSynchrony::RandomDispatcher*  randomDispatcher, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, randomDispatcher, callback, object);
}
inline void NetSynchrony::RandomDispatcher_RandomDispatcherEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* NetSynchrony::RandomDispatcher_RandomDispatcherEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent::RandomDispatcher_RandomDispatcherEvent()   {
}

#pragma once
// IWYU pragma private; include "System/Timers/Timer.hpp"
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/Timers/zzzz__Timer_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/ComponentModel/zzzz__ISupportInitialize_def.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Timers/zzzz__ElapsedEventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Timers::Timer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xad084d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(double_t)>(&::System::Timers::Timer::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xad08594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.set_AutoReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(bool)>(&::System::Timers::Timer::set_AutoReset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad088a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_AutoReset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(bool)>(&::System::Timers::Timer::set_Enabled)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xad08938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.CalculateRoundedInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t, bool)>(&::System::Timers::Timer::CalculateRoundedInterval)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xad086bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"CalculateRoundedInterval", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.UpdateTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::UpdateTimer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad088f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"UpdateTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.set_Interval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(double_t)>(&::System::Timers::Timer::set_Interval)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad08b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_Interval", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.add_Elapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(::System::Timers::ElapsedEventHandler*)>(&::System::Timers::Timer::add_Elapsed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad08c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"add_Elapsed", {}, {::i2c::type_of<::System::Timers::ElapsedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.remove_Elapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(::System::Timers::ElapsedEventHandler*)>(&::System::Timers::Timer::remove_Elapsed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad08ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"remove_Elapsed", {}, {::i2c::type_of<::System::Timers::ElapsedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.set_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(::System::ComponentModel::ISite*)>(&::System::Timers::Timer::set_Site)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad08d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Timers::Timer*>(),
                    {::i2c::class_of<::System::Timers::Timer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.get_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::Timers::Timer::*)()>(&::System::Timers::Timer::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad08da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Timers::Timer*>(),
                    {::i2c::class_of<::System::Timers::Timer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.get_SynchronizingObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISynchronizeInvoke* (::System::Timers::Timer::*)()>(&::System::Timers::Timer::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xad08da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"get_SynchronizingObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.BeginInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::BeginInit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad08f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"BeginInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad08f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(bool)>(&::System::Timers::Timer::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xad08fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Timers::Timer*>(),
                    {::i2c::class_of<::System::Timers::Timer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.EndInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::EndInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad08fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"EndInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad08fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)()>(&::System::Timers::Timer::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad08ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::Timer.MyTimerCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::Timer::*)(::System::Object*)>(&::System::Timers::Timer::MyTimerCallback)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xad08ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"MyTimerCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& System::Timers::Timer::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr double_t const& System::Timers::Timer::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void System::Timers::Timer::__cordl_internal_set_interval(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
constexpr bool& System::Timers::Timer::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& System::Timers::Timer::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void System::Timers::Timer::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr bool& System::Timers::Timer::__cordl_internal_get_initializing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializing;
}
constexpr bool const& System::Timers::Timer::__cordl_internal_get_initializing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializing;
}
constexpr void System::Timers::Timer::__cordl_internal_set_initializing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initializing = value;
}
constexpr bool& System::Timers::Timer::__cordl_internal_get_delayedEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedEnable;
}
constexpr bool const& System::Timers::Timer::__cordl_internal_get_delayedEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedEnable;
}
constexpr void System::Timers::Timer::__cordl_internal_set_delayedEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedEnable = value;
}
constexpr ::System::Timers::ElapsedEventHandler*& System::Timers::Timer::__cordl_internal_get_onIntervalElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntervalElapsed;
}
constexpr ::System::Timers::ElapsedEventHandler* const& System::Timers::Timer::__cordl_internal_get_onIntervalElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onIntervalElapsed;
}
constexpr void System::Timers::Timer::__cordl_internal_set_onIntervalElapsed(::System::Timers::ElapsedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onIntervalElapsed = value;
}
constexpr bool& System::Timers::Timer::__cordl_internal_get_autoReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoReset;
}
constexpr bool const& System::Timers::Timer::__cordl_internal_get_autoReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoReset;
}
constexpr void System::Timers::Timer::__cordl_internal_set_autoReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoReset = value;
}
constexpr ::System::ComponentModel::ISynchronizeInvoke*& System::Timers::Timer::__cordl_internal_get_synchronizingObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizingObject;
}
constexpr ::System::ComponentModel::ISynchronizeInvoke* const& System::Timers::Timer::__cordl_internal_get_synchronizingObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizingObject;
}
constexpr void System::Timers::Timer::__cordl_internal_set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchronizingObject = value;
}
constexpr bool& System::Timers::Timer::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& System::Timers::Timer::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void System::Timers::Timer::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Threading::Timer*& System::Timers::Timer::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr ::System::Threading::Timer* const& System::Timers::Timer::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void System::Timers::Timer::__cordl_internal_set_timer(::System::Threading::Timer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr ::System::Threading::TimerCallback*& System::Timers::Timer::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Threading::TimerCallback* const& System::Timers::Timer::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void System::Timers::Timer::__cordl_internal_set_callback(::System::Threading::TimerCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::System::Object*& System::Timers::Timer::__cordl_internal_get_cookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr ::System::Object* const& System::Timers::Timer::__cordl_internal_get_cookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr void System::Timers::Timer::__cordl_internal_set_cookie(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookie = value;
}
inline void System::Timers::Timer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::_ctor(double_t  interval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval);
}
inline void System::Timers::Timer::set_AutoReset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_AutoReset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Timers::Timer::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Timers::Timer::CalculateRoundedInterval(double_t  interval, bool  argumentCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"CalculateRoundedInterval", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, interval, argumentCheck);
}
inline void System::Timers::Timer::UpdateTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"UpdateTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::set_Interval(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"set_Interval", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Timers::Timer::add_Elapsed(::System::Timers::ElapsedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"add_Elapsed", {}, {::i2c::type_of<::System::Timers::ElapsedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Timers::Timer::remove_Elapsed(::System::Timers::ElapsedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"remove_Elapsed", {}, {::i2c::type_of<::System::Timers::ElapsedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Timers::Timer::set_Site(::System::ComponentModel::ISite*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Timers::Timer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ISite* System::Timers::Timer::get_Site()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Timers::Timer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method);
}
inline ::System::ComponentModel::ISynchronizeInvoke* System::Timers::Timer::get_SynchronizingObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"get_SynchronizingObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke*>(this, ___internal_method);
}
inline void System::Timers::Timer::BeginInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"BeginInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Timers::Timer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Timers::Timer::EndInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"EndInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Timers::Timer::MyTimerCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::Timer*>(),
                        {"MyTimerCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Timers::Timer* System::Timers::Timer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Timers::Timer*>());
}
inline ::System::Timers::Timer* System::Timers::Timer::New_ctor(double_t  interval)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Timers::Timer*>(interval));
}
/// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
constexpr  System::Timers::Timer::operator ::System::ComponentModel::ISupportInitialize*() noexcept {
return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISupportInitialize"
constexpr ::System::ComponentModel::ISupportInitialize* System::Timers::Timer::i___System__ComponentModel__ISupportInitialize() noexcept {
return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Timers::Timer::Timer()   {
}

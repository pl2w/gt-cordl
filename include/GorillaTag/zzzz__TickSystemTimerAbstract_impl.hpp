#pragma once
// IWYU pragma private; include "GorillaTag/TickSystemTimerAbstract.hpp"
#include "GorillaTag/zzzz__CoolDownHelper_impl.hpp"
#include "GorillaTag/zzzz__TickSystemTimerAbstract_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPre_def.hpp"
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.ITickSystemPre_get_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::ITickSystemPre_get_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.ITickSystemPre_set_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)(bool)>(&::GorillaTag::TickSystemTimerAbstract::ITickSystemPre_set_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.get_Running
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::get_Running)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d361a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"get_Running", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d34d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)(float_t)>(&::GorillaTag::TickSystemTimerAbstract::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d361ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d361d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                    {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::Stop)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d36258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                    {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.OnCheckPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::OnCheckPass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d362cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                    {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.OnTimedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::OnTimedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                    {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimerAbstract.ITickSystemPre_PreTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimerAbstract::*)()>(&::GorillaTag::TickSystemTimerAbstract::ITickSystemPre_PreTick)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d362d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.PreTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::TickSystemTimerAbstract::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr bool const& GorillaTag::TickSystemTimerAbstract::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void GorillaTag::TickSystemTimerAbstract::__cordl_internal_set_registered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
inline bool GorillaTag::TickSystemTimerAbstract::ITickSystemPre_get_PreTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::ITickSystemPre_set_PreTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::TickSystemTimerAbstract::get_Running()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"get_Running", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::_ctor(float_t  cd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cd);
}
inline void GorillaTag::TickSystemTimerAbstract::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::OnCheckPass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::OnTimedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimerAbstract::ITickSystemPre_PreTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimerAbstract*>(),
                        {"ITickSystemPre.PreTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::TickSystemTimerAbstract* GorillaTag::TickSystemTimerAbstract::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimerAbstract*>());
}
inline ::GorillaTag::TickSystemTimerAbstract* GorillaTag::TickSystemTimerAbstract::New_ctor(float_t  cd)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimerAbstract*>(cd));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr  GorillaTag::TickSystemTimerAbstract::operator ::GlobalNamespace::ITickSystemPre*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* GorillaTag::TickSystemTimerAbstract::i___GlobalNamespace__ITickSystemPre() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::TickSystemTimerAbstract::TickSystemTimerAbstract()   {
}

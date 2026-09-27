#pragma once
// IWYU pragma private; include "GorillaTag/TickSystemTimer.hpp"
#include "GorillaTag/zzzz__TickSystemTimerAbstract_impl.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GorillaTag::TickSystemTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimer::*)()>(&::GorillaTag::TickSystemTimer::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d36324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimer::*)(float_t)>(&::GorillaTag::TickSystemTimer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d36348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimer::*)(float_t, ::System::Action*)>(&::GorillaTag::TickSystemTimer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d36374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimer::*)(::System::Action*)>(&::GorillaTag::TickSystemTimer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d363b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TickSystemTimer.OnTimedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TickSystemTimer::*)()>(&::GorillaTag::TickSystemTimer::OnTimedEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d363f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                    {::i2c::class_of<::GorillaTag::TickSystemTimer*>(), 10}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GorillaTag::TickSystemTimer::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& GorillaTag::TickSystemTimer::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTag::TickSystemTimer::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void GorillaTag::TickSystemTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TickSystemTimer::_ctor(float_t  cd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cd);
}
inline void GorillaTag::TickSystemTimer::_ctor(float_t  cd, ::System::Action*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cd, cb);
}
inline void GorillaTag::TickSystemTimer::_ctor(::System::Action*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TickSystemTimer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cb);
}
inline void GorillaTag::TickSystemTimer::OnTimedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::TickSystemTimer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::TickSystemTimer* GorillaTag::TickSystemTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimer*>());
}
inline ::GorillaTag::TickSystemTimer* GorillaTag::TickSystemTimer::New_ctor(float_t  cd)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimer*>(cd));
}
inline ::GorillaTag::TickSystemTimer* GorillaTag::TickSystemTimer::New_ctor(float_t  cd, ::System::Action*  cb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimer*>(cd, cb));
}
inline ::GorillaTag::TickSystemTimer* GorillaTag::TickSystemTimer::New_ctor(::System::Action*  cb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TickSystemTimer*>(cb));
}
// Ctor Parameters []
constexpr ::GorillaTag::TickSystemTimer::TickSystemTimer()   {
}

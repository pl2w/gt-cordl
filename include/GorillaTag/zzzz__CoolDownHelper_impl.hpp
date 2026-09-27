#pragma once
// IWYU pragma private; include "GorillaTag/CoolDownHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__CoolDownHelper_def.hpp"
//  Writing Method size for method: ::GorillaTag::CoolDownHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CoolDownHelper::*)()>(&::GorillaTag::CoolDownHelper::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d350cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CoolDownHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CoolDownHelper::*)(float_t)>(&::GorillaTag::CoolDownHelper::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d350f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CoolDownHelper.CheckCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::CoolDownHelper::*)()>(&::GorillaTag::CoolDownHelper::CheckCooldown)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d3511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {"CheckCooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CoolDownHelper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CoolDownHelper::*)()>(&::GorillaTag::CoolDownHelper::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d35170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                    {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CoolDownHelper.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CoolDownHelper::*)()>(&::GorillaTag::CoolDownHelper::Stop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d35194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                    {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CoolDownHelper.OnCheckPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CoolDownHelper::*)()>(&::GorillaTag::CoolDownHelper::OnCheckPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d351a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                    {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::CoolDownHelper::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GorillaTag::CoolDownHelper::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GorillaTag::CoolDownHelper::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr float_t& GorillaTag::CoolDownHelper::__cordl_internal_get_checkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr float_t const& GorillaTag::CoolDownHelper::__cordl_internal_get_checkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr void GorillaTag::CoolDownHelper::__cordl_internal_set_checkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkTime = value;
}
inline void GorillaTag::CoolDownHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CoolDownHelper::_ctor(float_t  cd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cd);
}
inline bool GorillaTag::CoolDownHelper::CheckCooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CoolDownHelper*>(),
                        {"CheckCooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::CoolDownHelper::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CoolDownHelper::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CoolDownHelper::OnCheckPass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::CoolDownHelper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CoolDownHelper* GorillaTag::CoolDownHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CoolDownHelper*>());
}
inline ::GorillaTag::CoolDownHelper* GorillaTag::CoolDownHelper::New_ctor(float_t  cd)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CoolDownHelper*>(cd));
}
// Ctor Parameters []
constexpr ::GorillaTag::CoolDownHelper::CoolDownHelper()   {
}

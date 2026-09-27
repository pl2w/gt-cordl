#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayedDestroyPooledObj.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedDestroyPooledObj_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyPooledObj.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyPooledObj::*)()>(&::GlobalNamespace::DelayedDestroyPooledObj::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b07984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyPooledObj.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyPooledObj::*)()>(&::GlobalNamespace::DelayedDestroyPooledObj::LateUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b07a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyPooledObj._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyPooledObj::*)()>(&::GlobalNamespace::DelayedDestroyPooledObj::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b07b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_get_destroyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_get_destroyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr void GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_set_destroyDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyDelay = value;
}
constexpr float_t& GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_get_timeToDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_get_timeToDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr void GlobalNamespace::DelayedDestroyPooledObj::__cordl_internal_set_timeToDie(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToDie = value;
}
inline void GlobalNamespace::DelayedDestroyPooledObj::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyPooledObj::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyPooledObj::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyPooledObj*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DelayedDestroyPooledObj* GlobalNamespace::DelayedDestroyPooledObj::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DelayedDestroyPooledObj*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedDestroyPooledObj::DelayedDestroyPooledObj()   {
}

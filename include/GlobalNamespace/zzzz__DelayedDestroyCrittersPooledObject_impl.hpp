#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayedDestroyCrittersPooledObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedDestroyCrittersPooledObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyCrittersPooledObject.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyCrittersPooledObject::*)()>(&::GlobalNamespace::DelayedDestroyCrittersPooledObject::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56f92f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyCrittersPooledObject.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyCrittersPooledObject::*)()>(&::GlobalNamespace::DelayedDestroyCrittersPooledObject::LateUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56f93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyCrittersPooledObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyCrittersPooledObject::*)()>(&::GlobalNamespace::DelayedDestroyCrittersPooledObject::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56f9408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_get_destroyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_get_destroyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr void GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_set_destroyDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyDelay = value;
}
constexpr float_t& GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_get_timeToDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_get_timeToDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr void GlobalNamespace::DelayedDestroyCrittersPooledObject::__cordl_internal_set_timeToDie(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToDie = value;
}
inline void GlobalNamespace::DelayedDestroyCrittersPooledObject::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyCrittersPooledObject::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyCrittersPooledObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DelayedDestroyCrittersPooledObject* GlobalNamespace::DelayedDestroyCrittersPooledObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DelayedDestroyCrittersPooledObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedDestroyCrittersPooledObject::DelayedDestroyCrittersPooledObject()   {
}

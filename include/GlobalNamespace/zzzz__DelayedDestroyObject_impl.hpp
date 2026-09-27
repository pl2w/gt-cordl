#pragma once
// IWYU pragma private; include "GlobalNamespace/DelayedDestroyObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DelayedDestroyObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyObject::*)()>(&::GlobalNamespace::DelayedDestroyObject::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56f941c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyObject.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyObject::*)()>(&::GlobalNamespace::DelayedDestroyObject::LateUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56f9440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedDestroyObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedDestroyObject::*)()>(&::GlobalNamespace::DelayedDestroyObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56f94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DelayedDestroyObject::__cordl_internal_get_lifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyObject::__cordl_internal_get_lifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr void GlobalNamespace::DelayedDestroyObject::__cordl_internal_set_lifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifetime = value;
}
constexpr float_t& GlobalNamespace::DelayedDestroyObject::__cordl_internal_get__timeToDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeToDie;
}
constexpr float_t const& GlobalNamespace::DelayedDestroyObject::__cordl_internal_get__timeToDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeToDie;
}
constexpr void GlobalNamespace::DelayedDestroyObject::__cordl_internal_set__timeToDie(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeToDie = value;
}
inline void GlobalNamespace::DelayedDestroyObject::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyObject::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DelayedDestroyObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedDestroyObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DelayedDestroyObject* GlobalNamespace::DelayedDestroyObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DelayedDestroyObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedDestroyObject::DelayedDestroyObject()   {
}

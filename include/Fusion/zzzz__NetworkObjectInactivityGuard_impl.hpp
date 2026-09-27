#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectInactivityGuard.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkObjectInactivityGuard_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectInactivityGuard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectInactivityGuard::*)()>(&::Fusion::NetworkObjectInactivityGuard::OnEnable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fc93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectInactivityGuard.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectInactivityGuard::*)()>(&::Fusion::NetworkObjectInactivityGuard::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fc9568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectInactivityGuard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectInactivityGuard::*)()>(&::Fusion::NetworkObjectInactivityGuard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc9620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::NetworkObjectInactivityGuard::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::NetworkObjectInactivityGuard::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr void Fusion::NetworkObjectInactivityGuard::__cordl_internal_set_Object(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
inline void Fusion::NetworkObjectInactivityGuard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObjectInactivityGuard::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObjectInactivityGuard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInactivityGuard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectInactivityGuard* Fusion::NetworkObjectInactivityGuard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectInactivityGuard*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectInactivityGuard::NetworkObjectInactivityGuard()   {
}

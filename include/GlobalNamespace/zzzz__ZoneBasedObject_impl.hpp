#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneBasedObject.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedObject.IsLocalPlayerInZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneBasedObject::*)()>(&::GlobalNamespace::ZoneBasedObject::IsLocalPlayerInZone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a11fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {"IsLocalPlayerInZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedObject.SelectRandomEligible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ZoneBasedObject> (*)(::ArrayW<::GlobalNamespace::ZoneBasedObject*>, ::StringW)>(&::GlobalNamespace::ZoneBasedObject::SelectRandomEligible)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5a12044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {"SelectRandomEligible", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneBasedObject*>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneBasedObject::*)()>(&::GlobalNamespace::ZoneBasedObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a13048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::ZoneBasedObject::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::ZoneBasedObject::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::ZoneBasedObject::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
inline bool GlobalNamespace::ZoneBasedObject::IsLocalPlayerInZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {"IsLocalPlayerInZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ZoneBasedObject> GlobalNamespace::ZoneBasedObject::SelectRandomEligible(::ArrayW<::GlobalNamespace::ZoneBasedObject*>  objects, ::StringW  overrideChoice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {"SelectRandomEligible", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneBasedObject*>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ZoneBasedObject>>(nullptr, ___internal_method, objects, overrideChoice);
}
inline void GlobalNamespace::ZoneBasedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneBasedObject* GlobalNamespace::ZoneBasedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneBasedObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneBasedObject::ZoneBasedObject()   {
}

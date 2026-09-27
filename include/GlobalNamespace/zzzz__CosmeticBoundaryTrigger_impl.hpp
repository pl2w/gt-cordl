#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticBoundaryTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticBoundaryTrigger_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticBoundaryTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticBoundaryTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x574ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticBoundaryTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticBoundaryTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x574b88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticBoundaryTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticBoundaryTrigger::*)()>(&::GlobalNamespace::CosmeticBoundaryTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574baa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CosmeticBoundaryTrigger::__cordl_internal_get_rigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CosmeticBoundaryTrigger::__cordl_internal_get_rigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr void GlobalNamespace::CosmeticBoundaryTrigger::__cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigRef = value;
}
inline void GlobalNamespace::CosmeticBoundaryTrigger::setStaticF_sinceLastTryOnEvent(::GlobalNamespace::TimeSince  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TimeSince, "sinceLastTryOnEvent", ::GlobalNamespace::CosmeticBoundaryTrigger*>(std::forward<::GlobalNamespace::TimeSince>(value));
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::CosmeticBoundaryTrigger::getStaticF_sinceLastTryOnEvent()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TimeSince, "sinceLastTryOnEvent", ::GlobalNamespace::CosmeticBoundaryTrigger*>();
}
inline void GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CosmeticBoundaryTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticBoundaryTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticBoundaryTrigger* GlobalNamespace::CosmeticBoundaryTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticBoundaryTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticBoundaryTrigger::CosmeticBoundaryTrigger()   {
}

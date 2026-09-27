#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDeduplicationZoneEntrance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigDeduplicationZoneEntrance_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZoneEntrance.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDeduplicationZoneEntrance::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigDeduplicationZoneEntrance::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x574093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZoneEntrance.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDeduplicationZoneEntrance::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigDeduplicationZoneEntrance::OnTriggerExit)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5740a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZoneEntrance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDeduplicationZoneEntrance::*)()>(&::GlobalNamespace::RigDeduplicationZoneEntrance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5740bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_portalShenanigansBit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalShenanigansBit;
}
constexpr bool const& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_portalShenanigansBit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalShenanigansBit;
}
constexpr void GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_set_portalShenanigansBit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalShenanigansBit = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_OnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_OnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr void GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_set_OnEnter(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnter = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_OnLeavingZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeavingZone;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_get_OnLeavingZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeavingZone;
}
constexpr void GlobalNamespace::RigDeduplicationZoneEntrance::__cordl_internal_set_OnLeavingZone(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLeavingZone = value;
}
inline void GlobalNamespace::RigDeduplicationZoneEntrance::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigDeduplicationZoneEntrance::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigDeduplicationZoneEntrance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZoneEntrance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigDeduplicationZoneEntrance* GlobalNamespace::RigDeduplicationZoneEntrance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigDeduplicationZoneEntrance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigDeduplicationZoneEntrance::RigDeduplicationZoneEntrance()   {
}

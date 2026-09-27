#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeamZoneSelector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallTeamZoneSelector_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamZoneSelector.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamZoneSelector::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBallTeamZoneSelector::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57b0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamZoneSelector*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamZoneSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamZoneSelector::*)()>(&::GlobalNamespace::MonkeBallTeamZoneSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamZoneSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeBallTeamZoneSelector::__cordl_internal_get_teamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr int32_t const& GlobalNamespace::MonkeBallTeamZoneSelector::__cordl_internal_get_teamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr void GlobalNamespace::MonkeBallTeamZoneSelector::__cordl_internal_set_teamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamId = value;
}
inline void GlobalNamespace::MonkeBallTeamZoneSelector::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamZoneSelector*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MonkeBallTeamZoneSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamZoneSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallTeamZoneSelector* GlobalNamespace::MonkeBallTeamZoneSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallTeamZoneSelector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallTeamZoneSelector::MonkeBallTeamZoneSelector()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneDef.hpp"
#include "GlobalNamespace/zzzz__GTSubZone_impl.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneA_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneDef.get_groupZoneAB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (::GlobalNamespace::ZoneDef::*)()>(&::GlobalNamespace::ZoneDef::get_groupZoneAB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b420b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {"get_groupZoneAB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneDef.IsSameZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneDef::*)(::GlobalNamespace::ZoneDef*)>(&::GlobalNamespace::ZoneDef::IsSameZone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b420c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {"IsSameZone", {}, {::i2c::type_of<::GlobalNamespace::ZoneDef*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneDef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneDef::*)()>(&::GlobalNamespace::ZoneDef::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b42160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ZoneDef::__cordl_internal_get_zoneId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneId;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ZoneDef::__cordl_internal_get_zoneId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneId;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_zoneId(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneId = value;
}
constexpr ::GlobalNamespace::GTSubZone& GlobalNamespace::ZoneDef::__cordl_internal_get_subZoneId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subZoneId;
}
constexpr ::GlobalNamespace::GTSubZone const& GlobalNamespace::ZoneDef::__cordl_internal_get_subZoneId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subZoneId;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_subZoneId(::GlobalNamespace::GTSubZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subZoneId = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneA& GlobalNamespace::ZoneDef::__cordl_internal_get_groupZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZone;
}
constexpr ::GlobalNamespace::GroupJoinZoneA const& GlobalNamespace::ZoneDef::__cordl_internal_get_groupZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZone;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_groupZone(::GlobalNamespace::GroupJoinZoneA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupZone = value;
}
constexpr ::GlobalNamespace::GroupJoinZoneB& GlobalNamespace::ZoneDef::__cordl_internal_get_groupZoneB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZoneB;
}
constexpr ::GlobalNamespace::GroupJoinZoneB const& GlobalNamespace::ZoneDef::__cordl_internal_get_groupZoneB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupZoneB;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_groupZoneB(::GlobalNamespace::GroupJoinZoneB  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupZoneB = value;
}
constexpr int32_t& GlobalNamespace::ZoneDef::__cordl_internal_get_trackStayIntervalSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackStayIntervalSec;
}
constexpr int32_t const& GlobalNamespace::ZoneDef::__cordl_internal_get_trackStayIntervalSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackStayIntervalSec;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_trackStayIntervalSec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackStayIntervalSec = value;
}
constexpr bool& GlobalNamespace::ZoneDef::__cordl_internal_get_trackEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackEnter;
}
constexpr bool const& GlobalNamespace::ZoneDef::__cordl_internal_get_trackEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackEnter;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_trackEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackEnter = value;
}
constexpr bool& GlobalNamespace::ZoneDef::__cordl_internal_get_trackExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackExit;
}
constexpr bool const& GlobalNamespace::ZoneDef::__cordl_internal_get_trackExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackExit;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_trackExit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackExit = value;
}
constexpr bool& GlobalNamespace::ZoneDef::__cordl_internal_get_trackStay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackStay;
}
constexpr bool const& GlobalNamespace::ZoneDef::__cordl_internal_get_trackStay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackStay;
}
constexpr void GlobalNamespace::ZoneDef::__cordl_internal_set_trackStay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackStay = value;
}
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::ZoneDef::get_groupZoneAB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {"get_groupZoneAB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(this, ___internal_method);
}
inline bool GlobalNamespace::ZoneDef::IsSameZone(::GlobalNamespace::ZoneDef*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {"IsSameZone", {}, {::i2c::type_of<::GlobalNamespace::ZoneDef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void GlobalNamespace::ZoneDef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneDef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneDef* GlobalNamespace::ZoneDef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneDef*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneDef::ZoneDef()   {
}

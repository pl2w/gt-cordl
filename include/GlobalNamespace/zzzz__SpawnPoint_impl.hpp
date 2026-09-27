#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnPoint.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnPoint::*)()>(&::GlobalNamespace::SpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b206a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::SpawnPoint::__cordl_internal_get_startZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::SpawnPoint::__cordl_internal_get_startZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr void GlobalNamespace::SpawnPoint::__cordl_internal_set_startZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startZone = value;
}
constexpr float_t& GlobalNamespace::SpawnPoint::__cordl_internal_get_startSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSize;
}
constexpr float_t const& GlobalNamespace::SpawnPoint::__cordl_internal_get_startSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSize;
}
constexpr void GlobalNamespace::SpawnPoint::__cordl_internal_set_startSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSize = value;
}
inline void GlobalNamespace::SpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnPoint* GlobalNamespace::SpawnPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnPoint::SpawnPoint()   {
}

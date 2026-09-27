#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSetZoneTrigger.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSetZoneTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSetZoneTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSetZoneTrigger::*)()>(&::GlobalNamespace::GorillaSetZoneTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56b6be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSetZoneTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSetZoneTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSetZoneTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSetZoneTrigger::*)()>(&::GlobalNamespace::GorillaSetZoneTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b6da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSetZoneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::GorillaSetZoneTrigger::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::GorillaSetZoneTrigger::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::GorillaSetZoneTrigger::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
inline void GlobalNamespace::GorillaSetZoneTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSetZoneTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSetZoneTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSetZoneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSetZoneTrigger* GlobalNamespace::GorillaSetZoneTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSetZoneTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSetZoneTrigger::GorillaSetZoneTrigger()   {
}

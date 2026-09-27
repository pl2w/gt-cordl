#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAgent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAgent_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAgent::*)()>(&::GlobalNamespace::GRAbilityAgent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRAbilityBase*& GlobalNamespace::GRAbilityAgent::__cordl_internal_get_currAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr ::GlobalNamespace::GRAbilityBase* const& GlobalNamespace::GRAbilityAgent::__cordl_internal_get_currAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr void GlobalNamespace::GRAbilityAgent::__cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currAbility = value;
}
inline void GlobalNamespace::GRAbilityAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAgent* GlobalNamespace::GRAbilityAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAgent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAgent::GRAbilityAgent()   {
}

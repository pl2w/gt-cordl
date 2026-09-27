#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForBaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlagForBaking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlagForBaking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlagForBaking::*)()>(&::GlobalNamespace::FlagForBaking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b07c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForBaking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FlagForBaking::__cordl_internal_get_enableForBaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableForBaking;
}
constexpr bool const& GlobalNamespace::FlagForBaking::__cordl_internal_get_enableForBaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableForBaking;
}
constexpr void GlobalNamespace::FlagForBaking::__cordl_internal_set_enableForBaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableForBaking = value;
}
inline void GlobalNamespace::FlagForBaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForBaking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlagForBaking* GlobalNamespace::FlagForBaking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagForBaking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlagForBaking::FlagForBaking()   {
}

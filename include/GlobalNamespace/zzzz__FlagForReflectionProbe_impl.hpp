#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForReflectionProbe.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlagForReflectionProbe_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlagForReflectionProbe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlagForReflectionProbe::*)()>(&::GlobalNamespace::FlagForReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b07c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForReflectionProbe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::FlagForReflectionProbe::__cordl_internal_get_enableSimpleReflectionProbe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableSimpleReflectionProbe;
}
constexpr bool const& GlobalNamespace::FlagForReflectionProbe::__cordl_internal_get_enableSimpleReflectionProbe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableSimpleReflectionProbe;
}
constexpr void GlobalNamespace::FlagForReflectionProbe::__cordl_internal_set_enableSimpleReflectionProbe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableSimpleReflectionProbe = value;
}
inline void GlobalNamespace::FlagForReflectionProbe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForReflectionProbe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlagForReflectionProbe* GlobalNamespace::FlagForReflectionProbe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagForReflectionProbe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlagForReflectionProbe::FlagForReflectionProbe()   {
}

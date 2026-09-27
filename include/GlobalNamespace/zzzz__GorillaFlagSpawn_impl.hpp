#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFlagSpawn.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaFlagSpawn_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaFlagSpawn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFlagSpawn::*)()>(&::GlobalNamespace::GorillaFlagSpawn::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580270c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFlagSpawn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaFlagSpawn::__cordl_internal_get_isRedFlagSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedFlagSpawn;
}
constexpr bool const& GlobalNamespace::GorillaFlagSpawn::__cordl_internal_get_isRedFlagSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedFlagSpawn;
}
constexpr void GlobalNamespace::GorillaFlagSpawn::__cordl_internal_set_isRedFlagSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRedFlagSpawn = value;
}
inline void GlobalNamespace::GorillaFlagSpawn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFlagSpawn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaFlagSpawn* GlobalNamespace::GorillaFlagSpawn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaFlagSpawn*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFlagSpawn::GorillaFlagSpawn()   {
}

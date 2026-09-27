#pragma once
// IWYU pragma private; include "GlobalNamespace/DayCycleTexturesSO.hpp"
#include "GlobalNamespace/zzzz__DayCycleTextureMoment_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__DayCycleTexturesSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DayCycleTexturesSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayCycleTexturesSO::*)()>(&::GlobalNamespace::DayCycleTexturesSO::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x566e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayCycleTexturesSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>& GlobalNamespace::DayCycleTexturesSO::__cordl_internal_get_moments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moments;
}
constexpr ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*> const& GlobalNamespace::DayCycleTexturesSO::__cordl_internal_get_moments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moments;
}
constexpr void GlobalNamespace::DayCycleTexturesSO::__cordl_internal_set_moments(::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moments = value;
}
inline void GlobalNamespace::DayCycleTexturesSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayCycleTexturesSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DayCycleTexturesSO* GlobalNamespace::DayCycleTexturesSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DayCycleTexturesSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayCycleTexturesSO::DayCycleTexturesSO()   {
}

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettingsHideModeOverridePropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettingsHideModeOverridePropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute::*)()>(&::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb36e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute* Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LensSettingsHideModeOverridePropertyAttribute::LensSettingsHideModeOverridePropertyAttribute()   {
}

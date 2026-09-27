#pragma once
// IWYU pragma private; include "Unity/Cinemachine/EmbeddedBlenderSettingsPropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__EmbeddedBlenderSettingsPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute::*)()>(&::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb37ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute* Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::EmbeddedBlenderSettingsPropertyAttribute::EmbeddedBlenderSettingsPropertyAttribute()   {
}

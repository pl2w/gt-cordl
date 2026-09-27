#pragma once
// IWYU pragma private; include "GorillaTag/SoundBankInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__SoundBankInfoAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::SoundBankInfoAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::SoundBankInfoAttribute::*)()>(&::GorillaTag::SoundBankInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d22b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SoundBankInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::SoundBankInfoAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SoundBankInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::SoundBankInfoAttribute* GorillaTag::SoundBankInfoAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::SoundBankInfoAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::SoundBankInfoAttribute::SoundBankInfoAttribute()   {
}

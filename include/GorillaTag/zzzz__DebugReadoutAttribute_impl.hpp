#pragma once
// IWYU pragma private; include "GorillaTag/DebugReadoutAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__DebugReadoutAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::DebugReadoutAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DebugReadoutAttribute::*)()>(&::GorillaTag::DebugReadoutAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d22b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugReadoutAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::DebugReadoutAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugReadoutAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DebugReadoutAttribute* GorillaTag::DebugReadoutAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DebugReadoutAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DebugReadoutAttribute::DebugReadoutAttribute()   {
}

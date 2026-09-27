#pragma once
// IWYU pragma private; include "GorillaTag/DebugOptionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__DebugOptionAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::DebugOptionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DebugOptionAttribute::*)()>(&::GorillaTag::DebugOptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d22b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugOptionAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::DebugOptionAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DebugOptionAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DebugOptionAttribute* GorillaTag::DebugOptionAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DebugOptionAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DebugOptionAttribute::DebugOptionAttribute()   {
}

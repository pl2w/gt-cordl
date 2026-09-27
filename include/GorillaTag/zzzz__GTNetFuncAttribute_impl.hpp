#pragma once
// IWYU pragma private; include "GorillaTag/GTNetFuncAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__GTNetFuncAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTNetFuncAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTNetFuncAttribute::*)()>(&::GorillaTag::GTNetFuncAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTNetFuncAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GTNetFuncAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTNetFuncAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GTNetFuncAttribute* GorillaTag::GTNetFuncAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTNetFuncAttribute*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GTNetFuncAttribute::GTNetFuncAttribute()   {
}

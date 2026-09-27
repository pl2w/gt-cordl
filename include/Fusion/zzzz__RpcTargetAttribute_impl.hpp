#pragma once
// IWYU pragma private; include "Fusion/RpcTargetAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__RpcTargetAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::RpcTargetAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcTargetAttribute::*)()>(&::Fusion::RpcTargetAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcTargetAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::RpcTargetAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcTargetAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RpcTargetAttribute* Fusion::RpcTargetAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RpcTargetAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::RpcTargetAttribute::RpcTargetAttribute()   {
}

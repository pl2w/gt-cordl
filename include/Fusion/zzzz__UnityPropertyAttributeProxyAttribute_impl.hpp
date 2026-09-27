#pragma once
// IWYU pragma private; include "Fusion/UnityPropertyAttributeProxyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityPropertyAttributeProxyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::UnityPropertyAttributeProxyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityPropertyAttributeProxyAttribute::*)(::System::Type*)>(&::Fusion::UnityPropertyAttributeProxyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f703f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPropertyAttributeProxyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::UnityPropertyAttributeProxyAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPropertyAttributeProxyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Fusion::UnityPropertyAttributeProxyAttribute* Fusion::UnityPropertyAttributeProxyAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityPropertyAttributeProxyAttribute*>(type));
}
// Ctor Parameters []
constexpr ::Fusion::UnityPropertyAttributeProxyAttribute::UnityPropertyAttributeProxyAttribute()   {
}

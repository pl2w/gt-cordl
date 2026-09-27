#pragma once
// IWYU pragma private; include "Fusion/UnityAddressablesRuntimeKeyAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__UnityAddressablesRuntimeKeyAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityAddressablesRuntimeKeyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityAddressablesRuntimeKeyAttribute::*)()>(&::Fusion::UnityAddressablesRuntimeKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityAddressablesRuntimeKeyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::UnityAddressablesRuntimeKeyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityAddressablesRuntimeKeyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnityAddressablesRuntimeKeyAttribute* Fusion::UnityAddressablesRuntimeKeyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityAddressablesRuntimeKeyAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnityAddressablesRuntimeKeyAttribute::UnityAddressablesRuntimeKeyAttribute()   {
}

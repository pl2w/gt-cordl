#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/DisallowAddressableSubAssetFieldAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Sirenix/OdinInspector/zzzz__DisallowAddressableSubAssetFieldAttribute_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute::*)()>(&::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute* Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::DisallowAddressableSubAssetFieldAttribute::DisallowAddressableSubAssetFieldAttribute()   {
}

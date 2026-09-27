#pragma once
// IWYU pragma private; include "Fusion/UnityNonSerializedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityNonSerializedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityNonSerializedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityNonSerializedAttribute::*)()>(&::Fusion::UnityNonSerializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityNonSerializedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::UnityNonSerializedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityNonSerializedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnityNonSerializedAttribute* Fusion::UnityNonSerializedAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityNonSerializedAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnityNonSerializedAttribute::UnityNonSerializedAttribute()   {
}

#pragma once
// IWYU pragma private; include "Fusion/UnityFormerlySerializedAsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityFormerlySerializedAsAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityFormerlySerializedAsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityFormerlySerializedAsAttribute::*)(::StringW)>(&::Fusion::UnityFormerlySerializedAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityFormerlySerializedAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::UnityFormerlySerializedAsAttribute::_ctor(::StringW  oldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityFormerlySerializedAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldName);
}
inline ::Fusion::UnityFormerlySerializedAsAttribute* Fusion::UnityFormerlySerializedAsAttribute::New_ctor(::StringW  oldName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityFormerlySerializedAsAttribute*>(oldName));
}
// Ctor Parameters []
constexpr ::Fusion::UnityFormerlySerializedAsAttribute::UnityFormerlySerializedAsAttribute()   {
}

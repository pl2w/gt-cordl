#pragma once
// IWYU pragma private; include "Fusion/UnitySerializeReference.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnitySerializeReference_def.hpp"
//  Writing Method size for method: ::Fusion::UnitySerializeReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnitySerializeReference::*)()>(&::Fusion::UnitySerializeReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySerializeReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::UnitySerializeReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySerializeReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnitySerializeReference* Fusion::UnitySerializeReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnitySerializeReference*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnitySerializeReference::UnitySerializeReference()   {
}

#pragma once
// IWYU pragma private; include "Fusion/FusionScriptableObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Fusion/zzzz__FusionScriptableObject_def.hpp"
//  Writing Method size for method: ::Fusion::FusionScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionScriptableObject::*)()>(&::Fusion::FusionScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionScriptableObject* Fusion::FusionScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionScriptableObject*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionScriptableObject::FusionScriptableObject()   {
}

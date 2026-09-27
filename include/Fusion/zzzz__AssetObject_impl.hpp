#pragma once
// IWYU pragma private; include "Fusion/AssetObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Fusion/zzzz__AssetObject_def.hpp"
//  Writing Method size for method: ::Fusion::AssetObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::AssetObject::*)()>(&::Fusion::AssetObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssetObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::AssetObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssetObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::AssetObject* Fusion::AssetObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::AssetObject*>());
}
// Ctor Parameters []
constexpr ::Fusion::AssetObject::AssetObject()   {
}

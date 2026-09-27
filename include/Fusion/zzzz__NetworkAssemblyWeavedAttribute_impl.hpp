#pragma once
// IWYU pragma private; include "Fusion/NetworkAssemblyWeavedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkAssemblyWeavedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkAssemblyWeavedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkAssemblyWeavedAttribute::*)()>(&::Fusion::NetworkAssemblyWeavedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7005c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssemblyWeavedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkAssemblyWeavedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssemblyWeavedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkAssemblyWeavedAttribute* Fusion::NetworkAssemblyWeavedAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssemblyWeavedAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkAssemblyWeavedAttribute::NetworkAssemblyWeavedAttribute()   {
}

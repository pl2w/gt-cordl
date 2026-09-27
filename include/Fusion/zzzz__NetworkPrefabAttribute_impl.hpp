#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabAttribute::*)()>(&::Fusion::NetworkPrefabAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkPrefabAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabAttribute* Fusion::NetworkPrefabAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabAttribute::NetworkPrefabAttribute()   {
}

#pragma once
// IWYU pragma private; include "Fusion/ResolveNetworkPrefabSourceAttribute.hpp"
#include "Fusion/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__ResolveNetworkPrefabSourceAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::ResolveNetworkPrefabSourceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ResolveNetworkPrefabSourceAttribute::*)()>(&::Fusion::ResolveNetworkPrefabSourceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f703ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ResolveNetworkPrefabSourceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ResolveNetworkPrefabSourceAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ResolveNetworkPrefabSourceAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ResolveNetworkPrefabSourceAttribute* Fusion::ResolveNetworkPrefabSourceAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ResolveNetworkPrefabSourceAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::ResolveNetworkPrefabSourceAttribute::ResolveNetworkPrefabSourceAttribute()   {
}

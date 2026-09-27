#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugReadOnlyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DebugReadOnlyAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugReadOnlyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DebugReadOnlyAttribute::*)()>(&::GlobalNamespace::DebugReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1aa7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugReadOnlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugReadOnlyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DebugReadOnlyAttribute* GlobalNamespace::DebugReadOnlyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DebugReadOnlyAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugReadOnlyAttribute::DebugReadOnlyAttribute()   {
}

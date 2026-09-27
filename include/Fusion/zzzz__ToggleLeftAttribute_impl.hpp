#pragma once
// IWYU pragma private; include "Fusion/ToggleLeftAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__ToggleLeftAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::ToggleLeftAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ToggleLeftAttribute::*)()>(&::Fusion::ToggleLeftAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ToggleLeftAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ToggleLeftAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ToggleLeftAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ToggleLeftAttribute* Fusion::ToggleLeftAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ToggleLeftAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::ToggleLeftAttribute::ToggleLeftAttribute()   {
}

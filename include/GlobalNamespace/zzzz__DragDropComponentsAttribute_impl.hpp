#pragma once
// IWYU pragma private; include "GlobalNamespace/DragDropComponentsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DragDropComponentsAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DragDropComponentsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DragDropComponentsAttribute::*)()>(&::GlobalNamespace::DragDropComponentsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DragDropComponentsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DragDropComponentsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DragDropComponentsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DragDropComponentsAttribute* GlobalNamespace::DragDropComponentsAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DragDropComponentsAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DragDropComponentsAttribute::DragDropComponentsAttribute()   {
}

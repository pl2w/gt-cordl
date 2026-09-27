#pragma once
// IWYU pragma private; include "GlobalNamespace/DragDropScenesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DragDropScenesAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DragDropScenesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DragDropScenesAttribute::*)()>(&::GlobalNamespace::DragDropScenesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DragDropScenesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DragDropScenesAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DragDropScenesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DragDropScenesAttribute* GlobalNamespace::DragDropScenesAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DragDropScenesAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DragDropScenesAttribute::DragDropScenesAttribute()   {
}

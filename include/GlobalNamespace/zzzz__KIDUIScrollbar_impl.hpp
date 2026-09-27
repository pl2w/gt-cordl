#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIScrollbar.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIScrollbar_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIScrollbar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIScrollbar::*)()>(&::GlobalNamespace::KIDUIScrollbar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c1e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIScrollbar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIScrollbar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIScrollbar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIScrollbar* GlobalNamespace::KIDUIScrollbar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIScrollbar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIScrollbar::KIDUIScrollbar()   {
}

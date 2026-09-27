#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIScrollRectangle.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIScrollRectangle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIScrollRectangle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIScrollRectangle::*)()>(&::GlobalNamespace::KIDUIScrollRectangle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c1e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIScrollRectangle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIScrollRectangle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIScrollRectangle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIScrollRectangle* GlobalNamespace::KIDUIScrollRectangle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIScrollRectangle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIScrollRectangle::KIDUIScrollRectangle()   {
}

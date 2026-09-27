#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryPackAsSingleSquare.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryPackAsSingleSquare_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryPackAsSingleSquare._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryPackAsSingleSquare::*)()>(&::GlobalNamespace::BakeryPackAsSingleSquare::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f279cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryPackAsSingleSquare*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakeryPackAsSingleSquare::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryPackAsSingleSquare*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryPackAsSingleSquare* GlobalNamespace::BakeryPackAsSingleSquare::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryPackAsSingleSquare*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryPackAsSingleSquare::BakeryPackAsSingleSquare()   {
}

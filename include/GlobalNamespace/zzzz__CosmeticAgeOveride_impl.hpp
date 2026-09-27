#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticAgeOveride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticAgeOveride_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticAgeOveride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAgeOveride::*)()>(&::GlobalNamespace::CosmeticAgeOveride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eeb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAgeOveride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticAgeOveride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAgeOveride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticAgeOveride* GlobalNamespace::CosmeticAgeOveride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticAgeOveride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticAgeOveride::CosmeticAgeOveride()   {
}

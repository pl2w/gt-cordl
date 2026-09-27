#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableRightHandReference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableRightHandReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoldableRightHandReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableRightHandReference::*)()>(&::GlobalNamespace::HoldableRightHandReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableRightHandReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HoldableRightHandReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableRightHandReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoldableRightHandReference* GlobalNamespace::HoldableRightHandReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoldableRightHandReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoldableRightHandReference::HoldableRightHandReference()   {
}

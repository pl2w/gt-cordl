#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableLeftHandReference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableLeftHandReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoldableLeftHandReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableLeftHandReference::*)()>(&::GlobalNamespace::HoldableLeftHandReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLeftHandReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HoldableLeftHandReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableLeftHandReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoldableLeftHandReference* GlobalNamespace::HoldableLeftHandReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoldableLeftHandReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoldableLeftHandReference::HoldableLeftHandReference()   {
}

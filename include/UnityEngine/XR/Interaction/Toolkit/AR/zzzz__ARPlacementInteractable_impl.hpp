#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/ARPlacementInteractable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AR/zzzz__ARPlacementInteractable_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable* UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable::ARPlacementInteractable()   {
}

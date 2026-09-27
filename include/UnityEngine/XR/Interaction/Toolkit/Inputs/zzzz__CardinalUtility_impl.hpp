#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/CardinalUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__CardinalUtility_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__Cardinal_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility.GetNearestCardinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal (*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility::GetNearestCardinal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4b0fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility*>(),
                        {"GetNearestCardinal", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility::GetNearestCardinal(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility*>(),
                        {"GetNearestCardinal", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility::CardinalUtility()   {
}

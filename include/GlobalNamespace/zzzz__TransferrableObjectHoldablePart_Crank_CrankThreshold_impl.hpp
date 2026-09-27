#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Crank_CrankThreshold.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_CrankThreshold_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold.OnCranked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold::*)(float_t)>(&::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold::OnCranked)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x573e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold::OnCranked(float_t  deltaAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaAngle);
}
// Ctor Parameters [CppParam { name: "angleThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onReached", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold::TransferrableObjectHoldablePart_Crank_CrankThreshold(float_t  angleThreshold, ::UnityEngine::Events::UnityEvent*  onReached, float_t  currentAngle) noexcept  {
this->angleThreshold = angleThreshold;
this->onReached = onReached;
this->currentAngle = currentAngle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold::TransferrableObjectHoldablePart_Crank_CrankThreshold()   {
}

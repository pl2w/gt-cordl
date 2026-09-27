#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformerUtils_ConstrainedAxis.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_FloatRange_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformerUtils_ConstrainedAxis_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformerUtils_ConstrainedAxis.get_Unconstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransformerUtils_ConstrainedAxis (*)()>(&::GlobalNamespace::TransformerUtils_ConstrainedAxis::get_Unconstrained)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa48e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformerUtils_ConstrainedAxis>(),
                        {"get_Unconstrained", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::TransformerUtils_ConstrainedAxis GlobalNamespace::TransformerUtils_ConstrainedAxis::get_Unconstrained()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformerUtils_ConstrainedAxis>(),
                        {"get_Unconstrained", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransformerUtils_ConstrainedAxis>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ConstrainAxis", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AxisRange", ty: "::GlobalNamespace::TransformerUtils_FloatRange", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis::TransformerUtils_ConstrainedAxis(bool  ConstrainAxis, ::GlobalNamespace::TransformerUtils_FloatRange  AxisRange) noexcept  {
this->ConstrainAxis = ConstrainAxis;
this->AxisRange = AxisRange;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformerUtils_ConstrainedAxis::TransformerUtils_ConstrainedAxis()   {
}

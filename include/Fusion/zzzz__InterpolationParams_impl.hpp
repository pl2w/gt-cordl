#pragma once
// IWYU pragma private; include "Fusion/InterpolationParams.hpp"
#include "Fusion/zzzz__Status_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__InterpolationParams_def.hpp"
// Ctor Parameters [CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "From", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "To", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alpha", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "::Fusion::Status", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::InterpolationParams::InterpolationParams(double_t  Time, ::Fusion::Tick  From, ::Fusion::Tick  To, float_t  Alpha, ::Fusion::Status  Status) noexcept  {
this->Time = Time;
this->From = From;
this->To = To;
this->Alpha = Alpha;
this->Status = Status;
}
// Ctor Parameters []
constexpr ::Fusion::InterpolationParams::InterpolationParams()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay_LatencyData.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_LatencyData_def.hpp"
// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "postPresent", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeWarpError", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDisplay_LatencyData::OVRDisplay_LatencyData(float_t  render, float_t  timeWarp, float_t  postPresent, float_t  renderError, float_t  timeWarpError) noexcept  {
this->render = render;
this->timeWarp = timeWarp;
this->postPresent = postPresent;
this->renderError = renderError;
this->timeWarpError = timeWarpError;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDisplay_LatencyData::OVRDisplay_LatencyData()   {
}

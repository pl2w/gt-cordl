#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraDeviceIntrinsicsParameters.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraDeviceIntrinsicsParameters_def.hpp"
// Ctor Parameters [CppParam { name: "fx", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fy", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cx", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cy", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disto0", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disto1", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disto2", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disto3", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disto4", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v_fov", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h_fov", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "d_fov", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters::OVRPlugin_CameraDeviceIntrinsicsParameters(float_t  fx, float_t  fy, float_t  cx, float_t  cy, double_t  disto0, double_t  disto1, double_t  disto2, double_t  disto3, double_t  disto4, float_t  v_fov, float_t  h_fov, float_t  d_fov, int32_t  w, int32_t  h) noexcept  {
this->fx = fx;
this->fy = fy;
this->cx = cx;
this->cy = cy;
this->disto0 = disto0;
this->disto1 = disto1;
this->disto2 = disto2;
this->disto3 = disto3;
this->disto4 = disto4;
this->v_fov = v_fov;
this->h_fov = h_fov;
this->d_fov = d_fov;
this->w = w;
this->h = h;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters::OVRPlugin_CameraDeviceIntrinsicsParameters()   {
}

#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_SnapParams.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_def.hpp"
// Ctor Parameters [CppParam { name: "minOffsetY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxOffsetY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxUpDotProduct", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxTwistDotProduct", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "snapAttachDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "snapDelayTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "snapDelayOffsetDist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unSnapDelayTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unSnapDelayDist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxBlockSnapDist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_SnapParams::BuilderTable_SnapParams(float_t  minOffsetY, float_t  maxOffsetY, float_t  maxUpDotProduct, float_t  maxTwistDotProduct, float_t  snapAttachDistance, float_t  snapDelayTime, float_t  snapDelayOffsetDist, float_t  unSnapDelayTime, float_t  unSnapDelayDist, float_t  maxBlockSnapDist) noexcept  {
this->minOffsetY = minOffsetY;
this->maxOffsetY = maxOffsetY;
this->maxUpDotProduct = maxUpDotProduct;
this->maxTwistDotProduct = maxTwistDotProduct;
this->snapAttachDistance = snapAttachDistance;
this->snapDelayTime = snapDelayTime;
this->snapDelayOffsetDist = snapDelayOffsetDist;
this->unSnapDelayTime = unSnapDelayTime;
this->unSnapDelayDist = unSnapDelayDist;
this->maxBlockSnapDist = maxBlockSnapDist;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_SnapParams::BuilderTable_SnapParams()   {
}

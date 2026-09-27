#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TriggerSource.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::TriggerSource::TriggerSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::TriggerSource::TriggerSource()   {
}
constexpr ::GT_CustomMapSupportRuntime::TriggerSource  GT_CustomMapSupportRuntime::TriggerSource::None{static_cast<int32_t>(0x0)};
constexpr ::GT_CustomMapSupportRuntime::TriggerSource  GT_CustomMapSupportRuntime::TriggerSource::Hands{static_cast<int32_t>(0x1)};
constexpr ::GT_CustomMapSupportRuntime::TriggerSource  GT_CustomMapSupportRuntime::TriggerSource::Head{static_cast<int32_t>(0x2)};
constexpr ::GT_CustomMapSupportRuntime::TriggerSource  GT_CustomMapSupportRuntime::TriggerSource::Body{static_cast<int32_t>(0x3)};
constexpr ::GT_CustomMapSupportRuntime::TriggerSource  GT_CustomMapSupportRuntime::TriggerSource::HeadOrBody{static_cast<int32_t>(0x4)};

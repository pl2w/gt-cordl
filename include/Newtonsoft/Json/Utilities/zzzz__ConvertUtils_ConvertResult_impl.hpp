#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils_ConvertResult.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_ConvertResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult::ConvertUtils_ConvertResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult::ConvertUtils_ConvertResult()   {
}
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult  GlobalNamespace::ConvertUtils_ConvertResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult  GlobalNamespace::ConvertUtils_ConvertResult::CannotConvertNull{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult  GlobalNamespace::ConvertUtils_ConvertResult::NotInstantiableType{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ConvertUtils_ConvertResult  GlobalNamespace::ConvertUtils_ConvertResult::NoValidConversion{static_cast<int32_t>(0x3)};

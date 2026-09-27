#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_ValidationLevel.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel::MB2_ValidationLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel::MB2_ValidationLevel()   {
}
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel  DigitalOpus::MB::Core::MB2_ValidationLevel::none{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel  DigitalOpus::MB::Core::MB2_ValidationLevel::quick{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel  DigitalOpus::MB::Core::MB2_ValidationLevel::robust{static_cast<int32_t>(0x2)};

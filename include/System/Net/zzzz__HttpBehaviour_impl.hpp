#pragma once
// IWYU pragma private; include "System/Net/HttpBehaviour.hpp"
#include "System/Net/zzzz__HttpBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::HttpBehaviour::HttpBehaviour(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpBehaviour::HttpBehaviour()   {
}
constexpr ::System::Net::HttpBehaviour  System::Net::HttpBehaviour::Unknown{static_cast<uint8_t>(0x0u)};
constexpr ::System::Net::HttpBehaviour  System::Net::HttpBehaviour::HTTP10{static_cast<uint8_t>(0x1u)};
constexpr ::System::Net::HttpBehaviour  System::Net::HttpBehaviour::HTTP11PartiallyCompliant{static_cast<uint8_t>(0x2u)};
constexpr ::System::Net::HttpBehaviour  System::Net::HttpBehaviour::HTTP11{static_cast<uint8_t>(0x3u)};

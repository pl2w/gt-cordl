#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriter_State.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonWriter_State::JsonWriter_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonWriter_State::JsonWriter_State()   {
}
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Property{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::ObjectStart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Object{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::ArrayStart{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Array{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::ConstructorStart{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Constructor{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Closed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::JsonWriter_State  GlobalNamespace::JsonWriter_State::Error{static_cast<int32_t>(0x9)};

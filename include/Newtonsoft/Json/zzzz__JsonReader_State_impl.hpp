#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonReader_State.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonReader_State::JsonReader_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonReader_State::JsonReader_State()   {
}
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Complete{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Property{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::ObjectStart{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Object{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::ArrayStart{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Array{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Closed{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::PostValue{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::ConstructorStart{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Constructor{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Error{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::JsonReader_State  GlobalNamespace::JsonReader_State::Finished{static_cast<int32_t>(0xc)};

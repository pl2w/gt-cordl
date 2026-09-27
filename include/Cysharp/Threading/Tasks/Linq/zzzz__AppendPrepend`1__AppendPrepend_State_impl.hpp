#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AppendPrepend`1__AppendPrepend_State.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AppendPrepend`1__AppendPrepend_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::_AppendPrepend_AppendPrepend_1_State(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::_AppendPrepend_AppendPrepend_1_State()   {
}
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>  GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::None{static_cast<uint8_t>(0x0u)};
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>  GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::RequirePrepend{static_cast<uint8_t>(0x1u)};
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>  GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::RequireAppend{static_cast<uint8_t>(0x2u)};
template<typename TSource>
constexpr ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>  GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource>::Completed{static_cast<uint8_t>(0x3u)};

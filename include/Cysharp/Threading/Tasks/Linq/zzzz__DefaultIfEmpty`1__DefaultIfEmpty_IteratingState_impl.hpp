#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/DefaultIfEmpty`1__DefaultIfEmpty_IteratingState.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__DefaultIfEmpty`1__DefaultIfEmpty_IteratingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource>
constexpr ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TSource>
constexpr ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState()   {
}
template<typename TSource>
constexpr ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>  GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>::Empty{static_cast<uint8_t>(0x0u)};
template<typename TSource>
constexpr ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>  GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>::Iterating{static_cast<uint8_t>(0x1u)};
template<typename TSource>
constexpr ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>  GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource>::Completed{static_cast<uint8_t>(0x2u)};

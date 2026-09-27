#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Concat`1__Concat_IteratingState.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Concat`1__Concat_IteratingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource>
constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>::_Concat_Concat_1_IteratingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TSource>
constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>::_Concat_Concat_1_IteratingState()   {
}
template<typename TSource>
constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>::IteratingFirst{static_cast<int32_t>(0x0)};
template<typename TSource>
constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>::IteratingSecond{static_cast<int32_t>(0x1)};
template<typename TSource>
constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>::Complete{static_cast<int32_t>(0x2)};

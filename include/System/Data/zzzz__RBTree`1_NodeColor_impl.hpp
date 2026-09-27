#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_NodeColor.hpp"
#include "System/Data/zzzz__RBTree`1_NodeColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodeColor<K>::RBTree_1_NodeColor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodeColor<K>::RBTree_1_NodeColor()   {
}
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodeColor<K>  GlobalNamespace::RBTree_1_NodeColor<K>::red{static_cast<int32_t>(0x0)};
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodeColor<K>  GlobalNamespace::RBTree_1_NodeColor<K>::black{static_cast<int32_t>(0x1)};

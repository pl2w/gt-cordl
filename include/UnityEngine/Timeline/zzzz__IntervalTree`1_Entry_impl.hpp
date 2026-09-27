#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IntervalTree`1_Entry.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree`1_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::IntervalTree_1_Entry<T>::IntervalTree_1_Entry(int64_t  intervalStart, int64_t  intervalEnd, T  item) noexcept  {
this->intervalStart = intervalStart;
this->intervalEnd = intervalEnd;
this->item = item;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::IntervalTree_1_Entry<T>::IntervalTree_1_Entry()   {
}

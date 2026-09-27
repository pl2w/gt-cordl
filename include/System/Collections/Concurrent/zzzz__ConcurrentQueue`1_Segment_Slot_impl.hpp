#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/ConcurrentQueue`1_Segment_Slot.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue`1_Segment_Slot_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::Segment_ConcurrentQueue_1_Slot<T>::Segment_ConcurrentQueue_1_Slot(T  Item, int32_t  SequenceNumber) noexcept  {
this->Item = Item;
this->SequenceNumber = SequenceNumber;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Segment_ConcurrentQueue_1_Slot<T>::Segment_ConcurrentQueue_1_Slot()   {
}

#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequence`1_SequenceType.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence`1_SequenceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::ReadOnlySequence_1_SequenceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::ReadOnlySequence_1_SequenceType()   {
}
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>  GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::MultiSegment{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>  GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::Array{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>  GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::MemoryManager{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>  GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::String{static_cast<int32_t>(0x3)};
template<typename T>
constexpr ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T>  GlobalNamespace::ReadOnlySequence_1_SequenceType<T>::Empty{static_cast<int32_t>(0x4)};

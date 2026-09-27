#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_RoomFilter.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_RoomFilter::MRUK_RoomFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_RoomFilter::MRUK_RoomFilter()   {
}
constexpr ::GlobalNamespace::MRUK_RoomFilter  GlobalNamespace::MRUK_RoomFilter::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUK_RoomFilter  GlobalNamespace::MRUK_RoomFilter::CurrentRoomOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_RoomFilter  GlobalNamespace::MRUK_RoomFilter::AllRooms{static_cast<int32_t>(0x2)};

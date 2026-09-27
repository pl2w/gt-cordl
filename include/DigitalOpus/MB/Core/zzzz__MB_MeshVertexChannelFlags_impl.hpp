#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::MB_MeshVertexChannelFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::MB_MeshVertexChannelFlags()   {
}
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::none{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::vertex{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::normal{static_cast<int32_t>(0x2)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::tangent{static_cast<int32_t>(0x4)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::colors{static_cast<int32_t>(0x8)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv0{static_cast<int32_t>(0x10)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::nuvsSliceIdx{static_cast<int32_t>(0x20)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv2{static_cast<int32_t>(0x40)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv3{static_cast<int32_t>(0x80)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv4{static_cast<int32_t>(0x100)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv5{static_cast<int32_t>(0x200)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv6{static_cast<int32_t>(0x400)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv7{static_cast<int32_t>(0x800)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::uv8{static_cast<int32_t>(0x1000)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::blendWeight{static_cast<int32_t>(0x2000)};
constexpr ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags  DigitalOpus::MB::Core::MB_MeshVertexChannelFlags::blendIndices{static_cast<int32_t>(0x4000)};

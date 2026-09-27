#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPacketData.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkObjectPacketFlags_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__NetworkObjectPacketData_def.hpp"
// Ctor Parameters [CppParam { name: "Id", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResetTick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "::Fusion::NetworkObjectPacketFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectPacketData::NetworkObjectPacketData(::Fusion::NetworkId  Id, ::Fusion::Tick  ResetTick, ::Fusion::NetworkObjectPacketFlags  Flags) noexcept  {
this->Id = Id;
this->ResetTick = ResetTick;
this->Flags = Flags;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectPacketData::NetworkObjectPacketData()   {
}

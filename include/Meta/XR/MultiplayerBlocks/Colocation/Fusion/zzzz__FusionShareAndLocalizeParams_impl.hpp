#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionShareAndLocalizeParams.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "Fusion/zzzz__NetworkString_1_impl.hpp"
#include "Fusion/zzzz___64_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionShareAndLocalizeParams_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::*)(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f62a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams.GetShareAndLocalizeParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::GetShareAndLocalizeParams)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f63450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(),
                        {"GetShareAndLocalizeParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_requestingPlayerId()  {
return this->___requestingPlayerId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_requestingPlayerId() const {
return this->___requestingPlayerId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_set_requestingPlayerId(uint64_t  value)  {
this->___requestingPlayerId = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_requestingPlayerOculusId()  {
return this->___requestingPlayerOculusId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_requestingPlayerOculusId() const {
return this->___requestingPlayerOculusId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_set_requestingPlayerOculusId(uint64_t  value)  {
this->___requestingPlayerOculusId = value;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_64>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_anchorUUID()  {
return this->___anchorUUID;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_anchorUUID() const {
return this->___anchorUUID;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_set_anchorUUID(::Fusion::NetworkString_1<::Fusion::_64>  value)  {
this->___anchorUUID = value;
}
constexpr ::Fusion::NetworkBool& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_anchorFlowSucceeded()  {
return this->___anchorFlowSucceeded;
}
constexpr ::Fusion::NetworkBool const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_get_anchorFlowSucceeded() const {
return this->___anchorFlowSucceeded;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::__cordl_internal_set_anchorFlowSucceeded(::Fusion::NetworkBool  value)  {
this->___anchorFlowSucceeded = value;
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::_ctor(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::GetShareAndLocalizeParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(),
                        {"GetShareAndLocalizeParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "requestingPlayerId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestingPlayerOculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchorUUID", ty: "::Fusion::NetworkString_1<::Fusion::_64>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchorFlowSucceeded", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::FusionShareAndLocalizeParams(uint64_t  requestingPlayerId, uint64_t  requestingPlayerOculusId, ::Fusion::NetworkString_1<::Fusion::_64>  anchorUUID, ::Fusion::NetworkBool  anchorFlowSucceeded) noexcept  {
this->requestingPlayerId = requestingPlayerId;
this->requestingPlayerOculusId = requestingPlayerOculusId;
this->anchorUUID = anchorUUID;
this->anchorFlowSucceeded = anchorFlowSucceeded;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams::FusionShareAndLocalizeParams()   {
}

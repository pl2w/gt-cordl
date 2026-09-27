#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionMessenger.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionMessenger_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionMessenger_MessageEvent_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionShareAndLocalizeParams_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkMessenger_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.get__networkIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<int32_t> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::get__networkIds)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9f61b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"get__networkIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.get__playerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<uint64_t> (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::get__playerIds)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9f61c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"get__playerIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.add_AnchorShareRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::add_AnchorShareRequestReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f61d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"add_AnchorShareRequestReceived", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.remove_AnchorShareRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::remove_AnchorShareRequestReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f61e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"remove_AnchorShareRequestReceived", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.add_AnchorShareRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::add_AnchorShareRequestCompleted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f61ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"add_AnchorShareRequestCompleted", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.remove_AnchorShareRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::remove_AnchorShareRequestCompleted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f61fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"remove_AnchorShareRequestCompleted", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.RegisterLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::RegisterLocalPlayer)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9f62058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"RegisterLocalPlayer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.AddPlayerIdHostRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(uint64_t, int32_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::AddPlayerIdHostRPC)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9f621d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"AddPlayerIdHostRPC", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.TryGetNetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(uint64_t, ::by_ref<int32_t>)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::TryGetNetworkId)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9f62700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"TryGetNetworkId", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.SendAnchorShareRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(uint64_t, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendAnchorShareRequest)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f628d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendAnchorShareRequest", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.SendAnchorShareCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(uint64_t, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendAnchorShareCompleted)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f62cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendAnchorShareCompleted", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.SendMessageToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::GlobalNamespace::FusionMessenger_MessageEvent, uint64_t, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendMessageToPlayer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9f62af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendMessageToPlayer", {}, {::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.FindRPCToCallServerRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::GlobalNamespace::FusionMessenger_MessageEvent, int32_t, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams, ::Fusion::RpcInfo)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::FindRPCToCallServerRPC)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9f62e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"FindRPCToCallServerRPC", {}, {::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.HandleMessageClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(::Fusion::PlayerRef, ::GlobalNamespace::FusionMessenger_MessageEvent, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::HandleMessageClientRPC)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9f630fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"HandleMessageClientRPC", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.PrintIDDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::PrintIDDictionary)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9f62468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"PrintIDDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f63530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9f63538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f63654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.AddPlayerIdHostRPC@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::AddPlayerIdHostRPC@Invoker)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f63734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"AddPlayerIdHostRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.FindRPCToCallServerRPC@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::FindRPCToCallServerRPC@Invoker)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f637cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"FindRPCToCallServerRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger.HandleMessageClientRPC@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::HandleMessageClientRPC@Invoker)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f638f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"HandleMessageClientRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get___networkIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____networkIds;
}
constexpr ::ArrayW<int32_t> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get___networkIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____networkIds;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_set___networkIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____networkIds = value;
}
constexpr ::ArrayW<uint64_t>& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get___playerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____playerIds;
}
constexpr ::ArrayW<uint64_t> const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get___playerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____playerIds;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_set___playerIds(::ArrayW<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____playerIds = value;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get_AnchorShareRequestReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorShareRequestReceived;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get_AnchorShareRequestReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorShareRequestReceived;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_set_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorShareRequestReceived = value;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get_AnchorShareRequestCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorShareRequestCompleted;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_get_AnchorShareRequestCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorShareRequestCompleted;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::__cordl_internal_set_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorShareRequestCompleted = value;
}
inline ::Fusion::NetworkLinkedList_1<int32_t> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::get__networkIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"get__networkIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<int32_t>>(this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<uint64_t> Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::get__playerIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"get__playerIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<uint64_t>>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::add_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"add_AnchorShareRequestReceived", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::remove_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"remove_AnchorShareRequestReceived", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::add_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"add_AnchorShareRequestCompleted", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::remove_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"remove_AnchorShareRequestCompleted", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::RegisterLocalPlayer(uint64_t  localPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"RegisterLocalPlayer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::AddPlayerIdHostRPC(uint64_t  localPlayerId, int32_t  localNetworkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"AddPlayerIdHostRPC", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerId, localNetworkId);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::TryGetNetworkId(uint64_t  playerId, ::by_ref<int32_t>  networkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"TryGetNetworkId", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, networkId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendAnchorShareRequest(uint64_t  targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendAnchorShareRequest", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerId, shareAndLocalizeParams);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendAnchorShareCompleted(uint64_t  targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendAnchorShareCompleted", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerId, shareAndLocalizeParams);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::SendMessageToPlayer(::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, uint64_t  playerId, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"SendMessageToPlayer", {}, {::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, playerId, fusionData);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::FindRPCToCallServerRPC(::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, int32_t  fusionId, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"FindRPCToCallServerRPC", {}, {::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, fusionId, fusionData, info);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::HandleMessageClientRPC(/* [RpcTarget] */ ::Fusion::PlayerRef  playerRef, ::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"HandleMessageClientRPC", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::GlobalNamespace::FusionMessenger_MessageEvent>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRef, eventCode, fusionData);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::PrintIDDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"PrintIDDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::AddPlayerIdHostRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"AddPlayerIdHostRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::FindRPCToCallServerRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"FindRPCToCallServerRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::HandleMessageClientRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>(),
                        {"HandleMessageClientRPC@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*>());
}
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::operator ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger"
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::i___Meta__XR__MultiplayerBlocks__Colocation__INetworkMessenger() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger::FusionMessenger()   {
}

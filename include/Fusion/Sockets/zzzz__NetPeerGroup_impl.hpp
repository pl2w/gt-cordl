#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroup.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferStack_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_impl.hpp"
#include "Fusion/zzzz__Timer_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroup_def.hpp"
#include "Fusion/Sockets/zzzz__INetPeerGroupCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferBlock_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandAccepted_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandConnect_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandDisconnect_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandRefused_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_Iterator_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionStatus_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetNotifyHeader_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeer_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Sockets::NetPeerGroup::*)()>(&::Fusion::Sockets::NetPeerGroup::get_Time)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x602e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.get_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetPeerGroup::*)()>(&::Fusion::Sockets::NetPeerGroup::get_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602e2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_Group", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.get_ConnectionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetPeerGroup::*)()>(&::Fusion::Sockets::NetPeerGroup::get_ConnectionCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_ConnectionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeerGroup::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x602cf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.GetConnectionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (*)(::Fusion::Sockets::NetPeerGroup*, int32_t)>(&::Fusion::Sockets::NetPeerGroup::GetConnectionByIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x602e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionByIndex", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.TryGetConnectionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeerGroup*, int32_t, ::by_ref<::Fusion::Sockets::NetConnection*>)>(&::Fusion::Sockets::NetPeerGroup::TryGetConnectionByIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x602e2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"TryGetConnectionByIndex", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.ConnectionIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetConnectionMap_Iterator (*)(::Fusion::Sockets::NetPeerGroup*)>(&::Fusion::Sockets::NetPeerGroup::ConnectionIterator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x602e328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ConnectionIterator", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetPeerGroup::Connect)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x602e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::StringW, uint16_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetPeerGroup::Connect)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x602ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetPeerGroup::Disconnect)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x602f044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.DisconnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetPeerGroup::DisconnectInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x602f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"DisconnectInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeerGroup::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x602f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t, ::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetPeerGroup::Initialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x602cc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Initialize", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.PopSendHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Fusion::Sockets::NetPeerGroup*)>(&::Fusion::Sockets::NetPeerGroup::PopSendHead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x602e064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"PopSendHead", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.PushOnRecvHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::PushOnRecvHead)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x602d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"PushOnRecvHead", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.UpdateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeerGroup::UpdateConnections)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x602f514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.SendReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::ReliableId, uint8_t*, int32_t)>(&::Fusion::Sockets::NetPeerGroup::SendReliable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x602fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendReliable", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.ChangeConnectionAddressDuringConnecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetPeerGroup::ChangeConnectionAddressDuringConnecting)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x602ff9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ChangeConnectionAddressDuringConnecting", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.SendCommandConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::SendCommandConnect)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x602ebb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendCommandConnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.UpdateConnecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::UpdateConnecting)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x602f5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnecting", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.UpdateConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::UpdateConnected)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x602f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.UpdateDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::UpdateDisconnected)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x602fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateDisconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.UpdateShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::UpdateShutdown)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x602fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateShutdown", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.SendUnconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::SendUnconnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6030b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendUnconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::Send)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6030770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.GetConnectionSendBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetBitBuffer*>)>(&::Fusion::Sockets::NetPeerGroup::GetConnectionSendBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6030714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionSendBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.SendUnconnectedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetAddress, void*, int32_t)>(&::Fusion::Sockets::NetPeerGroup::SendUnconnectedData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6030ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendUnconnectedData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.GetNotifyDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetBitBuffer*>)>(&::Fusion::Sockets::NetPeerGroup::GetNotifyDataBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6030340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetNotifyDataBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.SendNotifyDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*, void*)>(&::Fusion::Sockets::NetPeerGroup::SendNotifyDataBuffer)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x60303dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendNotifyDataBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeerGroup::Receive)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x602f2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketUnconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketUnconnected)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6030c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketUnconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.GetConnectionIdleTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::GetConnectionIdleTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6031528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionIdleTime", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacket)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6030ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacket", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketNotifyAcks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketNotifyAcks)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6031bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyAcks", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketNotifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketNotifyData)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x603154c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketNotifyData_Part2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetNotifyHeader, int32_t, ::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketNotifyData_Part2)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x60321e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyData_Part2", {}, {::i2c::type_of<::Fusion::Sockets::NetNotifyHeader>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketAcks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetNotifyHeader)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketAcks)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x6031dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketAcks", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetNotifyHeader>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketUnreliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketUnreliableData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6031cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketUnreliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandlePacketCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetPeerGroup::HandlePacketCommand)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6031290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketCommand", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandleCommandRefused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetCommandRefused)>(&::Fusion::Sockets::NetPeerGroup::HandleCommandRefused)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6032618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandRefused", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandRefused>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandleCommandDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetCommandDisconnect)>(&::Fusion::Sockets::NetPeerGroup::HandleCommandDisconnect)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6032a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandDisconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandDisconnect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandleCommandConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetCommandConnect)>(&::Fusion::Sockets::NetPeerGroup::HandleCommandConnect)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x60323b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandConnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.HandleCommandAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetCommandAccepted)>(&::Fusion::Sockets::NetPeerGroup::HandleCommandAccepted)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6032854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandAccepted", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandAccepted>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.QueueAddressUnmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::QueueAddressUnmap)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x60309b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"QueueAddressUnmap", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.ChangeConnectionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetConnectionStatus)>(&::Fusion::Sockets::NetPeerGroup::ChangeConnectionStatus)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x602e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ChangeConnectionStatus", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.ReleaseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::INetPeerGroupCallbacks*, ::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::NetPeerGroup::ReleaseConnection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6030908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ReleaseConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroup.AllocateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (*)(::Fusion::Sockets::NetPeerGroup*, ::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetPeerGroup::AllocateConnection)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x602e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"AllocateConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Fusion::Sockets::NetPeerGroup::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetPeerGroup::get_Group()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_Group", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetPeerGroup::get_ConnectionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"get_ConnectionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetPeerGroup::Dispose(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, callbacks);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetPeerGroup::GetConnectionByIndex(::Fusion::Sockets::NetPeerGroup*  g, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionByIndex", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(nullptr, ___internal_method, g, index);
}
inline bool Fusion::Sockets::NetPeerGroup::TryGetConnectionByIndex(::Fusion::Sockets::NetPeerGroup*  g, int32_t  index, ::by_ref<::Fusion::Sockets::NetConnection*>  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"TryGetConnectionByIndex", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, index, connection);
}
inline ::GlobalNamespace::NetConnectionMap_Iterator Fusion::Sockets::NetPeerGroup::ConnectionIterator(::Fusion::Sockets::NetPeerGroup*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ConnectionIterator", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetConnectionMap_Iterator>(nullptr, ___internal_method, g);
}
inline void Fusion::Sockets::NetPeerGroup::Connect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, address, token, uniqueId);
}
inline void Fusion::Sockets::NetPeerGroup::Connect(::Fusion::Sockets::NetPeerGroup*  g, ::StringW  ip, uint16_t  port, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Connect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, ip, port, token, uniqueId);
}
inline void Fusion::Sockets::NetPeerGroup::Disconnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Disconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c, token);
}
inline void Fusion::Sockets::NetPeerGroup::DisconnectInternal(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetDisconnectReason  reason, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"DisconnectInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetDisconnectReason>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c, reason, token);
}
inline void Fusion::Sockets::NetPeerGroup::Update(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb);
}
inline void Fusion::Sockets::NetPeerGroup::Initialize(int16_t  groupIndex, ::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Initialize", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, groupIndex, g, p, config);
}
inline ::System::IntPtr Fusion::Sockets::NetPeerGroup::PopSendHead(::Fusion::Sockets::NetPeerGroup*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"PopSendHead", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, g);
}
inline void Fusion::Sockets::NetPeerGroup::PushOnRecvHead(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"PushOnRecvHead", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, b);
}
inline void Fusion::Sockets::NetPeerGroup::UpdateConnections(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb);
}
inline void Fusion::Sockets::NetPeerGroup::SendReliable(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::ReliableId  rid, uint8_t*  data, int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendReliable", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::ReliableId>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c, rid, data, dataLength);
}
inline void Fusion::Sockets::NetPeerGroup::ChangeConnectionAddressDuringConnecting(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetAddress  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ChangeConnectionAddressDuringConnecting", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c, newAddress);
}
inline void Fusion::Sockets::NetPeerGroup::SendCommandConnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendCommandConnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline void Fusion::Sockets::NetPeerGroup::UpdateConnecting(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnecting", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline void Fusion::Sockets::NetPeerGroup::UpdateConnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateConnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline void Fusion::Sockets::NetPeerGroup::UpdateDisconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateDisconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline void Fusion::Sockets::NetPeerGroup::UpdateShutdown(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"UpdateShutdown", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline void Fusion::Sockets::NetPeerGroup::SendUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendUnconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, b);
}
inline void Fusion::Sockets::NetPeerGroup::Send(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c, b);
}
inline bool Fusion::Sockets::NetPeerGroup::GetConnectionSendBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionSendBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, c, b);
}
inline bool Fusion::Sockets::NetPeerGroup::SendUnconnectedData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, void*  data, int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendUnconnectedData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, address, data, dataLength);
}
inline bool Fusion::Sockets::NetPeerGroup::GetNotifyDataBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetNotifyDataBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, c, b);
}
inline bool Fusion::Sockets::NetPeerGroup::SendNotifyDataBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b, void*  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"SendNotifyDataBuffer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, c, b, userData);
}
inline void Fusion::Sockets::NetPeerGroup::Receive(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketUnconnected", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, b);
}
inline double_t Fusion::Sockets::NetPeerGroup::GetConnectionIdleTime(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"GetConnectionIdleTime", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, g, c);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacket(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacket", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketNotifyAcks(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyAcks", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketNotifyData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketNotifyData_Part2(::Fusion::Sockets::NetNotifyHeader  header, int32_t  sequenceDistance, ::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketNotifyData_Part2", {}, {::i2c::type_of<::Fusion::Sockets::NetNotifyHeader>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, sequenceDistance, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketAcks(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetNotifyHeader  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketAcks", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetNotifyHeader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, h);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketUnreliableData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketUnreliableData", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandlePacketCommand(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandlePacketCommand", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, b);
}
inline void Fusion::Sockets::NetPeerGroup::HandleCommandRefused(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandRefused  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandRefused", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandRefused>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, cmd);
}
inline void Fusion::Sockets::NetPeerGroup::HandleCommandDisconnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandDisconnect  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandDisconnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandDisconnect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, cmd);
}
inline void Fusion::Sockets::NetPeerGroup::HandleCommandConnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandConnect  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandConnect", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandConnect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, cmd);
}
inline void Fusion::Sockets::NetPeerGroup::HandleCommandAccepted(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandAccepted  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"HandleCommandAccepted", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetCommandAccepted>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, cmd);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::Sockets::NetPeerGroup::SendCommand(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, T  cmd)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                    {"SendCommand", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, c, cmd);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::Sockets::NetPeerGroup::SendCommandUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, T  cmd)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                    {"SendCommandUnconnected", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, g, address, cmd);
}
inline void Fusion::Sockets::NetPeerGroup::QueueAddressUnmap(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"QueueAddressUnmap", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c);
}
inline void Fusion::Sockets::NetPeerGroup::ChangeConnectionStatus(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetConnectionStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ChangeConnectionStatus", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c, status);
}
inline void Fusion::Sockets::NetPeerGroup::ReleaseConnection(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"ReleaseConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), ::i2c::type_of<::Fusion::Sockets::NetConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, cb, c);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetPeerGroup::AllocateConnection(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroup>(),
                        {"AllocateConnection", {}, {::i2c::type_of<::Fusion::Sockets::NetPeerGroup*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(nullptr, ___internal_method, g, address, token, uniqueId);
}
// Ctor Parameters [CppParam { name: "_peer", ty: "::Fusion::Sockets::NetPeer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_group", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_clock", ty: "::Fusion::Timer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_config", ty: "::Fusion::Sockets::NetConfig", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_counter", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sendHead", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_recvHead", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_recvStack", ty: "::Fusion::Sockets::NetBitBufferStack", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sendBlock", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_connectionsMap", ty: "::Fusion::Sockets::NetConnectionMap*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReliableSendInterval", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetPeerGroup::NetPeerGroup(::Fusion::Sockets::NetPeer*  _peer, int16_t  _group, ::Fusion::Timer  _clock, ::Fusion::Sockets::NetConfig  _config, uint32_t  _counter, ::System::IntPtr  _sendHead, ::System::IntPtr  _recvHead, ::Fusion::Sockets::NetBitBufferStack  _recvStack, ::Fusion::Sockets::NetBitBufferBlock*  _sendBlock, ::Fusion::Sockets::NetConnectionMap*  _connectionsMap, double_t  ReliableSendInterval) noexcept  {
this->_peer = _peer;
this->_group = _group;
this->_clock = _clock;
this->_config = _config;
this->_counter = _counter;
this->_sendHead = _sendHead;
this->_recvHead = _recvHead;
this->_recvStack = _recvStack;
this->_sendBlock = _sendBlock;
this->_connectionsMap = _connectionsMap;
this->ReliableSendInterval = ReliableSendInterval;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetPeerGroup::NetPeerGroup()   {
}

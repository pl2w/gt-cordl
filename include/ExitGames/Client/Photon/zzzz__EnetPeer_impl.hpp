#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EnetPeer.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetChannel_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetChannel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommandPool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_QueuedIncomingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::get_QueuedIncomingCommandsCount)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa6b8f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_QueuedOutgoingCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::get_QueuedOutgoingCommandsCount)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa6b90fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_SentReliableCommandsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::get_SentReliableCommandsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa6b9330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.get_sendWindowUpdateRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::get_sendWindowUpdateRequired)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6b9378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"get_sendWindowUpdateRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.set_sendWindowUpdateRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(bool)>(&::ExitGames::Client::Photon::EnetPeer::set_sendWindowUpdateRequired)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6b93a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"set_sendWindowUpdateRequired", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa6b93c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.IsTransportEncrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::IsTransportEncrypted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b98f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::Reset)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xa6b98fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ApplyRandomizedSequenceNumbers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::ApplyRandomizedSequenceNumbers)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa6ba110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"ApplyRandomizedSequenceNumbers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.GetChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::EnetChannel* (::ExitGames::Client::Photon::EnetPeer::*)(uint8_t)>(&::ExitGames::Client::Photon::EnetPeer::GetChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6ba2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"GetChannel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*)>(&::ExitGames::Client::Photon::EnetPeer::Connect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6ba320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.OnConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::OnConnect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ba3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa6ba73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.StopConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::StopConnection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6bb364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.FetchServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6bb450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.DispatchIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0xa6bba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.GetFragmentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::GetFragmentLength)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa6bd1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"GetFragmentLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CalculatePacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)(int32_t)>(&::ExitGames::Client::Photon::EnetPeer::CalculatePacketSize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6bd2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CalculatePacketSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CalculateInitialOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::CalculateInitialOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa6bd3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CalculateInitialOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendAcksOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0xa6bd3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendOutgoingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0xa6be338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.UpdateSendWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::UpdateSendWindow)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0xa6bf124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"UpdateSendWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.EnqueuePhotonMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::EnetPeer::EnqueuePhotonMessage)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6bfa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CreateAndEnqueueCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::EnetPeer::CreateAndEnqueueCommand)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa6bb6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CreateAndEnqueueCommand", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeAckToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::SerializeAckToBuffer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa6bdc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeAckToBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EnetPeer::*)(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::SerializeToBuffer)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa6bf7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeToBuffer", {}, {::i2c::type_of<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SerializeCommandToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, bool)>(&::ExitGames::Client::Photon::EnetPeer::SerializeCommandToBuffer)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa6bdec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeCommandToBuffer", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::SendData)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa6be008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendToSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::SendToSocket)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa6c0654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendToSocket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.SendDataEncrypted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::SendDataEncrypted)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa6c0418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendDataEncrypted", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueSentCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, bool)>(&::ExitGames::Client::Photon::EnetPeer::QueueSentCommand)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xa6c016c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueSentCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingReliableCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::EnetPeer::QueueOutgoingReliableCommand)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6ba5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingReliableCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingUnreliableCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::EnetPeer::QueueOutgoingUnreliableCommand)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa6bfa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingUnreliableCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueOutgoingAcknowledgement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::QueueOutgoingAcknowledgement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa6c0bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingAcknowledgement", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ReceiveIncomingCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::EnetPeer::ReceiveIncomingCommands)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0xa6c0e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.ExecuteCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::EnetPeer::ExecuteCommand)> {
  constexpr static std::size_t size = 0xd90;
  constexpr static std::size_t addrs = 0xa6bc3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"ExecuteCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.QueueIncomingCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::EnetPeer::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::EnetPeer::QueueIncomingCommand)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0xa6c1e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueIncomingCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.RemoveSentReliableCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::EnetPeer::*)(int32_t, int32_t, bool)>(&::ExitGames::Client::Photon::EnetPeer::RemoveSentReliableCommand)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa6c19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"RemoveSentReliableCommand", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer.CommandListToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::EnetPeer::*)(::ArrayW<::ExitGames::Client::Photon::NCommand*>)>(&::ExitGames::Client::Photon::EnetPeer::CommandListToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa6c2a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CommandListToString", {}, {::i2c::type_of<::ArrayW<::ExitGames::Client::Photon::NCommand*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EnetPeer._ExecuteCommand_b__73_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EnetPeer::*)()>(&::ExitGames::Client::Photon::EnetPeer::_ExecuteCommand_b__73_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6c2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"<ExecuteCommand>b__73_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::NCommandPool*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_nCommandPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nCommandPool;
}
constexpr ::ExitGames::Client::Photon::NCommandPool* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_nCommandPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nCommandPool;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_nCommandPool(::ExitGames::Client::Photon::NCommandPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nCommandPool = value;
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sentReliableCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentReliableCommands;
}
constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sentReliableCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentReliableCommands;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_sentReliableCommands(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentReliableCommands = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sendWindowUpdateRequiredBackValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendWindowUpdateRequiredBackValue;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_sendWindowUpdateRequiredBackValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendWindowUpdateRequiredBackValue;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_sendWindowUpdateRequiredBackValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendWindowUpdateRequiredBackValue = value;
}
constexpr ::ExitGames::Client::Photon::StreamBuffer*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingAcknowledgementsPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingAcknowledgementsPool;
}
constexpr ::ExitGames::Client::Photon::StreamBuffer* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingAcknowledgementsPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingAcknowledgementsPool;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_outgoingAcknowledgementsPool(::ExitGames::Client::Photon::StreamBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingAcknowledgementsPool = value;
}
constexpr ::ArrayW<int32_t>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_unsequencedWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsequencedWindow;
}
constexpr ::ArrayW<int32_t> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_unsequencedWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsequencedWindow;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_unsequencedWindow(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsequencedWindow = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingUnsequencedGroupNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_outgoingUnsequencedGroupNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outgoingUnsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_outgoingUnsequencedGroupNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outgoingUnsequencedGroupNumber = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_incomingUnsequencedGroupNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedGroupNumber;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_incomingUnsequencedGroupNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incomingUnsequencedGroupNumber;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_incomingUnsequencedGroupNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incomingUnsequencedGroupNumber = value;
}
constexpr uint8_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpCommandCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpCommandCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpCommandCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpCommandCount;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpCommandCount(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___udpCommandCount = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpBuffer;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpBuffer;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___udpBuffer = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpBufferIndex;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_udpBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___udpBufferIndex;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_udpBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___udpBufferIndex = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_bufferForEncryption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferForEncryption;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_bufferForEncryption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferForEncryption;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_bufferForEncryption(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferForEncryption = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBufferSize;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBufferSize;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_commandBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandBufferSize = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_challenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___challenge;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_challenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___challenge;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_challenge(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___challenge = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsRepeated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsRepeated;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsRepeated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsRepeated;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_reliableCommandsRepeated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableCommandsRepeated = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsSent;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_reliableCommandsSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableCommandsSent;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_reliableCommandsSent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableCommandsSent = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_serverSentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentTime;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_serverSentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentTime;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_serverSentTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverSentTime = value;
}
constexpr bool& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_datagramEncryptedConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datagramEncryptedConnection;
}
constexpr bool const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_datagramEncryptedConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___datagramEncryptedConnection;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_datagramEncryptedConnection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___datagramEncryptedConnection = value;
}
constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelArray;
}
constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelArray;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_channelArray(::ArrayW<::ExitGames::Client::Photon::EnetChannel*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelArray = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandsToRemove;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_commandsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandsToRemove;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_commandsToRemove(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandsToRemove = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLength;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLength;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentLength = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthDatagramEncrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLengthDatagramEncrypt;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthDatagramEncrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLengthDatagramEncrypt;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLengthDatagramEncrypt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentLengthDatagramEncrypt = value;
}
constexpr int32_t& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthMtuValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLengthMtuValue;
}
constexpr int32_t const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_fragmentLengthMtuValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentLengthMtuValue;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_fragmentLengthMtuValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentLengthMtuValue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_CommandQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_CommandQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommandQueue;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_CommandQueue(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CommandQueue = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint8_t>*& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelsToUpdateLowestSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsToUpdateLowestSent;
}
constexpr ::System::Collections::Generic::HashSet_1<uint8_t>* const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_channelsToUpdateLowestSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelsToUpdateLowestSent;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_channelsToUpdateLowestSent(::System::Collections::Generic::HashSet_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelsToUpdateLowestSent = value;
}
constexpr ::ArrayW<int32_t>& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_lowestSentSequenceNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestSentSequenceNumber;
}
constexpr ::ArrayW<int32_t> const& ExitGames::Client::Photon::EnetPeer::__cordl_internal_get_lowestSentSequenceNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestSentSequenceNumber;
}
constexpr void ExitGames::Client::Photon::EnetPeer::__cordl_internal_set_lowestSentSequenceNumber(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestSentSequenceNumber = value;
}
inline void ExitGames::Client::Photon::EnetPeer::setStaticF_udpHeader0xF3(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "udpHeader0xF3", ::ExitGames::Client::Photon::EnetPeer*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::EnetPeer::getStaticF_udpHeader0xF3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "udpHeader0xF3", ::ExitGames::Client::Photon::EnetPeer*>();
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_QueuedIncomingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_QueuedOutgoingCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::get_SentReliableCommandsCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::get_sendWindowUpdateRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"get_sendWindowUpdateRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::set_sendWindowUpdateRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"set_sendWindowUpdateRequired", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::EnetPeer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::IsTransportEncrypted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::ApplyRandomizedSequenceNumbers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"ApplyRandomizedSequenceNumbers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::EnetChannel* ExitGames::Client::Photon::EnetPeer::GetChannel(uint8_t  channelNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"GetChannel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EnetChannel*>(this, ___internal_method, channelNumber);
}
inline bool ExitGames::Client::Photon::EnetPeer::Connect(::StringW  ipport, ::StringW  proxyServerAddress, ::StringW  appID, ::System::Object*  photonToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ipport, proxyServerAddress, appID, photonToken);
}
inline void ExitGames::Client::Photon::EnetPeer::OnConnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::StopConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::FetchServerTimestamp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::DispatchIncomingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::GetFragmentLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"GetFragmentLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::CalculatePacketSize(int32_t  inSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CalculatePacketSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inSize);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::CalculateInitialOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CalculateInitialOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::SendAcksOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::SendOutgoingCommands()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EnetPeer::UpdateSendWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"UpdateSendWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::EnetPeer::EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer*  opBytes, ::ExitGames::Client::Photon::SendOptions  sendParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opBytes, sendParams);
}
inline bool ExitGames::Client::Photon::EnetPeer::CreateAndEnqueueCommand(uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channelNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CreateAndEnqueueCommand", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, commandType, payload, channelNumber);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::SerializeAckToBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeAckToBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::EnetPeer::SerializeToBuffer(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*  commandList, int32_t  channelSequenceLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeToBuffer", {}, {::i2c::type_of<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, commandList, channelSequenceLimit);
}
inline bool ExitGames::Client::Photon::EnetPeer::SerializeCommandToBuffer(::ExitGames::Client::Photon::NCommand*  command, bool  commandIsInSentQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SerializeCommandToBuffer", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, command, commandIsInSentQueue);
}
inline void ExitGames::Client::Photon::EnetPeer::SendData(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::EnetPeer::SendToSocket(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendToSocket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::EnetPeer::SendDataEncrypted(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"SendDataEncrypted", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueSentCommand(::ExitGames::Client::Photon::NCommand*  command, bool  commandIsAlreadyInSentQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueSentCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command, commandIsAlreadyInSentQueue);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingReliableCommand(::ExitGames::Client::Photon::NCommand*  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingReliableCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingUnreliableCommand(::ExitGames::Client::Photon::NCommand*  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingUnreliableCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void ExitGames::Client::Photon::EnetPeer::QueueOutgoingAcknowledgement(::ExitGames::Client::Photon::NCommand*  readCommand, int32_t  sendTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueOutgoingAcknowledgement", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readCommand, sendTime);
}
inline void ExitGames::Client::Photon::EnetPeer::ReceiveIncomingCommands(::ArrayW<uint8_t>  inBuff, int32_t  inDataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inBuff, inDataLength);
}
inline void ExitGames::Client::Photon::EnetPeer::ExecuteCommand(::ExitGames::Client::Photon::NCommand*  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"ExecuteCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline bool ExitGames::Client::Photon::EnetPeer::QueueIncomingCommand(::ExitGames::Client::Photon::NCommand*  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"QueueIncomingCommand", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, command);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::EnetPeer::RemoveSentReliableCommand(int32_t  ackReceivedReliableSequenceNumber, int32_t  ackReceivedChannel, bool  isUnsequenced)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"RemoveSentReliableCommand", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*>(this, ___internal_method, ackReceivedReliableSequenceNumber, ackReceivedChannel, isUnsequenced);
}
inline ::StringW ExitGames::Client::Photon::EnetPeer::CommandListToString(::ArrayW<::ExitGames::Client::Photon::NCommand*>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"CommandListToString", {}, {::i2c::type_of<::ArrayW<::ExitGames::Client::Photon::NCommand*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, list);
}
inline void ExitGames::Client::Photon::EnetPeer::_ExecuteCommand_b__73_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EnetPeer*>(),
                        {"<ExecuteCommand>b__73_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::EnetPeer* ExitGames::Client::Photon::EnetPeer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::EnetPeer*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EnetPeer::EnetPeer()   {
}

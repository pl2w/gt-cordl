#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeer.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferStack_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_impl.hpp"
#include "Fusion/Sockets/zzzz__NetDelayedPacketList_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_impl.hpp"
#include "Fusion/zzzz__Timer_impl.hpp"
#include "Fusion/Sockets/zzzz__NetPeer_def.hpp"
#include "Fusion/Sockets/zzzz__INetPeerGroupCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferBlock_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetCommandRefused_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroup_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetPeer::*)()>(&::Fusion::Sockets::NetPeer::get_Address)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x602bcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.get_GroupCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetPeer::*)()>(&::Fusion::Sockets::NetPeer::get_GroupCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"get_GroupCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.GetConfigPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfig* (*)(::Fusion::Sockets::NetPeer*)>(&::Fusion::Sockets::NetPeer::GetConfigPointer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x602bce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"GetConfigPointer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.GetGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetPeerGroup* (*)(::Fusion::Sockets::NetPeer*, int32_t)>(&::Fusion::Sockets::NetPeer::GetGroup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602bd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"GetGroup", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Recv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::System::Random*)>(&::Fusion::Sockets::NetPeer::Recv)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x602bd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Recv", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Recv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*, ::System::Random*)>(&::Fusion::Sockets::NetPeer::Recv)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x602bd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Recv", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RemapAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetPeer::RemapAddress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x602c4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RemapAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*)>(&::Fusion::Sockets::NetPeer::Send)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x602c554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&::Fusion::Sockets::NetPeer::Send)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x602c5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetPeer* (*)(::Fusion::Sockets::NetConfig, ::Fusion::Sockets::INetSocket*)>(&::Fusion::Sockets::NetPeer::Initialize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x602c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::NetConfig, ::Fusion::Sockets::INetSocket*)>(&::Fusion::Sockets::NetPeer::Initialize)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x602c7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeer::Destroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x602cd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.DestroySocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetPeer::DestroySocket)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x602cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.FindGroupWithLeastAssignedAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::Fusion::Sockets::NetPeer*)>(&::Fusion::Sockets::NetPeer::FindGroupWithLeastAssignedAddresses)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x602cfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"FindGroupWithLeastAssignedAddresses", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RecvInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*, ::System::Random*)>(&::Fusion::Sockets::NetPeer::RecvInternal)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x602be6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RecvBufferPushToGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, ::System::Random*)>(&::Fusion::Sockets::NetPeer::RecvBufferPushToGroup)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x602d23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvBufferPushToGroup", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RecvDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*, ::System::Random*)>(&::Fusion::Sockets::NetPeer::RecvDelayed)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x602d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvDelayed", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.SendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&::Fusion::Sockets::NetPeer::SendInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x602c678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"SendInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.SendFromStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetPeer*, ::Fusion::Sockets::INetSocket*, bool*)>(&::Fusion::Sockets::NetPeer::SendFromStack)> {
  constexpr static std::size_t size = 0xa3c;
  constexpr static std::size_t addrs = 0x602d628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"SendFromStack", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RecvBufferAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeer*)>(&::Fusion::Sockets::NetPeer::RecvBufferAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvBufferAvailable", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeer.RecvExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetPeer*)>(&::Fusion::Sockets::NetPeer::RecvExpired)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x602e10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvExpired", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetPeer::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetPeer::get_GroupCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"get_GroupCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfig* Fusion::Sockets::NetPeer::GetConfigPointer(::Fusion::Sockets::NetPeer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"GetConfigPointer", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfig*>(nullptr, ___internal_method, p);
}
inline ::Fusion::Sockets::NetPeerGroup* Fusion::Sockets::NetPeer::GetGroup(::Fusion::Sockets::NetPeer*  p, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"GetGroup", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetPeerGroup*>(nullptr, ___internal_method, p, index);
}
inline void Fusion::Sockets::NetPeer::Recv(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::System::Random*  rng)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Recv", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, rng);
}
inline void Fusion::Sockets::NetPeer::Recv(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Recv", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work, rng);
}
inline void Fusion::Sockets::NetPeer::RemapAddress(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetAddress  oldAddress, ::Fusion::Sockets::NetAddress  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RemapAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, oldAddress, newAddress);
}
inline void Fusion::Sockets::NetPeer::Send(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket);
}
inline void Fusion::Sockets::NetPeer::Send(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work);
}
inline ::Fusion::Sockets::NetPeer* Fusion::Sockets::NetPeer::Initialize(::Fusion::Sockets::NetConfig  config, ::Fusion::Sockets::INetSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetPeer*>(nullptr, ___internal_method, config, socket);
}
inline void Fusion::Sockets::NetPeer::Initialize(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetConfig  config, ::Fusion::Sockets::INetSocket*  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, config, socket);
}
inline void Fusion::Sockets::NetPeer::Destroy(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, callbacks);
}
inline void Fusion::Sockets::NetPeer::DestroySocket(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, callbacks);
}
inline int16_t Fusion::Sockets::NetPeer::FindGroupWithLeastAssignedAddresses(::Fusion::Sockets::NetPeer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"FindGroupWithLeastAssignedAddresses", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, p);
}
inline void Fusion::Sockets::NetPeer::RecvInternal(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work, rng);
}
inline void Fusion::Sockets::NetPeer::RecvBufferPushToGroup(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::System::Random*  rng)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvBufferPushToGroup", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, rng);
}
inline void Fusion::Sockets::NetPeer::RecvDelayed(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvDelayed", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work, rng);
}
inline void Fusion::Sockets::NetPeer::SendInternal(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"SendInternal", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work);
}
inline void Fusion::Sockets::NetPeer::SendFromStack(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"SendFromStack", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>(), ::i2c::type_of<::Fusion::Sockets::INetSocket*>(), ::i2c::type_of<bool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, socket, work);
}
inline bool Fusion::Sockets::NetPeer::RecvBufferAvailable(::Fusion::Sockets::NetPeer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvBufferAvailable", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p);
}
inline bool Fusion::Sockets::NetPeer::RecvExpired(::Fusion::Sockets::NetPeer*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeer>(),
                        {"RecvExpired", {}, {::i2c::type_of<::Fusion::Sockets::NetPeer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p);
}
// Ctor Parameters [CppParam { name: "_state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_config", ty: "::Fusion::Sockets::NetConfig", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_recvTimer", ty: "::Fusion::Timer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_fragmentBuffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_socket", ty: "::Fusion::Sockets::NetSocket", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sendStack", ty: "::Fusion::Sockets::NetBitBufferStack", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_groups", ty: "::Fusion::Sockets::NetPeerGroup*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_groupsMap", ty: "::Fusion::Sockets::NetPeerGroupMap*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_groupsAssigned", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_refusedCommand", ty: "::Fusion::Sockets::NetCommandRefused*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_recv", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_recvBlock", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_delayedClock", ty: "::Fusion::Timer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_delayedPackets", ty: "::Fusion::Sockets::NetDelayedPacketList", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetPeer::NetPeer(int32_t  _state, ::Fusion::Sockets::NetConfig  _config, ::Fusion::Timer  _recvTimer, uint8_t*  _fragmentBuffer, ::Fusion::Sockets::NetSocket  _socket, ::Fusion::Sockets::NetAddress  _address, ::Fusion::Sockets::NetBitBufferStack  _sendStack, ::Fusion::Sockets::NetPeerGroup*  _groups, ::Fusion::Sockets::NetPeerGroupMap*  _groupsMap, int32_t*  _groupsAssigned, ::Fusion::Sockets::NetCommandRefused*  _refusedCommand, ::Fusion::Sockets::NetBitBuffer*  _recv, ::Fusion::Sockets::NetBitBufferBlock*  _recvBlock, ::Fusion::Timer  _delayedClock, ::Fusion::Sockets::NetDelayedPacketList  _delayedPackets) noexcept  {
this->_state = _state;
this->_config = _config;
this->_recvTimer = _recvTimer;
this->_fragmentBuffer = _fragmentBuffer;
this->_socket = _socket;
this->_address = _address;
this->_sendStack = _sendStack;
this->_groups = _groups;
this->_groupsMap = _groupsMap;
this->_groupsAssigned = _groupsAssigned;
this->_refusedCommand = _refusedCommand;
this->_recv = _recv;
this->_recvBlock = _recvBlock;
this->_delayedClock = _delayedClock;
this->_delayedPackets = _delayedPackets;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetPeer::NetPeer()   {
}

#pragma once
// IWYU pragma private; include "Fusion/CloudServicesMetadata.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_impl.hpp"
#include "Fusion/zzzz__JoinProcessStage_impl.hpp"
#include "Fusion/zzzz__NATPunchStage_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_impl.hpp"
#include "Fusion/zzzz__ScheduledRequests_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__CloudServicesMetadata_def.hpp"
#include "Fusion/Encryption/zzzz__EncryptionToken_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Fusion/Protocol/zzzz__Disconnect_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/Protocol/zzzz__ReflexiveInfo_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunResult_def.hpp"
#include "Fusion/zzzz__JoinProcessStage_def.hpp"
#include "Fusion/zzzz__NATPunchStage_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_RunnerInitializeArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkRunnerInitializeArgs (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_RunnerInitializeArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_RunnerInitializeArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_RunnerInitializeArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::NetworkRunnerInitializeArgs)>(&::Fusion::CloudServicesMetadata::set_RunnerInitializeArgs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f7a448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_RunnerInitializeArgs", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_CurrentPunchStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NATPunchStage (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_CurrentPunchStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentPunchStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_CurrentPunchStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::NATPunchStage)>(&::Fusion::CloudServicesMetadata::set_CurrentPunchStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentPunchStage", {}, {::i2c::type_of<::Fusion::NATPunchStage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_CurrentJoinStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::JoinProcessStage (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_CurrentJoinStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentJoinStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_CurrentJoinStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::JoinProcessStage)>(&::Fusion::CloudServicesMetadata::set_CurrentJoinStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentJoinStage", {}, {::i2c::type_of<::Fusion::JoinProcessStage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_CurrentProtocolMessageVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::ProtocolMessageVersion (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_CurrentProtocolMessageVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentProtocolMessageVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_CurrentProtocolMessageVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::Protocol::ProtocolMessageVersion)>(&::Fusion::CloudServicesMetadata::set_CurrentProtocolMessageVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentProtocolMessageVersion", {}, {::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_RemoteReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::ReflexiveInfo* (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_RemoteReflexiveInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_RemoteReflexiveInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_RemoteReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::Protocol::ReflexiveInfo*)>(&::Fusion::CloudServicesMetadata::set_RemoteReflexiveInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_RemoteReflexiveInfo", {}, {::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_LocalReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::StunResult* (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_LocalReflexiveInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_LocalReflexiveInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_LocalReflexiveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::Sockets::Stun::StunResult*)>(&::Fusion::CloudServicesMetadata::set_LocalReflexiveInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f78de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_LocalReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_UniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_UniqueId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_UniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_UniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::ArrayW<uint8_t>)>(&::Fusion::CloudServicesMetadata::set_UniqueId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_UniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(int32_t)>(&::Fusion::CloudServicesMetadata::set_PlayerRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.get_EncryptionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Encryption::EncryptionToken* (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::get_EncryptionToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7a4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_EncryptionToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata.set_EncryptionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)(::Fusion::Encryption::EncryptionToken*)>(&::Fusion::CloudServicesMetadata::set_EncryptionToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_EncryptionToken", {}, {::i2c::type_of<::Fusion::Encryption::EncryptionToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudServicesMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudServicesMetadata::*)()>(&::Fusion::CloudServicesMetadata::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f725a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkRunnerInitializeArgs& Fusion::CloudServicesMetadata::__cordl_internal_get__RunnerInitializeArgs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunnerInitializeArgs_k__BackingField;
}
constexpr ::Fusion::NetworkRunnerInitializeArgs const& Fusion::CloudServicesMetadata::__cordl_internal_get__RunnerInitializeArgs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunnerInitializeArgs_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__RunnerInitializeArgs_k__BackingField(::Fusion::NetworkRunnerInitializeArgs  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunnerInitializeArgs_k__BackingField = value;
}
constexpr ::Fusion::NATPunchStage& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentPunchStage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPunchStage_k__BackingField;
}
constexpr ::Fusion::NATPunchStage const& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentPunchStage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentPunchStage_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__CurrentPunchStage_k__BackingField(::Fusion::NATPunchStage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentPunchStage_k__BackingField = value;
}
constexpr ::Fusion::JoinProcessStage& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentJoinStage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentJoinStage_k__BackingField;
}
constexpr ::Fusion::JoinProcessStage const& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentJoinStage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentJoinStage_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__CurrentJoinStage_k__BackingField(::Fusion::JoinProcessStage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentJoinStage_k__BackingField = value;
}
constexpr ::Fusion::Protocol::ProtocolMessageVersion& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentProtocolMessageVersion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentProtocolMessageVersion_k__BackingField;
}
constexpr ::Fusion::Protocol::ProtocolMessageVersion const& Fusion::CloudServicesMetadata::__cordl_internal_get__CurrentProtocolMessageVersion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentProtocolMessageVersion_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__CurrentProtocolMessageVersion_k__BackingField(::Fusion::Protocol::ProtocolMessageVersion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentProtocolMessageVersion_k__BackingField = value;
}
constexpr ::Fusion::Protocol::ReflexiveInfo*& Fusion::CloudServicesMetadata::__cordl_internal_get__RemoteReflexiveInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemoteReflexiveInfo_k__BackingField;
}
constexpr ::Fusion::Protocol::ReflexiveInfo* const& Fusion::CloudServicesMetadata::__cordl_internal_get__RemoteReflexiveInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemoteReflexiveInfo_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__RemoteReflexiveInfo_k__BackingField(::Fusion::Protocol::ReflexiveInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RemoteReflexiveInfo_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::CloudServicesMetadata::__cordl_internal_get__UniqueId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UniqueId_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& Fusion::CloudServicesMetadata::__cordl_internal_get__UniqueId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UniqueId_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__UniqueId_k__BackingField(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UniqueId_k__BackingField = value;
}
constexpr int32_t& Fusion::CloudServicesMetadata::__cordl_internal_get__PlayerRef_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr int32_t const& Fusion::CloudServicesMetadata::__cordl_internal_get__PlayerRef_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerRef_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__PlayerRef_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerRef_k__BackingField = value;
}
constexpr ::Fusion::Encryption::EncryptionToken*& Fusion::CloudServicesMetadata::__cordl_internal_get__EncryptionToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionToken_k__BackingField;
}
constexpr ::Fusion::Encryption::EncryptionToken* const& Fusion::CloudServicesMetadata::__cordl_internal_get__EncryptionToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionToken_k__BackingField;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__EncryptionToken_k__BackingField(::Fusion::Encryption::EncryptionToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EncryptionToken_k__BackingField = value;
}
constexpr ::Fusion::ScheduledRequests& Fusion::CloudServicesMetadata::__cordl_internal_get_ScheduledRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledRequests;
}
constexpr ::Fusion::ScheduledRequests const& Fusion::CloudServicesMetadata::__cordl_internal_get_ScheduledRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledRequests;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set_ScheduledRequests(::Fusion::ScheduledRequests  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScheduledRequests = value;
}
constexpr ::Fusion::Protocol::Disconnect*& Fusion::CloudServicesMetadata::__cordl_internal_get_LastDisconnectMsg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastDisconnectMsg;
}
constexpr ::Fusion::Protocol::Disconnect* const& Fusion::CloudServicesMetadata::__cordl_internal_get_LastDisconnectMsg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastDisconnectMsg;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set_LastDisconnectMsg(::Fusion::Protocol::Disconnect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastDisconnectMsg = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*& Fusion::CloudServicesMetadata::__cordl_internal_get_UniqueIdToReflexiveInfoTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueIdToReflexiveInfoTable;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>* const& Fusion::CloudServicesMetadata::__cordl_internal_get_UniqueIdToReflexiveInfoTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueIdToReflexiveInfoTable;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set_UniqueIdToReflexiveInfoTable(::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueIdToReflexiveInfoTable = value;
}
constexpr ::Fusion::Sockets::Stun::StunResult*& Fusion::CloudServicesMetadata::__cordl_internal_get__localStunResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localStunResult;
}
constexpr ::Fusion::Sockets::Stun::StunResult* const& Fusion::CloudServicesMetadata::__cordl_internal_get__localStunResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localStunResult;
}
constexpr void Fusion::CloudServicesMetadata::__cordl_internal_set__localStunResult(::Fusion::Sockets::Stun::StunResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localStunResult = value;
}
inline void Fusion::CloudServicesMetadata::setStaticF_LobbyClientServer(::Fusion::Photon::Realtime::TypedLobby*  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::TypedLobby*, "LobbyClientServer", ::Fusion::CloudServicesMetadata*>(std::forward<::Fusion::Photon::Realtime::TypedLobby*>(value));
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::CloudServicesMetadata::getStaticF_LobbyClientServer()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::TypedLobby*, "LobbyClientServer", ::Fusion::CloudServicesMetadata*>();
}
inline void Fusion::CloudServicesMetadata::setStaticF_LobbyShared(::Fusion::Photon::Realtime::TypedLobby*  value)  {
::cordl_internals::setStaticField<::Fusion::Photon::Realtime::TypedLobby*, "LobbyShared", ::Fusion::CloudServicesMetadata*>(std::forward<::Fusion::Photon::Realtime::TypedLobby*>(value));
}
inline ::Fusion::Photon::Realtime::TypedLobby* Fusion::CloudServicesMetadata::getStaticF_LobbyShared()  {
return ::cordl_internals::getStaticField<::Fusion::Photon::Realtime::TypedLobby*, "LobbyShared", ::Fusion::CloudServicesMetadata*>();
}
inline ::Fusion::NetworkRunnerInitializeArgs Fusion::CloudServicesMetadata::get_RunnerInitializeArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_RunnerInitializeArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkRunnerInitializeArgs>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_RunnerInitializeArgs(::Fusion::NetworkRunnerInitializeArgs  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_RunnerInitializeArgs", {}, {::i2c::type_of<::Fusion::NetworkRunnerInitializeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::NATPunchStage Fusion::CloudServicesMetadata::get_CurrentPunchStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentPunchStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NATPunchStage>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_CurrentPunchStage(::Fusion::NATPunchStage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentPunchStage", {}, {::i2c::type_of<::Fusion::NATPunchStage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::JoinProcessStage Fusion::CloudServicesMetadata::get_CurrentJoinStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentJoinStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::JoinProcessStage>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_CurrentJoinStage(::Fusion::JoinProcessStage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentJoinStage", {}, {::i2c::type_of<::Fusion::JoinProcessStage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Protocol::ProtocolMessageVersion Fusion::CloudServicesMetadata::get_CurrentProtocolMessageVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_CurrentProtocolMessageVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::ProtocolMessageVersion>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_CurrentProtocolMessageVersion(::Fusion::Protocol::ProtocolMessageVersion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_CurrentProtocolMessageVersion", {}, {::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Protocol::ReflexiveInfo* Fusion::CloudServicesMetadata::get_RemoteReflexiveInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_RemoteReflexiveInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::ReflexiveInfo*>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_RemoteReflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_RemoteReflexiveInfo", {}, {::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Sockets::Stun::StunResult* Fusion::CloudServicesMetadata::get_LocalReflexiveInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_LocalReflexiveInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::StunResult*>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_LocalReflexiveInfo(::Fusion::Sockets::Stun::StunResult*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_LocalReflexiveInfo", {}, {::i2c::type_of<::Fusion::Sockets::Stun::StunResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Fusion::CloudServicesMetadata::get_UniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_UniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_UniqueId(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_UniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::CloudServicesMetadata::get_PlayerRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_PlayerRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_PlayerRef(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_PlayerRef", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Encryption::EncryptionToken* Fusion::CloudServicesMetadata::get_EncryptionToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"get_EncryptionToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Encryption::EncryptionToken*>(this, ___internal_method);
}
inline void Fusion::CloudServicesMetadata::set_EncryptionToken(::Fusion::Encryption::EncryptionToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {"set_EncryptionToken", {}, {::i2c::type_of<::Fusion::Encryption::EncryptionToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CloudServicesMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudServicesMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::CloudServicesMetadata* Fusion::CloudServicesMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudServicesMetadata*>());
}
// Ctor Parameters []
constexpr ::Fusion::CloudServicesMetadata::CloudServicesMetadata()   {
}

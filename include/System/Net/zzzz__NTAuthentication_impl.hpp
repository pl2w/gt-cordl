#pragma once
// IWYU pragma private; include "System/Net/NTAuthentication.hpp"
#include "System/Net/zzzz__ContextFlagsPal_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NTAuthentication_def.hpp"
#include "System/Net/Security/zzzz__SafeDeleteContext_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__SecurityStatusPal_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
//  Writing Method size for method: ::System::Net::NTAuthentication.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadab6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_IsValidContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_IsValidContext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadab6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsValidContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_Package
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_Package)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadab6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_Package", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_IsServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_IsServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadab6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_ClientSpecifiedSpn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_ClientSpecifiedSpn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xadab700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_ClientSpecifiedSpn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_ProtocolName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_ProtocolName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadab8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_ProtocolName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.get_IsKerberos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::get_IsKerberos)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xadab964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsKerberos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NTAuthentication::*)(bool, ::StringW, ::System::Net::NetworkCredential*, ::StringW, ::System::Net::ContextFlagsPal, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*)>(&::System::Net::NTAuthentication::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadab9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NTAuthentication::*)(bool, ::StringW, ::System::Net::NetworkCredential*, ::StringW, ::System::Net::ContextFlagsPal, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*)>(&::System::Net::NTAuthentication::Initialize)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xadaba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.GetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SafeDeleteContext* (::System::Net::NTAuthentication::*)(::by_ref<::System::Net::SecurityStatusPal>)>(&::System::Net::NTAuthentication::GetContext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xadabd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetContext", {}, {::i2c::type_of<::by_ref<::System::Net::SecurityStatusPal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.CloseContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::CloseContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadabee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"CloseContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NTAuthentication::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::NTAuthentication::VerifySignature)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadabf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.MakeSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NTAuthentication::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<::ArrayW<uint8_t>>)>(&::System::Net::NTAuthentication::MakeSignature)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadabf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"MakeSignature", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.GetOutgoingBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NTAuthentication::*)(::StringW)>(&::System::Net::NTAuthentication::GetOutgoingBlob)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xadabf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.GetOutgoingBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::NTAuthentication::*)(::ArrayW<uint8_t>, bool)>(&::System::Net::NTAuthentication::GetOutgoingBlob)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadacdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.GetOutgoingBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::NTAuthentication::*)(::ArrayW<uint8_t>, bool, ::by_ref<::System::Net::SecurityStatusPal>)>(&::System::Net::NTAuthentication::GetOutgoingBlob)> {
  constexpr static std::size_t size = 0xd9c;
  constexpr static std::size_t addrs = 0xadac05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Net::SecurityStatusPal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NTAuthentication.GetClientSpecifiedSpn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NTAuthentication::*)()>(&::System::Net::NTAuthentication::GetClientSpecifiedSpn)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xadab740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetClientSpecifiedSpn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::NTAuthentication::__cordl_internal_get__isServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer;
}
constexpr bool const& System::Net::NTAuthentication::__cordl_internal_get__isServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__isServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isServer = value;
}
constexpr ::System::Net::Security::SafeFreeCredentials*& System::Net::NTAuthentication::__cordl_internal_get__credentialsHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialsHandle;
}
constexpr ::System::Net::Security::SafeFreeCredentials* const& System::Net::NTAuthentication::__cordl_internal_get__credentialsHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentialsHandle;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__credentialsHandle(::System::Net::Security::SafeFreeCredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentialsHandle = value;
}
constexpr ::System::Net::Security::SafeDeleteContext*& System::Net::NTAuthentication::__cordl_internal_get__securityContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____securityContext;
}
constexpr ::System::Net::Security::SafeDeleteContext* const& System::Net::NTAuthentication::__cordl_internal_get__securityContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____securityContext;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__securityContext(::System::Net::Security::SafeDeleteContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____securityContext = value;
}
constexpr ::StringW& System::Net::NTAuthentication::__cordl_internal_get__spn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spn;
}
constexpr ::StringW const& System::Net::NTAuthentication::__cordl_internal_get__spn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spn;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__spn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spn = value;
}
constexpr int32_t& System::Net::NTAuthentication::__cordl_internal_get__tokenSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokenSize;
}
constexpr int32_t const& System::Net::NTAuthentication::__cordl_internal_get__tokenSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokenSize;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__tokenSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokenSize = value;
}
constexpr ::System::Net::ContextFlagsPal& System::Net::NTAuthentication::__cordl_internal_get__requestedContextFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedContextFlags;
}
constexpr ::System::Net::ContextFlagsPal const& System::Net::NTAuthentication::__cordl_internal_get__requestedContextFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedContextFlags;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__requestedContextFlags(::System::Net::ContextFlagsPal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestedContextFlags = value;
}
constexpr ::System::Net::ContextFlagsPal& System::Net::NTAuthentication::__cordl_internal_get__contextFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contextFlags;
}
constexpr ::System::Net::ContextFlagsPal const& System::Net::NTAuthentication::__cordl_internal_get__contextFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contextFlags;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__contextFlags(::System::Net::ContextFlagsPal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contextFlags = value;
}
constexpr bool& System::Net::NTAuthentication::__cordl_internal_get__isCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCompleted;
}
constexpr bool const& System::Net::NTAuthentication::__cordl_internal_get__isCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCompleted;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__isCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCompleted = value;
}
constexpr ::StringW& System::Net::NTAuthentication::__cordl_internal_get__package()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____package;
}
constexpr ::StringW const& System::Net::NTAuthentication::__cordl_internal_get__package() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____package;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__package(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____package = value;
}
constexpr ::StringW& System::Net::NTAuthentication::__cordl_internal_get__lastProtocolName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProtocolName;
}
constexpr ::StringW const& System::Net::NTAuthentication::__cordl_internal_get__lastProtocolName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProtocolName;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__lastProtocolName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastProtocolName = value;
}
constexpr ::StringW& System::Net::NTAuthentication::__cordl_internal_get__protocolName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolName;
}
constexpr ::StringW const& System::Net::NTAuthentication::__cordl_internal_get__protocolName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolName;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__protocolName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____protocolName = value;
}
constexpr ::StringW& System::Net::NTAuthentication::__cordl_internal_get__clientSpecifiedSpn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientSpecifiedSpn;
}
constexpr ::StringW const& System::Net::NTAuthentication::__cordl_internal_get__clientSpecifiedSpn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientSpecifiedSpn;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__clientSpecifiedSpn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientSpecifiedSpn = value;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding*& System::Net::NTAuthentication::__cordl_internal_get__channelBinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelBinding;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding* const& System::Net::NTAuthentication::__cordl_internal_get__channelBinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelBinding;
}
constexpr void System::Net::NTAuthentication::__cordl_internal_set__channelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelBinding = value;
}
inline bool System::Net::NTAuthentication::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::NTAuthentication::get_IsValidContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsValidContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::NTAuthentication::get_Package()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_Package", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::NTAuthentication::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::NTAuthentication::get_ClientSpecifiedSpn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_ClientSpecifiedSpn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::NTAuthentication::get_ProtocolName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_ProtocolName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::NTAuthentication::get_IsKerberos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"get_IsKerberos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::NTAuthentication::_ctor(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isServer, package, credential, spn, requestedContextFlags, channelBinding);
}
inline void System::Net::NTAuthentication::Initialize(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isServer, package, credential, spn, requestedContextFlags, channelBinding);
}
inline ::System::Net::Security::SafeDeleteContext* System::Net::NTAuthentication::GetContext(::by_ref<::System::Net::SecurityStatusPal>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetContext", {}, {::i2c::type_of<::by_ref<::System::Net::SecurityStatusPal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SafeDeleteContext*>(this, ___internal_method, status);
}
inline void System::Net::NTAuthentication::CloseContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"CloseContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::NTAuthentication::VerifySignature(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Net::NTAuthentication::MakeSignature(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<::ArrayW<uint8_t>>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"MakeSignature", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count, output);
}
inline ::StringW System::Net::NTAuthentication::GetOutgoingBlob(::StringW  incomingBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, incomingBlob);
}
inline ::ArrayW<uint8_t> System::Net::NTAuthentication::GetOutgoingBlob(::ArrayW<uint8_t>  incomingBlob, bool  thrownOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, incomingBlob, thrownOnError);
}
inline ::ArrayW<uint8_t> System::Net::NTAuthentication::GetOutgoingBlob(::ArrayW<uint8_t>  incomingBlob, bool  throwOnError, ::by_ref<::System::Net::SecurityStatusPal>  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetOutgoingBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Net::SecurityStatusPal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, incomingBlob, throwOnError, statusCode);
}
inline ::StringW System::Net::NTAuthentication::GetClientSpecifiedSpn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NTAuthentication*>(),
                        {"GetClientSpecifiedSpn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NTAuthentication* System::Net::NTAuthentication::New_ctor(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NTAuthentication*>(isServer, package, credential, spn, requestedContextFlags, channelBinding));
}
// Ctor Parameters []
constexpr ::System::Net::NTAuthentication::NTAuthentication()   {
}

#pragma once
// IWYU pragma private; include "System/Net/NTAuthentication.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NTAuthentication)
namespace System::Net::Security {
class SafeDeleteContext;
}
namespace System::Net::Security {
class SafeFreeCredentials;
}
namespace System::Net {
struct ContextFlagsPal;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
struct SecurityStatusPal;
}
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
// Forward declare root types
namespace System::Net {
class NTAuthentication;
}
// Write type traits
MARK_REF_T(::System::Net::NTAuthentication*);
DEFINE_IL2CPP_CLASS(::System::Net::NTAuthentication*, "System.Net", "NTAuthentication");
// Dependencies System.Net.ContextFlagsPal, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NTAuthentication
class CORDL_TYPE NTAuthentication : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ClientSpecifiedSpn)) ::StringW  ClientSpecifiedSpn;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsKerberos)) bool  IsKerberos;

 __declspec(property(get=get_IsServer)) bool  IsServer;

 __declspec(property(get=get_IsValidContext)) bool  IsValidContext;

 __declspec(property(get=get_Package)) ::StringW  Package;

 __declspec(property(get=get_ProtocolName)) ::StringW  ProtocolName;

/// @brief Field _channelBinding, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelBinding, put=__cordl_internal_set__channelBinding)) ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  _channelBinding;

/// @brief Field _clientSpecifiedSpn, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientSpecifiedSpn, put=__cordl_internal_set__clientSpecifiedSpn)) ::StringW  _clientSpecifiedSpn;

/// @brief Field _contextFlags, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__contextFlags, put=__cordl_internal_set__contextFlags)) ::System::Net::ContextFlagsPal  _contextFlags;

/// @brief Field _credentialsHandle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentialsHandle, put=__cordl_internal_set__credentialsHandle)) ::System::Net::Security::SafeFreeCredentials*  _credentialsHandle;

/// @brief Field _isCompleted, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCompleted, put=__cordl_internal_set__isCompleted)) bool  _isCompleted;

/// @brief Field _isServer, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isServer, put=__cordl_internal_set__isServer)) bool  _isServer;

/// @brief Field _lastProtocolName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastProtocolName, put=__cordl_internal_set__lastProtocolName)) ::StringW  _lastProtocolName;

/// @brief Field _package, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__package, put=__cordl_internal_set__package)) ::StringW  _package;

/// @brief Field _protocolName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__protocolName, put=__cordl_internal_set__protocolName)) ::StringW  _protocolName;

/// @brief Field _requestedContextFlags, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__requestedContextFlags, put=__cordl_internal_set__requestedContextFlags)) ::System::Net::ContextFlagsPal  _requestedContextFlags;

/// @brief Field _securityContext, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__securityContext, put=__cordl_internal_set__securityContext)) ::System::Net::Security::SafeDeleteContext*  _securityContext;

/// @brief Field _spn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spn, put=__cordl_internal_set__spn)) ::StringW  _spn;

/// @brief Field _tokenSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__tokenSize, put=__cordl_internal_set__tokenSize)) int32_t  _tokenSize;

/// @brief Method CloseContext, addr 0xadabee4, size 0x3c, virtual false, abstract: false, final false
inline void CloseContext() ;

/// @brief Method GetClientSpecifiedSpn, addr 0xadab740, size 0x1a4, virtual false, abstract: false, final false
inline ::StringW GetClientSpecifiedSpn() ;

/// @brief Method GetContext, addr 0xadabd50, size 0x184, virtual false, abstract: false, final false
inline ::System::Net::Security::SafeDeleteContext* GetContext(::by_ref<::System::Net::SecurityStatusPal>  status) ;

/// @brief Method GetOutgoingBlob, addr 0xadac05c, size 0xd9c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetOutgoingBlob(::ArrayW<uint8_t>  incomingBlob, bool  throwOnError, ::by_ref<::System::Net::SecurityStatusPal>  statusCode) ;

/// @brief Method GetOutgoingBlob, addr 0xadacdf8, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetOutgoingBlob(::ArrayW<uint8_t>  incomingBlob, bool  thrownOnError) ;

/// @brief Method GetOutgoingBlob, addr 0xadabf38, size 0x124, virtual false, abstract: false, final false
inline ::StringW GetOutgoingBlob(::StringW  incomingBlob) ;

/// @brief Method Initialize, addr 0xadaba3c, size 0x314, virtual false, abstract: false, final false
inline void Initialize(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding) ;

/// @brief Method MakeSignature, addr 0xadabf2c, size 0xc, virtual false, abstract: false, final false
inline int32_t MakeSignature(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<::ArrayW<uint8_t>>  output) ;

static inline ::System::Net::NTAuthentication* New_ctor(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding) ;

/// @brief Method VerifySignature, addr 0xadabf20, size 0xc, virtual false, abstract: false, final false
inline int32_t VerifySignature(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding* const& __cordl_internal_get__channelBinding() const;

constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding*& __cordl_internal_get__channelBinding() ;

constexpr ::StringW const& __cordl_internal_get__clientSpecifiedSpn() const;

constexpr ::StringW& __cordl_internal_get__clientSpecifiedSpn() ;

constexpr ::System::Net::ContextFlagsPal const& __cordl_internal_get__contextFlags() const;

constexpr ::System::Net::ContextFlagsPal& __cordl_internal_get__contextFlags() ;

constexpr ::System::Net::Security::SafeFreeCredentials* const& __cordl_internal_get__credentialsHandle() const;

constexpr ::System::Net::Security::SafeFreeCredentials*& __cordl_internal_get__credentialsHandle() ;

constexpr bool const& __cordl_internal_get__isCompleted() const;

constexpr bool& __cordl_internal_get__isCompleted() ;

constexpr bool const& __cordl_internal_get__isServer() const;

constexpr bool& __cordl_internal_get__isServer() ;

constexpr ::StringW const& __cordl_internal_get__lastProtocolName() const;

constexpr ::StringW& __cordl_internal_get__lastProtocolName() ;

constexpr ::StringW const& __cordl_internal_get__package() const;

constexpr ::StringW& __cordl_internal_get__package() ;

constexpr ::StringW const& __cordl_internal_get__protocolName() const;

constexpr ::StringW& __cordl_internal_get__protocolName() ;

constexpr ::System::Net::ContextFlagsPal const& __cordl_internal_get__requestedContextFlags() const;

constexpr ::System::Net::ContextFlagsPal& __cordl_internal_get__requestedContextFlags() ;

constexpr ::System::Net::Security::SafeDeleteContext* const& __cordl_internal_get__securityContext() const;

constexpr ::System::Net::Security::SafeDeleteContext*& __cordl_internal_get__securityContext() ;

constexpr ::StringW const& __cordl_internal_get__spn() const;

constexpr ::StringW& __cordl_internal_get__spn() ;

constexpr int32_t const& __cordl_internal_get__tokenSize() const;

constexpr int32_t& __cordl_internal_get__tokenSize() ;

constexpr void __cordl_internal_set__channelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  value) ;

constexpr void __cordl_internal_set__clientSpecifiedSpn(::StringW  value) ;

constexpr void __cordl_internal_set__contextFlags(::System::Net::ContextFlagsPal  value) ;

constexpr void __cordl_internal_set__credentialsHandle(::System::Net::Security::SafeFreeCredentials*  value) ;

constexpr void __cordl_internal_set__isCompleted(bool  value) ;

constexpr void __cordl_internal_set__isServer(bool  value) ;

constexpr void __cordl_internal_set__lastProtocolName(::StringW  value) ;

constexpr void __cordl_internal_set__package(::StringW  value) ;

constexpr void __cordl_internal_set__protocolName(::StringW  value) ;

constexpr void __cordl_internal_set__requestedContextFlags(::System::Net::ContextFlagsPal  value) ;

constexpr void __cordl_internal_set__securityContext(::System::Net::Security::SafeDeleteContext*  value) ;

constexpr void __cordl_internal_set__spn(::StringW  value) ;

constexpr void __cordl_internal_set__tokenSize(int32_t  value) ;

/// @brief Method .ctor, addr 0xadab9d8, size 0x64, virtual false, abstract: false, final false
inline void _ctor(bool  isServer, ::StringW  package, ::System::Net::NetworkCredential*  credential, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  channelBinding) ;

/// @brief Method get_ClientSpecifiedSpn, addr 0xadab700, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_ClientSpecifiedSpn() ;

/// @brief Method get_IsCompleted, addr 0xadab6b8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsKerberos, addr 0xadab964, size 0x74, virtual false, abstract: false, final false
inline bool get_IsKerberos() ;

/// @brief Method get_IsServer, addr 0xadab6f8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsServer() ;

/// @brief Method get_IsValidContext, addr 0xadab6c0, size 0x30, virtual false, abstract: false, final false
inline bool get_IsValidContext() ;

/// @brief Method get_Package, addr 0xadab6f0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Package() ;

/// @brief Method get_ProtocolName, addr 0xadab8e4, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_ProtocolName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NTAuthentication() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NTAuthentication", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NTAuthentication(NTAuthentication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NTAuthentication", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NTAuthentication(NTAuthentication const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10393};

/// @brief Field _isServer, offset: 0x10, size: 0x1, def value: None
 bool  ____isServer;

/// @brief Field _credentialsHandle, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Security::SafeFreeCredentials*  ____credentialsHandle;

/// @brief Field _securityContext, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Security::SafeDeleteContext*  ____securityContext;

/// @brief Field _spn, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____spn;

/// @brief Field _tokenSize, offset: 0x30, size: 0x4, def value: None
 int32_t  ____tokenSize;

/// @brief Field _requestedContextFlags, offset: 0x34, size: 0x4, def value: None
 ::System::Net::ContextFlagsPal  ____requestedContextFlags;

/// @brief Field _contextFlags, offset: 0x38, size: 0x4, def value: None
 ::System::Net::ContextFlagsPal  ____contextFlags;

/// @brief Field _isCompleted, offset: 0x3c, size: 0x1, def value: None
 bool  ____isCompleted;

/// @brief Field _package, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____package;

/// @brief Field _lastProtocolName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____lastProtocolName;

/// @brief Field _protocolName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____protocolName;

/// @brief Field _clientSpecifiedSpn, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____clientSpecifiedSpn;

/// @brief Field _channelBinding, offset: 0x60, size: 0x8, def value: None
 ::System::Security::Authentication::ExtendedProtection::ChannelBinding*  ____channelBinding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NTAuthentication, ____isServer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____credentialsHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____securityContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____spn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____tokenSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____requestedContextFlags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____contextFlags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____isCompleted) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____package) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____lastProtocolName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____protocolName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____clientSpecifiedSpn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::NTAuthentication, ____channelBinding) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Net::NTAuthentication) == 0x68, "Size mismatch!");

} // namespace end def System::Net

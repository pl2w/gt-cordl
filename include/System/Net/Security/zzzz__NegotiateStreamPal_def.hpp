#pragma once
// IWYU pragma private; include "System/Net/Security/NegotiateStreamPal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegotiateStreamPal)
namespace GlobalNamespace {
struct NetSecurityNative_Interop_GssFlags;
}
namespace Microsoft::Win32::SafeHandles {
class SafeGssContextHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeGssCredHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeGssNameHandle;
}
namespace System::ComponentModel {
class Win32Exception;
}
namespace System::Net::Security {
class SafeDeleteContext;
}
namespace System::Net::Security {
class SafeFreeCredentials;
}
namespace System::Net::Security {
class SafeFreeNegoCredentials;
}
namespace System::Net::Security {
class SecurityBuffer;
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
// Forward declare root types
namespace System::Net::Security {
class NegotiateStreamPal;
}
// Write type traits
MARK_REF_T(::System::Net::Security::NegotiateStreamPal*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::NegotiateStreamPal*, "System.Net.Security", "NegotiateStreamPal");
// Dependencies System.Object
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.NegotiateStreamPal
class CORDL_TYPE NegotiateStreamPal : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptSecurityContext, addr 0xacf3a24, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Net::SecurityStatusPal AcceptSecurityContext(::System::Net::Security::SafeFreeCredentials*  credentialsHandle, ::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::System::Net::ContextFlagsPal  requestedContextFlags, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray, ::System::Net::Security::SecurityBuffer*  outSecurityBuffer, ::by_ref<::System::Net::ContextFlagsPal>  contextFlags) ;

/// @brief Method AcquireCredentialsHandle, addr 0xacf3bc0, size 0x2c0, virtual false, abstract: false, final false
static inline ::System::Net::Security::SafeFreeCredentials* AcquireCredentialsHandle(::StringW  package, bool  isServer, ::System::Net::NetworkCredential*  credential) ;

/// @brief Method AcquireDefaultCredential, addr 0xacf3b34, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Net::Security::SafeFreeCredentials* AcquireDefaultCredential(::StringW  package, bool  isServer) ;

/// @brief Method CompleteAuthToken, addr 0xacf4054, size 0x30, virtual false, abstract: false, final false
static inline ::System::Net::SecurityStatusPal CompleteAuthToken(::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray) ;

/// @brief Method CreateExceptionFromError, addr 0xacf3a70, size 0xbc, virtual false, abstract: false, final false
static inline ::System::ComponentModel::Win32Exception* CreateExceptionFromError(::System::Net::SecurityStatusPal  statusCode) ;

/// @brief Method EstablishSecurityContext, addr 0xacf344c, size 0x388, virtual false, abstract: false, final false
static inline ::System::Net::SecurityStatusPal EstablishSecurityContext(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::by_ref<::System::Net::Security::SafeDeleteContext*>  context, ::StringW  targetName, ::System::Net::ContextFlagsPal  inFlags, ::System::Net::Security::SecurityBuffer*  inputBuffer, ::System::Net::Security::SecurityBuffer*  outputBuffer, ::by_ref<::System::Net::ContextFlagsPal>  outFlags) ;

/// @brief Method GssInitSecurityContext, addr 0xacf3264, size 0x1e8, virtual false, abstract: false, final false
static inline bool GssInitSecurityContext(::by_ref<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>  context, ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  credential, bool  isNtlm, ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  targetName, ::GlobalNamespace::NetSecurityNative_Interop_GssFlags  inFlags, ::ArrayW<uint8_t>  buffer, ::by_ref<::ArrayW<uint8_t>>  outputBuffer, ::by_ref<uint32_t>  outFlags, ::by_ref<int32_t>  isNtlmUsed) ;

/// @brief Method GssUnwrap, addr 0xacf3148, size 0x11c, virtual false, abstract: false, final false
static inline int32_t GssUnwrap(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method GssWrap, addr 0xacf3034, size 0x114, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GssWrap(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context, bool  encrypt, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method InitializeSecurityContext, addr 0xacf3894, size 0x190, virtual false, abstract: false, final false
static inline ::System::Net::SecurityStatusPal InitializeSecurityContext(::System::Net::Security::SafeFreeCredentials*  credentialsHandle, ::by_ref<::System::Net::Security::SafeDeleteContext*>  securityContext, ::StringW  spn, ::System::Net::ContextFlagsPal  requestedContextFlags, ::ArrayW<::System::Net::Security::SecurityBuffer*>  inSecurityBufferArray, ::System::Net::Security::SecurityBuffer*  outSecurityBuffer, ::by_ref<::System::Net::ContextFlagsPal>  contextFlags) ;

/// @brief Method MakeSignature, addr 0xacf422c, size 0x164, virtual false, abstract: false, final false
static inline int32_t MakeSignature(::System::Net::Security::SafeDeleteContext*  securityContext, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<::ArrayW<uint8_t>>  output) ;

/// @brief Method QueryContextAuthenticationPackage, addr 0xacf2f9c, size 0x98, virtual false, abstract: false, final false
static inline ::StringW QueryContextAuthenticationPackage(::System::Net::Security::SafeDeleteContext*  securityContext) ;

/// @brief Method QueryContextClientSpecifiedSpn, addr 0xacf2f50, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW QueryContextClientSpecifiedSpn(::System::Net::Security::SafeDeleteContext*  securityContext) ;

/// @brief Method QueryMaxTokenSize, addr 0xacf3b2c, size 0x8, virtual false, abstract: false, final false
static inline int32_t QueryMaxTokenSize(::StringW  package) ;

/// @brief Method VerifySignature, addr 0xacf4084, size 0x1a8, virtual false, abstract: false, final false
static inline int32_t VerifySignature(::System::Net::Security::SafeDeleteContext*  securityContext, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NegotiateStreamPal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NegotiateStreamPal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NegotiateStreamPal(NegotiateStreamPal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NegotiateStreamPal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NegotiateStreamPal(NegotiateStreamPal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::NegotiateStreamPal) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Security

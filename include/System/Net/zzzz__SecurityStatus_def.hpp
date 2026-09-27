#pragma once
// IWYU pragma private; include "System/Net/SecurityStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityStatus)
// Forward declare root types
namespace System::Net {
struct SecurityStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::SecurityStatus);
DEFINE_IL2CPP_CLASS(::System::Net::SecurityStatus, "System.Net", "SecurityStatus");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.SecurityStatus
struct CORDL_TYPE SecurityStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SecurityStatus_Unwrapped
enum struct __SecurityStatus_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_ContinueNeeded = static_cast<int32_t>(0x90312),
__E_CompleteNeeded = static_cast<int32_t>(0x90313),
__E_CompAndContinue = static_cast<int32_t>(0x90314),
__E_ContextExpired = static_cast<int32_t>(0x90317),
__E_CredentialsNeeded = static_cast<int32_t>(0x90320),
__E_Renegotiate = static_cast<int32_t>(0x90321),
__E_OutOfMemory = static_cast<int32_t>(0x80090300),
__E_InvalidHandle = static_cast<int32_t>(0x80090301),
__E_Unsupported = static_cast<int32_t>(0x80090302),
__E_TargetUnknown = static_cast<int32_t>(0x80090303),
__E_InternalError = static_cast<int32_t>(0x80090304),
__E_PackageNotFound = static_cast<int32_t>(0x80090305),
__E_NotOwner = static_cast<int32_t>(0x80090306),
__E_CannotInstall = static_cast<int32_t>(0x80090307),
__E_InvalidToken = static_cast<int32_t>(0x80090308),
__E_CannotPack = static_cast<int32_t>(0x80090309),
__E_QopNotSupported = static_cast<int32_t>(0x8009030a),
__E_NoImpersonation = static_cast<int32_t>(0x8009030b),
__E_LogonDenied = static_cast<int32_t>(0x8009030c),
__E_UnknownCredentials = static_cast<int32_t>(0x8009030d),
__E_NoCredentials = static_cast<int32_t>(0x8009030e),
__E_MessageAltered = static_cast<int32_t>(0x8009030f),
__E_OutOfSequence = static_cast<int32_t>(0x80090310),
__E_NoAuthenticatingAuthority = static_cast<int32_t>(0x80090311),
__E_IncompleteMessage = static_cast<int32_t>(0x80090318),
__E_IncompleteCredentials = static_cast<int32_t>(0x80090320),
__E_BufferNotEnough = static_cast<int32_t>(0x80090321),
__E_WrongPrincipal = static_cast<int32_t>(0x80090322),
__E_TimeSkew = static_cast<int32_t>(0x80090324),
__E_UntrustedRoot = static_cast<int32_t>(0x80090325),
__E_IllegalMessage = static_cast<int32_t>(0x80090326),
__E_CertUnknown = static_cast<int32_t>(0x80090327),
__E_CertExpired = static_cast<int32_t>(0x80090328),
__E_AlgorithmMismatch = static_cast<int32_t>(0x80090331),
__E_SecurityQosFailed = static_cast<int32_t>(0x80090332),
__E_SmartcardLogonRequired = static_cast<int32_t>(0x8009033e),
__E_UnsupportedPreauth = static_cast<int32_t>(0x80090343),
__E_BadBinding = static_cast<int32_t>(0x80090346),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityStatus_Unwrapped () const noexcept {
return static_cast<__SecurityStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SecurityStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SecurityStatus(int32_t  value__) noexcept;

/// @brief Field AlgorithmMismatch value: I32(-2146893007)
static ::System::Net::SecurityStatus const AlgorithmMismatch;

/// @brief Field BadBinding value: I32(-2146892986)
static ::System::Net::SecurityStatus const BadBinding;

/// @brief Field BufferNotEnough value: I32(-2146893023)
static ::System::Net::SecurityStatus const BufferNotEnough;

/// @brief Field CannotInstall value: I32(-2146893049)
static ::System::Net::SecurityStatus const CannotInstall;

/// @brief Field CannotPack value: I32(-2146893047)
static ::System::Net::SecurityStatus const CannotPack;

/// @brief Field CertExpired value: I32(-2146893016)
static ::System::Net::SecurityStatus const CertExpired;

/// @brief Field CertUnknown value: I32(-2146893017)
static ::System::Net::SecurityStatus const CertUnknown;

/// @brief Field CompAndContinue value: I32(590612)
static ::System::Net::SecurityStatus const CompAndContinue;

/// @brief Field CompleteNeeded value: I32(590611)
static ::System::Net::SecurityStatus const CompleteNeeded;

/// @brief Field ContextExpired value: I32(590615)
static ::System::Net::SecurityStatus const ContextExpired;

/// @brief Field ContinueNeeded value: I32(590610)
static ::System::Net::SecurityStatus const ContinueNeeded;

/// @brief Field CredentialsNeeded value: I32(590624)
static ::System::Net::SecurityStatus const CredentialsNeeded;

/// @brief Field IllegalMessage value: I32(-2146893018)
static ::System::Net::SecurityStatus const IllegalMessage;

/// @brief Field IncompleteCredentials value: I32(-2146893024)
static ::System::Net::SecurityStatus const IncompleteCredentials;

/// @brief Field IncompleteMessage value: I32(-2146893032)
static ::System::Net::SecurityStatus const IncompleteMessage;

/// @brief Field InternalError value: I32(-2146893052)
static ::System::Net::SecurityStatus const InternalError;

/// @brief Field InvalidHandle value: I32(-2146893055)
static ::System::Net::SecurityStatus const InvalidHandle;

/// @brief Field InvalidToken value: I32(-2146893048)
static ::System::Net::SecurityStatus const InvalidToken;

/// @brief Field LogonDenied value: I32(-2146893044)
static ::System::Net::SecurityStatus const LogonDenied;

/// @brief Field MessageAltered value: I32(-2146893041)
static ::System::Net::SecurityStatus const MessageAltered;

/// @brief Field NoAuthenticatingAuthority value: I32(-2146893039)
static ::System::Net::SecurityStatus const NoAuthenticatingAuthority;

/// @brief Field NoCredentials value: I32(-2146893042)
static ::System::Net::SecurityStatus const NoCredentials;

/// @brief Field NoImpersonation value: I32(-2146893045)
static ::System::Net::SecurityStatus const NoImpersonation;

/// @brief Field NotOwner value: I32(-2146893050)
static ::System::Net::SecurityStatus const NotOwner;

/// @brief Field OK value: I32(0)
static ::System::Net::SecurityStatus const OK;

/// @brief Field OutOfMemory value: I32(-2146893056)
static ::System::Net::SecurityStatus const OutOfMemory;

/// @brief Field OutOfSequence value: I32(-2146893040)
static ::System::Net::SecurityStatus const OutOfSequence;

/// @brief Field PackageNotFound value: I32(-2146893051)
static ::System::Net::SecurityStatus const PackageNotFound;

/// @brief Field QopNotSupported value: I32(-2146893046)
static ::System::Net::SecurityStatus const QopNotSupported;

/// @brief Field Renegotiate value: I32(590625)
static ::System::Net::SecurityStatus const Renegotiate;

/// @brief Field SecurityQosFailed value: I32(-2146893006)
static ::System::Net::SecurityStatus const SecurityQosFailed;

/// @brief Field SmartcardLogonRequired value: I32(-2146892994)
static ::System::Net::SecurityStatus const SmartcardLogonRequired;

/// @brief Field TargetUnknown value: I32(-2146893053)
static ::System::Net::SecurityStatus const TargetUnknown;

/// @brief Field TimeSkew value: I32(-2146893020)
static ::System::Net::SecurityStatus const TimeSkew;

/// @brief Field UnknownCredentials value: I32(-2146893043)
static ::System::Net::SecurityStatus const UnknownCredentials;

/// @brief Field Unsupported value: I32(-2146893054)
static ::System::Net::SecurityStatus const Unsupported;

/// @brief Field UnsupportedPreauth value: I32(-2146892989)
static ::System::Net::SecurityStatus const UnsupportedPreauth;

/// @brief Field UntrustedRoot value: I32(-2146893019)
static ::System::Net::SecurityStatus const UntrustedRoot;

/// @brief Field WrongPrincipal value: I32(-2146893022)
static ::System::Net::SecurityStatus const WrongPrincipal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SecurityStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::SecurityStatus) == 0x4, "Size mismatch!");

} // namespace end def System::Net

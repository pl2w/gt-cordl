#pragma once
// IWYU pragma private; include "System/Net/SecurityStatusPalErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityStatusPalErrorCode)
// Forward declare root types
namespace System::Net {
struct SecurityStatusPalErrorCode;
}
// Write type traits
MARK_VAL_T(::System::Net::SecurityStatusPalErrorCode);
DEFINE_IL2CPP_CLASS(::System::Net::SecurityStatusPalErrorCode, "System.Net", "SecurityStatusPalErrorCode");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.SecurityStatusPalErrorCode
struct CORDL_TYPE SecurityStatusPalErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SecurityStatusPalErrorCode_Unwrapped
enum struct __SecurityStatusPalErrorCode_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_OK = static_cast<int32_t>(0x1),
__E_ContinueNeeded = static_cast<int32_t>(0x2),
__E_CompleteNeeded = static_cast<int32_t>(0x3),
__E_CompAndContinue = static_cast<int32_t>(0x4),
__E_ContextExpired = static_cast<int32_t>(0x5),
__E_CredentialsNeeded = static_cast<int32_t>(0x6),
__E_Renegotiate = static_cast<int32_t>(0x7),
__E_OutOfMemory = static_cast<int32_t>(0x8),
__E_InvalidHandle = static_cast<int32_t>(0x9),
__E_Unsupported = static_cast<int32_t>(0xa),
__E_TargetUnknown = static_cast<int32_t>(0xb),
__E_InternalError = static_cast<int32_t>(0xc),
__E_PackageNotFound = static_cast<int32_t>(0xd),
__E_NotOwner = static_cast<int32_t>(0xe),
__E_CannotInstall = static_cast<int32_t>(0xf),
__E_InvalidToken = static_cast<int32_t>(0x10),
__E_CannotPack = static_cast<int32_t>(0x11),
__E_QopNotSupported = static_cast<int32_t>(0x12),
__E_NoImpersonation = static_cast<int32_t>(0x13),
__E_LogonDenied = static_cast<int32_t>(0x14),
__E_UnknownCredentials = static_cast<int32_t>(0x15),
__E_NoCredentials = static_cast<int32_t>(0x16),
__E_MessageAltered = static_cast<int32_t>(0x17),
__E_OutOfSequence = static_cast<int32_t>(0x18),
__E_NoAuthenticatingAuthority = static_cast<int32_t>(0x19),
__E_IncompleteMessage = static_cast<int32_t>(0x1a),
__E_IncompleteCredentials = static_cast<int32_t>(0x1b),
__E_BufferNotEnough = static_cast<int32_t>(0x1c),
__E_WrongPrincipal = static_cast<int32_t>(0x1d),
__E_TimeSkew = static_cast<int32_t>(0x1e),
__E_UntrustedRoot = static_cast<int32_t>(0x1f),
__E_IllegalMessage = static_cast<int32_t>(0x20),
__E_CertUnknown = static_cast<int32_t>(0x21),
__E_CertExpired = static_cast<int32_t>(0x22),
__E_AlgorithmMismatch = static_cast<int32_t>(0x23),
__E_SecurityQosFailed = static_cast<int32_t>(0x24),
__E_SmartcardLogonRequired = static_cast<int32_t>(0x25),
__E_UnsupportedPreauth = static_cast<int32_t>(0x26),
__E_BadBinding = static_cast<int32_t>(0x27),
__E_DowngradeDetected = static_cast<int32_t>(0x28),
__E_ApplicationProtocolMismatch = static_cast<int32_t>(0x29),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityStatusPalErrorCode_Unwrapped () const noexcept {
return static_cast<__SecurityStatusPalErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SecurityStatusPalErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SecurityStatusPalErrorCode(int32_t  value__) noexcept;

/// @brief Field AlgorithmMismatch value: I32(35)
static ::System::Net::SecurityStatusPalErrorCode const AlgorithmMismatch;

/// @brief Field ApplicationProtocolMismatch value: I32(41)
static ::System::Net::SecurityStatusPalErrorCode const ApplicationProtocolMismatch;

/// @brief Field BadBinding value: I32(39)
static ::System::Net::SecurityStatusPalErrorCode const BadBinding;

/// @brief Field BufferNotEnough value: I32(28)
static ::System::Net::SecurityStatusPalErrorCode const BufferNotEnough;

/// @brief Field CannotInstall value: I32(15)
static ::System::Net::SecurityStatusPalErrorCode const CannotInstall;

/// @brief Field CannotPack value: I32(17)
static ::System::Net::SecurityStatusPalErrorCode const CannotPack;

/// @brief Field CertExpired value: I32(34)
static ::System::Net::SecurityStatusPalErrorCode const CertExpired;

/// @brief Field CertUnknown value: I32(33)
static ::System::Net::SecurityStatusPalErrorCode const CertUnknown;

/// @brief Field CompAndContinue value: I32(4)
static ::System::Net::SecurityStatusPalErrorCode const CompAndContinue;

/// @brief Field CompleteNeeded value: I32(3)
static ::System::Net::SecurityStatusPalErrorCode const CompleteNeeded;

/// @brief Field ContextExpired value: I32(5)
static ::System::Net::SecurityStatusPalErrorCode const ContextExpired;

/// @brief Field ContinueNeeded value: I32(2)
static ::System::Net::SecurityStatusPalErrorCode const ContinueNeeded;

/// @brief Field CredentialsNeeded value: I32(6)
static ::System::Net::SecurityStatusPalErrorCode const CredentialsNeeded;

/// @brief Field DowngradeDetected value: I32(40)
static ::System::Net::SecurityStatusPalErrorCode const DowngradeDetected;

/// @brief Field IllegalMessage value: I32(32)
static ::System::Net::SecurityStatusPalErrorCode const IllegalMessage;

/// @brief Field IncompleteCredentials value: I32(27)
static ::System::Net::SecurityStatusPalErrorCode const IncompleteCredentials;

/// @brief Field IncompleteMessage value: I32(26)
static ::System::Net::SecurityStatusPalErrorCode const IncompleteMessage;

/// @brief Field InternalError value: I32(12)
static ::System::Net::SecurityStatusPalErrorCode const InternalError;

/// @brief Field InvalidHandle value: I32(9)
static ::System::Net::SecurityStatusPalErrorCode const InvalidHandle;

/// @brief Field InvalidToken value: I32(16)
static ::System::Net::SecurityStatusPalErrorCode const InvalidToken;

/// @brief Field LogonDenied value: I32(20)
static ::System::Net::SecurityStatusPalErrorCode const LogonDenied;

/// @brief Field MessageAltered value: I32(23)
static ::System::Net::SecurityStatusPalErrorCode const MessageAltered;

/// @brief Field NoAuthenticatingAuthority value: I32(25)
static ::System::Net::SecurityStatusPalErrorCode const NoAuthenticatingAuthority;

/// @brief Field NoCredentials value: I32(22)
static ::System::Net::SecurityStatusPalErrorCode const NoCredentials;

/// @brief Field NoImpersonation value: I32(19)
static ::System::Net::SecurityStatusPalErrorCode const NoImpersonation;

/// @brief Field NotOwner value: I32(14)
static ::System::Net::SecurityStatusPalErrorCode const NotOwner;

/// @brief Field NotSet value: I32(0)
static ::System::Net::SecurityStatusPalErrorCode const NotSet;

/// @brief Field OK value: I32(1)
static ::System::Net::SecurityStatusPalErrorCode const OK;

/// @brief Field OutOfMemory value: I32(8)
static ::System::Net::SecurityStatusPalErrorCode const OutOfMemory;

/// @brief Field OutOfSequence value: I32(24)
static ::System::Net::SecurityStatusPalErrorCode const OutOfSequence;

/// @brief Field PackageNotFound value: I32(13)
static ::System::Net::SecurityStatusPalErrorCode const PackageNotFound;

/// @brief Field QopNotSupported value: I32(18)
static ::System::Net::SecurityStatusPalErrorCode const QopNotSupported;

/// @brief Field Renegotiate value: I32(7)
static ::System::Net::SecurityStatusPalErrorCode const Renegotiate;

/// @brief Field SecurityQosFailed value: I32(36)
static ::System::Net::SecurityStatusPalErrorCode const SecurityQosFailed;

/// @brief Field SmartcardLogonRequired value: I32(37)
static ::System::Net::SecurityStatusPalErrorCode const SmartcardLogonRequired;

/// @brief Field TargetUnknown value: I32(11)
static ::System::Net::SecurityStatusPalErrorCode const TargetUnknown;

/// @brief Field TimeSkew value: I32(30)
static ::System::Net::SecurityStatusPalErrorCode const TimeSkew;

/// @brief Field UnknownCredentials value: I32(21)
static ::System::Net::SecurityStatusPalErrorCode const UnknownCredentials;

/// @brief Field Unsupported value: I32(10)
static ::System::Net::SecurityStatusPalErrorCode const Unsupported;

/// @brief Field UnsupportedPreauth value: I32(38)
static ::System::Net::SecurityStatusPalErrorCode const UnsupportedPreauth;

/// @brief Field UntrustedRoot value: I32(31)
static ::System::Net::SecurityStatusPalErrorCode const UntrustedRoot;

/// @brief Field WrongPrincipal value: I32(29)
static ::System::Net::SecurityStatusPalErrorCode const WrongPrincipal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SecurityStatusPalErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::SecurityStatusPalErrorCode) == 0x4, "Size mismatch!");

} // namespace end def System::Net

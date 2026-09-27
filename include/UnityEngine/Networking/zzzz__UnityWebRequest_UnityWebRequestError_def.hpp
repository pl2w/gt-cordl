#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest_UnityWebRequestError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequest_UnityWebRequestError)
// Forward declare root types
namespace GlobalNamespace {
struct UnityWebRequest_UnityWebRequestError;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityWebRequest_UnityWebRequestError);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityWebRequest_UnityWebRequestError, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestError");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct CORDL_TYPE UnityWebRequest_UnityWebRequestError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityWebRequest_UnityWebRequestError_Unwrapped
enum struct __UnityWebRequest_UnityWebRequestError_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_OKCached = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
__E_SDKError = static_cast<int32_t>(0x3),
__E_UnsupportedProtocol = static_cast<int32_t>(0x4),
__E_MalformattedUrl = static_cast<int32_t>(0x5),
__E_CannotResolveProxy = static_cast<int32_t>(0x6),
__E_CannotResolveHost = static_cast<int32_t>(0x7),
__E_CannotConnectToHost = static_cast<int32_t>(0x8),
__E_AccessDenied = static_cast<int32_t>(0x9),
__E_GenericHttpError = static_cast<int32_t>(0xa),
__E_WriteError = static_cast<int32_t>(0xb),
__E_ReadError = static_cast<int32_t>(0xc),
__E_OutOfMemory = static_cast<int32_t>(0xd),
__E_Timeout = static_cast<int32_t>(0xe),
__E_HTTPPostError = static_cast<int32_t>(0xf),
__E_SSLCannotConnect = static_cast<int32_t>(0x10),
__E_Aborted = static_cast<int32_t>(0x11),
__E_TooManyRedirects = static_cast<int32_t>(0x12),
__E_ReceivedNoData = static_cast<int32_t>(0x13),
__E_SSLNotSupported = static_cast<int32_t>(0x14),
__E_FailedToSendData = static_cast<int32_t>(0x15),
__E_FailedToReceiveData = static_cast<int32_t>(0x16),
__E_SSLCertificateError = static_cast<int32_t>(0x17),
__E_SSLCipherNotAvailable = static_cast<int32_t>(0x18),
__E_SSLCACertError = static_cast<int32_t>(0x19),
__E_UnrecognizedContentEncoding = static_cast<int32_t>(0x1a),
__E_LoginFailed = static_cast<int32_t>(0x1b),
__E_SSLShutdownFailed = static_cast<int32_t>(0x1c),
__E_RedirectLimitInvalid = static_cast<int32_t>(0x1d),
__E_InvalidRedirect = static_cast<int32_t>(0x1e),
__E_CannotModifyRequest = static_cast<int32_t>(0x1f),
__E_HeaderNameContainsInvalidCharacters = static_cast<int32_t>(0x20),
__E_HeaderValueContainsInvalidCharacters = static_cast<int32_t>(0x21),
__E_CannotOverrideSystemHeaders = static_cast<int32_t>(0x22),
__E_AlreadySent = static_cast<int32_t>(0x23),
__E_InvalidMethod = static_cast<int32_t>(0x24),
__E_NotImplemented = static_cast<int32_t>(0x25),
__E_NoInternetConnection = static_cast<int32_t>(0x26),
__E_DataProcessingError = static_cast<int32_t>(0x27),
__E_InsecureConnectionNotAllowed = static_cast<int32_t>(0x28),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityWebRequest_UnityWebRequestError_Unwrapped () const noexcept {
return static_cast<__UnityWebRequest_UnityWebRequestError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequest_UnityWebRequestError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityWebRequest_UnityWebRequestError(int32_t  value__) noexcept;

/// @brief Field Aborted value: I32(17)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const Aborted;

/// @brief Field AccessDenied value: I32(9)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const AccessDenied;

/// @brief Field AlreadySent value: I32(35)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const AlreadySent;

/// @brief Field CannotConnectToHost value: I32(8)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const CannotConnectToHost;

/// @brief Field CannotModifyRequest value: I32(31)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const CannotModifyRequest;

/// @brief Field CannotOverrideSystemHeaders value: I32(34)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const CannotOverrideSystemHeaders;

/// @brief Field CannotResolveHost value: I32(7)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const CannotResolveHost;

/// @brief Field CannotResolveProxy value: I32(6)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const CannotResolveProxy;

/// @brief Field DataProcessingError value: I32(39)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const DataProcessingError;

/// @brief Field FailedToReceiveData value: I32(22)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const FailedToReceiveData;

/// @brief Field FailedToSendData value: I32(21)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const FailedToSendData;

/// @brief Field GenericHttpError value: I32(10)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const GenericHttpError;

/// @brief Field HTTPPostError value: I32(15)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const HTTPPostError;

/// @brief Field HeaderNameContainsInvalidCharacters value: I32(32)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const HeaderNameContainsInvalidCharacters;

/// @brief Field HeaderValueContainsInvalidCharacters value: I32(33)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const HeaderValueContainsInvalidCharacters;

/// @brief Field InsecureConnectionNotAllowed value: I32(40)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const InsecureConnectionNotAllowed;

/// @brief Field InvalidMethod value: I32(36)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const InvalidMethod;

/// @brief Field InvalidRedirect value: I32(30)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const InvalidRedirect;

/// @brief Field LoginFailed value: I32(27)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const LoginFailed;

/// @brief Field MalformattedUrl value: I32(5)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const MalformattedUrl;

/// @brief Field NoInternetConnection value: I32(38)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const NoInternetConnection;

/// @brief Field NotImplemented value: I32(37)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const NotImplemented;

/// @brief Field OK value: I32(0)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const OK;

/// @brief Field OKCached value: I32(1)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const OKCached;

/// @brief Field OutOfMemory value: I32(13)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const OutOfMemory;

/// @brief Field ReadError value: I32(12)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const ReadError;

/// @brief Field ReceivedNoData value: I32(19)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const ReceivedNoData;

/// @brief Field RedirectLimitInvalid value: I32(29)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const RedirectLimitInvalid;

/// @brief Field SDKError value: I32(3)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SDKError;

/// @brief Field SSLCACertError value: I32(25)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLCACertError;

/// @brief Field SSLCannotConnect value: I32(16)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLCannotConnect;

/// @brief Field SSLCertificateError value: I32(23)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLCertificateError;

/// @brief Field SSLCipherNotAvailable value: I32(24)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLCipherNotAvailable;

/// @brief Field SSLNotSupported value: I32(20)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLNotSupported;

/// @brief Field SSLShutdownFailed value: I32(28)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const SSLShutdownFailed;

/// @brief Field Timeout value: I32(14)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const Timeout;

/// @brief Field TooManyRedirects value: I32(18)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const TooManyRedirects;

/// @brief Field Unknown value: I32(2)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const Unknown;

/// @brief Field UnrecognizedContentEncoding value: I32(26)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const UnrecognizedContentEncoding;

/// @brief Field UnsupportedProtocol value: I32(4)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const UnsupportedProtocol;

/// @brief Field WriteError value: I32(11)
static ::GlobalNamespace::UnityWebRequest_UnityWebRequestError const WriteError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityWebRequest_UnityWebRequestError, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityWebRequest_UnityWebRequestError) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

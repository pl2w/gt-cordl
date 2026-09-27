#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest_UnityWebRequestError.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_UnityWebRequestError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError::UnityWebRequest_UnityWebRequestError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError::UnityWebRequest_UnityWebRequestError()   {
}
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::OK{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::OKCached{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::Unknown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SDKError{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::UnsupportedProtocol{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::MalformattedUrl{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::CannotResolveProxy{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::CannotResolveHost{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::CannotConnectToHost{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::AccessDenied{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::GenericHttpError{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::WriteError{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::ReadError{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::OutOfMemory{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::Timeout{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::HTTPPostError{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLCannotConnect{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::Aborted{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::TooManyRedirects{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::ReceivedNoData{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLNotSupported{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::FailedToSendData{static_cast<int32_t>(0x15)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::FailedToReceiveData{static_cast<int32_t>(0x16)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLCertificateError{static_cast<int32_t>(0x17)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLCipherNotAvailable{static_cast<int32_t>(0x18)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLCACertError{static_cast<int32_t>(0x19)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::UnrecognizedContentEncoding{static_cast<int32_t>(0x1a)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::LoginFailed{static_cast<int32_t>(0x1b)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::SSLShutdownFailed{static_cast<int32_t>(0x1c)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::RedirectLimitInvalid{static_cast<int32_t>(0x1d)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::InvalidRedirect{static_cast<int32_t>(0x1e)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::CannotModifyRequest{static_cast<int32_t>(0x1f)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::HeaderNameContainsInvalidCharacters{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::HeaderValueContainsInvalidCharacters{static_cast<int32_t>(0x21)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::CannotOverrideSystemHeaders{static_cast<int32_t>(0x22)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::AlreadySent{static_cast<int32_t>(0x23)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::InvalidMethod{static_cast<int32_t>(0x24)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::NotImplemented{static_cast<int32_t>(0x25)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::NoInternetConnection{static_cast<int32_t>(0x26)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::DataProcessingError{static_cast<int32_t>(0x27)};
constexpr ::GlobalNamespace::UnityWebRequest_UnityWebRequestError  GlobalNamespace::UnityWebRequest_UnityWebRequestError::InsecureConnectionNotAllowed{static_cast<int32_t>(0x28)};

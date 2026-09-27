#pragma once
// IWYU pragma private; include "System/Net/SecurityStatusPalErrorCode.hpp"
#include "System/Net/zzzz__SecurityStatusPalErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::SecurityStatusPalErrorCode::SecurityStatusPalErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::SecurityStatusPalErrorCode::SecurityStatusPalErrorCode()   {
}
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::NotSet{static_cast<int32_t>(0x0)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::OK{static_cast<int32_t>(0x1)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::ContinueNeeded{static_cast<int32_t>(0x2)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CompleteNeeded{static_cast<int32_t>(0x3)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CompAndContinue{static_cast<int32_t>(0x4)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::ContextExpired{static_cast<int32_t>(0x5)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CredentialsNeeded{static_cast<int32_t>(0x6)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::Renegotiate{static_cast<int32_t>(0x7)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::OutOfMemory{static_cast<int32_t>(0x8)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::InvalidHandle{static_cast<int32_t>(0x9)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::Unsupported{static_cast<int32_t>(0xa)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::TargetUnknown{static_cast<int32_t>(0xb)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::InternalError{static_cast<int32_t>(0xc)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::PackageNotFound{static_cast<int32_t>(0xd)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::NotOwner{static_cast<int32_t>(0xe)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CannotInstall{static_cast<int32_t>(0xf)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::InvalidToken{static_cast<int32_t>(0x10)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CannotPack{static_cast<int32_t>(0x11)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::QopNotSupported{static_cast<int32_t>(0x12)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::NoImpersonation{static_cast<int32_t>(0x13)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::LogonDenied{static_cast<int32_t>(0x14)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::UnknownCredentials{static_cast<int32_t>(0x15)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::NoCredentials{static_cast<int32_t>(0x16)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::MessageAltered{static_cast<int32_t>(0x17)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::OutOfSequence{static_cast<int32_t>(0x18)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::NoAuthenticatingAuthority{static_cast<int32_t>(0x19)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::IncompleteMessage{static_cast<int32_t>(0x1a)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::IncompleteCredentials{static_cast<int32_t>(0x1b)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::BufferNotEnough{static_cast<int32_t>(0x1c)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::WrongPrincipal{static_cast<int32_t>(0x1d)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::TimeSkew{static_cast<int32_t>(0x1e)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::UntrustedRoot{static_cast<int32_t>(0x1f)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::IllegalMessage{static_cast<int32_t>(0x20)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CertUnknown{static_cast<int32_t>(0x21)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::CertExpired{static_cast<int32_t>(0x22)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::AlgorithmMismatch{static_cast<int32_t>(0x23)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::SecurityQosFailed{static_cast<int32_t>(0x24)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::SmartcardLogonRequired{static_cast<int32_t>(0x25)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::UnsupportedPreauth{static_cast<int32_t>(0x26)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::BadBinding{static_cast<int32_t>(0x27)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::DowngradeDetected{static_cast<int32_t>(0x28)};
constexpr ::System::Net::SecurityStatusPalErrorCode  System::Net::SecurityStatusPalErrorCode::ApplicationProtocolMismatch{static_cast<int32_t>(0x29)};

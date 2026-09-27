#pragma once
// IWYU pragma private; include "System/Net/SecurityStatus.hpp"
#include "System/Net/zzzz__SecurityStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::SecurityStatus::SecurityStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::SecurityStatus::SecurityStatus()   {
}
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::OK{static_cast<int32_t>(0x0)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::ContinueNeeded{static_cast<int32_t>(0x90312)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CompleteNeeded{static_cast<int32_t>(0x90313)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CompAndContinue{static_cast<int32_t>(0x90314)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::ContextExpired{static_cast<int32_t>(0x90317)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CredentialsNeeded{static_cast<int32_t>(0x90320)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::Renegotiate{static_cast<int32_t>(0x90321)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::OutOfMemory{static_cast<int32_t>(0x80090300)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::InvalidHandle{static_cast<int32_t>(0x80090301)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::Unsupported{static_cast<int32_t>(0x80090302)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::TargetUnknown{static_cast<int32_t>(0x80090303)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::InternalError{static_cast<int32_t>(0x80090304)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::PackageNotFound{static_cast<int32_t>(0x80090305)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::NotOwner{static_cast<int32_t>(0x80090306)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CannotInstall{static_cast<int32_t>(0x80090307)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::InvalidToken{static_cast<int32_t>(0x80090308)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CannotPack{static_cast<int32_t>(0x80090309)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::QopNotSupported{static_cast<int32_t>(0x8009030a)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::NoImpersonation{static_cast<int32_t>(0x8009030b)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::LogonDenied{static_cast<int32_t>(0x8009030c)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::UnknownCredentials{static_cast<int32_t>(0x8009030d)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::NoCredentials{static_cast<int32_t>(0x8009030e)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::MessageAltered{static_cast<int32_t>(0x8009030f)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::OutOfSequence{static_cast<int32_t>(0x80090310)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::NoAuthenticatingAuthority{static_cast<int32_t>(0x80090311)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::IncompleteMessage{static_cast<int32_t>(0x80090318)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::IncompleteCredentials{static_cast<int32_t>(0x80090320)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::BufferNotEnough{static_cast<int32_t>(0x80090321)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::WrongPrincipal{static_cast<int32_t>(0x80090322)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::TimeSkew{static_cast<int32_t>(0x80090324)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::UntrustedRoot{static_cast<int32_t>(0x80090325)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::IllegalMessage{static_cast<int32_t>(0x80090326)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CertUnknown{static_cast<int32_t>(0x80090327)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::CertExpired{static_cast<int32_t>(0x80090328)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::AlgorithmMismatch{static_cast<int32_t>(0x80090331)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::SecurityQosFailed{static_cast<int32_t>(0x80090332)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::SmartcardLogonRequired{static_cast<int32_t>(0x8009033e)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::UnsupportedPreauth{static_cast<int32_t>(0x80090343)};
constexpr ::System::Net::SecurityStatus  System::Net::SecurityStatus::BadBinding{static_cast<int32_t>(0x80090346)};

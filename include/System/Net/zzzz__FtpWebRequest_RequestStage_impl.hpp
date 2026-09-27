#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequest_RequestStage.hpp"
#include "System/Net/zzzz__FtpWebRequest_RequestStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage::FtpWebRequest_RequestStage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage::FtpWebRequest_RequestStage()   {
}
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage  GlobalNamespace::FtpWebRequest_RequestStage::CheckForError{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage  GlobalNamespace::FtpWebRequest_RequestStage::RequestStarted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage  GlobalNamespace::FtpWebRequest_RequestStage::WriteReady{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage  GlobalNamespace::FtpWebRequest_RequestStage::ReadReady{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FtpWebRequest_RequestStage  GlobalNamespace::FtpWebRequest_RequestStage::ReleaseConnection{static_cast<int32_t>(0x4)};

#pragma once
// IWYU pragma private; include "Oculus/Voice/Logging/TTSServiceLogging_TTSServiceRequestLog.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Oculus/Voice/Logging/zzzz__TTSServiceLogging_TTSServiceRequestLog_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "startTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "annotations", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog::TTSServiceLogging_TTSServiceRequestLog(::System::DateTime  startTime, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  annotations) noexcept  {
this->startTime = startTime;
this->annotations = annotations;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog::TTSServiceLogging_TTSServiceRequestLog()   {
}

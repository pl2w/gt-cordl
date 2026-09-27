#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionTelemetryData.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionTelemetryData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "EventName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomTags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BodyData", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SuperInfectionTelemetryData::SuperInfectionTelemetryData(::StringW  EventName, ::ArrayW<::StringW>  CustomTags, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  BodyData) noexcept  {
this->EventName = EventName;
this->CustomTags = CustomTags;
this->BodyData = BodyData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionTelemetryData::SuperInfectionTelemetryData()   {
}

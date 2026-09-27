#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchTaskData.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchTaskData_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_FetchTaskData::OVRAnchor_FetchTaskData(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  Anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  IncrementalResultsCallback) noexcept  {
this->Anchors = Anchors;
this->IncrementalResultsCallback = IncrementalResultsCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchTaskData::OVRAnchor_FetchTaskData()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask`1_CombinedTaskDataWithCompletedTaskId.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskData_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_CombinedTaskDataWithCompletedTaskId_def.hpp"
// Ctor Parameters [CppParam { name: "CompletedTaskId", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CombinedData", ty: "::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>::OVRTask_1_CombinedTaskDataWithCompletedTaskId(::System::Guid  CompletedTaskId, ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>  CombinedData) noexcept  {
this->CompletedTaskId = CompletedTaskId;
this->CombinedData = CombinedData;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>::OVRTask_1_CombinedTaskDataWithCompletedTaskId()   {
}

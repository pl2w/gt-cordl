#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCuller_AnimatedFadeData.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_AnimatedFadeData_def.hpp"
// Ctor Parameters [CppParam { name: "cameraID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceCuller_AnimatedFadeData::InstanceCuller_AnimatedFadeData(int32_t  cameraID, ::Unity::Jobs::JobHandle  jobHandle) noexcept  {
this->cameraID = cameraID;
this->jobHandle = jobHandle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceCuller_AnimatedFadeData::InstanceCuller_AnimatedFadeData()   {
}

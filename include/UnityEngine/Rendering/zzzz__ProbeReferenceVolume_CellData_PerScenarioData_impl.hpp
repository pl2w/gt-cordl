#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellData_PerScenarioData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_CellData_PerScenarioData_def.hpp"
// Ctor Parameters [CppParam { name: "shL0L1RxData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL1GL1RyData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL1BL1RzData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL2Data_0", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL2Data_1", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL2Data_2", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shL2Data_3", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "probeOcclusion", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData::CellData_ProbeReferenceVolume_PerScenarioData(::Unity::Collections::NativeArray_1<uint16_t>  shL0L1RxData, ::Unity::Collections::NativeArray_1<uint8_t>  shL1GL1RyData, ::Unity::Collections::NativeArray_1<uint8_t>  shL1BL1RzData, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_0, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_1, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_2, ::Unity::Collections::NativeArray_1<uint8_t>  shL2Data_3, ::Unity::Collections::NativeArray_1<uint8_t>  probeOcclusion) noexcept  {
this->shL0L1RxData = shL0L1RxData;
this->shL1GL1RyData = shL1GL1RyData;
this->shL1BL1RzData = shL1BL1RzData;
this->shL2Data_0 = shL2Data_0;
this->shL2Data_1 = shL2Data_1;
this->shL2Data_2 = shL2Data_2;
this->shL2Data_3 = shL2Data_3;
this->probeOcclusion = probeOcclusion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CellData_ProbeReferenceVolume_PerScenarioData::CellData_ProbeReferenceVolume_PerScenarioData()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryResults.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryResults_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryResult_def.hpp"
// Ctor Parameters [CppParam { name: "ResultCapacityInput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultCountOutput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Results", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults::OVRPlugin_SpaceDiscoveryResults(uint32_t  ResultCapacityInput, uint32_t  ResultCountOutput, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*  Results) noexcept  {
this->ResultCapacityInput = ResultCapacityInput;
this->ResultCountOutput = ResultCountOutput;
this->Results = Results;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults::OVRPlugin_SpaceDiscoveryResults()   {
}

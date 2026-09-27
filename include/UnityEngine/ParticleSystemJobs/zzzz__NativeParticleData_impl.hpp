#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/NativeParticleData.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array3_impl.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array4_impl.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array3_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array4_def.hpp"
// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positions", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocities", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "axisOfRotations", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotations", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationalSpeeds", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizes", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startColors", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aliveTimePercent", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inverseStartLifetimes", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "randomSeeds", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customData1", ty: "::GlobalNamespace::NativeParticleData_Array4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customData2", ty: "::GlobalNamespace::NativeParticleData_Array4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshIndices", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ParticleSystemJobs::NativeParticleData::NativeParticleData(int32_t  count, ::GlobalNamespace::NativeParticleData_Array3  positions, ::GlobalNamespace::NativeParticleData_Array3  velocities, ::GlobalNamespace::NativeParticleData_Array3  axisOfRotations, ::GlobalNamespace::NativeParticleData_Array3  rotations, ::GlobalNamespace::NativeParticleData_Array3  rotationalSpeeds, ::GlobalNamespace::NativeParticleData_Array3  sizes, void*  startColors, void*  aliveTimePercent, void*  inverseStartLifetimes, void*  randomSeeds, ::GlobalNamespace::NativeParticleData_Array4  customData1, ::GlobalNamespace::NativeParticleData_Array4  customData2, void*  meshIndices) noexcept  {
this->count = count;
this->positions = positions;
this->velocities = velocities;
this->axisOfRotations = axisOfRotations;
this->rotations = rotations;
this->rotationalSpeeds = rotationalSpeeds;
this->sizes = sizes;
this->startColors = startColors;
this->aliveTimePercent = aliveTimePercent;
this->inverseStartLifetimes = inverseStartLifetimes;
this->randomSeeds = randomSeeds;
this->customData1 = customData1;
this->customData2 = customData2;
this->meshIndices = meshIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemJobs::NativeParticleData::NativeParticleData()   {
}

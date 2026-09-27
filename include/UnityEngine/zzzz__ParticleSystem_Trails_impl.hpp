#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Trails.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Trails_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Trails.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Trails::*)()>(&::GlobalNamespace::ParticleSystem_Trails::Allocate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb66cb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Trails>(),
                        {"Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_Trails::Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Trails>(),
                        {"Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frontPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureOffsets", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_Trails::ParticleSystem_Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions, ::System::Collections::Generic::List_1<int32_t>*  frontPositions, ::System::Collections::Generic::List_1<int32_t>*  backPositions, ::System::Collections::Generic::List_1<int32_t>*  positionCounts, ::System::Collections::Generic::List_1<float_t>*  textureOffsets, int32_t  maxTrailCount, int32_t  maxPositionsPerTrailCount) noexcept  {
this->positions = positions;
this->frontPositions = frontPositions;
this->backPositions = backPositions;
this->positionCounts = positionCounts;
this->textureOffsets = textureOffsets;
this->maxTrailCount = maxTrailCount;
this->maxPositionsPerTrailCount = maxPositionsPerTrailCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_Trails::ParticleSystem_Trails()   {
}

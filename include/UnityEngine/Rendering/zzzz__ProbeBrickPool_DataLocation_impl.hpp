#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool_DataLocation.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_DataLocation_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeBrickPool_DataLocation.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeBrickPool_DataLocation::*)()>(&::GlobalNamespace::ProbeBrickPool_DataLocation::Cleanup)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb15a4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickPool_DataLocation>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProbeBrickPool_DataLocation::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeBrickPool_DataLocation>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL1_G_ry", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL2_0", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL2_2", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexL2_3", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexProbeOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexValidity", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexSkyOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TexSkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeBrickPool_DataLocation::ProbeBrickPool_DataLocation(::UnityW<::UnityEngine::Texture>  TexL0_L1rx, ::UnityW<::UnityEngine::Texture>  TexL1_G_ry, ::UnityW<::UnityEngine::Texture>  TexL1_B_rz, ::UnityW<::UnityEngine::Texture>  TexL2_0, ::UnityW<::UnityEngine::Texture>  TexL2_1, ::UnityW<::UnityEngine::Texture>  TexL2_2, ::UnityW<::UnityEngine::Texture>  TexL2_3, ::UnityW<::UnityEngine::Texture>  TexProbeOcclusion, ::UnityW<::UnityEngine::Texture>  TexValidity, ::UnityW<::UnityEngine::Texture>  TexSkyOcclusion, ::UnityW<::UnityEngine::Texture>  TexSkyShadingDirectionIndices, int32_t  width, int32_t  height, int32_t  depth) noexcept  {
this->TexL0_L1rx = TexL0_L1rx;
this->TexL1_G_ry = TexL1_G_ry;
this->TexL1_B_rz = TexL1_B_rz;
this->TexL2_0 = TexL2_0;
this->TexL2_1 = TexL2_1;
this->TexL2_2 = TexL2_2;
this->TexL2_3 = TexL2_3;
this->TexProbeOcclusion = TexProbeOcclusion;
this->TexValidity = TexValidity;
this->TexSkyOcclusion = TexSkyOcclusion;
this->TexSkyShadingDirectionIndices = TexSkyShadingDirectionIndices;
this->width = width;
this->height = height;
this->depth = depth;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeBrickPool_DataLocation::ProbeBrickPool_DataLocation()   {
}

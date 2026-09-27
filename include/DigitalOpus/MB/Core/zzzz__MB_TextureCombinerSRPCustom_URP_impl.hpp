#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCombinerSRPCustom_URP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCombinerSRPCustom_URP_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP._IsCreatingAtlasForProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::StringW)>(&::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP::_IsCreatingAtlasForProperty)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9dec2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*>(),
                        {"_IsCreatingAtlasForProperty", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP.ConfigureMaterialKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP::ConfigureMaterialKeywords)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9debcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*>(),
                        {"ConfigureMaterialKeywords", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP::_IsCreatingAtlasForProperty(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*>(),
                        {"_IsCreatingAtlasForProperty", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, property);
}
inline void DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP::ConfigureMaterialKeywords(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::UnityEngine::Material*  resultMat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP*>(),
                        {"ConfigureMaterialKeywords", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, resultMat);
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom_URP::MB_TextureCombinerSRPCustom_URP()   {
}

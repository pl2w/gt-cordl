#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCombinerSRPCustom.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCombinerSRPCustom_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom.IsURPMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom::IsURPMaterial)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9debc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*>(),
                        {"IsURPMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom.ConfigureMaterialKeywordsIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*)>(&::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom::ConfigureMaterialKeywordsIfNecessary)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9de8110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*>(),
                        {"ConfigureMaterialKeywordsIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom::IsURPMaterial(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*>(),
                        {"IsURPMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m);
}
inline void DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom::ConfigureMaterialKeywordsIfNecessary(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom*>(),
                        {"ConfigureMaterialKeywordsIfNecessary", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureCombinerSRPCustom::MB_TextureCombinerSRPCustom()   {
}

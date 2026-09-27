#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderURPLit.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_Prop_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_SmoothnessTextureChannel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_WorkflowMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderMaterialPropertyCacheHelper_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_Prop_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_SmoothnessTextureChannel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderURPLit_WorkflowMode_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9df9bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit._MapFloatToWorkflowMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureBlenderURPLit_WorkflowMode (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(float_t)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToWorkflowMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9df9d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapFloatToWorkflowMode", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit._MapWorkflowModeToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::_MapWorkflowModeToFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9df9d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapWorkflowModeToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderURPLit_WorkflowMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit._MapFloatToTextureChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(float_t)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToTextureChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9df9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapFloatToTextureChannel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit._MapTextureChannelToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::_MapTextureChannelToFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9df9d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapTextureChannelToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x9df9d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9dfa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x9dfa614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x9dfab18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x9dfb20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderURPLit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderURPLit::*)()>(&::DigitalOpus::MB::Core::TextureBlenderURPLit::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9dfb8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_sourceMaterialPropertyCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_sourceMaterialPropertyCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterialPropertyCache;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_sourceMaterialPropertyCache(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterialPropertyCache = value;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_workflowMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_workflowMode;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_workflowMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_workflowMode;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_workflowMode(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_workflowMode = value;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_smoothnessTextureChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothnessTextureChannel;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_smoothnessTextureChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothnessTextureChannel;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_smoothnessTextureChannel(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smoothnessTextureChannel = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_doScaleAlphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_doScaleAlphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_doScaleAlphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_doScaleAlphaCutoff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_doScaleAlphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_alphaCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_alphaCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_alphaCutoff;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_alphaCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_alphaCutoff = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_smoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smoothness = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_specColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_specColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_specColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_specColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_specColor = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_hasSpecGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_hasSpecGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasSpecGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_hasSpecGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasSpecGlossMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_metallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_metallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_metallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_metallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_metallic = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_hasMetallicGlossMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_hasMetallicGlossMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMetallicGlossMap;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_hasMetallicGlossMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasMetallicGlossMap = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_bumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_bumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_bumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bumpScale = value;
}
constexpr bool& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_shaderDoesEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_shaderDoesEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shaderDoesEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_shaderDoesEmission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shaderDoesEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_emissionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_emissionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_emissionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_emissionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_emissionColor = value;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_Prop& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_propertyToDo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr ::GlobalNamespace::TextureBlenderURPLit_Prop const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_propertyToDo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyToDo;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_propertyToDo(::GlobalNamespace::TextureBlenderURPLit_Prop  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyToDo = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlaColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlasMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasMetallic = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaSpecular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaSpecular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaSpecular;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlaSpecular(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaSpecular = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasMetallic_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic_smoothness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasMetallic_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasMetallic_smoothness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlasMetallic_smoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasMetallic_smoothness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasSpecular_somoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasSpecular_somoothness;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlasSpecular_somoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlasSpecular_somoothness;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlasSpecular_somoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlasSpecular_somoothness = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaBumpScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaBumpScale;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaBumpScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaBumpScale;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlaBumpScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaBumpScale = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_generatingTintedAtlaEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_generatingTintedAtlaEmission;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_generatingTintedAtlaEmission(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_generatingTintedAtlaEmission = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultColor = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultMetallic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultMetallic;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultMetallic(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultMetallic = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow = value;
}
constexpr float_t& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow;
}
constexpr float_t const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecularColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultSpecularColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultSpecularColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultSpecularColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultSpecularColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_get_m_notGeneratingAtlasDefaultEmisionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_notGeneratingAtlasDefaultEmisionColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderURPLit::__cordl_internal_set_m_notGeneratingAtlasDefaultEmisionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_notGeneratingAtlasDefaultEmisionColor = value;
}
inline void DigitalOpus::MB::Core::TextureBlenderURPLit::setStaticF_NeutralNormalMap(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderURPLit*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderURPLit::getStaticF_NeutralNormalMap()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "NeutralNormalMap", ::DigitalOpus::MB::Core::TextureBlenderURPLit*>();
}
inline bool DigitalOpus::MB::Core::TextureBlenderURPLit::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline ::GlobalNamespace::TextureBlenderURPLit_WorkflowMode DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToWorkflowMode(float_t  workflowMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapFloatToWorkflowMode", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureBlenderURPLit_WorkflowMode>(this, ___internal_method, workflowMode);
}
inline float_t DigitalOpus::MB::Core::TextureBlenderURPLit::_MapWorkflowModeToFloat(::GlobalNamespace::TextureBlenderURPLit_WorkflowMode  workflowMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapWorkflowModeToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderURPLit_WorkflowMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, workflowMode);
}
inline ::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToTextureChannel(float_t  texChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapFloatToTextureChannel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel>(this, ___internal_method, texChannel);
}
inline float_t DigitalOpus::MB::Core::TextureBlenderURPLit::_MapTextureChannelToFloat(::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel  workflowMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"_MapTextureChannelToFloat", {}, {::i2c::type_of<::GlobalNamespace::TextureBlenderURPLit_SmoothnessTextureChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, workflowMode);
}
inline void DigitalOpus::MB::Core::TextureBlenderURPLit::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderURPLit::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderURPLit::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderURPLit::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderURPLit::GetColorIfNoTexture(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, mat, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderURPLit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderURPLit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderURPLit* DigitalOpus::MB::Core::TextureBlenderURPLit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderURPLit*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderURPLit::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderURPLit::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderURPLit::TextureBlenderURPLit()   {
}

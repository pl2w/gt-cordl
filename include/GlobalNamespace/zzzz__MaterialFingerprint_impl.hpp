#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialFingerprint.hpp"
#include "GlobalNamespace/zzzz__GTShaderTransparencyMode_impl.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialFingerprint_def.hpp"
#include "GlobalNamespace/zzzz__GTShaderTransparencyMode_def.hpp"
#include "GlobalNamespace/zzzz__TexFormatInfo_def.hpp"
#include "GlobalNamespace/zzzz__UberShaderMatUsedProps_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialFingerprint::*)(::GlobalNamespace::UberShaderMatUsedProps)>(&::GlobalNamespace::MaterialFingerprint::_ctor)> {
  constexpr static std::size_t size = 0x1a8c;
  constexpr static std::size_t addrs = 0x56983f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UberShaderMatUsedProps>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::UnityEngine::Color, int32_t, int32_t)>(&::GlobalNamespace::MaterialFingerprint::_Round)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5699f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(::UnityEngine::Vector4, int32_t, int32_t)>(&::GlobalNamespace::MaterialFingerprint::_Round)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x569a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, int32_t, int32_t)>(&::GlobalNamespace::MaterialFingerprint::_Round)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5699e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._GetTexFormatInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TexFormatInfo (*)(::UnityEngine::Material*, ::StringW, int32_t)>(&::GlobalNamespace::MaterialFingerprint::_GetTexFormatInfo)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x569a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_GetTexFormatInfo", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint._GetTexPropGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Material*, int32_t, int32_t)>(&::GlobalNamespace::MaterialFingerprint::_GetTexPropGuid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x569a2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_GetTexPropGuid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint.GetMatTransparencyMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTShaderTransparencyMode (*)(::UnityEngine::Material*)>(&::GlobalNamespace::MaterialFingerprint::GetMatTransparencyMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x569a774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"GetMatTransparencyMode", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialFingerprint.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MaterialFingerprint::*)()>(&::GlobalNamespace::MaterialFingerprint::ToString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x569a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                    {::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MaterialFingerprint::_ctor(::GlobalNamespace::UberShaderMatUsedProps  used)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::UberShaderMatUsedProps>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, used);
}
inline ::Unity::Mathematics::int4 GlobalNamespace::MaterialFingerprint::_Round(::UnityEngine::Color  c, int32_t  mul, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, c, mul, usedCount);
}
inline ::Unity::Mathematics::int4 GlobalNamespace::MaterialFingerprint::_Round(::UnityEngine::Vector4  v, int32_t  mul, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, v, mul, usedCount);
}
inline int32_t GlobalNamespace::MaterialFingerprint::_Round(float_t  f, int32_t  mul, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_Round", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f, mul, usedCount);
}
inline ::GlobalNamespace::TexFormatInfo GlobalNamespace::MaterialFingerprint::_GetTexFormatInfo(::UnityEngine::Material*  mat, ::StringW  texPropName, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_GetTexFormatInfo", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TexFormatInfo>(nullptr, ___internal_method, mat, texPropName, usedCount);
}
inline ::StringW GlobalNamespace::MaterialFingerprint::_GetTexPropGuid(::UnityEngine::Material*  mat, int32_t  texPropId, int32_t  usedCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"_GetTexPropGuid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mat, texPropId, usedCount);
}
inline ::GlobalNamespace::GTShaderTransparencyMode GlobalNamespace::MaterialFingerprint::GetMatTransparencyMode(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(),
                        {"GetMatTransparencyMode", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTShaderTransparencyMode>(nullptr, ___internal_method, mat);
}
inline ::StringW GlobalNamespace::MaterialFingerprint::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MaterialFingerprint>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_TransparencyMode", ty: "::GlobalNamespace::GTShaderTransparencyMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Cutoff", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ColorSource", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SettingsPreset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AdvancedOptions", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TexMipBias", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap_WH", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TexelSnapToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TexelSnap_Factor", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UVSource", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AlphaDetailToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AlphaDetail_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AlphaDetail_Opacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AlphaDetail_WorldSpace", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MaskMapToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MaskMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MaskMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MaskMap_WH", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LavaLampToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GradientMapToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GradientMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DoTextureRotation", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RotateAngle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RotateAnim", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseWaveWarp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaveAmplitude", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaveFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaveScale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaveTimeScale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectBoxProjectToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectBoxCubePos", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectBoxSize", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectBoxRotation", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectMatcapToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectMatcapPerspToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectNormalToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectTex", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectNormalTex", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectAlbedoTint", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectTint", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectOpacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectExposure", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectOffset", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectScale", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReflectRotate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HalfLambertToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxPlanarToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxAAToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxAABias", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DepthMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxAmplitude", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ParallaxSamplesMinMax", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UvShiftToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UvShiftSteps", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UvShiftRate", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UvShiftOffset", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseGridEffect", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseCrystalEffect", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CrystalPower", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CrystalRimColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidVolume", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidFill", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidFillNormal", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidSurfaceColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidSwayX", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidSwayY", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidContainer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidPlanePosition", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LiquidPlaneNormal", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexFlapToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexFlapAxis", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexFlapDegreesMinMax", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexFlapSpeed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexFlapPhaseOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveDebug", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveEnd", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveParams", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveFalloff", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveSphereMask", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWavePhaseOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexWaveAxes", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexRotateToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexRotateAngles", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexRotateAnim", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VertexLightToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowOn", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowParams", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowTap", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowSine", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowSinePeriod", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InnerGlowSinePhaseShift", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_StealthEffectOn", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseEyeTracking", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EyeTileOffsetUV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EyeOverrideUV", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EyeOverrideUVTransform", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseMouthFlap", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MouthMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MouthMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseVertexColor", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaterEffect", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HeightBasedWaterEffect", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WaterCaustics", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseDayNightLightmap", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS_", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseWeatherMap", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WeatherMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WeatherMapDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseSpecular", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseSpecularAlphaChannel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Smoothness", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UseSpecHighlight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SpecularDir", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SpecularPowerIntensity", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SpecularColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SpecularUseDiffuseColor", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionToggle", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionMaskByBaseMapAlpha", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionUVScrollSpeed", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionDissolveProgress", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionDissolveAnimation", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionIntensityInDynamic", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionUseUVWaveWarp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GreyZoneException", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Cull", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_StencilReference", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_StencilComparison", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_StencilPassFront", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_DEFORM_MAP", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMap", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapIntensity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapMaskByVertColorRAmount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapScrollSpeed", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapUV0Influence", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsU", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsU", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RotateOnYAxisBySinTime", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_TEX_ARRAY_ATLAS", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap_Atlas", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BaseMap_AtlasSliceSource", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionMap_Atlas", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EmissionMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMap_Atlas", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DeformMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WeatherMap_Atlas", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WeatherMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DEBUG_PAWN_DATA", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SrcBlend", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DstBlend", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SrcBlendAlpha", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DstBlendAlpha", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ZWrite", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_AlphaToMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Color", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Surface", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Metallic", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SpecColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DayNightLightmapArray", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DayNightLightmapArray_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DayNightLightmapArray_AtlasSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MaterialFingerprint::MaterialFingerprint(::GlobalNamespace::GTShaderTransparencyMode  _TransparencyMode, int32_t  _Cutoff, int32_t  _ColorSource, ::Unity::Mathematics::int4  _BaseColor, ::Unity::Mathematics::int4  _GChannelColor, ::Unity::Mathematics::int4  _BChannelColor, ::Unity::Mathematics::int4  _AChannelColor, ::StringW  _BaseMap, ::Unity::Mathematics::int4  _BaseMap_ST, int32_t  _SettingsPreset, int32_t  _AdvancedOptions, int32_t  _TexMipBias, ::Unity::Mathematics::int4  _BaseMap_WH, int32_t  _TexelSnapToggle, int32_t  _TexelSnap_Factor, int32_t  _UVSource, int32_t  _AlphaDetailToggle, ::Unity::Mathematics::int4  _AlphaDetail_ST, int32_t  _AlphaDetail_Opacity, int32_t  _AlphaDetail_WorldSpace, int32_t  _MaskMapToggle, ::StringW  _MaskMap, ::Unity::Mathematics::int4  _MaskMap_ST, ::Unity::Mathematics::int4  _MaskMap_WH, int32_t  _LavaLampToggle, int32_t  _GradientMapToggle, ::StringW  _GradientMap, int32_t  _DoTextureRotation, int32_t  _RotateAngle, int32_t  _RotateAnim, int32_t  _UseWaveWarp, int32_t  _WaveAmplitude, int32_t  _WaveFrequency, int32_t  _WaveScale, int32_t  _WaveTimeScale, int32_t  _ReflectToggle, int32_t  _ReflectBoxProjectToggle, ::Unity::Mathematics::int4  _ReflectBoxCubePos, ::Unity::Mathematics::int4  _ReflectBoxSize, ::Unity::Mathematics::int4  _ReflectBoxRotation, int32_t  _ReflectMatcapToggle, int32_t  _ReflectMatcapPerspToggle, int32_t  _ReflectNormalToggle, ::StringW  _ReflectTex, ::StringW  _ReflectNormalTex, int32_t  _ReflectAlbedoTint, ::Unity::Mathematics::int4  _ReflectTint, int32_t  _ReflectOpacity, int32_t  _ReflectExposure, ::Unity::Mathematics::int4  _ReflectOffset, ::Unity::Mathematics::int4  _ReflectScale, int32_t  _ReflectRotate, int32_t  _HalfLambertToggle, int32_t  _ParallaxPlanarToggle, int32_t  _ParallaxToggle, int32_t  _ParallaxAAToggle, int32_t  _ParallaxAABias, ::StringW  _DepthMap, int32_t  _ParallaxAmplitude, ::Unity::Mathematics::int4  _ParallaxSamplesMinMax, int32_t  _UvShiftToggle, ::Unity::Mathematics::int4  _UvShiftSteps, ::Unity::Mathematics::int4  _UvShiftRate, ::Unity::Mathematics::int4  _UvShiftOffset, int32_t  _UseGridEffect, int32_t  _UseCrystalEffect, int32_t  _CrystalPower, ::Unity::Mathematics::int4  _CrystalRimColor, int32_t  _LiquidVolume, int32_t  _LiquidFill, ::Unity::Mathematics::int4  _LiquidFillNormal, ::Unity::Mathematics::int4  _LiquidSurfaceColor, int32_t  _LiquidSwayX, int32_t  _LiquidSwayY, int32_t  _LiquidContainer, ::Unity::Mathematics::int4  _LiquidPlanePosition, ::Unity::Mathematics::int4  _LiquidPlaneNormal, int32_t  _VertexFlapToggle, ::Unity::Mathematics::int4  _VertexFlapAxis, ::Unity::Mathematics::int4  _VertexFlapDegreesMinMax, int32_t  _VertexFlapSpeed, int32_t  _VertexFlapPhaseOffset, int32_t  _VertexWaveToggle, int32_t  _VertexWaveDebug, ::Unity::Mathematics::int4  _VertexWaveEnd, ::Unity::Mathematics::int4  _VertexWaveParams, ::Unity::Mathematics::int4  _VertexWaveFalloff, ::Unity::Mathematics::int4  _VertexWaveSphereMask, int32_t  _VertexWavePhaseOffset, ::Unity::Mathematics::int4  _VertexWaveAxes, int32_t  _VertexRotateToggle, ::Unity::Mathematics::int4  _VertexRotateAngles, int32_t  _VertexRotateAnim, int32_t  _VertexLightToggle, int32_t  _InnerGlowOn, ::Unity::Mathematics::int4  _InnerGlowColor, ::Unity::Mathematics::int4  _InnerGlowParams, int32_t  _InnerGlowTap, int32_t  _InnerGlowSine, int32_t  _InnerGlowSinePeriod, int32_t  _InnerGlowSinePhaseShift, int32_t  _StealthEffectOn, int32_t  _UseEyeTracking, ::Unity::Mathematics::int4  _EyeTileOffsetUV, int32_t  _EyeOverrideUV, ::Unity::Mathematics::int4  _EyeOverrideUVTransform, int32_t  _UseMouthFlap, ::StringW  _MouthMap, ::Unity::Mathematics::int4  _MouthMap_ST, int32_t  _UseVertexColor, int32_t  _WaterEffect, int32_t  _HeightBasedWaterEffect, int32_t  _WaterCaustics, int32_t  _UseDayNightLightmap, int32_t  _DAY_CYCLE_BRIGHTNESS_, int32_t  _UseWeatherMap, ::StringW  _WeatherMap, int32_t  _WeatherMapDissolveEdgeSize, int32_t  _UseSpecular, int32_t  _UseSpecularAlphaChannel, int32_t  _Smoothness, int32_t  _UseSpecHighlight, ::Unity::Mathematics::int4  _SpecularDir, ::Unity::Mathematics::int4  _SpecularPowerIntensity, ::Unity::Mathematics::int4  _SpecularColor, int32_t  _SpecularUseDiffuseColor, int32_t  _EmissionToggle, ::Unity::Mathematics::int4  _EmissionColor, ::StringW  _EmissionMap, int32_t  _EmissionMaskByBaseMapAlpha, ::Unity::Mathematics::int4  _EmissionUVScrollSpeed, int32_t  _EmissionDissolveProgress, ::Unity::Mathematics::int4  _EmissionDissolveAnimation, int32_t  _EmissionDissolveEdgeSize, int32_t  _EmissionIntensityInDynamic, int32_t  _EmissionUseUVWaveWarp, int32_t  _GreyZoneException, int32_t  _Cull, int32_t  _StencilReference, int32_t  _StencilComparison, int32_t  _StencilPassFront, int32_t  _USE_DEFORM_MAP, ::StringW  _DeformMap, int32_t  _DeformMapIntensity, int32_t  _DeformMapMaskByVertColorRAmount, ::Unity::Mathematics::int4  _DeformMapScrollSpeed, ::Unity::Mathematics::int4  _DeformMapUV0Influence, ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsU, ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsV, ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsU, ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsV, ::Unity::Mathematics::int4  _RotateOnYAxisBySinTime, int32_t  _USE_TEX_ARRAY_ATLAS, ::StringW  _BaseMap_Atlas, int32_t  _BaseMap_AtlasSlice, int32_t  _BaseMap_AtlasSliceSource, ::StringW  _EmissionMap_Atlas, int32_t  _EmissionMap_AtlasSlice, ::StringW  _DeformMap_Atlas, int32_t  _DeformMap_AtlasSlice, ::StringW  _WeatherMap_Atlas, int32_t  _WeatherMap_AtlasSlice, int32_t  _DEBUG_PAWN_DATA, int32_t  _SrcBlend, int32_t  _DstBlend, int32_t  _SrcBlendAlpha, int32_t  _DstBlendAlpha, int32_t  _ZWrite, int32_t  _AlphaToMask, ::Unity::Mathematics::int4  _Color, int32_t  _Surface, int32_t  _Metallic, ::Unity::Mathematics::int4  _SpecColor, ::StringW  _DayNightLightmapArray, ::Unity::Mathematics::int4  _DayNightLightmapArray_ST, int32_t  _DayNightLightmapArray_AtlasSlice, bool  isValid) noexcept  {
this->_TransparencyMode = _TransparencyMode;
this->_Cutoff = _Cutoff;
this->_ColorSource = _ColorSource;
this->_BaseColor = _BaseColor;
this->_GChannelColor = _GChannelColor;
this->_BChannelColor = _BChannelColor;
this->_AChannelColor = _AChannelColor;
this->_BaseMap = _BaseMap;
this->_BaseMap_ST = _BaseMap_ST;
this->_SettingsPreset = _SettingsPreset;
this->_AdvancedOptions = _AdvancedOptions;
this->_TexMipBias = _TexMipBias;
this->_BaseMap_WH = _BaseMap_WH;
this->_TexelSnapToggle = _TexelSnapToggle;
this->_TexelSnap_Factor = _TexelSnap_Factor;
this->_UVSource = _UVSource;
this->_AlphaDetailToggle = _AlphaDetailToggle;
this->_AlphaDetail_ST = _AlphaDetail_ST;
this->_AlphaDetail_Opacity = _AlphaDetail_Opacity;
this->_AlphaDetail_WorldSpace = _AlphaDetail_WorldSpace;
this->_MaskMapToggle = _MaskMapToggle;
this->_MaskMap = _MaskMap;
this->_MaskMap_ST = _MaskMap_ST;
this->_MaskMap_WH = _MaskMap_WH;
this->_LavaLampToggle = _LavaLampToggle;
this->_GradientMapToggle = _GradientMapToggle;
this->_GradientMap = _GradientMap;
this->_DoTextureRotation = _DoTextureRotation;
this->_RotateAngle = _RotateAngle;
this->_RotateAnim = _RotateAnim;
this->_UseWaveWarp = _UseWaveWarp;
this->_WaveAmplitude = _WaveAmplitude;
this->_WaveFrequency = _WaveFrequency;
this->_WaveScale = _WaveScale;
this->_WaveTimeScale = _WaveTimeScale;
this->_ReflectToggle = _ReflectToggle;
this->_ReflectBoxProjectToggle = _ReflectBoxProjectToggle;
this->_ReflectBoxCubePos = _ReflectBoxCubePos;
this->_ReflectBoxSize = _ReflectBoxSize;
this->_ReflectBoxRotation = _ReflectBoxRotation;
this->_ReflectMatcapToggle = _ReflectMatcapToggle;
this->_ReflectMatcapPerspToggle = _ReflectMatcapPerspToggle;
this->_ReflectNormalToggle = _ReflectNormalToggle;
this->_ReflectTex = _ReflectTex;
this->_ReflectNormalTex = _ReflectNormalTex;
this->_ReflectAlbedoTint = _ReflectAlbedoTint;
this->_ReflectTint = _ReflectTint;
this->_ReflectOpacity = _ReflectOpacity;
this->_ReflectExposure = _ReflectExposure;
this->_ReflectOffset = _ReflectOffset;
this->_ReflectScale = _ReflectScale;
this->_ReflectRotate = _ReflectRotate;
this->_HalfLambertToggle = _HalfLambertToggle;
this->_ParallaxPlanarToggle = _ParallaxPlanarToggle;
this->_ParallaxToggle = _ParallaxToggle;
this->_ParallaxAAToggle = _ParallaxAAToggle;
this->_ParallaxAABias = _ParallaxAABias;
this->_DepthMap = _DepthMap;
this->_ParallaxAmplitude = _ParallaxAmplitude;
this->_ParallaxSamplesMinMax = _ParallaxSamplesMinMax;
this->_UvShiftToggle = _UvShiftToggle;
this->_UvShiftSteps = _UvShiftSteps;
this->_UvShiftRate = _UvShiftRate;
this->_UvShiftOffset = _UvShiftOffset;
this->_UseGridEffect = _UseGridEffect;
this->_UseCrystalEffect = _UseCrystalEffect;
this->_CrystalPower = _CrystalPower;
this->_CrystalRimColor = _CrystalRimColor;
this->_LiquidVolume = _LiquidVolume;
this->_LiquidFill = _LiquidFill;
this->_LiquidFillNormal = _LiquidFillNormal;
this->_LiquidSurfaceColor = _LiquidSurfaceColor;
this->_LiquidSwayX = _LiquidSwayX;
this->_LiquidSwayY = _LiquidSwayY;
this->_LiquidContainer = _LiquidContainer;
this->_LiquidPlanePosition = _LiquidPlanePosition;
this->_LiquidPlaneNormal = _LiquidPlaneNormal;
this->_VertexFlapToggle = _VertexFlapToggle;
this->_VertexFlapAxis = _VertexFlapAxis;
this->_VertexFlapDegreesMinMax = _VertexFlapDegreesMinMax;
this->_VertexFlapSpeed = _VertexFlapSpeed;
this->_VertexFlapPhaseOffset = _VertexFlapPhaseOffset;
this->_VertexWaveToggle = _VertexWaveToggle;
this->_VertexWaveDebug = _VertexWaveDebug;
this->_VertexWaveEnd = _VertexWaveEnd;
this->_VertexWaveParams = _VertexWaveParams;
this->_VertexWaveFalloff = _VertexWaveFalloff;
this->_VertexWaveSphereMask = _VertexWaveSphereMask;
this->_VertexWavePhaseOffset = _VertexWavePhaseOffset;
this->_VertexWaveAxes = _VertexWaveAxes;
this->_VertexRotateToggle = _VertexRotateToggle;
this->_VertexRotateAngles = _VertexRotateAngles;
this->_VertexRotateAnim = _VertexRotateAnim;
this->_VertexLightToggle = _VertexLightToggle;
this->_InnerGlowOn = _InnerGlowOn;
this->_InnerGlowColor = _InnerGlowColor;
this->_InnerGlowParams = _InnerGlowParams;
this->_InnerGlowTap = _InnerGlowTap;
this->_InnerGlowSine = _InnerGlowSine;
this->_InnerGlowSinePeriod = _InnerGlowSinePeriod;
this->_InnerGlowSinePhaseShift = _InnerGlowSinePhaseShift;
this->_StealthEffectOn = _StealthEffectOn;
this->_UseEyeTracking = _UseEyeTracking;
this->_EyeTileOffsetUV = _EyeTileOffsetUV;
this->_EyeOverrideUV = _EyeOverrideUV;
this->_EyeOverrideUVTransform = _EyeOverrideUVTransform;
this->_UseMouthFlap = _UseMouthFlap;
this->_MouthMap = _MouthMap;
this->_MouthMap_ST = _MouthMap_ST;
this->_UseVertexColor = _UseVertexColor;
this->_WaterEffect = _WaterEffect;
this->_HeightBasedWaterEffect = _HeightBasedWaterEffect;
this->_WaterCaustics = _WaterCaustics;
this->_UseDayNightLightmap = _UseDayNightLightmap;
this->_DAY_CYCLE_BRIGHTNESS_ = _DAY_CYCLE_BRIGHTNESS_;
this->_UseWeatherMap = _UseWeatherMap;
this->_WeatherMap = _WeatherMap;
this->_WeatherMapDissolveEdgeSize = _WeatherMapDissolveEdgeSize;
this->_UseSpecular = _UseSpecular;
this->_UseSpecularAlphaChannel = _UseSpecularAlphaChannel;
this->_Smoothness = _Smoothness;
this->_UseSpecHighlight = _UseSpecHighlight;
this->_SpecularDir = _SpecularDir;
this->_SpecularPowerIntensity = _SpecularPowerIntensity;
this->_SpecularColor = _SpecularColor;
this->_SpecularUseDiffuseColor = _SpecularUseDiffuseColor;
this->_EmissionToggle = _EmissionToggle;
this->_EmissionColor = _EmissionColor;
this->_EmissionMap = _EmissionMap;
this->_EmissionMaskByBaseMapAlpha = _EmissionMaskByBaseMapAlpha;
this->_EmissionUVScrollSpeed = _EmissionUVScrollSpeed;
this->_EmissionDissolveProgress = _EmissionDissolveProgress;
this->_EmissionDissolveAnimation = _EmissionDissolveAnimation;
this->_EmissionDissolveEdgeSize = _EmissionDissolveEdgeSize;
this->_EmissionIntensityInDynamic = _EmissionIntensityInDynamic;
this->_EmissionUseUVWaveWarp = _EmissionUseUVWaveWarp;
this->_GreyZoneException = _GreyZoneException;
this->_Cull = _Cull;
this->_StencilReference = _StencilReference;
this->_StencilComparison = _StencilComparison;
this->_StencilPassFront = _StencilPassFront;
this->_USE_DEFORM_MAP = _USE_DEFORM_MAP;
this->_DeformMap = _DeformMap;
this->_DeformMapIntensity = _DeformMapIntensity;
this->_DeformMapMaskByVertColorRAmount = _DeformMapMaskByVertColorRAmount;
this->_DeformMapScrollSpeed = _DeformMapScrollSpeed;
this->_DeformMapUV0Influence = _DeformMapUV0Influence;
this->_DeformMapObjectSpaceOffsetsU = _DeformMapObjectSpaceOffsetsU;
this->_DeformMapObjectSpaceOffsetsV = _DeformMapObjectSpaceOffsetsV;
this->_DeformMapWorldSpaceOffsetsU = _DeformMapWorldSpaceOffsetsU;
this->_DeformMapWorldSpaceOffsetsV = _DeformMapWorldSpaceOffsetsV;
this->_RotateOnYAxisBySinTime = _RotateOnYAxisBySinTime;
this->_USE_TEX_ARRAY_ATLAS = _USE_TEX_ARRAY_ATLAS;
this->_BaseMap_Atlas = _BaseMap_Atlas;
this->_BaseMap_AtlasSlice = _BaseMap_AtlasSlice;
this->_BaseMap_AtlasSliceSource = _BaseMap_AtlasSliceSource;
this->_EmissionMap_Atlas = _EmissionMap_Atlas;
this->_EmissionMap_AtlasSlice = _EmissionMap_AtlasSlice;
this->_DeformMap_Atlas = _DeformMap_Atlas;
this->_DeformMap_AtlasSlice = _DeformMap_AtlasSlice;
this->_WeatherMap_Atlas = _WeatherMap_Atlas;
this->_WeatherMap_AtlasSlice = _WeatherMap_AtlasSlice;
this->_DEBUG_PAWN_DATA = _DEBUG_PAWN_DATA;
this->_SrcBlend = _SrcBlend;
this->_DstBlend = _DstBlend;
this->_SrcBlendAlpha = _SrcBlendAlpha;
this->_DstBlendAlpha = _DstBlendAlpha;
this->_ZWrite = _ZWrite;
this->_AlphaToMask = _AlphaToMask;
this->_Color = _Color;
this->_Surface = _Surface;
this->_Metallic = _Metallic;
this->_SpecColor = _SpecColor;
this->_DayNightLightmapArray = _DayNightLightmapArray;
this->_DayNightLightmapArray_ST = _DayNightLightmapArray_ST;
this->_DayNightLightmapArray_AtlasSlice = _DayNightLightmapArray_AtlasSlice;
this->isValid = isValid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialFingerprint::MaterialFingerprint()   {
}

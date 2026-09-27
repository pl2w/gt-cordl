#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_ParamInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_Flags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_ParamInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters.CreateInstanceDataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer* (*)(::GlobalNamespace::RenderersParameters_Flags, ::by_ref<::UnityEngine::Rendering::InstanceNumInfo>)>(&::UnityEngine::Rendering::RenderersParameters::CreateInstanceDataBuffer)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xb211b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {"CreateInstanceDataBuffer", {}, {::i2c::type_of<::GlobalNamespace::RenderersParameters_Flags>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceNumInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderersParameters::*)(::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>)>(&::UnityEngine::Rendering::RenderersParameters::_ctor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb211f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters.__ctor_g__GetParamInfo_14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderersParameters_ParamInfo (*)(::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>, int32_t, bool)>(&::UnityEngine::Rendering::RenderersParameters::__ctor_g__GetParamInfo_14_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb212a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {"<.ctor>g__GetParamInfo|14_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderersParameters::setStaticF_s_uintSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_uintSize", ::UnityEngine::Rendering::RenderersParameters>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters::getStaticF_s_uintSize()  {
return ::cordl_internals::getStaticField<int32_t, "s_uintSize", ::UnityEngine::Rendering::RenderersParameters>();
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::RenderersParameters::CreateInstanceDataBuffer(::GlobalNamespace::RenderersParameters_Flags  flags, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceNumInfo>  instanceNumInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {"CreateInstanceDataBuffer", {}, {::i2c::type_of<::GlobalNamespace::RenderersParameters_Flags>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceNumInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer*>(nullptr, ___internal_method, flags, instanceNumInfo);
}
inline void UnityEngine::Rendering::RenderersParameters::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>  instanceDataBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceDataBuffer);
}
inline ::GlobalNamespace::RenderersParameters_ParamInfo UnityEngine::Rendering::RenderersParameters::__ctor_g__GetParamInfo_14_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>  instanceDataBuffer, int32_t  paramNameIdx, bool  assertOnFail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderersParameters>(),
                        {"<.ctor>g__GetParamInfo|14_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderersParameters_ParamInfo>(nullptr, ___internal_method, instanceDataBuffer, paramNameIdx, assertOnFail);
}
// Ctor Parameters [CppParam { name: "lightmapScale", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorld", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldToLocal", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrixPreviousM", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrixPreviousMI", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shCoefficients", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingSphere", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "windParams", ty: "::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "windHistoryParams", ty: "::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderersParameters::RenderersParameters(::GlobalNamespace::RenderersParameters_ParamInfo  lightmapScale, ::GlobalNamespace::RenderersParameters_ParamInfo  localToWorld, ::GlobalNamespace::RenderersParameters_ParamInfo  worldToLocal, ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousM, ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousMI, ::GlobalNamespace::RenderersParameters_ParamInfo  shCoefficients, ::GlobalNamespace::RenderersParameters_ParamInfo  boundingSphere, ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windParams, ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windHistoryParams) noexcept  {
this->lightmapScale = lightmapScale;
this->localToWorld = localToWorld;
this->worldToLocal = worldToLocal;
this->matrixPreviousM = matrixPreviousM;
this->matrixPreviousMI = matrixPreviousMI;
this->shCoefficients = shCoefficients;
this->boundingSphere = boundingSphere;
this->windParams = windParams;
this->windHistoryParams = windHistoryParams;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters::RenderersParameters()   {
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF__BaseColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BaseColor", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF__BaseColor()  {
return ::cordl_internals::getStaticField<int32_t, "_BaseColor", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_SpecCube0_HDR(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_SpecCube0_HDR", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_SpecCube0_HDR()  {
return ::cordl_internals::getStaticField<int32_t, "unity_SpecCube0_HDR", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_SHCoefficients(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_SHCoefficients", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_SHCoefficients()  {
return ::cordl_internals::getStaticField<int32_t, "unity_SHCoefficients", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_LightmapST(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_LightmapST", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_LightmapST()  {
return ::cordl_internals::getStaticField<int32_t, "unity_LightmapST", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_ObjectToWorld(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_ObjectToWorld", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_ObjectToWorld()  {
return ::cordl_internals::getStaticField<int32_t, "unity_ObjectToWorld", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_WorldToObject(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_WorldToObject", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_WorldToObject()  {
return ::cordl_internals::getStaticField<int32_t, "unity_WorldToObject", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_MatrixPreviousM(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_MatrixPreviousM", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_MatrixPreviousM()  {
return ::cordl_internals::getStaticField<int32_t, "unity_MatrixPreviousM", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_MatrixPreviousMI(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_MatrixPreviousMI", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_MatrixPreviousMI()  {
return ::cordl_internals::getStaticField<int32_t, "unity_MatrixPreviousMI", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_WorldBoundingSphere(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "unity_WorldBoundingSphere", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_WorldBoundingSphere()  {
return ::cordl_internals::getStaticField<int32_t, "unity_WorldBoundingSphere", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_DOTS_ST_WindParams(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DOTS_ST_WindParams", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_DOTS_ST_WindParams()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DOTS_ST_WindParams", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_DOTS_ST_WindHistoryParams(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DOTS_ST_WindHistoryParams", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_DOTS_ST_WindHistoryParams()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DOTS_ST_WindHistoryParams", ::UnityEngine::Rendering::RenderersParameters_ParamNames*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters_ParamNames::RenderersParameters_ParamNames()   {
}

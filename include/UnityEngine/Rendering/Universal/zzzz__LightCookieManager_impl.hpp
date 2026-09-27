#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_LightCookieMapping_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_LightCookieMapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_LightCookieShaderFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_WorkSlice_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.get_IsKeywordLightCookieEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager::get_IsKeywordLightCookieEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb254f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"get_IsKeywordLightCookieEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.set_IsKeywordLightCookieEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(bool)>(&::UnityEngine::Rendering::Universal::LightCookieManager::set_IsKeywordLightCookieEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb254f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"set_IsKeywordLightCookieEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.get_AdditionalLightsCookieAtlasTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager::get_AdditionalLightsCookieAtlasTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb254f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"get_AdditionalLightsCookieAtlasTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::by_ref<::GlobalNamespace::LightCookieManager_Settings>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb254f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_Settings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.InitAdditionalLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::InitAdditionalLights)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb255020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"InitAdditionalLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager::isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb2551a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb2551c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightCookieShaderDataIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderDataIndex)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb255238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightCookieShaderDataIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::LightCookieManager::Setup)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb255280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.SetupMainLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::VisibleLight>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::SetupMainLight)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xb25550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"SetupMainLight", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightCookieShaderFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightCookieManager_LightCookieShaderFormat (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderFormat)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb255b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightCookieShaderFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightUVScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::GetLightUVScaleOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb255c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightUVScaleOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.SetupAdditionalLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::LightCookieManager::SetupAdditionalLights)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb255940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"SetupAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FilterAndValidateAdditionalLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::Universal::UniversalLightData*, ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::FilterAndValidateAdditionalLights)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xb255ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FilterAndValidateAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.UpdateAdditionalLightsAtlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::UpdateAdditionalLightsAtlas)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb2563b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"UpdateAdditionalLightsAtlas", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FetchUVRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>, ::ArrayW<::UnityEngine::Vector4>, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::FetchUVRects)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb256cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FetchUVRects", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ComputeCookieRequestPixelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::ComputeCookieRequestPixelCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb256bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ComputeCookieRequestPixelCount", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ApproximateCookieSizeDivisor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(float_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::ApproximateCookieSizeDivisor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb256cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ApproximateCookieSizeDivisor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Fetch2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::Fetch2D)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb2570b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Fetch2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FetchCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::FetchCube)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb256f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FetchCube", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ComputeOctahedralCookieSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::Universal::LightCookieManager::ComputeOctahedralCookieSize)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb2572c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ComputeOctahedralCookieSize", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.AdjustUVRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::by_ref<::UnityEngine::Vector4>, ::UnityEngine::Texture*, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::AdjustUVRect)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb257214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"AdjustUVRect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ShrinkUVRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::by_ref<::UnityEngine::Vector4>, float_t, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::ShrinkUVRect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb257414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ShrinkUVRect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.UploadAdditionalLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::UploadAdditionalLights)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xb256534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"UploadAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Texture2DAtlas*& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieAtlas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsCookieAtlas;
}
constexpr ::UnityEngine::Rendering::Texture2DAtlas* const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieAtlas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsCookieAtlas;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_AdditionalLightsCookieAtlas(::UnityEngine::Rendering::Texture2DAtlas*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightsCookieAtlas = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieShaderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsCookieShaderData;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieShaderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalLightsCookieShaderData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_AdditionalLightsCookieShaderData(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalLightsCookieShaderData = value;
}
constexpr ::GlobalNamespace::LightCookieManager_Settings& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::GlobalNamespace::LightCookieManager_Settings const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_Settings(::GlobalNamespace::LightCookieManager_Settings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_WorkMem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorkMem;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_WorkMem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorkMem;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_WorkMem(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WorkMem = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_VisibleLightIndexToShaderDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToShaderDataIndex;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisibleLightIndexToShaderDataIndex;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_VisibleLightIndexToShaderDataIndex(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisibleLightIndexToShaderDataIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_CookieSizeDivisor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CookieSizeDivisor;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_CookieSizeDivisor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CookieSizeDivisor;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_CookieSizeDivisor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CookieSizeDivisor = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevCookieRequestPixelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevCookieRequestPixelCount;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevCookieRequestPixelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevCookieRequestPixelCount;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_PrevCookieRequestPixelCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevCookieRequestPixelCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevWarnFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevWarnFrame;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevWarnFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevWarnFrame;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_PrevWarnFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevWarnFrame = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsKeywordLightCookieEnabled_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsKeywordLightCookieEnabled_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsKeywordLightCookieEnabled_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::setStaticF_s_DirLightProj(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "s_DirLightProj", ::UnityEngine::Rendering::Universal::LightCookieManager*>(std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::LightCookieManager::getStaticF_s_DirLightProj()  {
return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "s_DirLightProj", ::UnityEngine::Rendering::Universal::LightCookieManager*>();
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::get_IsKeywordLightCookieEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"get_IsKeywordLightCookieEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::set_IsKeywordLightCookieEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"set_IsKeywordLightCookieEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::LightCookieManager::get_AdditionalLightsCookieAtlasTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"get_AdditionalLightsCookieAtlasTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::_ctor(::by_ref<::GlobalNamespace::LightCookieManager_Settings>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_Settings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::InitAdditionalLights(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"InitAdditionalLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderDataIndex(int32_t  visibleLightIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightCookieShaderDataIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, visibleLightIndex);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::Setup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::SetupMainLight(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::VisibleLight>  visibleMainLight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"SetupMainLight", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::VisibleLight>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, visibleMainLight);
}
inline ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  cookieFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightCookieShaderFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightCookieManager_LightCookieShaderFormat>(this, ___internal_method, cookieFormat);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::GetLightUVScaleOffset(::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>  additionalLightData, ::by_ref<::UnityEngine::Matrix4x4>  uvTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"GetLightUVScaleOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalLightData, uvTransform);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"SetupAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, lightData);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::FilterAndValidateAdditionalLights(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  validLightMappings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FilterAndValidateAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lightData, validLightMappings);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::UpdateAdditionalLightsAtlas(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::ArrayW<::UnityEngine::Vector4>  textureAtlasUVRects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"UpdateAdditionalLightsAtlas", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cmd, validLightMappings, textureAtlasUVRects);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::FetchUVRects(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::ArrayW<::UnityEngine::Vector4>  textureAtlasUVRects, int32_t  cookieSizeDivisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FetchUVRects", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cmd, validLightMappings, textureAtlasUVRects, cookieSizeDivisor);
}
inline uint32_t UnityEngine::Rendering::Universal::LightCookieManager::ComputeCookieRequestPixelCount(::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ComputeCookieRequestPixelCount", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, validLightMappings);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::ApproximateCookieSizeDivisor(float_t  requestAtlasRatio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ApproximateCookieSizeDivisor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, requestAtlasRatio);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::LightCookieManager::Fetch2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  cookie, int32_t  cookieSizeDivisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"Fetch2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, cmd, cookie, cookieSizeDivisor);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::LightCookieManager::FetchCube(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  cookie, int32_t  cookieSizeDivisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"FetchCube", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, cmd, cookie, cookieSizeDivisor);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::ComputeOctahedralCookieSize(::UnityEngine::Texture*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ComputeOctahedralCookieSize", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cookie);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::AdjustUVRect(::by_ref<::UnityEngine::Vector4>  uvScaleOffset, ::UnityEngine::Texture*  cookie, ::by_ref<::UnityEngine::Vector2>  cookieSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"AdjustUVRect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvScaleOffset, cookie, cookieSize);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::ShrinkUVRect(::by_ref<::UnityEngine::Vector4>  uvScaleOffset, float_t  amountPixels, ::by_ref<::UnityEngine::Vector2>  cookieSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"ShrinkUVRect", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvScaleOffset, amountPixels, cookieSize);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::UploadAdditionalLights(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>  validUvRects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager*>(),
                        {"UploadAdditionalLights", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData, validLightMappings, validUvRects);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager* UnityEngine::Rendering::Universal::LightCookieManager::New_ctor(::by_ref<::GlobalNamespace::LightCookieManager_Settings>  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::LightCookieManager*>(settings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::Universal::LightCookieManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::LightCookieManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieManager()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_worldToLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_worldToLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_worldToLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_cookieEnableBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ShaderBitArray (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_cookieEnableBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_cookieEnableBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_atlasUVRects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_atlasUVRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_atlasUVRects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_lightTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_lightTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_lightTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_isUploaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_isUploaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_isUploaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.set_isUploaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(bool)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::set_isUploaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"set_isUploaded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(int32_t, bool)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb25516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb2551f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Resize)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb2574b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Upload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Upload)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb2576e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Upload", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb255ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_UseStructuredBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_UseStructuredBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_UseStructuredBuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseStructuredBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightCpuData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorldToLightCpuData;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightCpuData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorldToLightCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_WorldToLightCpuData(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WorldToLightCpuData = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectCpuData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AtlasUVRectCpuData;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectCpuData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AtlasUVRectCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_AtlasUVRectCpuData(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AtlasUVRectCpuData = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeCpuData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightTypeCpuData;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeCpuData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightTypeCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_LightTypeCpuData(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LightTypeCpuData = value;
}
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_CookieEnableBitsCpuData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CookieEnableBitsCpuData;
}
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_CookieEnableBitsCpuData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CookieEnableBitsCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_CookieEnableBitsCpuData(::UnityEngine::Rendering::Universal::ShaderBitArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CookieEnableBitsCpuData = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorldToLightBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WorldToLightBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_WorldToLightBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WorldToLightBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AtlasUVRectBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AtlasUVRectBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_AtlasUVRectBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AtlasUVRectBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightTypeBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LightTypeBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_LightTypeBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LightTypeBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get__isUploaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUploaded_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get__isUploaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUploaded_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set__isUploaded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUploaded_k__BackingField = value;
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_worldToLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_worldToLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShaderBitArray UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_cookieEnableBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_cookieEnableBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShaderBitArray>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_atlasUVRects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_atlasUVRects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_lightTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_lightTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_isUploaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"get_isUploaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::set_isUploaded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"set_isUploaded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::_ctor(int32_t  size, bool  useStructuredBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, useStructuredBuffer);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Resize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Upload(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Upload", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Clear(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::New_ctor(int32_t  size, bool  useStructuredBuffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(size, useStructuredBuffer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::LightCookieManager_LightCookieShaderData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::*)(int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::Resize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb255d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb255018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_lightMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMappings;
}
constexpr ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping> const& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_lightMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMappings;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_set_lightMappings(::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMappings = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_uvRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvRects;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_uvRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvRects;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvRects = value;
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::Resize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::LightCookieManager_WorkMemory()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)()>(&::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb257de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c.__cctor_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)(::GlobalNamespace::LightCookieManager_LightCookieMapping, ::GlobalNamespace::LightCookieManager_LightCookieMapping)>(&::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb257dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {"<.cctor>b__6_0", {}, {::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>(), ::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c.__cctor_b__6_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)(::GlobalNamespace::LightCookieManager_LightCookieMapping, ::GlobalNamespace::LightCookieManager_LightCookieMapping)>(&::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb257eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {"<.cctor>b__6_1", {}, {::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>(), ::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::setStaticF___9(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "<>9", ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(std::forward<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "<>9", ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_0(::GlobalNamespace::LightCookieManager_LightCookieMapping  a, ::GlobalNamespace::LightCookieManager_LightCookieMapping  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {"<.cctor>b__6_0", {}, {::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>(), ::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_1(::GlobalNamespace::LightCookieManager_LightCookieMapping  a, ::GlobalNamespace::LightCookieManager_LightCookieMapping  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(),
                        {"<.cctor>b__6_1", {}, {::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>(), ::i2c::type_of<::GlobalNamespace::LightCookieManager_LightCookieMapping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::LightCookieMapping_LightCookieManager___c()   {
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainLightTexture", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightTexture()  {
return ::cordl_internals::getStaticField<int32_t, "mainLightTexture", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightWorldToLight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainLightWorldToLight", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightWorldToLight()  {
return ::cordl_internals::getStaticField<int32_t, "mainLightWorldToLight", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightCookieTextureFormat(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainLightCookieTextureFormat", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightCookieTextureFormat()  {
return ::cordl_internals::getStaticField<int32_t, "mainLightCookieTextureFormat", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasTexture", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasTexture()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasTexture", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasTextureFormat(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasTextureFormat", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasTextureFormat()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasTextureFormat", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieEnableBits(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsCookieEnableBits", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieEnableBits()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieEnableBits", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasUVRectBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasUVRectBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasUVRectBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasUVRectBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasUVRects(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasUVRects", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasUVRects()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasUVRects", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsWorldToLightBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsWorldToLightBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsWorldToLightBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsWorldToLightBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsLightTypeBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsLightTypeBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsLightTypeBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsLightTypeBuffer", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsWorldToLights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsWorldToLights", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsWorldToLights()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsWorldToLights", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsLightTypes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "additionalLightsLightTypes", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsLightTypes()  {
return ::cordl_internals::getStaticField<int32_t, "additionalLightsLightTypes", ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::LightCookieManager_ShaderProperty()   {
}

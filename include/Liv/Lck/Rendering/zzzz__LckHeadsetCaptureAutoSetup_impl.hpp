#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureAutoSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureAutoSetup_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureRenderFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineAsset_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup.EnsureFeaturePresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::EnsureFeaturePresent)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x9d3fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"EnsureFeaturePresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup.GetRendererDataList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> (*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(&::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::GetRendererDataList)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d402b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"GetRendererDataList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup.InvalidateRendererData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::ScriptableRendererData*)>(&::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::InvalidateRendererData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d403c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"InvalidateRendererData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup.CreateFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature> (*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::CreateFeature)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d40328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"CreateFeature", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::EnsureFeaturePresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"EnsureFeaturePresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::GetRendererDataList(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"GetRendererDataList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>>(nullptr, ___internal_method, asset);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>)
inline bool Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::HasFeature(::UnityEngine::Rendering::Universal::ScriptableRendererData*  rendererData)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                    {"HasFeature", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rendererData);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::InvalidateRendererData(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"InvalidateRendererData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::UnityW<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature> Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::CreateFeature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*>(),
                        {"CreateFeature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup::LckHeadsetCaptureAutoSetup()   {
}

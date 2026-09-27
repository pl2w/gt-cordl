#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthRaycaster.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__DepthFrameDesc_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Meta/XR/zzzz__EnvironmentDepthRaycaster_def.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__EnvironmentDepthManager_def.hpp"
#include "Meta/XR/zzzz__DepthRaycastResult_def.hpp"
#include "Meta/XR/zzzz__EnvironmentDepthRaycaster___c__DisplayClass36_0_def.hpp"
#include "Meta/XR/zzzz__EnvironmentDepthRaycaster___c__DisplayClass39_0_def.hpp"
#include "Meta/XR/zzzz__Eye_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::Awake)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9f007e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f009d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.OnDepthTextureUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::RenderTexture*)>(&::Meta::XR::EnvironmentDepthRaycaster::OnDepthTextureUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f009e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDepthTextureUpdate", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.InvalidateDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::InvalidateDepthTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f009dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"InvalidateDepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::OnDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f00cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.CreateTextureCopyRequestIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::CreateTextureCopyRequestIfNeeded)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9f00a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"CreateTextureCopyRequestIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.UpdateTextureCopyRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::UpdateTextureCopyRequest)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x9f00e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"UpdateTextureCopyRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f0119c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.WorldPosToNonNormalizedTextureCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector3)>(&::Meta::XR::EnvironmentDepthRaycaster::WorldPosToNonNormalizedTextureCoords)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9f01234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosToNonNormalizedTextureCoords", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.SampleDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector2Int)>(&::Meta::XR::EnvironmentDepthRaycaster::SampleDepthTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f01344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"SampleDepthTexture", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.WorldPosAtDepthTexCoord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector2Int)>(&::Meta::XR::EnvironmentDepthRaycaster::WorldPosAtDepthTexCoord)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f01364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosAtDepthTexCoord", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.WorldPosToLinearDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector3)>(&::Meta::XR::EnvironmentDepthRaycaster::WorldPosToLinearDepth)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f01418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosToLinearDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.ReconstructNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector2Int)>(&::Meta::XR::EnvironmentDepthRaycaster::ReconstructNormal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9f01474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ReconstructNormal", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::DepthRaycastResult (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, float_t, ::Meta::XR::Eye, bool)>(&::Meta::XR::EnvironmentDepthRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9efef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.ReconstructNormalAtWorldPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Meta::XR::EnvironmentDepthRaycaster::ReconstructNormalAtWorldPos)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9f01728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ReconstructNormalAtWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Ray, float_t, ::Meta::XR::Eye, bool)>(&::Meta::XR::EnvironmentDepthRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9efeff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.ClosestPointOnFirstRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Meta::XR::EnvironmentDepthRaycaster::ClosestPointOnFirstRay)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f01c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ClosestPointOnFirstRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.IsInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2Int)>(&::Meta::XR::EnvironmentDepthRaycaster::IsInBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f01d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.RaycastInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::DepthRaycastResult (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, bool)>(&::Meta::XR::EnvironmentDepthRaycaster::RaycastInternal)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x9f01d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"RaycastInternal", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster.ClampRayOriginToCamFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Ray>, ::ArrayW<::UnityEngine::Plane>, ::by_ref<float_t>)>(&::Meta::XR::EnvironmentDepthRaycaster::ClampRayOriginToCamFrustumPlanes)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9f022c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ClampRayOriginToCamFrustumPlanes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::EnvironmentDepthRaycaster::*)()>(&::Meta::XR::EnvironmentDepthRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9f0255c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster._ReconstructNormal_g__ClosestDerivativeToAdjacentExtrapolations_36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::EnvironmentDepthRaycaster::*)(::UnityEngine::Vector2Int, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0>)>(&::Meta::XR::EnvironmentDepthRaycaster::_ReconstructNormal_g__ClosestDerivativeToAdjacentExtrapolations_36_0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9f0160c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::EnvironmentDepthRaycaster._Raycast_g__GetRaycastResultForEye_39_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> (::Meta::XR::EnvironmentDepthRaycaster::*)(int32_t, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0>)>(&::Meta::XR::EnvironmentDepthRaycaster::_Raycast_g__GetRaycastResultForEye_39_0)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9f01a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"<Raycast>g__GetRaycastResultForEye|39_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shader;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shader = value;
}
constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get_depthManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthManager;
}
constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get_depthManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthManager;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set_depthManager(::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthManager = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__computeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__computeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeBuffer;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__computeBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeBuffer = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__depthTexturePixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthTexturePixels;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__depthTexturePixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthTexturePixels;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__depthTexturePixels(::Unity::Collections::NativeArray_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthTexturePixels = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__gpuRequestBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gpuRequestBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__gpuRequestBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gpuRequestBuffer;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__gpuRequestBuffer(::Unity::Collections::NativeArray_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gpuRequestBuffer = value;
}
constexpr bool& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__isDepthTextureAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDepthTextureAvailable;
}
constexpr bool const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__isDepthTextureAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDepthTextureAvailable;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__isDepthTextureAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDepthTextureAvailable = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__currentGpuReadbackRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGpuReadbackRequest;
}
constexpr ::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__currentGpuReadbackRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGpuReadbackRequest;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__currentGpuReadbackRequest(::System::Nullable_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGpuReadbackRequest = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__updatedDepthTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatedDepthTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__updatedDepthTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatedDepthTexture;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__updatedDepthTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updatedDepthTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixVP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixVP;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixVP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixVP;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__matrixVP(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matrixVP = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixV;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixV;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__matrixV(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matrixV = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixVP_inv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixVP_inv;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__matrixVP_inv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matrixVP_inv;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__matrixVP_inv(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matrixVP_inv = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Plane>>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__camFrustumPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camFrustumPlanes;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Plane>> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__camFrustumPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camFrustumPlanes;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__camFrustumPlanes(::ArrayW<::ArrayW<::UnityEngine::Plane>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camFrustumPlanes = value;
}
constexpr ::UnityEngine::Vector4& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__EnvironmentDepthZBufferParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentDepthZBufferParams;
}
constexpr ::UnityEngine::Vector4 const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__EnvironmentDepthZBufferParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentDepthZBufferParams;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__EnvironmentDepthZBufferParams(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentDepthZBufferParams = value;
}
constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__depthFrameDesc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthFrameDesc;
}
constexpr ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc> const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__depthFrameDesc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthFrameDesc;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__depthFrameDesc(::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthFrameDesc = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__worldToTrackingSpaceMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldToTrackingSpaceMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__worldToTrackingSpaceMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldToTrackingSpaceMatrix;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__worldToTrackingSpaceMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldToTrackingSpaceMatrix = value;
}
constexpr bool& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__warmUpRaycast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____warmUpRaycast;
}
constexpr bool const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__warmUpRaycast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____warmUpRaycast;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__warmUpRaycast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____warmUpRaycast = value;
}
constexpr int32_t& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__currentEyeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEyeIndex;
}
constexpr int32_t const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__currentEyeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEyeIndex;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__currentEyeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentEyeIndex = value;
}
constexpr Il2CppObject*& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__xrDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrDisplay;
}
constexpr Il2CppObject* const& Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_get__xrDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrDisplay;
}
constexpr void Meta::XR::EnvironmentDepthRaycaster::__cordl_internal_set__xrDisplay(Il2CppObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrDisplay = value;
}
inline void Meta::XR::EnvironmentDepthRaycaster::setStaticF_EnvironmentDepthTextureId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EnvironmentDepthTextureId", ::Meta::XR::EnvironmentDepthRaycaster*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepthRaycaster::getStaticF_EnvironmentDepthTextureId()  {
return ::cordl_internals::getStaticField<int32_t, "EnvironmentDepthTextureId", ::Meta::XR::EnvironmentDepthRaycaster*>();
}
inline void Meta::XR::EnvironmentDepthRaycaster::setStaticF_EnvironmentDepthTextureSizeId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EnvironmentDepthTextureSizeId", ::Meta::XR::EnvironmentDepthRaycaster*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepthRaycaster::getStaticF_EnvironmentDepthTextureSizeId()  {
return ::cordl_internals::getStaticField<int32_t, "EnvironmentDepthTextureSizeId", ::Meta::XR::EnvironmentDepthRaycaster*>();
}
inline void Meta::XR::EnvironmentDepthRaycaster::setStaticF_CopiedDepthTextureId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CopiedDepthTextureId", ::Meta::XR::EnvironmentDepthRaycaster*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepthRaycaster::getStaticF_CopiedDepthTextureId()  {
return ::cordl_internals::getStaticField<int32_t, "CopiedDepthTextureId", ::Meta::XR::EnvironmentDepthRaycaster*>();
}
inline void Meta::XR::EnvironmentDepthRaycaster::setStaticF_EnvironmentDepthZBufferParamsId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EnvironmentDepthZBufferParamsId", ::Meta::XR::EnvironmentDepthRaycaster*>(std::forward<int32_t>(value));
}
inline int32_t Meta::XR::EnvironmentDepthRaycaster::getStaticF_EnvironmentDepthZBufferParamsId()  {
return ::cordl_internals::getStaticField<int32_t, "EnvironmentDepthZBufferParamsId", ::Meta::XR::EnvironmentDepthRaycaster*>();
}
inline void Meta::XR::EnvironmentDepthRaycaster::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::OnDepthTextureUpdate(::UnityEngine::RenderTexture*  updatedDepthTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDepthTextureUpdate", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatedDepthTexture);
}
inline void Meta::XR::EnvironmentDepthRaycaster::InvalidateDepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"InvalidateDepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::CreateTextureCopyRequestIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"CreateTextureCopyRequestIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::UpdateTextureCopyRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"UpdateTextureCopyRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::EnvironmentDepthRaycaster::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Meta::XR::EnvironmentDepthRaycaster::WorldPosToNonNormalizedTextureCoords(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosToNonNormalizedTextureCoords", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, worldPos);
}
inline float_t Meta::XR::EnvironmentDepthRaycaster::SampleDepthTexture(::UnityEngine::Vector2Int  texCoord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"SampleDepthTexture", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, texCoord);
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepthRaycaster::WorldPosAtDepthTexCoord(::UnityEngine::Vector2Int  texCoord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosAtDepthTexCoord", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, texCoord);
}
inline float_t Meta::XR::EnvironmentDepthRaycaster::WorldPosToLinearDepth(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"WorldPosToLinearDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPos);
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepthRaycaster::ReconstructNormal(::UnityEngine::Vector2Int  texCoord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ReconstructNormal", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, texCoord);
}
inline ::Meta::XR::DepthRaycastResult Meta::XR::EnvironmentDepthRaycaster::Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  normalConfidence, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  allowOccludedRayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::DepthRaycastResult>(this, ___internal_method, ray, position, normal, normalConfidence, maxDistance, eye, allowOccludedRayOrigin);
}
inline bool Meta::XR::EnvironmentDepthRaycaster::ReconstructNormalAtWorldPos(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  normalConfidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ReconstructNormalAtWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, normal, normalConfidence);
}
inline ::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> Meta::XR::EnvironmentDepthRaycaster::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  allowOccludedRayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::Eye>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t>>(this, ___internal_method, ray, maxDistance, eye, allowOccludedRayOrigin);
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepthRaycaster::ClosestPointOnFirstRay(::UnityEngine::Vector3  ray1Pos, ::UnityEngine::Vector3  ray1Dir, ::UnityEngine::Vector3  ray2Pos, ::UnityEngine::Vector3  ray2Dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ClosestPointOnFirstRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ray1Pos, ray1Dir, ray2Pos, ray2Dir);
}
inline bool Meta::XR::EnvironmentDepthRaycaster::IsInBounds(::UnityEngine::Vector2Int  texCoord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, texCoord);
}
inline ::Meta::XR::DepthRaycastResult Meta::XR::EnvironmentDepthRaycaster::RaycastInternal(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Vector3>  position, float_t  maxDistance, int32_t  eyeIndex, bool  allowOccludedRayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"RaycastInternal", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::DepthRaycastResult>(this, ___internal_method, ray, position, maxDistance, eyeIndex, allowOccludedRayOrigin);
}
inline bool Meta::XR::EnvironmentDepthRaycaster::ClampRayOriginToCamFrustumPlanes(::by_ref<::UnityEngine::Ray>  ray, ::ArrayW<::UnityEngine::Plane>  planes, ::by_ref<float_t>  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"ClampRayOriginToCamFrustumPlanes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, planes, maxDistance);
}
inline void Meta::XR::EnvironmentDepthRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Meta::XR::EnvironmentDepthRaycaster::_ReconstructNormal_g__ClosestDerivativeToAdjacentExtrapolations_36_0(::UnityEngine::Vector2Int  axis, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass36_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, axis, _cordl_fixed_empty_name_whitespace);
}
inline ::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t> Meta::XR::EnvironmentDepthRaycaster::_Raycast_g__GetRaycastResultForEye_39_0(int32_t  index, ::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::EnvironmentDepthRaycaster*>(),
                        {"<Raycast>g__GetRaycastResultForEye|39_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EnvironmentDepthRaycaster___c__DisplayClass39_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::Meta::XR::DepthRaycastResult,::UnityEngine::Vector3,int32_t>>(this, ___internal_method, index, _cordl_fixed_empty_name_whitespace);
}
inline ::Meta::XR::EnvironmentDepthRaycaster* Meta::XR::EnvironmentDepthRaycaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::EnvironmentDepthRaycaster*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepthRaycaster::EnvironmentDepthRaycaster()   {
}

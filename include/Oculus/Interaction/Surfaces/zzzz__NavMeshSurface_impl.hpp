#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/NavMeshSurface.hpp"
#include "UnityEngine/AI/zzzz__NavMeshQueryFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__NavMeshSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.get_SnapDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::get_SnapDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_SnapDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.set_SnapDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::set_SnapDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_SnapDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.get_VoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::get_VoxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_VoxelSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.set_VoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::set_VoxelSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4b6e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_VoxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.get_CalculateHitNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::get_CalculateHitNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_CalculateHitNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.set_CalculateHitNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(bool)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::set_CalculateHitNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_CalculateHitNormals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4b6e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4b6ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::Raycast)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xa4b6fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.AlignHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::AlignHits)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa4b74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"AlignHits", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.SnapSurfaceHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::SnapSurfaceHit)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4b76a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"SnapSurfaceHit", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.GetNavMeshNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::GetNavMeshNormal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa4b7370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"GetNavMeshNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.OpenUnityNavigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::OpenUnityNavigation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b79dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"OpenUnityNavigation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.InjectOptionalAreaName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::StringW)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::InjectOptionalAreaName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b79e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"InjectOptionalAreaName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.InjectOptionalAgentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(int32_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::InjectOptionalAgentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b79e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"InjectOptionalAgentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::NavMeshSurface::*)()>(&::Oculus::Interaction::Surfaces::NavMeshSurface::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4b79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b7a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b7a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface._GetNavMeshNormal_g__CalculateTangent_25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::_GetNavMeshNormal_g__CalculateTangent_25_0)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa4b7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"<GetNavMeshNormal>g__CalculateTangent|25_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::NavMeshSurface._GetNavMeshNormal_g__CalculateStep_25_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::NavMeshSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Surfaces::NavMeshSurface::_GetNavMeshNormal_g__CalculateStep_25_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4b7a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"<GetNavMeshNormal>g__CalculateStep|25_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__areaName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areaName;
}
constexpr ::StringW const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__areaName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areaName;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__areaName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____areaName = value;
}
constexpr int32_t& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__agentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____agentIndex;
}
constexpr int32_t const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__agentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____agentIndex;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__agentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____agentIndex = value;
}
constexpr float_t& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__snapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapDistance;
}
constexpr float_t const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__snapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapDistance;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__snapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapDistance = value;
}
constexpr float_t& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__voxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelSize;
}
constexpr float_t const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__voxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelSize;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__voxelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voxelSize = value;
}
constexpr bool& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__calculateNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculateNormals;
}
constexpr bool const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__calculateNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calculateNormals;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__calculateNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calculateNormals = value;
}
constexpr ::StringW& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__openUnityNavigation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openUnityNavigation;
}
constexpr ::StringW const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__openUnityNavigation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openUnityNavigation;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__openUnityNavigation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openUnityNavigation = value;
}
constexpr int32_t& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__areaMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areaMask;
}
constexpr int32_t const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__areaMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areaMask;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__areaMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____areaMask = value;
}
constexpr ::UnityEngine::AI::NavMeshQueryFilter& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__navMeshQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshQuery;
}
constexpr ::UnityEngine::AI::NavMeshQueryFilter const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__navMeshQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navMeshQuery;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__navMeshQuery(::UnityEngine::AI::NavMeshQueryFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navMeshQuery = value;
}
constexpr bool& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Surfaces::NavMeshSurface::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Surfaces::NavMeshSurface::get_SnapDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_SnapDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::set_SnapDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_SnapDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Surfaces::NavMeshSurface::get_VoxelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_VoxelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::set_VoxelSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_VoxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::get_CalculateHitNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_CalculateHitNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::set_CalculateHitNormals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"set_CalculateHitNormals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::NavMeshSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, surfaceHit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, surfaceHit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::AlignHits(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, ::UnityEngine::Ray  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"AlignHits", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, normal, ray, surfaceHit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::SnapSurfaceHit(::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, ::UnityEngine::Vector3  navMeshPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"SnapSurfaceHit", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, surfaceHit, navMeshPoint);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::NavMeshSurface::GetNavMeshNormal(::UnityEngine::Vector3  navMeshPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"GetNavMeshNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, navMeshPoint);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::OpenUnityNavigation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"OpenUnityNavigation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::InjectOptionalAreaName(::StringW  areaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"InjectOptionalAreaName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, areaName);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::InjectOptionalAgentIndex(int32_t  agentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"InjectOptionalAgentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agentIndex);
}
inline void Oculus::Interaction::Surfaces::NavMeshSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::NavMeshSurface::_GetNavMeshNormal_g__CalculateTangent_25_0(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  centre)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"<GetNavMeshNormal>g__CalculateTangent|25_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, direction, centre);
}
inline bool Oculus::Interaction::Surfaces::NavMeshSurface::_GetNavMeshNormal_g__CalculateStep_25_1(::UnityEngine::Vector3  centre, ::UnityEngine::Vector3  stepDir, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::NavMeshSurface*>(),
                        {"<GetNavMeshNormal>g__CalculateStep|25_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, centre, stepDir, value);
}
inline ::Oculus::Interaction::Surfaces::NavMeshSurface* Oculus::Interaction::Surfaces::NavMeshSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::NavMeshSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::NavMeshSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::NavMeshSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::NavMeshSurface::NavMeshSurface()   {
}

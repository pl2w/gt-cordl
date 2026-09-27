#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMesh.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshDataInstance_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshData_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshHit_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkData_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkInstance_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshQueryFilter_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_def.hpp"
#include "UnityEngine/AI/zzzz__NavMesh_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.ClearPreUpdateListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AI::NavMesh::ClearPreUpdateListeners)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5205dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"ClearPreUpdateListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.Internal_CallOnNavMeshPreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb520630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Internal_CallOnNavMeshPreUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, int32_t)>(&::UnityEngine::AI::NavMesh::Raycast)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb520694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::AI::NavMeshPath*)>(&::UnityEngine::AI::NavMesh::CalculatePath)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb520758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::UnityEngine::AI::NavMeshPath*)>(&::UnityEngine::AI::NavMesh::CalculatePathInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb520804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePathInternal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, float_t, int32_t)>(&::UnityEngine::AI::NavMesh::SamplePosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb5208d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetAreaFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::AI::NavMesh::GetAreaFromName)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb5209a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetAreaFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculateTriangulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshTriangulation (*)()>(&::UnityEngine::AI::NavMesh::CalculateTriangulation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb520b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculateTriangulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddNavMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshDataInstance (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::AI::NavMesh::AddNavMeshData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb520be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.IsValidNavMeshDataHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::AI::NavMesh::IsValidNavMeshDataHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsValidNavMeshDataHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.IsValidLinkHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::AI::NavMesh::IsValidLinkHandle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5203b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsValidLinkHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.InternalSetOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::InternalSetOwner)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5202dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"InternalSetOwner", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.InternalSetLinkOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::InternalSetLinkOwner)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb520578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"InternalSetLinkOwner", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddNavMeshDataTransformedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb520cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshDataTransformedInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.RemoveNavMeshDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::AI::NavMesh::RemoveNavMeshDataInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb52018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveNavMeshDataInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshLinkInstance (*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::AI::NavMesh::AddLink)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb520de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLink", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkData>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.RemoveLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshLinkInstance)>(&::UnityEngine::AI::NavMesh::RemoveLink)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveLink", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SetLinkActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshLinkInstance, bool)>(&::UnityEngine::AI::NavMesh::SetLinkActive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb520eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetLinkActive", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.IsLinkOccupied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AI::NavMeshLinkInstance)>(&::UnityEngine::AI::NavMesh::IsLinkOccupied)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsLinkOccupied", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.IsLinkValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AI::NavMeshLinkInstance)>(&::UnityEngine::AI::NavMesh::IsLinkValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsLinkValid", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SetLinkOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AI::NavMeshLinkInstance, ::UnityEngine::Object*)>(&::UnityEngine::AI::NavMesh::SetLinkOwner)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb520fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetLinkOwner", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddLinkInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::AI::NavMesh::AddLinkInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb520e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLinkInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkData>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.RemoveLinkInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::AI::NavMesh::RemoveLinkInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveLinkInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.IsOffMeshConnectionOccupied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::AI::NavMesh::IsOffMeshConnectionOccupied)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsOffMeshConnectionOccupied", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SetOffMeshConnectionActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::AI::NavMesh::SetOffMeshConnectionActive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb520ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetOffMeshConnectionActive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, float_t, ::UnityEngine::AI::NavMeshQueryFilter)>(&::UnityEngine::AI::NavMesh::SamplePosition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb52114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshQueryFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePositionFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, float_t, int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::SamplePositionFilter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5211c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePositionFilter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, ::UnityEngine::AI::NavMeshQueryFilter)>(&::UnityEngine::AI::NavMesh::Raycast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5212ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<::UnityEngine::AI::NavMeshQueryFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.RaycastFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::AI::NavMeshHit>, int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::RaycastFilter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb5212b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RaycastFilter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CreateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (*)()>(&::UnityEngine::AI::NavMesh::CreateSettings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb52139c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CreateSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (*)(int32_t)>(&::UnityEngine::AI::NavMesh::GetSettingsByID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb52143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AI::NavMesh::GetSettingsCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5214ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshBuildSettings (*)(int32_t)>(&::UnityEngine::AI::NavMesh::GetSettingsByIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb521514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsNameFromID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::AI::NavMesh::GetSettingsNameFromID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb5215c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsNameFromID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.Raycast_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::AI::NavMeshHit>, int32_t)>(&::UnityEngine::AI::NavMesh::Raycast_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5206fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculatePathInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, int32_t, ::System::IntPtr)>(&::UnityEngine::AI::NavMesh::CalculatePathInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb520878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePathInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePosition_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::AI::NavMeshHit>, float_t, int32_t)>(&::UnityEngine::AI::NavMesh::SamplePosition_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb520944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetAreaFromName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AI::NavMesh::GetAreaFromName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetAreaFromName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CalculateTriangulation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AI::NavMeshTriangulation>)>(&::UnityEngine::AI::NavMesh::CalculateTriangulation_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb520bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculateTriangulation_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshTriangulation>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddNavMeshDataTransformedInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb520d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshDataTransformedInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.AddLinkInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::AI::NavMeshLinkData>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::AI::NavMesh::AddLinkInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5210f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLinkInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshLinkData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.SamplePositionFilter_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::AI::NavMeshHit>, float_t, int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::SamplePositionFilter_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb521240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePositionFilter_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.RaycastFilter_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::AI::NavMeshHit>, int32_t, int32_t)>(&::UnityEngine::AI::NavMesh::RaycastFilter_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb521330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RaycastFilter_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.CreateSettings_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>)>(&::UnityEngine::AI::NavMesh::CreateSettings_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb521400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CreateSettings_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsByID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>)>(&::UnityEngine::AI::NavMesh::GetSettingsByID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5214a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByID_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsByIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>)>(&::UnityEngine::AI::NavMesh::GetSettingsByIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb521580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh.GetSettingsNameFromID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AI::NavMesh::GetSettingsNameFromID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb521690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsNameFromID_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh::setStaticF_onPreUpdate(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::UnityEngine::AI::NavMesh*>(std::forward<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(value));
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh::getStaticF_onPreUpdate()  {
return ::cordl_internals::getStaticField<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "onPreUpdate", ::UnityEngine::AI::NavMesh*>();
}
inline void UnityEngine::AI::NavMesh::ClearPreUpdateListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"ClearPreUpdateListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMesh::Internal_CallOnNavMeshPreUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Internal_CallOnNavMeshPreUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::AI::NavMesh::Raycast(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  areaMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, hit, areaMask);
}
inline bool UnityEngine::AI::NavMesh::CalculatePath(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, int32_t  areaMask, ::UnityEngine::AI::NavMeshPath*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::CalculatePathInternal(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, int32_t  areaMask, ::UnityEngine::AI::NavMeshPath*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePathInternal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::SamplePosition(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  areaMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, areaMask);
}
inline int32_t UnityEngine::AI::NavMesh::GetAreaFromName(::StringW  areaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetAreaFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, areaName);
}
inline ::UnityEngine::AI::NavMeshTriangulation UnityEngine::AI::NavMesh::CalculateTriangulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculateTriangulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshTriangulation>(nullptr, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshDataInstance UnityEngine::AI::NavMesh::AddNavMeshData(::UnityEngine::AI::NavMeshData*  navMeshData, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshDataInstance>(nullptr, ___internal_method, navMeshData, position, rotation);
}
inline bool UnityEngine::AI::NavMesh::IsValidNavMeshDataHandle(int32_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsValidNavMeshDataHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AI::NavMesh::IsValidLinkHandle(int32_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsValidLinkHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AI::NavMesh::InternalSetOwner(int32_t  dataID, int32_t  ownerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"InternalSetOwner", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dataID, ownerID);
}
inline bool UnityEngine::AI::NavMesh::InternalSetLinkOwner(int32_t  linkID, int32_t  ownerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"InternalSetLinkOwner", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, linkID, ownerID);
}
inline int32_t UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData*  navMeshData, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshDataTransformedInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, navMeshData, position, rotation);
}
inline void UnityEngine::AI::NavMesh::RemoveNavMeshDataInternal(int32_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveNavMeshDataInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::AI::NavMeshLinkInstance UnityEngine::AI::NavMesh::AddLink(::UnityEngine::AI::NavMeshLinkData  link, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLink", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkData>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshLinkInstance>(nullptr, ___internal_method, link, position, rotation);
}
inline void UnityEngine::AI::NavMesh::RemoveLink(::UnityEngine::AI::NavMeshLinkInstance  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveLink", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::AI::NavMesh::SetLinkActive(::UnityEngine::AI::NavMeshLinkInstance  handle, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetLinkActive", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline bool UnityEngine::AI::NavMesh::IsLinkOccupied(::UnityEngine::AI::NavMeshLinkInstance  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsLinkOccupied", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AI::NavMesh::IsLinkValid(::UnityEngine::AI::NavMeshLinkInstance  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsLinkValid", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::AI::NavMesh::SetLinkOwner(::UnityEngine::AI::NavMeshLinkInstance  handle, ::UnityEngine::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetLinkOwner", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkInstance>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, owner);
}
inline int32_t UnityEngine::AI::NavMesh::AddLinkInternal(::UnityEngine::AI::NavMeshLinkData  link, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLinkInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshLinkData>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, link, position, rotation);
}
inline void UnityEngine::AI::NavMesh::RemoveLinkInternal(int32_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RemoveLinkInternal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::AI::NavMesh::IsOffMeshConnectionOccupied(int32_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"IsOffMeshConnectionOccupied", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::AI::NavMesh::SetOffMeshConnectionActive(int32_t  linkHandle, bool  activated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SetOffMeshConnectionActive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, linkHandle, activated);
}
inline bool UnityEngine::AI::NavMesh::SamplePosition(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, ::UnityEngine::AI::NavMeshQueryFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshQueryFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, filter);
}
inline bool UnityEngine::AI::NavMesh::SamplePositionFilter(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  type, int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePositionFilter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, type, mask);
}
inline bool UnityEngine::AI::NavMesh::Raycast(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, ::UnityEngine::AI::NavMeshQueryFilter  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<::UnityEngine::AI::NavMeshQueryFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, hit, filter);
}
inline bool UnityEngine::AI::NavMesh::RaycastFilter(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  type, int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RaycastFilter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, hit, type, mask);
}
inline ::UnityEngine::AI::NavMeshBuildSettings UnityEngine::AI::NavMesh::CreateSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CreateSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(nullptr, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshBuildSettings UnityEngine::AI::NavMesh::GetSettingsByID(int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(nullptr, ___internal_method, agentTypeID);
}
inline int32_t UnityEngine::AI::NavMesh::GetSettingsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshBuildSettings UnityEngine::AI::NavMesh::GetSettingsByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshBuildSettings>(nullptr, ___internal_method, index);
}
inline ::StringW UnityEngine::AI::NavMesh::GetSettingsNameFromID(int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsNameFromID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, agentTypeID);
}
inline bool UnityEngine::AI::NavMesh::Raycast_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  areaMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"Raycast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, hit, areaMask);
}
inline bool UnityEngine::AI::NavMesh::CalculatePathInternal_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, int32_t  areaMask, ::System::IntPtr  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculatePathInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, areaMask, path);
}
inline bool UnityEngine::AI::NavMesh::SamplePosition_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  areaMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePosition_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, areaMask);
}
inline int32_t UnityEngine::AI::NavMesh::GetAreaFromName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  areaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetAreaFromName_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, areaName);
}
inline void UnityEngine::AI::NavMesh::CalculateTriangulation_Injected(::by_ref<::UnityEngine::AI::NavMeshTriangulation>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CalculateTriangulation_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshTriangulation>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline int32_t UnityEngine::AI::NavMesh::AddNavMeshDataTransformedInternal_Injected(::System::IntPtr  navMeshData, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddNavMeshDataTransformedInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, navMeshData, position, rotation);
}
inline int32_t UnityEngine::AI::NavMesh::AddLinkInternal_Injected(::by_ref<::UnityEngine::AI::NavMeshLinkData>  link, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"AddLinkInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshLinkData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, link, position, rotation);
}
inline bool UnityEngine::AI::NavMesh::SamplePositionFilter_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  type, int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"SamplePositionFilter_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, hit, maxDistance, type, mask);
}
inline bool UnityEngine::AI::NavMesh::RaycastFilter_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  type, int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"RaycastFilter_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourcePosition, targetPosition, hit, type, mask);
}
inline void UnityEngine::AI::NavMesh::CreateSettings_Injected(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"CreateSettings_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::AI::NavMesh::GetSettingsByID_Injected(int32_t  agentTypeID, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByID_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, agentTypeID, ret);
}
inline void UnityEngine::AI::NavMesh::GetSettingsByIndex_Injected(int32_t  index, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsByIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, ret);
}
inline void UnityEngine::AI::NavMesh::GetSettingsNameFromID_Injected(int32_t  agentTypeID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh*>(),
                        {"GetSettingsNameFromID_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, agentTypeID, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh::NavMesh()   {
}
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb5216d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::*)()>(&::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb521770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(),
                    {::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate()   {
}

#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Rigid/Hull.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxDef_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxFitMethod_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleDef_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__HullType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IHull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Sphere_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Triangle_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.get_NumSelectedTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::get_NumSelectedTriangles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadd9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_NumSelectedTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.get_CachedTriangleVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::get_CachedTriangleVertices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadd99c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_CachedTriangleVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.set_CachedTriangleVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::Rigid::Hull::set_CachedTriangleVertices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd9a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"set_CachedTriangleVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::Destroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadcdacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.ContainsAutoMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Rigid::Hull::*)(::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::ContainsAutoMesh)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xadd2730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ContainsAutoMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.IsTriangleSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Rigid::Hull::*)(int32_t, ::UnityEngine::Renderer*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::IsTriangleSelected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadd9a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"IsTriangleSelected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GetSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::GetSelectedFaces)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadc88a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.ClearSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::ClearSelectedFaces)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd9ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ClearSelectedFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.AddToSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(int32_t, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::AddToSelection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xadd9b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"AddToSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.RemoveFromSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(int32_t, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::RemoveFromSelection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd9c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"RemoveFromSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.SetSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::SetSelectedFaces)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadd9ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"SetSelectedFaces", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GetSelectedFaceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::Rigid::Hull::*)(int32_t)>(&::Technie::PhysicsCreator::Rigid::Hull::GetSelectedFaceIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadd9d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedFaceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.FindConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<int32_t>>, bool)>(&::Technie::PhysicsCreator::Rigid::Hull::FindConvexHull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadc357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.FindSelectedTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>* (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::Rigid::Hull::FindSelectedTriangles)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xadc549c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindSelectedTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.FindTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<int32_t>>)>(&::Technie::PhysicsCreator::Rigid::Hull::FindTriangles)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0xadc6658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GetSelectedVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::Rigid::Hull::GetSelectedVertices)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0xadc41dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GenerateCollisionMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Mesh*>, float_t)>(&::Technie::PhysicsCreator::Rigid::Hull::GenerateCollisionMesh)> {
  constexpr static std::size_t size = 0x11d8;
  constexpr static std::size_t addrs = 0xadd9d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateCollisionMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.ExtractUniqueVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::Rigid::Hull::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::Rigid::Hull::ExtractUniqueVertices)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xaddb704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ExtractUniqueVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::Rigid::Hull::Contains)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaddc140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GenerateConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Rigid::Hull::GenerateConvexHull)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xaddaf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateConvexHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.GenerateFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, float_t)>(&::Technie::PhysicsCreator::Rigid::Hull::GenerateFace)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0xaddb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.CalcRequiredArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Technie::PhysicsCreator::Rigid::Hull::CalcRequiredArea)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xaddbef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"CalcRequiredArea", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull.CalcPrimaryAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, bool)>(&::Technie::PhysicsCreator::Rigid::Hull::CalcPrimaryAxis)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0xaddba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"CalcPrimaryAxis", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Rigid::Hull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Rigid::Hull::*)()>(&::Technie::PhysicsCreator::Rigid::Hull::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xadcd8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVisible = value;
}
constexpr ::Technie::PhysicsCreator::HullType& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Technie::PhysicsCreator::HullType const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_type(::Technie::PhysicsCreator::HullType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityEngine::Color& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_colour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colour;
}
constexpr ::UnityEngine::Color const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_colour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colour;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_colour(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colour = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_enableInflation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInflation;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_enableInflation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableInflation;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_enableInflation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableInflation = value;
}
constexpr float_t& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_inflationAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inflationAmount;
}
constexpr float_t const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_inflationAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inflationAmount;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_inflationAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inflationAmount = value;
}
constexpr ::Technie::PhysicsCreator::BoxFitMethod& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_boxFitMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxFitMethod;
}
constexpr ::Technie::PhysicsCreator::BoxFitMethod const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_boxFitMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxFitMethod;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_boxFitMethod(::Technie::PhysicsCreator::BoxFitMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boxFitMethod = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTrigger;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTrigger;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_isTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTrigger = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isChildCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChildCollider;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_isChildCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChildCollider;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_isChildCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isChildCollider = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_selectedFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedFaces;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_selectedFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedFaces;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_selectedFaces(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedFaces = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_cachedTriangleVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTriangleVertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_cachedTriangleVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTriangleVertices;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_cachedTriangleVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedTriangleVertices = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionMesh;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_collisionMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionMesh = value;
}
constexpr ::Technie::PhysicsCreator::BoxDef& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionBox;
}
constexpr ::Technie::PhysicsCreator::BoxDef const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionBox;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_collisionBox(::Technie::PhysicsCreator::BoxDef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionBox = value;
}
constexpr ::Technie::PhysicsCreator::Sphere*& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionSphere;
}
constexpr ::Technie::PhysicsCreator::Sphere* const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionSphere;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_collisionSphere(::Technie::PhysicsCreator::Sphere*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionSphere = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceCollisionMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceCollisionMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceCollisionMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceCollisionMesh;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_faceCollisionMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceCollisionMesh = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceBoxCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBoxCenter;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceBoxCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBoxCenter;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_faceBoxCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceBoxCenter = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceBoxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBoxSize;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceBoxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBoxSize;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_faceBoxSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceBoxSize = value;
}
constexpr ::UnityEngine::Quaternion& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceAsBoxRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceAsBoxRotation;
}
constexpr ::UnityEngine::Quaternion const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_faceAsBoxRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceAsBoxRotation;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_faceAsBoxRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceAsBoxRotation = value;
}
constexpr ::Technie::PhysicsCreator::CapsuleDef& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionCapsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCapsule;
}
constexpr ::Technie::PhysicsCreator::CapsuleDef const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_collisionCapsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCapsule;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_collisionCapsule(::Technie::PhysicsCreator::CapsuleDef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionCapsule = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_autoMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_autoMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoMeshes;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_autoMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoMeshes = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_hasColliderError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasColliderError;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_hasColliderError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasColliderError;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_hasColliderError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasColliderError = value;
}
constexpr int32_t& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_numColliderFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numColliderFaces;
}
constexpr int32_t const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_numColliderFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numColliderFaces;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_numColliderFaces(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numColliderFaces = value;
}
constexpr bool& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_noInputError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noInputError;
}
constexpr bool const& Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_get_noInputError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noInputError;
}
constexpr void Technie::PhysicsCreator::Rigid::Hull::__cordl_internal_set_noInputError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noInputError = value;
}
inline ::StringW Technie::PhysicsCreator::Rigid::Hull::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::Rigid::Hull::get_NumSelectedTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_NumSelectedTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::Rigid::Hull::get_CachedTriangleVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"get_CachedTriangleVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Rigid::Hull::set_CachedTriangleVertices(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"set_CachedTriangleVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Technie::PhysicsCreator::Rigid::Hull::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::Rigid::Hull::ContainsAutoMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ContainsAutoMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline bool Technie::PhysicsCreator::Rigid::Hull::IsTriangleSelected(int32_t  triIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  targetMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"IsTriangleSelected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triIndex, renderer, targetMesh);
}
inline ::ArrayW<int32_t> Technie::PhysicsCreator::Rigid::Hull::GetSelectedFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Rigid::Hull::ClearSelectedFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ClearSelectedFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Rigid::Hull::AddToSelection(int32_t  newTriangleIndex, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"AddToSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTriangleIndex, srcMesh);
}
inline void Technie::PhysicsCreator::Rigid::Hull::RemoveFromSelection(int32_t  existingTriangleIndex, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"RemoveFromSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingTriangleIndex, srcMesh);
}
inline void Technie::PhysicsCreator::Rigid::Hull::SetSelectedFaces(::System::Collections::Generic::List_1<int32_t>*  newSelectedFaceIndices, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"SetSelectedFaces", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectedFaceIndices, srcMesh);
}
inline int32_t Technie::PhysicsCreator::Rigid::Hull::GetSelectedFaceIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedFaceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void Technie::PhysicsCreator::Rigid::Hull::FindConvexHull(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices, bool  showErrorInLog)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindConvexHull", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshVertices, meshIndices, hullVertices, hullIndices, showErrorInLog);
}
inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>* Technie::PhysicsCreator::Rigid::Hull::FindSelectedTriangles(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindSelectedTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*>(this, ___internal_method, meshVertices, meshIndices);
}
inline void Technie::PhysicsCreator::Rigid::Hull::FindTriangles(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"FindTriangles", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshVertices, meshIndices, hullVertices, hullIndices);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::Rigid::Hull::GetSelectedVertices(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GetSelectedVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, meshVertices, meshIndices);
}
inline void Technie::PhysicsCreator::Rigid::Hull::GenerateCollisionMesh(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::ArrayW<::UnityEngine::Mesh*>  autoHulls, float_t  faceThickness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateCollisionMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshVertices, meshIndices, autoHulls, faceThickness);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::Rigid::Hull::ExtractUniqueVertices(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"ExtractUniqueVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, hull, meshVertices, meshIndices);
}
inline bool Technie::PhysicsCreator::Rigid::Hull::Contains(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  list, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, p);
}
inline void Technie::PhysicsCreator::Rigid::Hull::GenerateConvexHull(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::UnityEngine::Mesh*  destMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateConvexHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, meshVertices, meshIndices, destMesh);
}
inline void Technie::PhysicsCreator::Rigid::Hull::GenerateFace(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, float_t  faceThickness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"GenerateFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, meshVertices, meshIndices, faceThickness);
}
inline float_t Technie::PhysicsCreator::Rigid::Hull::CalcRequiredArea(float_t  angleDeg, ::UnityEngine::Vector3  primaryAxis, ::UnityEngine::Vector3  primaryUp, ::ArrayW<::UnityEngine::Vector3>  vertices, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max, ::by_ref<::UnityEngine::Quaternion>  outBasis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"CalcRequiredArea", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angleDeg, primaryAxis, primaryUp, vertices, min, max, outBasis);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::Rigid::Hull::CalcPrimaryAxis(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, bool  snapToAxies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {"CalcPrimaryAxis", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, hull, meshVertices, meshIndices, snapToAxies);
}
inline void Technie::PhysicsCreator::Rigid::Hull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Rigid::Hull*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Rigid::Hull* Technie::PhysicsCreator::Rigid::Hull::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Rigid::Hull*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::IHull"
constexpr  Technie::PhysicsCreator::Rigid::Hull::operator ::Technie::PhysicsCreator::IHull*() noexcept {
return static_cast<::Technie::PhysicsCreator::IHull*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::IHull"
constexpr ::Technie::PhysicsCreator::IHull* Technie::PhysicsCreator::Rigid::Hull::i___Technie__PhysicsCreator__IHull() noexcept {
return static_cast<::Technie::PhysicsCreator::IHull*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Rigid::Hull::Hull()   {
}

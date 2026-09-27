#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/BoneHullData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__ColliderType_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__HullType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneHullData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IHull_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd83f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.get_MinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::get_MinThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_MinThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.get_MaxThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::get_MaxThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd8408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_MaxThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.get_NumSelectedTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::get_NumSelectedTriangles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadd8410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_NumSelectedTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.get_CachedTriangleVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::get_CachedTriangleVertices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadd8458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_CachedTriangleVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.set_CachedTriangleVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::set_CachedTriangleVertices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"set_CachedTriangleVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.IsTriangleSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(int32_t, ::UnityEngine::Renderer*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::IsTriangleSelected)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xadd8518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"IsTriangleSelected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.GetSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::GetSelectedFaces)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadd8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"GetSelectedFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.AddToSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(int32_t, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::AddToSelection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xadd8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"AddToSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.RemoveFromSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(int32_t, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::RemoveFromSelection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadd8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"RemoveFromSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.SetMinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(float_t)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::SetMinThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd89d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetMinThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.SetMaxThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(float_t)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::SetMaxThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd89d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetMaxThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.SetThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(float_t, float_t, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::SetThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd89e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.ClearSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::ClearSelectedFaces)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xadd89e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"ClearSelectedFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.SetSelectedFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)(::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Mesh*)>(&::Technie::PhysicsCreator::Skinned::BoneHullData::SetSelectedFaces)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xadd8a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetSelectedFaces", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData.GetCachedTriangleVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::GetCachedTriangleVertices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadd8b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"GetCachedTriangleVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::Skinned::BoneHullData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Skinned::BoneHullData::*)()>(&::Technie::PhysicsCreator::Skinned::BoneHullData::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xadd8b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_targetBoneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBoneName;
}
constexpr ::StringW const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_targetBoneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetBoneName;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_targetBoneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetBoneName = value;
}
constexpr ::Technie::PhysicsCreator::Skinned::HullType& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Technie::PhysicsCreator::Skinned::HullType const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_type(::Technie::PhysicsCreator::Skinned::HullType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_colliderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderType;
}
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_colliderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderType;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_colliderType(::Technie::PhysicsCreator::Skinned::ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderType = value;
}
constexpr ::UnityEngine::Color& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_previewColour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewColour;
}
constexpr ::UnityEngine::Color const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_previewColour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewColour;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_previewColour(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewColour = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_hullMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_hullMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullMesh;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_hullMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hullMesh = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr bool& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_isTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTrigger;
}
constexpr bool const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_isTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTrigger;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_isTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTrigger = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_minThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThreshold;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_minThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minThreshold;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_minThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minThreshold = value;
}
constexpr float_t& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_maxThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThreshold;
}
constexpr float_t const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_maxThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThreshold;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_maxThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxThreshold = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_selectedFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedFaces;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_selectedFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedFaces;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_selectedFaces(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedFaces = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_cachedTriangleVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTriangleVertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_get_cachedTriangleVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedTriangleVertices;
}
constexpr void Technie::PhysicsCreator::Skinned::BoneHullData::__cordl_internal_set_cachedTriangleVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedTriangleVertices = value;
}
inline ::StringW Technie::PhysicsCreator::Skinned::BoneHullData::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Technie::PhysicsCreator::Skinned::BoneHullData::get_MinThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_MinThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Technie::PhysicsCreator::Skinned::BoneHullData::get_MaxThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_MaxThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::Skinned::BoneHullData::get_NumSelectedTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_NumSelectedTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::Skinned::BoneHullData::get_CachedTriangleVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"get_CachedTriangleVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::set_CachedTriangleVertices(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"set_CachedTriangleVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Technie::PhysicsCreator::Skinned::BoneHullData::IsTriangleSelected(int32_t  triIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  targetMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"IsTriangleSelected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triIndex, renderer, targetMesh);
}
inline ::ArrayW<int32_t> Technie::PhysicsCreator::Skinned::BoneHullData::GetSelectedFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"GetSelectedFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::AddToSelection(int32_t  newTriangleIndex, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"AddToSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTriangleIndex, srcMesh);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::RemoveFromSelection(int32_t  existingTriangleIndex, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"RemoveFromSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingTriangleIndex, srcMesh);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::SetMinThreshold(float_t  newMinThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetMinThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMinThreshold);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::SetMaxThreshold(float_t  newMaxThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetMaxThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaxThreshold);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::SetThresholds(float_t  newMinThreshold, float_t  newMaxThreshold, ::UnityEngine::SkinnedMeshRenderer*  renderer, ::UnityEngine::Mesh*  targetMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMinThreshold, newMaxThreshold, renderer, targetMesh);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::ClearSelectedFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"ClearSelectedFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::SetSelectedFaces(::System::Collections::Generic::List_1<int32_t>*  newSelectedFaceIndices, ::UnityEngine::Mesh*  srcMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"SetSelectedFaces", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectedFaceIndices, srcMesh);
}
inline ::ArrayW<::UnityEngine::Vector3> Technie::PhysicsCreator::Skinned::BoneHullData::GetCachedTriangleVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {"GetCachedTriangleVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::Skinned::BoneHullData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Skinned::BoneHullData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::Skinned::BoneHullData* Technie::PhysicsCreator::Skinned::BoneHullData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Skinned::BoneHullData*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::IHull"
constexpr  Technie::PhysicsCreator::Skinned::BoneHullData::operator ::Technie::PhysicsCreator::IHull*() noexcept {
return static_cast<::Technie::PhysicsCreator::IHull*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::IHull"
constexpr ::Technie::PhysicsCreator::IHull* Technie::PhysicsCreator::Skinned::BoneHullData::i___Technie__PhysicsCreator__IHull() noexcept {
return static_cast<::Technie::PhysicsCreator::IHull*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::BoneHullData::BoneHullData()   {
}

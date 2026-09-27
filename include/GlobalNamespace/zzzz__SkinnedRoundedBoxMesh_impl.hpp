#pragma once
// IWYU pragma private; include "GlobalNamespace/SkinnedRoundedBoxMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SkinnedRoundedBoxMesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkinnedRoundedBoxMesh::*)()>(&::GlobalNamespace::SkinnedRoundedBoxMesh::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4299d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.GenerateArcPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(float_t, float_t, int32_t, float_t, bool)>(&::GlobalNamespace::SkinnedRoundedBoxMesh::GenerateArcPath)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa429f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateArcPath", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.GenerateCylinderAroundPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, float_t)>(&::GlobalNamespace::SkinnedRoundedBoxMesh::GenerateCylinderAroundPath)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa42a084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateCylinderAroundPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.GenerateCylinderIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(int32_t, int32_t)>(&::GlobalNamespace::SkinnedRoundedBoxMesh::GenerateCylinderIndices)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xa42a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateCylinderIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.PushBoneWeigth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*, int32_t, int32_t)>(&::GlobalNamespace::SkinnedRoundedBoxMesh::PushBoneWeigth)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa42a808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"PushBoneWeigth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, int32_t, float_t, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::SkinnedRoundedBoxMesh::GenerateMesh)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0xa429a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh.GenerateMeshFromMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkinnedRoundedBoxMesh::*)()>(&::GlobalNamespace::SkinnedRoundedBoxMesh::GenerateMeshFromMenu)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa42a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateMeshFromMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkinnedRoundedBoxMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkinnedRoundedBoxMesh::*)()>(&::GlobalNamespace::SkinnedRoundedBoxMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42a95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__topLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__topLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topLeft;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__topLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__topRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__topRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topRight;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__topRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__bottomLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__bottomLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomLeft;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__bottomLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__bottomRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__bottomRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomRight;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__bottomRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomRight = value;
}
constexpr int32_t& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cornerSegmentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cornerSegmentCount;
}
constexpr int32_t const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cornerSegmentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cornerSegmentCount;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__cornerSegmentCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cornerSegmentCount = value;
}
constexpr int32_t& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cylinderFaceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderFaceCount;
}
constexpr int32_t const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cylinderFaceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderFaceCount;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__cylinderFaceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinderFaceCount = value;
}
constexpr float_t& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__borderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderRadius;
}
constexpr float_t const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__borderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderRadius;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__borderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderRadius = value;
}
constexpr float_t& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cylinderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderRadius;
}
constexpr float_t const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__cylinderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinderRadius;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__cylinderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinderRadius = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get__skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinnedMeshRenderer = value;
}
constexpr bool& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get_generateOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateOnStart;
}
constexpr bool const& GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_get_generateOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateOnStart;
}
constexpr void GlobalNamespace::SkinnedRoundedBoxMesh::__cordl_internal_set_generateOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generateOnStart = value;
}
inline void GlobalNamespace::SkinnedRoundedBoxMesh::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::SkinnedRoundedBoxMesh::GenerateArcPath(float_t  startAngle, float_t  endAngle, int32_t  steps, float_t  radius, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateArcPath", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, startAngle, endAngle, steps, radius, closed);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::SkinnedRoundedBoxMesh::GenerateCylinderAroundPath(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  path, int32_t  cylinderFaceCount, float_t  cylinderRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateCylinderAroundPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, path, cylinderFaceCount, cylinderRadius);
}
inline ::ArrayW<int32_t> GlobalNamespace::SkinnedRoundedBoxMesh::GenerateCylinderIndices(int32_t  cornerSegmentCount, int32_t  cylinderFaceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateCylinderIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, cornerSegmentCount, cylinderFaceCount);
}
inline void GlobalNamespace::SkinnedRoundedBoxMesh::PushBoneWeigth(int32_t  boneIndex, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*  weights, int32_t  cornerSegmentCount, int32_t  cylinderFaceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"PushBoneWeigth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, boneIndex, weights, cornerSegmentCount, cylinderFaceCount);
}
inline void GlobalNamespace::SkinnedRoundedBoxMesh::GenerateMesh(int32_t  cornerSegmentCount, float_t  borderRadius, int32_t  cylinderFaceCount, float_t  cylinderRadius, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer, ::UnityEngine::Transform*  topLeft, ::UnityEngine::Transform*  topRight, ::UnityEngine::Transform*  bottomLeft, ::UnityEngine::Transform*  bottomRight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cornerSegmentCount, borderRadius, cylinderFaceCount, cylinderRadius, skinnedMeshRenderer, topLeft, topRight, bottomLeft, bottomRight);
}
inline void GlobalNamespace::SkinnedRoundedBoxMesh::GenerateMeshFromMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {"GenerateMeshFromMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkinnedRoundedBoxMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkinnedRoundedBoxMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkinnedRoundedBoxMesh* GlobalNamespace::SkinnedRoundedBoxMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkinnedRoundedBoxMesh*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkinnedRoundedBoxMesh::SkinnedRoundedBoxMesh()   {
}

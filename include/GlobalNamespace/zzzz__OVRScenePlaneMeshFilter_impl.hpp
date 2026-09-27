#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlaneMeshFilter.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_TriangulateBoundaryJob_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::Start)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa639104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter.ScheduleMeshGeneration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::ScheduleMeshGeneration)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0xa6392c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"ScheduleMeshGeneration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::Update)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0xa63986c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter.RequestMeshGeneration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::RequestMeshGeneration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa638d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"RequestMeshGeneration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa639f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa639fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobHandle = value;
}
constexpr bool& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__meshRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRequested;
}
constexpr bool const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__meshRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRequested;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__meshRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshRequested = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__boundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundary;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__boundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundary;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundary = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_get__triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangles;
}
constexpr void GlobalNamespace::OVRScenePlaneMeshFilter::__cordl_internal_set__triangles(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triangles = value;
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::ScheduleMeshGeneration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"ScheduleMeshGeneration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::RequestMeshGeneration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"RequestMeshGeneration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlaneMeshFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRScenePlaneMeshFilter* GlobalNamespace::OVRScenePlaneMeshFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRScenePlaneMeshFilter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlaneMeshFilter::OVRScenePlaneMeshFilter()   {
}

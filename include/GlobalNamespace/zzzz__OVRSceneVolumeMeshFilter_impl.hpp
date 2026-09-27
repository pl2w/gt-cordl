#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolumeMeshFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_BakeMeshJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_GetTriangleMeshJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_PopulateMeshDataJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63c7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.set_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)(bool)>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa63c7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.CreateVolumeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa63c8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"CreateVolumeMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.IsJobDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa63c978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"IsJobDone", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63c9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__IsCompleted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__IsCompleted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_set__IsCompleted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCompleted_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshFilter = value;
}
inline bool GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"CreateVolumeMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {"IsJobDone", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, job);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneVolumeMeshFilter* GlobalNamespace::OVRSceneVolumeMeshFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneVolumeMeshFilter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter::OVRSceneVolumeMeshFilter()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)(int32_t)>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa63c950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa63cd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0xa63cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa63d318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63d368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa63d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63d3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter>& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter> const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneVolumeMeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__sceneAnchor_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor_5__2;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__sceneAnchor_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor_5__2;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__sceneAnchor_5__2(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAnchor_5__2 = value;
}
constexpr ::GlobalNamespace::Mesh_MeshDataArray& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__meshDataArray_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshDataArray_5__3;
}
constexpr ::GlobalNamespace::Mesh_MeshDataArray const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__meshDataArray_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshDataArray_5__3;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__meshDataArray_5__3(::GlobalNamespace::Mesh_MeshDataArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshDataArray_5__3 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__disposeVerticesJob_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeVerticesJob_5__4;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__disposeVerticesJob_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeVerticesJob_5__4;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__disposeVerticesJob_5__4(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposeVerticesJob_5__4 = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__collider_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider_5__5;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__collider_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider_5__5;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__collider_5__5(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider_5__5 = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__meshCountResults_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCountResults_5__6;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__meshCountResults_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCountResults_5__6;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__meshCountResults_5__6(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshCountResults_5__6 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__job_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____job_5__7;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_get__job_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____job_5__7;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__cordl_internal_set__job_5__7(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____job_5__7 = value;
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7::OVRSceneVolumeMeshFilter__CreateVolumeMesh_d__7()   {
}

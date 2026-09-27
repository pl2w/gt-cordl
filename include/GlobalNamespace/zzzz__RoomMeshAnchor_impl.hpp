#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_BakeMeshJob_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_GetTriangleMeshCountsJob_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_GetTriangleMeshJob_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_PopulateMeshDataJob_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor__EnableComponent_d__16_1_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor__Initialize_d__14_def.hpp"
#include "GlobalNamespace/zzzz__RoomMeshAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec0084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.set_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)(bool)>(&::GlobalNamespace::RoomMeshAnchor::set_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec008c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.get_Valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::get_Valid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ec0094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"get_Valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9ec00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::RoomMeshAnchor::Initialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9ec0200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.GenerateRoomMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::GenerateRoomMesh)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9ec02c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"GenerateRoomMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.TryUpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::TryUpdateTransform)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9ec035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"TryUpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ec05dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor.IsJobDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Jobs::JobHandle)>(&::GlobalNamespace::RoomMeshAnchor::IsJobDone)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9ec0638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"IsJobDone", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor::*)()>(&::GlobalNamespace::RoomMeshAnchor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec0674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__IsCompleted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__IsCompleted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__IsCompleted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCompleted_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRAnchor& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchor;
}
constexpr ::GlobalNamespace::OVRAnchor const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchor;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__anchor(::GlobalNamespace::OVRAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anchor = value;
}
constexpr ::GlobalNamespace::OVRSemanticLabels& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__labels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labels;
}
constexpr ::GlobalNamespace::OVRSemanticLabels const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__labels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labels;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__labels(::GlobalNamespace::OVRSemanticLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____labels = value;
}
constexpr ::GlobalNamespace::OVRTriangleMesh& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__triangleMeshComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangleMeshComponent;
}
constexpr ::GlobalNamespace::OVRTriangleMesh const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__triangleMeshComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triangleMeshComponent;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__triangleMeshComponent(::GlobalNamespace::OVRTriangleMesh  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triangleMeshComponent = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::RoomMeshAnchor::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void GlobalNamespace::RoomMeshAnchor::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshFilter = value;
}
inline void GlobalNamespace::RoomMeshAnchor::setStaticF_RotateY180(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "RotateY180", ::GlobalNamespace::RoomMeshAnchor*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::RoomMeshAnchor::getStaticF_RotateY180()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "RotateY180", ::GlobalNamespace::RoomMeshAnchor*>();
}
inline bool GlobalNamespace::RoomMeshAnchor::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::set_IsCompleted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomMeshAnchor::get_Valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"get_Valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool GlobalNamespace::RoomMeshAnchor::IsComponentEnabled()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                    {"IsComponentEnabled", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::Initialize(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RoomMeshAnchor::GenerateRoomMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"GenerateRoomMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::RoomMeshAnchor::EnableComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                    {"EnableComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor::TryUpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"TryUpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor::IsJobDone(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {"IsJobDone", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, job);
}
inline void GlobalNamespace::RoomMeshAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomMeshAnchor* GlobalNamespace::RoomMeshAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomMeshAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor::RoomMeshAnchor()   {
}
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)(int32_t)>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ec0334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ec0a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x9ec0ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9ec110c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ec1164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::*)()>(&::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ec119c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomMeshAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Mesh_MeshDataArray& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshDataArray_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshDataArray_5__2;
}
constexpr ::GlobalNamespace::Mesh_MeshDataArray const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshDataArray_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshDataArray_5__2;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__meshDataArray_5__2(::GlobalNamespace::Mesh_MeshDataArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshDataArray_5__2 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__disposeVerticesJob_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeVerticesJob_5__3;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__disposeVerticesJob_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposeVerticesJob_5__3;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__disposeVerticesJob_5__3(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposeVerticesJob_5__3 = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__collider_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider_5__4;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__collider_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider_5__4;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__collider_5__4(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider_5__4 = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshCountResults_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCountResults_5__5;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__meshCountResults_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCountResults_5__5;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__meshCountResults_5__5(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshCountResults_5__5 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__job_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____job_5__6;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_get__job_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____job_5__6;
}
constexpr void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__cordl_internal_set__job_5__6(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____job_5__6 = value;
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15::RoomMeshAnchor__GenerateRoomMesh_d__15()   {
}

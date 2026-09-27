#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshAnchor)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_BakeMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshCountsJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_GetTriangleMeshJob;
}
namespace GlobalNamespace {
struct RoomMeshAnchor_PopulateMeshDataJob;
}
namespace GlobalNamespace {
template<typename T>
struct RoomMeshAnchor__EnableComponent_d__16_1;
}
namespace GlobalNamespace {
class RoomMeshAnchor__GenerateRoomMesh_d__15;
}
namespace GlobalNamespace {
struct RoomMeshAnchor__Initialize_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomMeshAnchor;
}
namespace GlobalNamespace {
class RoomMeshAnchor__GenerateRoomMesh_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomMeshAnchor*);
MARK_REF_T(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomMeshAnchor*, "", "RoomMeshAnchor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15*, "", "RoomMeshAnchor/<GenerateRoomMesh>d__15");
// Dependencies IOVRAnchorComponent`1<T>, OVRAnchor, OVRSemanticLabels, OVRTriangleMesh, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomMeshAnchor
class CORDL_TYPE RoomMeshAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BakeMeshJob = ::GlobalNamespace::RoomMeshAnchor_BakeMeshJob;

using GetTriangleMeshCountsJob = ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshCountsJob;

using GetTriangleMeshJob = ::GlobalNamespace::RoomMeshAnchor_GetTriangleMeshJob;

using PopulateMeshDataJob = ::GlobalNamespace::RoomMeshAnchor_PopulateMeshDataJob;

template<typename T>
using _EnableComponent_d__16_1 = ::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1<T>;

using _GenerateRoomMesh_d__15 = ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15;

using _Initialize_d__14 = ::GlobalNamespace::RoomMeshAnchor__Initialize_d__14;

 __declspec(property(get=get_IsCompleted, put=set_IsCompleted)) bool  IsCompleted;

/// @brief Field RotateY180, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_RotateY180, put=setStaticF_RotateY180)) ::UnityEngine::Quaternion  RotateY180;

 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Field <IsCompleted>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCompleted_k__BackingField, put=__cordl_internal_set__IsCompleted_k__BackingField)) bool  _IsCompleted_k__BackingField;

/// @brief Field _anchor, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__anchor, put=__cordl_internal_set__anchor)) ::GlobalNamespace::OVRAnchor  _anchor;

/// @brief Field _labels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__labels, put=__cordl_internal_set__labels)) ::GlobalNamespace::OVRSemanticLabels  _labels;

/// @brief Field _mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _triangleMeshComponent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__triangleMeshComponent, put=__cordl_internal_set__triangleMeshComponent)) ::GlobalNamespace::OVRTriangleMesh  _triangleMeshComponent;

/// @brief Method Awake, addr 0x9ec00f0, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(RoomMeshAnchor::<EnableComponent>d__16`1<T>))]
/// @brief Method EnableComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<T>* EnableComponent() ;

/// [IteratorStateMachine(typeof(RoomMeshAnchor::<GenerateRoomMesh>d__15))]
/// @brief Method GenerateRoomMesh, addr 0x9ec02c8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GenerateRoomMesh() ;

/// [AsyncStateMachine(typeof(RoomMeshAnchor::<Initialize>d__14))]
/// @brief Method Initialize, addr 0x9ec0200, size 0xc8, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IsComponentEnabled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool IsComponentEnabled() ;

/// @brief Method IsJobDone, addr 0x9ec0638, size 0x3c, virtual false, abstract: false, final false
static inline bool IsJobDone(::Unity::Jobs::JobHandle  job) ;

static inline ::GlobalNamespace::RoomMeshAnchor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ec05dc, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method TryUpdateTransform, addr 0x9ec035c, size 0x280, virtual false, abstract: false, final false
inline bool TryUpdateTransform() ;

constexpr bool const& __cordl_internal_get__IsCompleted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCompleted_k__BackingField() ;

constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__anchor() const;

constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__anchor() ;

constexpr ::GlobalNamespace::OVRSemanticLabels const& __cordl_internal_get__labels() const;

constexpr ::GlobalNamespace::OVRSemanticLabels& __cordl_internal_get__labels() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::GlobalNamespace::OVRTriangleMesh const& __cordl_internal_get__triangleMeshComponent() const;

constexpr ::GlobalNamespace::OVRTriangleMesh& __cordl_internal_get__triangleMeshComponent() ;

constexpr void __cordl_internal_set__IsCompleted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__anchor(::GlobalNamespace::OVRAnchor  value) ;

constexpr void __cordl_internal_set__labels(::GlobalNamespace::OVRSemanticLabels  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__triangleMeshComponent(::GlobalNamespace::OVRTriangleMesh  value) ;

/// @brief Method .ctor, addr 0x9ec0674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Quaternion getStaticF_RotateY180() ;

/// [CompilerGenerated]
/// @brief Method get_IsCompleted, addr 0x9ec0084, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_Valid, addr 0x9ec0094, size 0x5c, virtual false, abstract: false, final false
inline bool get_Valid() ;

static inline void setStaticF_RotateY180(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCompleted, addr 0x9ec008c, size 0x8, virtual false, abstract: false, final false
inline void set_IsCompleted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomMeshAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomMeshAnchor(RoomMeshAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomMeshAnchor(RoomMeshAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31432};

/// [CompilerGenerated]
/// @brief Field <IsCompleted>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsCompleted_k__BackingField;

/// @brief Field _anchor, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::OVRAnchor  ____anchor;

/// @brief Field _labels, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRSemanticLabels  ____labels;

/// @brief Field _triangleMeshComponent, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::OVRTriangleMesh  ____triangleMeshComponent;

/// @brief Field _mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _meshFilter, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____IsCompleted_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____anchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____labels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____triangleMeshComponent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor, ____meshFilter) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomMeshAnchor) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.Mesh::MeshDataArray
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomMeshAnchor/<GenerateRoomMesh>d__15
class CORDL_TYPE RoomMeshAnchor__GenerateRoomMesh_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RoomMeshAnchor>  __4__this;

/// @brief Field <collider>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider_5__4, put=__cordl_internal_set__collider_5__4)) ::UnityW<::UnityEngine::MeshCollider>  _collider_5__4;

/// @brief Field <disposeVerticesJob>5__3, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__disposeVerticesJob_5__3, put=__cordl_internal_set__disposeVerticesJob_5__3)) ::Unity::Jobs::JobHandle  _disposeVerticesJob_5__3;

/// @brief Field <job>5__6, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__job_5__6, put=__cordl_internal_set__job_5__6)) ::Unity::Jobs::JobHandle  _job_5__6;

/// @brief Field <meshCountResults>5__5, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__meshCountResults_5__5, put=__cordl_internal_set__meshCountResults_5__5)) ::Unity::Collections::NativeArray_1<int32_t>  _meshCountResults_5__5;

/// @brief Field <meshDataArray>5__2, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__meshDataArray_5__2, put=__cordl_internal_set__meshDataArray_5__2)) ::GlobalNamespace::Mesh_MeshDataArray  _meshDataArray_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9ec0ab8, size 0x654, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9ec115c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9ec1164, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9ec119c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9ec0a9c, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RoomMeshAnchor>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__collider_5__4() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__collider_5__4() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__disposeVerticesJob_5__3() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__disposeVerticesJob_5__3() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__job_5__6() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__job_5__6() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__meshCountResults_5__5() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__meshCountResults_5__5() ;

constexpr ::GlobalNamespace::Mesh_MeshDataArray const& __cordl_internal_get__meshDataArray_5__2() const;

constexpr ::GlobalNamespace::Mesh_MeshDataArray& __cordl_internal_get__meshDataArray_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomMeshAnchor>  value) ;

constexpr void __cordl_internal_set__collider_5__4(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set__disposeVerticesJob_5__3(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__job_5__6(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__meshCountResults_5__5(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set__meshDataArray_5__2(::GlobalNamespace::Mesh_MeshDataArray  value) ;

/// @brief Method <>m__Finally1, addr 0x9ec110c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ec0334, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomMeshAnchor__GenerateRoomMesh_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor__GenerateRoomMesh_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomMeshAnchor__GenerateRoomMesh_d__15(RoomMeshAnchor__GenerateRoomMesh_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomMeshAnchor__GenerateRoomMesh_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomMeshAnchor__GenerateRoomMesh_d__15(RoomMeshAnchor__GenerateRoomMesh_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31430};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RoomMeshAnchor>  _____4__this;

/// @brief Field <meshDataArray>5__2, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::Mesh_MeshDataArray  ____meshDataArray_5__2;

/// @brief Field <disposeVerticesJob>5__3, offset: 0x38, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____disposeVerticesJob_5__3;

/// @brief Field <collider>5__4, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ____collider_5__4;

/// @brief Field <meshCountResults>5__5, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ____meshCountResults_5__5;

/// @brief Field <job>5__6, offset: 0x60, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____job_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____meshDataArray_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____disposeVerticesJob_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____collider_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____meshCountResults_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15, ____job_5__6) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomMeshAnchor__GenerateRoomMesh_d__15) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

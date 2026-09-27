#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DestructibleMeshComponent)
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegment;
}
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegmentationResult;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukMesh3f;
}
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent___c__DisplayClass22_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent;
}
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent___c__DisplayClass22_0;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::DestructibleMeshComponent*);
MARK_REF_T(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::DestructibleMeshComponent*, "Meta.XR.MRUtilityKit", "DestructibleMeshComponent");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0*, "Meta.XR.MRUtilityKit", "DestructibleMeshComponent/<>c__DisplayClass22_0");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_destructible_mesh_component")]
// Dependencies System.Collections.Generic.IList`1<T>, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.DestructibleMeshComponent
class CORDL_TYPE DestructibleMeshComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MeshSegment = ::GlobalNamespace::DestructibleMeshComponent_MeshSegment;

using MeshSegmentationResult = ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult;

using __c__DisplayClass22_0 = ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0;

 __declspec(property(get=get_GlobalMeshMaterial, put=set_GlobalMeshMaterial)) ::UnityW<::UnityEngine::Material>  GlobalMeshMaterial;

/// @brief Field OnDestructibleMeshCreated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDestructibleMeshCreated, put=__cordl_internal_set_OnDestructibleMeshCreated)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  OnDestructibleMeshCreated;

/// @brief Field OnSegmentationCompleted, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSegmentationCompleted, put=__cordl_internal_set_OnSegmentationCompleted)) ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  OnSegmentationCompleted;

 __declspec(property(get=get_ReservedBottom, put=set_ReservedBottom)) float_t  ReservedBottom;

 __declspec(property(get=get_ReservedSegment, put=set_ReservedSegment)) ::UnityW<::UnityEngine::GameObject>  ReservedSegment;

 __declspec(property(get=get_ReservedTop, put=set_ReservedTop)) float_t  ReservedTop;

/// @brief Field <ReservedSegment>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReservedSegment_k__BackingField, put=__cordl_internal_set__ReservedSegment_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _ReservedSegment_k__BackingField;

/// @brief Field _destructibleMeshMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__destructibleMeshMaterial, put=__cordl_internal_set__destructibleMeshMaterial)) ::UnityW<::UnityEngine::Material>  _destructibleMeshMaterial;

/// @brief Field _reservedBottom, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reservedBottom, put=__cordl_internal_set__reservedBottom)) float_t  _reservedBottom;

/// @brief Field _reservedTop, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__reservedTop, put=__cordl_internal_set__reservedTop)) float_t  _reservedTop;

/// @brief Field _segmentationTask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__segmentationTask, put=__cordl_internal_set__segmentationTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  _segmentationTask;

/// @brief Field _segments, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__segments, put=__cordl_internal_set__segments)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _segments;

/// @brief Method CreateDestructibleMesh, addr 0x9f0a5e0, size 0x17c, virtual false, abstract: false, final false
inline void CreateDestructibleMesh(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult  result) ;

/// @brief Method CreateMeshSegment, addr 0x9f0ad04, size 0x238, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CreateMeshSegment(::ArrayW<::UnityEngine::Vector3>  positions, ::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors, bool  isReserved) ;

/// @brief Method DebugDestructibleMeshComponent, addr 0x9f0b1b0, size 0x274, virtual false, abstract: false, final false
inline void DebugDestructibleMeshComponent() ;

/// @brief Method DestroySegment, addr 0x9f09ffc, size 0x2c4, virtual false, abstract: false, final false
inline void DestroySegment(::UnityEngine::GameObject*  segment) ;

/// @brief Method GetDestructibleMeshSegments, addr 0x9f09c44, size 0x3b8, virtual false, abstract: false, final false
inline void GetDestructibleMeshSegments(::ArrayW<::UnityEngine::GameObject*>  segments) ;

/// @brief Method GetDestructibleMeshSegments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::GameObject>>*>)
inline void GetDestructibleMeshSegments(T  segments) ;

/// @brief Method GetDestructibleMeshSegmentsCount, addr 0x9f09c24, size 0x20, virtual false, abstract: false, final false
inline int32_t GetDestructibleMeshSegmentsCount() ;

static inline ::Meta::XR::MRUtilityKit::DestructibleMeshComponent* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f0af3c, size 0x274, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSegmentationTaskCompleted, addr 0x9f0a2c0, size 0x320, virtual false, abstract: false, final false
inline void OnSegmentationTaskCompleted(::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  task) ;

/// @brief Method ProcessSegments, addr 0x9f0a75c, size 0x5a8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult ProcessSegments(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  segments, uint32_t  numSegments, ::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f  reservedSegment) ;

/// @brief Method SegmentMesh, addr 0x9f08cf0, size 0x21c, virtual false, abstract: false, final false
inline void SegmentMesh(::ArrayW<::UnityEngine::Vector3>  meshPositions, ::ArrayW<uint32_t>  meshIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>* const& __cordl_internal_get_OnDestructibleMeshCreated() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*& __cordl_internal_get_OnDestructibleMeshCreated() ;

constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>* const& __cordl_internal_get_OnSegmentationCompleted() const;

constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*& __cordl_internal_get_OnSegmentationCompleted() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ReservedSegment_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ReservedSegment_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__destructibleMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__destructibleMeshMaterial() ;

constexpr float_t const& __cordl_internal_get__reservedBottom() const;

constexpr float_t& __cordl_internal_get__reservedBottom() ;

constexpr float_t const& __cordl_internal_get__reservedTop() const;

constexpr float_t& __cordl_internal_get__reservedTop() ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>* const& __cordl_internal_get__segmentationTask() const;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*& __cordl_internal_get__segmentationTask() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__segments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__segments() ;

constexpr void __cordl_internal_set_OnDestructibleMeshCreated(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  value) ;

constexpr void __cordl_internal_set_OnSegmentationCompleted(::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  value) ;

constexpr void __cordl_internal_set__ReservedSegment_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__destructibleMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__reservedBottom(float_t  value) ;

constexpr void __cordl_internal_set__reservedTop(float_t  value) ;

constexpr void __cordl_internal_set__segmentationTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  value) ;

constexpr void __cordl_internal_set__segments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x9f0b424, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GlobalMeshMaterial, addr 0x9f09bdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_GlobalMeshMaterial() ;

/// @brief Method get_ReservedBottom, addr 0x9f09bfc, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReservedBottom() ;

/// [CompilerGenerated]
/// @brief Method get_ReservedSegment, addr 0x9f09c0c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_ReservedSegment() ;

/// @brief Method get_ReservedTop, addr 0x9f09bec, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReservedTop() ;

/// @brief Method set_GlobalMeshMaterial, addr 0x9f09be4, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalMeshMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_ReservedBottom, addr 0x9f09c04, size 0x8, virtual false, abstract: false, final false
inline void set_ReservedBottom(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReservedSegment, addr 0x9f09c14, size 0x8, virtual false, abstract: false, final false
inline void set_ReservedSegment(::UnityEngine::GameObject*  value) ;

/// @brief Method set_ReservedTop, addr 0x9f09bf4, size 0x8, virtual false, abstract: false, final false
inline void set_ReservedTop(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestructibleMeshComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestructibleMeshComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestructibleMeshComponent(DestructibleMeshComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestructibleMeshComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestructibleMeshComponent(DestructibleMeshComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25772};

/// @brief Field OnDestructibleMeshCreated, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  ___OnDestructibleMeshCreated;

/// @brief Field OnSegmentationCompleted, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  ___OnSegmentationCompleted;

/// [SerializeField]
/// @brief Field _destructibleMeshMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____destructibleMeshMaterial;

/// [SerializeField]
/// @brief Field _reservedTop, offset: 0x38, size: 0x4, def value: None
 float_t  ____reservedTop;

/// [SerializeField]
/// @brief Field _reservedBottom, offset: 0x3c, size: 0x4, def value: None
 float_t  ____reservedBottom;

/// @brief Field _segmentationTask, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  ____segmentationTask;

/// @brief Field _segments, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____segments;

/// [CompilerGenerated]
/// @brief Field <ReservedSegment>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ReservedSegment_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ___OnDestructibleMeshCreated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ___OnSegmentationCompleted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____destructibleMeshMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____reservedTop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____reservedBottom) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____segmentationTask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____segments) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent, ____ReservedSegment_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent) == 0x58, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.DestructibleMeshComponent/<>c__DisplayClass22_0
class CORDL_TYPE DestructibleMeshComponent___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  __4__this;

/// @brief Field meshIndices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshIndices, put=__cordl_internal_set_meshIndices)) ::ArrayW<uint32_t>  meshIndices;

/// @brief Field meshPositions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshPositions, put=__cordl_internal_set_meshPositions)) ::ArrayW<::UnityEngine::Vector3>  meshPositions;

/// @brief Field reservedMax, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_reservedMax, put=__cordl_internal_set_reservedMax)) ::UnityEngine::Vector3  reservedMax;

/// @brief Field reservedMin, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_reservedMin, put=__cordl_internal_set_reservedMin)) ::UnityEngine::Vector3  reservedMin;

/// @brief Field segmentationPoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_segmentationPoints, put=__cordl_internal_set_segmentationPoints)) ::ArrayW<::UnityEngine::Vector3>  segmentationPoints;

static inline ::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <SegmentMesh>b__0, addr 0x9f0b4b4, size 0x1dc, virtual false, abstract: false, final false
inline ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult _SegmentMesh_b__0() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_meshIndices() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_meshIndices() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_meshPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_meshPositions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reservedMax() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reservedMax() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reservedMin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reservedMin() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_segmentationPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_segmentationPoints() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  value) ;

constexpr void __cordl_internal_set_meshIndices(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_meshPositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_reservedMax(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reservedMin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_segmentationPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x9f09c1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestructibleMeshComponent___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestructibleMeshComponent___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestructibleMeshComponent___c__DisplayClass22_0(DestructibleMeshComponent___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestructibleMeshComponent___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestructibleMeshComponent___c__DisplayClass22_0(DestructibleMeshComponent___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25771};

/// @brief Field meshPositions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___meshPositions;

/// @brief Field meshIndices, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___meshIndices;

/// @brief Field segmentationPoints, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___segmentationPoints;

/// @brief Field reservedMin, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reservedMin;

/// @brief Field reservedMax, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reservedMax;

/// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, ___meshPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, ___meshIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, ___segmentationPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, ___reservedMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, ___reservedMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0, _____4__this) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::DestructibleMeshComponent___c__DisplayClass22_0) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit

#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleGlobalMeshSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DestructibleGlobalMeshSpawner)
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegmentationResult;
}
namespace Meta::XR::MRUtilityKit {
struct DestructibleGlobalMesh;
}
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class DestructibleGlobalMeshSpawner;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner*, "Meta.XR.MRUtilityKit", "DestructibleGlobalMeshSpawner");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_destructible_global_mesh_spawner")]
// Dependencies Meta.XR.MRUtilityKit.MRUK::RoomFilter, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner
class CORDL_TYPE DestructibleGlobalMeshSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CreateOnRoomLoaded, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CreateOnRoomLoaded, put=__cordl_internal_set_CreateOnRoomLoaded)) ::GlobalNamespace::MRUK_RoomFilter  CreateOnRoomLoaded;

 __declspec(property(get=get_GlobalMeshMaterial, put=set_GlobalMeshMaterial)) ::UnityW<::UnityEngine::Material>  GlobalMeshMaterial;

 __declspec(property(get=get_MaxPointsCount, put=set_MaxPointsCount)) int32_t  MaxPointsCount;

/// @brief Field OnDestructibleMeshCreated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDestructibleMeshCreated, put=__cordl_internal_set_OnDestructibleMeshCreated)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  OnDestructibleMeshCreated;

/// @brief Field OnSegmentationCompleted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSegmentationCompleted, put=__cordl_internal_set_OnSegmentationCompleted)) ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  OnSegmentationCompleted;

 __declspec(property(get=get_PointsPerUnitX, put=set_PointsPerUnitX)) float_t  PointsPerUnitX;

 __declspec(property(get=get_PointsPerUnitY, put=set_PointsPerUnitY)) float_t  PointsPerUnitY;

 __declspec(property(get=get_ReserveSpace, put=set_ReserveSpace)) bool  ReserveSpace;

 __declspec(property(get=get_ReservedBottom, put=set_ReservedBottom)) float_t  ReservedBottom;

 __declspec(property(get=get_ReservedTop, put=set_ReservedTop)) float_t  ReservedTop;

/// @brief Field _globalMeshMaterial, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalMeshMaterial, put=__cordl_internal_set__globalMeshMaterial)) ::UnityW<::UnityEngine::Material>  _globalMeshMaterial;

/// @brief Field _maxPointsCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxPointsCount, put=__cordl_internal_set__maxPointsCount)) int32_t  _maxPointsCount;

/// @brief Field _points, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__points, put=setStaticF__points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _points;

/// @brief Field _pointsPerUnitX, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointsPerUnitX, put=__cordl_internal_set__pointsPerUnitX)) float_t  _pointsPerUnitX;

/// @brief Field _pointsPerUnitY, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointsPerUnitY, put=__cordl_internal_set__pointsPerUnitY)) float_t  _pointsPerUnitY;

/// @brief Field _reserveSpace, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__reserveSpace, put=__cordl_internal_set__reserveSpace)) bool  _reserveSpace;

/// @brief Field _reservedBottom, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__reservedBottom, put=__cordl_internal_set__reservedBottom)) float_t  _reservedBottom;

/// @brief Field _reservedMax, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__reservedMax, put=__cordl_internal_set__reservedMax)) ::UnityEngine::Vector3  _reservedMax;

/// @brief Field _reservedMin, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__reservedMin, put=__cordl_internal_set__reservedMin)) ::UnityEngine::Vector3  _reservedMin;

/// @brief Field _reservedTop, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reservedTop, put=__cordl_internal_set__reservedTop)) float_t  _reservedTop;

/// @brief Field _spawnedDestructibleMeshes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedDestructibleMeshes, put=__cordl_internal_set__spawnedDestructibleMeshes)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>*  _spawnedDestructibleMeshes;

/// @brief Method AddDestructibleGlobalMesh, addr 0x9f080e0, size 0x2d8, virtual false, abstract: false, final false
inline ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh AddDestructibleGlobalMesh(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method AddDestructibleGlobalMesh, addr 0x9f07e58, size 0x288, virtual false, abstract: false, final false
inline void AddDestructibleGlobalMesh() ;

/// @brief Method ComputeRoomBoxGrid, addr 0x9f086b4, size 0x63c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> ComputeRoomBoxGrid(::Meta::XR::MRUtilityKit::MRUKRoom*  room, int32_t  maxPointsCount, float_t  pointsPerUnitX, float_t  pointPerUnitY) ;

/// @brief Method CreateDestructibleGlobalMesh, addr 0x9f083b8, size 0x2fc, virtual false, abstract: false, final false
static inline void CreateDestructibleGlobalMesh(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  destructibleGlobalMesh, ::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method GeneratePoints, addr 0x9f093dc, size 0x268, virtual false, abstract: false, final false
static inline void GeneratePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::System::Nullable_1<::UnityEngine::Rect>  planeBounds, float_t  pointsPerUnitX, float_t  pointsPerUnitY) ;

static inline ::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner* New_ctor() ;

/// @brief Method ReceiveCreatedRoom, addr 0x9f09298, size 0x84, virtual false, abstract: false, final false
inline void ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRemovedRoom, addr 0x9f0931c, size 0xc0, virtual false, abstract: false, final false
inline void ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RemoveDestructibleGlobalMesh, addr 0x9f08ff4, size 0x2a4, virtual false, abstract: false, final false
inline void RemoveDestructibleGlobalMesh(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method Start, addr 0x9f07bbc, size 0x29c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetDestructibleMeshForRoom, addr 0x9f08f0c, size 0xb4, virtual false, abstract: false, final false
inline bool TryGetDestructibleMeshForRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::by_ref<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>  destructibleGlobalMesh) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__36_0, addr 0x9f0977c, size 0x198, virtual false, abstract: false, final false
inline void _Start_b__36_0() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_CreateOnRoomLoaded() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_CreateOnRoomLoaded() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>* const& __cordl_internal_get_OnDestructibleMeshCreated() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*& __cordl_internal_get_OnDestructibleMeshCreated() ;

constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>* const& __cordl_internal_get_OnSegmentationCompleted() const;

constexpr ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*& __cordl_internal_get_OnSegmentationCompleted() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__globalMeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__globalMeshMaterial() ;

constexpr int32_t const& __cordl_internal_get__maxPointsCount() const;

constexpr int32_t& __cordl_internal_get__maxPointsCount() ;

constexpr float_t const& __cordl_internal_get__pointsPerUnitX() const;

constexpr float_t& __cordl_internal_get__pointsPerUnitX() ;

constexpr float_t const& __cordl_internal_get__pointsPerUnitY() const;

constexpr float_t& __cordl_internal_get__pointsPerUnitY() ;

constexpr bool const& __cordl_internal_get__reserveSpace() const;

constexpr bool& __cordl_internal_get__reserveSpace() ;

constexpr float_t const& __cordl_internal_get__reservedBottom() const;

constexpr float_t& __cordl_internal_get__reservedBottom() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__reservedMax() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__reservedMax() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__reservedMin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__reservedMin() ;

constexpr float_t const& __cordl_internal_get__reservedTop() const;

constexpr float_t& __cordl_internal_get__reservedTop() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>* const& __cordl_internal_get__spawnedDestructibleMeshes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>*& __cordl_internal_get__spawnedDestructibleMeshes() ;

constexpr void __cordl_internal_set_CreateOnRoomLoaded(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_OnDestructibleMeshCreated(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  value) ;

constexpr void __cordl_internal_set_OnSegmentationCompleted(::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  value) ;

constexpr void __cordl_internal_set__globalMeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__maxPointsCount(int32_t  value) ;

constexpr void __cordl_internal_set__pointsPerUnitX(float_t  value) ;

constexpr void __cordl_internal_set__pointsPerUnitY(float_t  value) ;

constexpr void __cordl_internal_set__reserveSpace(bool  value) ;

constexpr void __cordl_internal_set__reservedBottom(float_t  value) ;

constexpr void __cordl_internal_set__reservedMax(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__reservedMin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__reservedTop(float_t  value) ;

constexpr void __cordl_internal_set__spawnedDestructibleMeshes(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>*  value) ;

/// @brief Method .ctor, addr 0x9f09644, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF__points() ;

/// @brief Method get_GlobalMeshMaterial, addr 0x9f07b8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_GlobalMeshMaterial() ;

/// @brief Method get_MaxPointsCount, addr 0x9f07b7c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxPointsCount() ;

/// @brief Method get_PointsPerUnitX, addr 0x9f07b5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_PointsPerUnitX() ;

/// @brief Method get_PointsPerUnitY, addr 0x9f07b6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_PointsPerUnitY() ;

/// @brief Method get_ReserveSpace, addr 0x9f07b4c, size 0x8, virtual false, abstract: false, final false
inline bool get_ReserveSpace() ;

/// @brief Method get_ReservedBottom, addr 0x9f07bac, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReservedBottom() ;

/// @brief Method get_ReservedTop, addr 0x9f07b9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReservedTop() ;

static inline void setStaticF__points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method set_GlobalMeshMaterial, addr 0x9f07b94, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalMeshMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_MaxPointsCount, addr 0x9f07b84, size 0x8, virtual false, abstract: false, final false
inline void set_MaxPointsCount(int32_t  value) ;

/// @brief Method set_PointsPerUnitX, addr 0x9f07b64, size 0x8, virtual false, abstract: false, final false
inline void set_PointsPerUnitX(float_t  value) ;

/// @brief Method set_PointsPerUnitY, addr 0x9f07b74, size 0x8, virtual false, abstract: false, final false
inline void set_PointsPerUnitY(float_t  value) ;

/// @brief Method set_ReserveSpace, addr 0x9f07b54, size 0x8, virtual false, abstract: false, final false
inline void set_ReserveSpace(bool  value) ;

/// @brief Method set_ReservedBottom, addr 0x9f07bb4, size 0x8, virtual false, abstract: false, final false
inline void set_ReservedBottom(float_t  value) ;

/// @brief Method set_ReservedTop, addr 0x9f07ba4, size 0x8, virtual false, abstract: false, final false
inline void set_ReservedTop(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestructibleGlobalMeshSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestructibleGlobalMeshSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestructibleGlobalMeshSpawner(DestructibleGlobalMeshSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestructibleGlobalMeshSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestructibleGlobalMeshSpawner(DestructibleGlobalMeshSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25767};

/// @brief Field _destructibleGlobalMeshObjectName offset 0xffffffff size 0x8
static constexpr ::ConstString  _destructibleGlobalMeshObjectName{u"DestructibleGlobalMesh"};

/// [SerializeField]
/// @brief Field CreateOnRoomLoaded, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___CreateOnRoomLoaded;

/// @brief Field OnDestructibleMeshCreated, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>>*  ___OnDestructibleMeshCreated;

/// @brief Field OnSegmentationCompleted, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult,::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult>*  ___OnSegmentationCompleted;

/// [SerializeField]
/// @brief Field _reserveSpace, offset: 0x38, size: 0x1, def value: None
 bool  ____reserveSpace;

/// [SerializeField]
/// @brief Field _reservedMin, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____reservedMin;

/// [SerializeField]
/// @brief Field _reservedMax, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____reservedMax;

/// [SerializeField]
/// @brief Field _globalMeshMaterial, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____globalMeshMaterial;

/// [SerializeField]
/// @brief Field _pointsPerUnitX, offset: 0x60, size: 0x4, def value: None
 float_t  ____pointsPerUnitX;

/// [SerializeField]
/// @brief Field _pointsPerUnitY, offset: 0x64, size: 0x4, def value: None
 float_t  ____pointsPerUnitY;

/// [SerializeField]
/// @brief Field _maxPointsCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ____maxPointsCount;

/// [SerializeField]
/// @brief Field _reservedTop, offset: 0x6c, size: 0x4, def value: None
 float_t  ____reservedTop;

/// [SerializeField]
/// @brief Field _reservedBottom, offset: 0x70, size: 0x4, def value: None
 float_t  ____reservedBottom;

/// @brief Field _spawnedDestructibleMeshes, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>,::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>*  ____spawnedDestructibleMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ___CreateOnRoomLoaded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ___OnDestructibleMeshCreated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ___OnSegmentationCompleted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____reserveSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____reservedMin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____reservedMax) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____globalMeshMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____pointsPerUnitX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____pointsPerUnitY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____maxPointsCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____reservedTop) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____reservedBottom) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner, ____spawnedDestructibleMeshes) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::DestructibleGlobalMeshSpawner) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit

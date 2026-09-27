#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "GlobalNamespace/zzzz__VoxelOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelExtensions)
namespace GlobalNamespace {
struct VoxelAction;
}
namespace GlobalNamespace {
class VoxelExtensions___c__DisplayClass32_0;
}
namespace GlobalNamespace {
struct VoxelManager_VoxelMineOperation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelMaterialSet;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace GlobalNamespace {
class VoxelExtensions;
}
namespace GlobalNamespace {
class VoxelExtensions___c__DisplayClass32_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoxelExtensions*);
MARK_REF_T(::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelExtensions*, "", "VoxelExtensions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*, "", "VoxelExtensions/<>c__DisplayClass32_0");
// [Extension]
// Dependencies System.Object, UnityEngine.BoundsInt, UnityEngine.Vector3, VoxelAction, VoxelOperation
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelExtensions
class CORDL_TYPE VoxelExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass32_0 = ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0;

/// @brief Field _cascade, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__cascade, put=setStaticF__cascade)) bool  _cascade;

/// @brief Field _centerOnly, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__centerOnly, put=setStaticF__centerOnly)) bool  _centerOnly;

/// @brief Field _lastBounds, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__lastBounds, put=setStaticF__lastBounds)) ::UnityEngine::BoundsInt  _lastBounds;

/// @brief Field _lastGridPoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__lastGridPoint, put=setStaticF__lastGridPoint)) ::UnityEngine::Vector3  _lastGridPoint;

/// @brief Field _lastHitPoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__lastHitPoint, put=setStaticF__lastHitPoint)) ::UnityEngine::Vector3  _lastHitPoint;

/// @brief Field _lastVertex, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__lastVertex, put=setStaticF__lastVertex)) ::UnityEngine::Vector3  _lastVertex;

/// @brief Field _op, offset 0xffffffff, size 0x14 
 __declspec(property(get=getStaticF__op, put=setStaticF__op)) ::GlobalNamespace::VoxelOperation  _op;

/// @brief Field _opAction, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__opAction, put=setStaticF__opAction)) ::GlobalNamespace::VoxelAction  _opAction;

/// @brief Field _opDensity, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__opDensity, put=setStaticF__opDensity)) uint8_t  _opDensity;

/// @brief Field _opMaterialId, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__opMaterialId, put=setStaticF__opMaterialId)) uint8_t  _opMaterialId;

/// @brief Field _opMaterialSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opMaterialSet, put=setStaticF__opMaterialSet)) ::UnityW<::Voxels::VoxelMaterialSet>  _opMaterialSet;

/// @brief Field _opMined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__opMined, put=setStaticF__opMined)) ::ArrayW<int32_t>  _opMined;

/// @brief Field _opOrigin, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__opOrigin, put=setStaticF__opOrigin)) ::UnityEngine::Vector3  _opOrigin;

/// @brief Field _opTotalMined, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__opTotalMined, put=setStaticF__opTotalMined)) int32_t  _opTotalMined;

/// @brief Field _showDebug, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__showDebug, put=setStaticF__showDebug)) bool  _showDebug;

/// @brief Field _tris, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__tris, put=setStaticF__tris)) ::System::Collections::Generic::List_1<int32_t>*  _tris;

/// @brief Field _verts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__verts, put=setStaticF__verts)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _verts;

/// [Extension]
/// @brief Method Add, addr 0x5df965c, size 0xa0, virtual false, abstract: false, final false
static inline void Add(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, float_t  radius, float_t  strength) ;

/// @brief Method AddAt, addr 0x5df9300, size 0x1a4, virtual false, abstract: false, final false
static inline uint8_t AddAt(::Unity::Mathematics::int3  point, uint8_t  density) ;

/// @brief Method AddMined, addr 0x5df7d70, size 0xd8, virtual false, abstract: false, final false
static inline void AddMined(uint8_t  material, int32_t  amount) ;

/// [Extension]
/// @brief Method Contains, addr 0x5df9ae8, size 0x74, virtual false, abstract: false, final false
static inline bool Contains(::UnityEngine::BoundsInt  a, ::UnityEngine::BoundsInt  b) ;

/// [Extension]
/// @brief Method Dig, addr 0x5df95c0, size 0x9c, virtual false, abstract: false, final false
static inline void Dig(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, float_t  radius, float_t  strength) ;

/// @brief Method FastDistance, addr 0x5df8b58, size 0x64, virtual false, abstract: false, final false
static inline int32_t FastDistance(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b) ;

/// [Extension]
/// @brief Method GenerateHashcodeFromPath, addr 0x5dfa438, size 0x68, virtual false, abstract: false, final false
static inline int32_t GenerateHashcodeFromPath(::UnityEngine::Component*  component) ;

/// [Extension]
/// @brief Method GenerateHashcodeFromPath, addr 0x5dfa4a0, size 0x68, virtual false, abstract: false, final false
static inline int32_t GenerateHashcodeFromPath(::UnityEngine::GameObject*  go) ;

/// [Extension]
/// @brief Method GetBounds, addr 0x5df8520, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundsInt GetBounds(::Voxels::VoxelWorld*  world, ::Unity::Mathematics::float3  point, float_t  radius) ;

/// [Extension]
/// @brief Method GetBounds, addr 0x5df81c8, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundsInt GetBounds(::Voxels::VoxelWorld*  world, ::Unity::Mathematics::int3  point, int32_t  radius) ;

/// [Extension]
/// @brief Method GetFullPath, addr 0x5dfa1d0, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::UnityEngine::Component*  component) ;

/// [Extension]
/// @brief Method GetFullPath, addr 0x5dfa2e0, size 0x158, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::UnityEngine::GameObject*  go) ;

/// @brief Method GetTriangleCenter, addr 0x5df7cb0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTriangleCenter(::UnityEngine::RaycastHit  hit) ;

/// [Extension]
/// @brief Method GetVoxelCount, addr 0x5df9a50, size 0x98, virtual false, abstract: false, final false
static inline int32_t GetVoxelCount(::UnityEngine::BoundsInt  bounds) ;

/// @brief Method GetWorldTriangle, addr 0x5df9c5c, size 0x574, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Vector3> GetWorldTriangle(::UnityEngine::RaycastHit  hit) ;

/// @brief Method IntLerp, addr 0x5dfa544, size 0x34, virtual false, abstract: false, final false
static inline int32_t IntLerp(int32_t  start, int32_t  end, int32_t  t) ;

/// @brief Method IntLerp, addr 0x5dfa508, size 0x3c, virtual false, abstract: false, final false
static inline int32_t IntLerp(int32_t  start, int32_t  end, int32_t  t, int32_t  tMax) ;

/// [Extension]
/// @brief Method Mine, addr 0x5df651c, size 0xac, virtual false, abstract: false, final false
static inline void Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::Collision*  collision, ::GlobalNamespace::VoxelAction  action) ;

/// [Extension]
/// @brief Method Mine, addr 0x5df65c8, size 0x144, virtual false, abstract: false, final false
static inline void Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method MineAt, addr 0x5df8620, size 0x538, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<uint8_t,uint8_t> MineAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data) ;

/// [Extension]
/// @brief Method Mine_MarchingCubes, addr 0x5df670c, size 0xe90, virtual false, abstract: false, final false
static inline void Mine_MarchingCubes(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action) ;

/// [Extension]
/// @brief Method Mine_SurfaceNets, addr 0x5df759c, size 0x714, virtual false, abstract: false, final false
static inline void Mine_SurfaceNets(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action) ;

/// [Extension]
/// @brief Method PerformAction, addr 0x5df9528, size 0x98, virtual false, abstract: false, final false
static inline void PerformAction(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, ::GlobalNamespace::VoxelAction  action) ;

/// [Extension]
/// @brief Method PerformLocalMiningOperation, addr 0x5df7e48, size 0x380, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> PerformLocalMiningOperation(::Voxels::VoxelWorld*  world, ::GlobalNamespace::VoxelManager_VoxelMineOperation  mineOp, bool  immediate) ;

/// [Extension]
/// @brief Method PerformLocalOperation, addr 0x5df8308, size 0x218, virtual false, abstract: false, final false
static inline void PerformLocalOperation(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action, bool  immediate) ;

/// [Extension]
/// @brief Method SetVoxel, addr 0x5df96fc, size 0x150, virtual false, abstract: false, final false
static inline void SetVoxel(::Voxels::VoxelWorld*  world, int32_t  x, int32_t  y, int32_t  z, uint8_t  density, uint8_t  materialId) ;

/// @brief Method SetVoxelAt, addr 0x5df94a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<uint8_t,uint8_t> SetVoxelAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "materialId" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data) ;

/// [Extension]
/// @brief Method SetVoxels, addr 0x5df9968, size 0xe8, virtual false, abstract: false, final false
static inline void SetVoxels(::Voxels::VoxelWorld*  world, ::ArrayW<::Unity::Mathematics::int3>  voxels, uint8_t  density, uint8_t  materialId, bool  immediate) ;

/// [Extension]
/// @brief Method SetVoxels, addr 0x5df9854, size 0x114, virtual false, abstract: false, final false
static inline void SetVoxels(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  worldBounds, uint8_t  density, uint8_t  materialId, bool  immediate) ;

/// @brief Method SubtractAt, addr 0x5df915c, size 0x1a4, virtual false, abstract: false, final false
static inline uint8_t SubtractAt(::Unity::Mathematics::int3  point, uint8_t  density) ;

/// @brief Method UnMineAt, addr 0x5df8bbc, size 0x5a0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<uint8_t,uint8_t> UnMineAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data) ;

/// [Extension]
/// @brief Method Union, addr 0x5df9b5c, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundsInt Union(::UnityEngine::BoundsInt  a, ::UnityEngine::BoundsInt  b) ;

/// [CompilerGenerated]
/// @brief Method <GetBounds>g__Ceil|38_1, addr 0x5df9c38, size 0x24, virtual false, abstract: false, final false
static inline int32_t _GetBounds_g__Ceil_38_1(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method <GetBounds>g__Round|38_0, addr 0x5df9c24, size 0x14, virtual false, abstract: false, final false
static inline int32_t _GetBounds_g__Round_38_0(int32_t  value) ;

static inline bool getStaticF__cascade() ;

static inline bool getStaticF__centerOnly() ;

static inline ::UnityEngine::BoundsInt getStaticF__lastBounds() ;

static inline ::UnityEngine::Vector3 getStaticF__lastGridPoint() ;

static inline ::UnityEngine::Vector3 getStaticF__lastHitPoint() ;

static inline ::UnityEngine::Vector3 getStaticF__lastVertex() ;

static inline ::GlobalNamespace::VoxelOperation getStaticF__op() ;

static inline ::GlobalNamespace::VoxelAction getStaticF__opAction() ;

static inline uint8_t getStaticF__opDensity() ;

static inline uint8_t getStaticF__opMaterialId() ;

static inline ::UnityW<::Voxels::VoxelMaterialSet> getStaticF__opMaterialSet() ;

static inline ::ArrayW<int32_t> getStaticF__opMined() ;

static inline ::UnityEngine::Vector3 getStaticF__opOrigin() ;

static inline int32_t getStaticF__opTotalMined() ;

static inline bool getStaticF__showDebug() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF__tris() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF__verts() ;

static inline void setStaticF__cascade(bool  value) ;

static inline void setStaticF__centerOnly(bool  value) ;

static inline void setStaticF__lastBounds(::UnityEngine::BoundsInt  value) ;

static inline void setStaticF__lastGridPoint(::UnityEngine::Vector3  value) ;

static inline void setStaticF__lastHitPoint(::UnityEngine::Vector3  value) ;

static inline void setStaticF__lastVertex(::UnityEngine::Vector3  value) ;

static inline void setStaticF__op(::GlobalNamespace::VoxelOperation  value) ;

static inline void setStaticF__opAction(::GlobalNamespace::VoxelAction  value) ;

static inline void setStaticF__opDensity(uint8_t  value) ;

static inline void setStaticF__opMaterialId(uint8_t  value) ;

static inline void setStaticF__opMaterialSet(::UnityW<::Voxels::VoxelMaterialSet>  value) ;

static inline void setStaticF__opMined(::ArrayW<int32_t>  value) ;

static inline void setStaticF__opOrigin(::UnityEngine::Vector3  value) ;

static inline void setStaticF__opTotalMined(int32_t  value) ;

static inline void setStaticF__showDebug(bool  value) ;

static inline void setStaticF__tris(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF__verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelExtensions(VoxelExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelExtensions(VoxelExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VoxelExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelExtensions/<>c__DisplayClass32_0
class CORDL_TYPE VoxelExtensions___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field density, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) uint8_t  density;

/// @brief Field materialId, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_materialId, put=__cordl_internal_set_materialId)) uint8_t  materialId;

static inline ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <SetVoxel>g__SetVoxelAt|0, addr 0x5dfa5c4, size 0x64, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<uint8_t,uint8_t> _SetVoxel_g__SetVoxelAt_0(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data) ;

constexpr uint8_t const& __cordl_internal_get_density() const;

constexpr uint8_t& __cordl_internal_get_density() ;

constexpr uint8_t const& __cordl_internal_get_materialId() const;

constexpr uint8_t& __cordl_internal_get_materialId() ;

constexpr void __cordl_internal_set_density(uint8_t  value) ;

constexpr void __cordl_internal_set_materialId(uint8_t  value) ;

/// @brief Method .ctor, addr 0x5df984c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelExtensions___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelExtensions___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelExtensions___c__DisplayClass32_0(VoxelExtensions___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelExtensions___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelExtensions___c__DisplayClass32_0(VoxelExtensions___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{498};

/// @brief Field density, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___density;

/// @brief Field materialId, offset: 0x11, size: 0x1, def value: None
 uint8_t  ___materialId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0, ___density) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0, ___materialId) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

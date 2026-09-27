#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_VoxelMineOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoxelOperation_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelManager_VoxelMineOperation)
namespace GlobalNamespace {
struct VoxelAction;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoxelManager_VoxelMineOperation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelManager_VoxelMineOperation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelManager_VoxelMineOperation, "Voxels", "VoxelManager/VoxelMineOperation");
// Dependencies Unity.Mathematics.half3, VoxelOperation
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelManager/VoxelMineOperation
struct CORDL_TYPE VoxelManager_VoxelMineOperation {
public:
// Declarations
 __declspec(property(get=get_hitNormal, put=set_hitNormal)) ::UnityEngine::Vector3  hitNormal;

 __declspec(property(get=get_localHitPoint, put=set_localHitPoint)) ::UnityEngine::Vector3  localHitPoint;

/// @brief Method IsValid, addr 0x5dcdcdc, size 0x1c4, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method NormalToBytes, addr 0x5dcd9b8, size 0xd4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<uint8_t,uint8_t,uint8_t> NormalToBytes(::UnityEngine::Vector3  hitNormal) ;

/// @brief Method ToString, addr 0x5dcda8c, size 0x250, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5dca210, size 0x890, virtual false, abstract: false, final false
inline void _ctor(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action) ;

/// @brief Method get_hitNormal, addr 0x5dcd888, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_hitNormal() ;

/// @brief Method get_localHitPoint, addr 0x5dcd4ac, size 0x138, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localHitPoint() ;

/// @brief Method set_hitNormal, addr 0x5dcd8d4, size 0xe4, virtual false, abstract: false, final false
inline void set_hitNormal(::UnityEngine::Vector3  value) ;

/// @brief Method set_localHitPoint, addr 0x5dcd740, size 0x148, virtual false, abstract: false, final false
inline void set_localHitPoint(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelManager_VoxelMineOperation() ;

// Ctor Parameters [CppParam { name: "worldId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_hitOffset", ty: "::Unity::Mathematics::half3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_normX", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_normY", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_normZ", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "op", ty: "::GlobalNamespace::VoxelOperation", modifiers: "", def_value: None, comment: None }]
constexpr VoxelManager_VoxelMineOperation(int32_t  worldId, ::Unity::Mathematics::half3  _hitOffset, uint8_t  _normX, uint8_t  _normY, uint8_t  _normZ, ::GlobalNamespace::VoxelOperation  op) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field worldId, offset: 0x0, size: 0x4, def value: None
 int32_t  worldId;

/// @brief Field _hitOffset, offset: 0x4, size: 0x6, def value: None
 ::Unity::Mathematics::half3  _hitOffset;

/// @brief Field _normX, offset: 0xa, size: 0x1, def value: None
 uint8_t  _normX;

/// @brief Field _normY, offset: 0xb, size: 0x1, def value: None
 uint8_t  _normY;

/// @brief Field _normZ, offset: 0xc, size: 0x1, def value: None
 uint8_t  _normZ;

/// @brief Field op, offset: 0x10, size: 0x14, def value: None
 ::GlobalNamespace::VoxelOperation  op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, worldId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, _hitOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, _normX) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, _normY) == 0xb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, _normZ) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelManager_VoxelMineOperation, op) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelManager_VoxelMineOperation) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Internal/zzzz__SingletonMonoBehaviour_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelActions)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VoxelActions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoxelActions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelActions*, "", "VoxelActions");
// Dependencies PlayFab.Internal.SingletonMonoBehaviour`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelActions
class CORDL_TYPE VoxelActions : public ::PlayFab::Internal::SingletonMonoBehaviour_1<::UnityW<::GlobalNamespace::VoxelActions>> {
public:
// Declarations
/// @brief Field _dirtDigBigFX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtDigBigFX, put=__cordl_internal_set__dirtDigBigFX)) ::UnityW<::UnityEngine::GameObject>  _dirtDigBigFX;

/// @brief Field _dirtDigFX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtDigFX, put=__cordl_internal_set__dirtDigFX)) ::UnityW<::UnityEngine::GameObject>  _dirtDigFX;

/// @brief Field _hitFX, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitFX, put=__cordl_internal_set__hitFX)) ::UnityW<::UnityEngine::GameObject>  _hitFX;

/// @brief Field _stoneDigBigFX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stoneDigBigFX, put=__cordl_internal_set__stoneDigBigFX)) ::UnityW<::UnityEngine::GameObject>  _stoneDigBigFX;

/// @brief Field _stoneDigFX, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__stoneDigFX, put=__cordl_internal_set__stoneDigFX)) ::UnityW<::UnityEngine::GameObject>  _stoneDigFX;

static inline ::GlobalNamespace::VoxelActions* New_ctor() ;

/// @brief Method PlayDigFX, addr 0x5df632c, size 0x1a8, virtual false, abstract: false, final false
inline void PlayDigFX(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, int32_t  dirtAmount, int32_t  stoneAmount) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__dirtDigBigFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__dirtDigBigFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__dirtDigFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__dirtDigFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hitFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hitFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__stoneDigBigFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__stoneDigBigFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__stoneDigFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__stoneDigFX() ;

constexpr void __cordl_internal_set__dirtDigBigFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dirtDigFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hitFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__stoneDigBigFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__stoneDigFX(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5df64d4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelActions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelActions(VoxelActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelActions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelActions(VoxelActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{497};

/// [SerializeField]
/// @brief Field _hitFX, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hitFX;

/// [FormerlySerializedAs("_digFX")]
/// [SerializeField]
/// @brief Field _dirtDigFX, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____dirtDigFX;

/// [FormerlySerializedAs("_bigDigFX")]
/// [SerializeField]
/// @brief Field _dirtDigBigFX, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____dirtDigBigFX;

/// [SerializeField]
/// @brief Field _stoneDigFX, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____stoneDigFX;

/// [SerializeField]
/// @brief Field _stoneDigBigFX, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____stoneDigBigFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelActions, ____hitFX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelActions, ____dirtDigFX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelActions, ____dirtDigBigFX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelActions, ____stoneDigFX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelActions, ____stoneDigBigFX) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelActions) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

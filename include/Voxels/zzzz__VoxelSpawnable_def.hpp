#pragma once
// IWYU pragma private; include "Voxels/VoxelSpawnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoxelSpawnable)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
// Forward declare root types
namespace Voxels {
class VoxelSpawnable;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelSpawnable*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelSpawnable*, "Voxels", "VoxelSpawnable");
// [RequireComponent(typeof(GameEntity))]
// Dependencies UnityEngine.MonoBehaviour
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelSpawnable
class CORDL_TYPE VoxelSpawnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _expireTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__expireTime, put=__cordl_internal_set__expireTime)) float_t  _expireTime;

/// @brief Field _held, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__held, put=__cordl_internal_set__held)) bool  _held;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field lifespan, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifespan, put=__cordl_internal_set_lifespan)) float_t  lifespan;

/// @brief Field type, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::StringW  type;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::Voxels::VoxelSpawnable* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5dcfe04, size 0x188, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGrabbed, addr 0x5dcff98, size 0xc, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x5dcffa4, size 0x28, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method Reset, addr 0x5dcfb68, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SliceUpdate, addr 0x5dcffcc, size 0x64, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5dcfbc0, size 0x214, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartCountdown, addr 0x5dcfdd4, size 0x30, virtual false, abstract: false, final false
inline void StartCountdown() ;

/// @brief Method StopCountdown, addr 0x5dcff8c, size 0xc, virtual false, abstract: false, final false
inline void StopCountdown() ;

constexpr float_t const& __cordl_internal_get__expireTime() const;

constexpr float_t& __cordl_internal_get__expireTime() ;

constexpr bool const& __cordl_internal_get__held() const;

constexpr bool& __cordl_internal_get__held() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr float_t const& __cordl_internal_get_lifespan() const;

constexpr float_t& __cordl_internal_get_lifespan() ;

constexpr ::StringW const& __cordl_internal_get_type() const;

constexpr ::StringW& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set__expireTime(float_t  value) ;

constexpr void __cordl_internal_set__held(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_lifespan(float_t  value) ;

constexpr void __cordl_internal_set_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x5dd0030, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelSpawnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelSpawnable(VoxelSpawnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelSpawnable(VoxelSpawnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5078};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// [Tooltip("Lifespan in seconds.  If zero, object will not expire.")]
/// @brief Field lifespan, offset: 0x28, size: 0x4, def value: None
 float_t  ___lifespan;

/// @brief Field type, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___type;

/// @brief Field _expireTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____expireTime;

/// @brief Field _held, offset: 0x3c, size: 0x1, def value: None
 bool  ____held;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelSpawnable, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnable, ___lifespan) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnable, ___type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnable, ____expireTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnable, ____held) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelSpawnable) == 0x40, "Size mismatch!");

} // namespace end def Voxels

#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSenseNearby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSenseNearby)
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSenseNearby;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSenseNearby*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSenseNearby*, "", "GRSenseNearby");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSenseNearby
class CORDL_TYPE GRSenseNearby : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BossEntityPresent)) bool  BossEntityPresent;

/// @brief Field _entity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__entity, put=__cordl_internal_set__entity)) ::UnityW<::GlobalNamespace::GameEntity>  _entity;

/// @brief Field exitRange, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_exitRange, put=__cordl_internal_set_exitRange)) float_t  exitRange;

/// @brief Field fov, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fov, put=__cordl_internal_set_fov)) float_t  fov;

/// @brief Field headTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRange, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRange, put=__cordl_internal_set_hearingRange)) float_t  hearingRange;

/// @brief Field range, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Field rigsNearby, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigsNearby, put=__cordl_internal_set_rigsNearby)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsNearby;

/// @brief Method AddNearby, addr 0x58b02a8, size 0x404, virtual false, abstract: false, final false
inline void AddNearby(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  forward, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs) ;

/// @brief Method GetRigTestLocation, addr 0x58b09c8, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetRigTestLocation(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method IsAnyoneNearby, addr 0x58b07b8, size 0x84, virtual false, abstract: false, final false
inline bool IsAnyoneNearby() ;

/// @brief Method IsAnyoneNearby, addr 0x58b083c, size 0x18c, virtual false, abstract: false, final false
inline bool IsAnyoneNearby(float_t  range, bool  ignoreBossEntity) ;

static inline ::GlobalNamespace::GRSenseNearby* New_ctor() ;

/// @brief Method OnHitByPlayer, addr 0x58afe60, size 0x174, virtual false, abstract: false, final false
inline void OnHitByPlayer(int32_t  hitByActorId) ;

/// @brief Method PickClosest, addr 0x58b0ab4, size 0x11c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> PickClosest(::by_ref<float_t>  outDistanceSq) ;

/// @brief Method RemoveNoLineOfSight, addr 0x58b06ac, size 0x10c, virtual false, abstract: false, final false
inline void RemoveNoLineOfSight(::UnityEngine::Vector3  headPos, ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight) ;

/// @brief Method RemoveNotNearby, addr 0x58b0104, size 0x1a4, virtual false, abstract: false, final false
inline void RemoveNotNearby(::UnityEngine::Vector3  position) ;

/// @brief Method Setup, addr 0x58afdb4, size 0xac, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Transform*  headTransform, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method UpdateNearby, addr 0x58affd4, size 0x130, virtual false, abstract: false, final false
inline void UpdateNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs, ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight) ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get__entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get__entity() ;

constexpr float_t const& __cordl_internal_get_exitRange() const;

constexpr float_t& __cordl_internal_get_exitRange() ;

constexpr float_t const& __cordl_internal_get_fov() const;

constexpr float_t& __cordl_internal_get_fov() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRange() const;

constexpr float_t& __cordl_internal_get_hearingRange() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigsNearby() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigsNearby() ;

constexpr void __cordl_internal_set__entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_exitRange(float_t  value) ;

constexpr void __cordl_internal_set_fov(float_t  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRange(float_t  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

constexpr void __cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// @brief Method .ctor, addr 0x58b0bd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BossEntityPresent, addr 0x58afd0c, size 0xa8, virtual false, abstract: false, final false
inline bool get_BossEntityPresent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSenseNearby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSenseNearby", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSenseNearby(GRSenseNearby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSenseNearby", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSenseNearby(GRSenseNearby const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2031};

/// @brief Field range, offset: 0x10, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field hearingRange, offset: 0x14, size: 0x4, def value: None
 float_t  ___hearingRange;

/// @brief Field exitRange, offset: 0x18, size: 0x4, def value: None
 float_t  ___exitRange;

/// @brief Field fov, offset: 0x1c, size: 0x4, def value: None
 float_t  ___fov;

/// [ReadOnly]
/// @brief Field rigsNearby, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigsNearby;

/// @brief Field headTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field _entity, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ____entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___range) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___hearingRange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___exitRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___fov) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___rigsNearby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ___headTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseNearby, ____entity) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSenseNearby) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

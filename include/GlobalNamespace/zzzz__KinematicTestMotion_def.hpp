#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicTestMotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KinematicTestMotion_MoveType_def.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_UpdateType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KinematicTestMotion)
namespace GlobalNamespace {
struct KinematicTestMotion_MoveType;
}
namespace GlobalNamespace {
struct KinematicTestMotion_UpdateType;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class KinematicTestMotion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KinematicTestMotion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KinematicTestMotion*, "", "KinematicTestMotion");
// Dependencies KinematicTestMotion::MoveType, KinematicTestMotion::UpdateType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KinematicTestMotion
class CORDL_TYPE KinematicTestMotion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MoveType = ::GlobalNamespace::KinematicTestMotion_MoveType;

using UpdateType = ::GlobalNamespace::KinematicTestMotion_UpdateType;

/// @brief Field end, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

/// @brief Field moveType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveType, put=__cordl_internal_set_moveType)) ::GlobalNamespace::KinematicTestMotion_MoveType  moveType;

/// @brief Field period, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) float_t  period;

/// @brief Field rigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody, put=__cordl_internal_set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field start, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityW<::UnityEngine::Transform>  start;

/// @brief Field updateType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateType, put=__cordl_internal_set_updateType)) ::GlobalNamespace::KinematicTestMotion_UpdateType  updateType;

/// @brief Method FixedUpdate, addr 0x5adfe90, size 0x2c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x5ae0004, size 0x2c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::KinematicTestMotion* New_ctor() ;

/// @brief Method Update, addr 0x5adffdc, size 0x28, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePosition, addr 0x5adfebc, size 0x120, virtual false, abstract: false, final false
inline void UpdatePosition(float_t  time) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr ::GlobalNamespace::KinematicTestMotion_MoveType const& __cordl_internal_get_moveType() const;

constexpr ::GlobalNamespace::KinematicTestMotion_MoveType& __cordl_internal_get_moveType() ;

constexpr float_t const& __cordl_internal_get_period() const;

constexpr float_t& __cordl_internal_get_period() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_start() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_start() ;

constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType const& __cordl_internal_get_updateType() const;

constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType& __cordl_internal_get_updateType() ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_moveType(::GlobalNamespace::KinematicTestMotion_MoveType  value) ;

constexpr void __cordl_internal_set_period(float_t  value) ;

constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_start(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_updateType(::GlobalNamespace::KinematicTestMotion_UpdateType  value) ;

/// @brief Method .ctor, addr 0x5ae0030, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KinematicTestMotion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KinematicTestMotion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KinematicTestMotion(KinematicTestMotion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KinematicTestMotion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KinematicTestMotion(KinematicTestMotion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3445};

/// @brief Field start, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___start;

/// @brief Field end, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// @brief Field rigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody;

/// @brief Field updateType, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::KinematicTestMotion_UpdateType  ___updateType;

/// @brief Field moveType, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::KinematicTestMotion_MoveType  ___moveType;

/// @brief Field period, offset: 0x40, size: 0x4, def value: None
 float_t  ___period;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___start) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___end) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___rigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___updateType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___moveType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KinematicTestMotion, ___period) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KinematicTestMotion) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

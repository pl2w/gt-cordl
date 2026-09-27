#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeProjectileTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonkeyeProjectileTarget)
namespace GlobalNamespace {
class MonkeyeAI;
}
namespace GlobalNamespace {
class PaperPlaneProjectile;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeyeProjectileTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeyeProjectileTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeyeProjectileTarget*, "", "MonkeyeProjectileTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeyeProjectileTarget
class CORDL_TYPE MonkeyeProjectileTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field monkeyeAI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeyeAI, put=__cordl_internal_set_monkeyeAI)) ::UnityW<::GlobalNamespace::MonkeyeAI>  monkeyeAI;

/// @brief Field notifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_notifier, put=__cordl_internal_set_notifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  notifier;

/// @brief Method Awake, addr 0x56d35e0, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MonkeyeProjectileTarget* New_ctor() ;

/// @brief Method Notifier_OnPaperPlaneHit, addr 0x56d38e0, size 0x18, virtual false, abstract: false, final false
inline void Notifier_OnPaperPlaneHit(::GlobalNamespace::PaperPlaneProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

/// @brief Method Notifier_OnProjectileHit, addr 0x56d38c8, size 0x18, virtual false, abstract: false, final false
inline void Notifier_OnProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x56d379c, size 0x12c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56d3670, size 0x12c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::MonkeyeAI> const& __cordl_internal_get_monkeyeAI() const;

constexpr ::UnityW<::GlobalNamespace::MonkeyeAI>& __cordl_internal_get_monkeyeAI() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_notifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_notifier() ;

constexpr void __cordl_internal_set_monkeyeAI(::UnityW<::GlobalNamespace::MonkeyeAI>  value) ;

constexpr void __cordl_internal_set_notifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

/// @brief Method .ctor, addr 0x56d38f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeyeProjectileTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeProjectileTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeyeProjectileTarget(MonkeyeProjectileTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeProjectileTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeyeProjectileTarget(MonkeyeProjectileTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1065};

/// @brief Field monkeyeAI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeyeAI>  ___monkeyeAI;

/// @brief Field notifier, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___notifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeyeProjectileTarget, ___monkeyeAI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeProjectileTarget, ___notifier) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeyeProjectileTarget) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterRandomAngularVelocity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIBlasterRandomAngularVelocity)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIGadgetProjectileModifier;
}
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterRandomAngularVelocity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterRandomAngularVelocity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterRandomAngularVelocity*, "", "SIBlasterRandomAngularVelocity");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterRandomAngularVelocity
class CORDL_TYPE SIBlasterRandomAngularVelocity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxVel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVel, put=__cordl_internal_set_maxVel)) float_t  maxVel;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr operator  ::GlobalNamespace::SIGadgetProjectileModifier*() noexcept;

/// @brief Method ModifyProjectile, addr 0x57f7284, size 0x84, virtual true, abstract: false, final true
inline void ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile) ;

static inline ::GlobalNamespace::SIBlasterRandomAngularVelocity* New_ctor() ;

constexpr float_t const& __cordl_internal_get_maxVel() const;

constexpr float_t& __cordl_internal_get_maxVel() ;

constexpr void __cordl_internal_set_maxVel(float_t  value) ;

/// @brief Method .ctor, addr 0x57f7308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr ::GlobalNamespace::SIGadgetProjectileModifier* i___GlobalNamespace__SIGadgetProjectileModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterRandomAngularVelocity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterRandomAngularVelocity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterRandomAngularVelocity(SIBlasterRandomAngularVelocity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterRandomAngularVelocity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterRandomAngularVelocity(SIBlasterRandomAngularVelocity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{218};

/// @brief Field maxVel, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxVel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBlasterRandomAngularVelocity, ___maxVel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBlasterRandomAngularVelocity) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

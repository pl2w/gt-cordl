#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSwingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaRopeSwingSettings)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwingSettings;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*, "GorillaLocomotion.Gameplay", "GorillaRopeSwingSettings");
// [CreateAssetMenu(fileName = "GorillaRopeSwingSettings", menuName = "ScriptableObjects/GorillaRopeSwingSettings", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaRopeSwingSettings
class CORDL_TYPE GorillaRopeSwingSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field frictionWhenNotHeld, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frictionWhenNotHeld, put=__cordl_internal_set_frictionWhenNotHeld)) float_t  frictionWhenNotHeld;

/// @brief Field inheritVelocityMultiplier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_inheritVelocityMultiplier, put=__cordl_internal_set_inheritVelocityMultiplier)) float_t  inheritVelocityMultiplier;

static inline ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_frictionWhenNotHeld() const;

constexpr float_t& __cordl_internal_get_frictionWhenNotHeld() ;

constexpr float_t const& __cordl_internal_get_inheritVelocityMultiplier() const;

constexpr float_t& __cordl_internal_get_inheritVelocityMultiplier() ;

constexpr void __cordl_internal_set_frictionWhenNotHeld(float_t  value) ;

constexpr void __cordl_internal_set_inheritVelocityMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x5ced340, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaRopeSwingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwingSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaRopeSwingSettings(GorillaRopeSwingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaRopeSwingSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaRopeSwingSettings(GorillaRopeSwingSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4530};

/// @brief Field inheritVelocityMultiplier, offset: 0x18, size: 0x4, def value: None
 float_t  ___inheritVelocityMultiplier;

/// @brief Field frictionWhenNotHeld, offset: 0x1c, size: 0x4, def value: None
 float_t  ___frictionWhenNotHeld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings, ___inheritVelocityMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings, ___frictionWhenNotHeld) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings) == 0x20, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay

#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaZiplineSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaZiplineSettings)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class GorillaZiplineSettings;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::GorillaZiplineSettings*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::GorillaZiplineSettings*, "GorillaLocomotion.Gameplay", "GorillaZiplineSettings");
// [CreateAssetMenu(fileName = "GorillaZiplineSettings", menuName = "ScriptableObjects/GorillaZiplineSettings", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.GorillaZiplineSettings
class CORDL_TYPE GorillaZiplineSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field friction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_friction, put=__cordl_internal_set_friction)) float_t  friction;

/// @brief Field gravityMulti, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMulti, put=__cordl_internal_set_gravityMulti)) float_t  gravityMulti;

/// @brief Field maxFriction, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFriction, put=__cordl_internal_set_maxFriction)) float_t  maxFriction;

/// @brief Field maxFrictionSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFrictionSpeed, put=__cordl_internal_set_maxFrictionSpeed)) float_t  maxFrictionSpeed;

/// @brief Field maxSlidePitch, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlidePitch, put=__cordl_internal_set_maxSlidePitch)) float_t  maxSlidePitch;

/// @brief Field maxSlideVolume, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlideVolume, put=__cordl_internal_set_maxSlideVolume)) float_t  maxSlideVolume;

/// @brief Field maxSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field minSlidePitch, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSlidePitch, put=__cordl_internal_set_minSlidePitch)) float_t  minSlidePitch;

/// @brief Field minSlideVolume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSlideVolume, put=__cordl_internal_set_minSlideVolume)) float_t  minSlideVolume;

static inline ::GorillaLocomotion::Gameplay::GorillaZiplineSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_friction() const;

constexpr float_t& __cordl_internal_get_friction() ;

constexpr float_t const& __cordl_internal_get_gravityMulti() const;

constexpr float_t& __cordl_internal_get_gravityMulti() ;

constexpr float_t const& __cordl_internal_get_maxFriction() const;

constexpr float_t& __cordl_internal_get_maxFriction() ;

constexpr float_t const& __cordl_internal_get_maxFrictionSpeed() const;

constexpr float_t& __cordl_internal_get_maxFrictionSpeed() ;

constexpr float_t const& __cordl_internal_get_maxSlidePitch() const;

constexpr float_t& __cordl_internal_get_maxSlidePitch() ;

constexpr float_t const& __cordl_internal_get_maxSlideVolume() const;

constexpr float_t& __cordl_internal_get_maxSlideVolume() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_minSlidePitch() const;

constexpr float_t& __cordl_internal_get_minSlidePitch() ;

constexpr float_t const& __cordl_internal_get_minSlideVolume() const;

constexpr float_t& __cordl_internal_get_minSlideVolume() ;

constexpr void __cordl_internal_set_friction(float_t  value) ;

constexpr void __cordl_internal_set_gravityMulti(float_t  value) ;

constexpr void __cordl_internal_set_maxFriction(float_t  value) ;

constexpr void __cordl_internal_set_maxFrictionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxSlidePitch(float_t  value) ;

constexpr void __cordl_internal_set_maxSlideVolume(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minSlidePitch(float_t  value) ;

constexpr void __cordl_internal_set_minSlideVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5cee010, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaZiplineSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaZiplineSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaZiplineSettings(GorillaZiplineSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaZiplineSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaZiplineSettings(GorillaZiplineSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4533};

/// @brief Field minSlidePitch, offset: 0x18, size: 0x4, def value: None
 float_t  ___minSlidePitch;

/// @brief Field maxSlidePitch, offset: 0x1c, size: 0x4, def value: None
 float_t  ___maxSlidePitch;

/// @brief Field minSlideVolume, offset: 0x20, size: 0x4, def value: None
 float_t  ___minSlideVolume;

/// @brief Field maxSlideVolume, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxSlideVolume;

/// @brief Field maxSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field gravityMulti, offset: 0x2c, size: 0x4, def value: None
 float_t  ___gravityMulti;

/// [Header("Friction")]
/// @brief Field friction, offset: 0x30, size: 0x4, def value: None
 float_t  ___friction;

/// @brief Field maxFriction, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxFriction;

/// @brief Field maxFrictionSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxFrictionSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___minSlidePitch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___maxSlidePitch) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___minSlideVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___maxSlideVolume) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___maxSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___gravityMulti) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___friction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___maxFriction) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings, ___maxFrictionSpeed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaZiplineSettings) == 0x40, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay

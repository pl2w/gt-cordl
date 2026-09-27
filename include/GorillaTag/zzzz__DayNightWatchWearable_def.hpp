#pragma once
// IWYU pragma private; include "GorillaTag/DayNightWatchWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DayNightWatchWearable)
namespace GlobalNamespace {
class BetterDayNightManager;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag {
class DayNightWatchWearable;
}
// Write type traits
MARK_REF_T(::GorillaTag::DayNightWatchWearable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DayNightWatchWearable*, "GorillaTag", "DayNightWatchWearable");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DayNightWatchWearable
class CORDL_TYPE DayNightWatchWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clockNeedle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockNeedle, put=__cordl_internal_set_clockNeedle)) ::UnityW<::UnityEngine::Transform>  clockNeedle;

/// @brief Field currentTimeOfDay, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTimeOfDay, put=__cordl_internal_set_currentTimeOfDay)) ::StringW  currentTimeOfDay;

/// @brief Field dayNightManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightManager, put=__cordl_internal_set_dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  dayNightManager;

/// @brief Field initialRotation, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field needleRotationAxis, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_needleRotationAxis, put=__cordl_internal_set_needleRotationAxis)) ::UnityEngine::Vector3  needleRotationAxis;

/// @brief Field rotationDegree, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDegree, put=__cordl_internal_set_rotationDegree)) float_t  rotationDegree;

static inline ::GorillaTag::DayNightWatchWearable* New_ctor() ;

/// @brief Method Start, addr 0x5d286ac, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5d287a4, size 0x248, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_clockNeedle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_clockNeedle() ;

constexpr ::StringW const& __cordl_internal_get_currentTimeOfDay() const;

constexpr ::StringW& __cordl_internal_get_currentTimeOfDay() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get_dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get_dayNightManager() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_needleRotationAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_needleRotationAxis() ;

constexpr float_t const& __cordl_internal_get_rotationDegree() const;

constexpr float_t& __cordl_internal_get_rotationDegree() ;

constexpr void __cordl_internal_set_clockNeedle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentTimeOfDay(::StringW  value) ;

constexpr void __cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_needleRotationAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotationDegree(float_t  value) ;

/// @brief Method .ctor, addr 0x5d289ec, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DayNightWatchWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayNightWatchWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayNightWatchWearable(DayNightWatchWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayNightWatchWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayNightWatchWearable(DayNightWatchWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4629};

/// [Tooltip("The transform that will be rotated to indicate the current time.")]
/// @brief Field clockNeedle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___clockNeedle;

/// [FormerlySerializedAs("dialRotationAxis")]
/// [Tooltip("The axis that the needle will rotate around.")]
/// @brief Field needleRotationAxis, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___needleRotationAxis;

/// @brief Field dayNightManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ___dayNightManager;

/// [DebugOption]
/// @brief Field rotationDegree, offset: 0x40, size: 0x4, def value: None
 float_t  ___rotationDegree;

/// @brief Field currentTimeOfDay, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___currentTimeOfDay;

/// @brief Field initialRotation, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___clockNeedle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___needleRotationAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___dayNightManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___rotationDegree) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___currentTimeOfDay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DayNightWatchWearable, ___initialRotation) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::DayNightWatchWearable) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag

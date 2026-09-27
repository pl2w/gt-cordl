#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ScubaWatchWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScubaWatchWearable)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ScubaWatchWearable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ScubaWatchWearable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ScubaWatchWearable*, "GorillaTag.Cosmetics", "ScubaWatchWearable");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ScubaWatchWearable
class CORDL_TYPE ScubaWatchWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentDepth, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDepth, put=__cordl_internal_set_currentDepth)) float_t  currentDepth;

/// @brief Field depthRange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthRange, put=__cordl_internal_set_depthRange)) ::UnityEngine::Vector2  depthRange;

/// @brief Field dialNeedle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dialNeedle, put=__cordl_internal_set_dialNeedle)) ::UnityW<::UnityEngine::Transform>  dialNeedle;

/// @brief Field dialRotationAxis, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_dialRotationAxis, put=__cordl_internal_set_dialRotationAxis)) ::UnityEngine::Vector3  dialRotationAxis;

/// @brief Field dialRotationRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dialRotationRange, put=__cordl_internal_set_dialRotationRange)) ::UnityEngine::Vector2  dialRotationRange;

/// @brief Field initialDialRotation, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialDialRotation, put=__cordl_internal_set_initialDialRotation)) ::UnityEngine::Quaternion  initialDialRotation;

/// @brief Field onLeftHand, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_onLeftHand, put=__cordl_internal_set_onLeftHand)) bool  onLeftHand;

static inline ::GorillaTag::Cosmetics::ScubaWatchWearable* New_ctor() ;

/// @brief Method Update, addr 0x5d5fde4, size 0x2a8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_currentDepth() const;

constexpr float_t& __cordl_internal_get_currentDepth() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_depthRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_depthRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dialNeedle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dialNeedle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_dialRotationAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_dialRotationAxis() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_dialRotationRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_dialRotationRange() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialDialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialDialRotation() ;

constexpr bool const& __cordl_internal_get_onLeftHand() const;

constexpr bool& __cordl_internal_get_onLeftHand() ;

constexpr void __cordl_internal_set_currentDepth(float_t  value) ;

constexpr void __cordl_internal_set_depthRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_dialNeedle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dialRotationAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_dialRotationRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_initialDialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_onLeftHand(bool  value) ;

/// @brief Method .ctor, addr 0x5d6008c, size 0xb40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScubaWatchWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScubaWatchWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScubaWatchWearable(ScubaWatchWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScubaWatchWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScubaWatchWearable(ScubaWatchWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4826};

/// @brief Field onLeftHand, offset: 0x20, size: 0x1, def value: None
 bool  ___onLeftHand;

/// [Tooltip("The transform that will be rotated to indicate the current depth.")]
/// @brief Field dialNeedle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dialNeedle;

/// [Tooltip("If your rotation is not zeroed out then click the Auto button to use the current rotation as 0.")]
/// @brief Field initialDialRotation, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialDialRotation;

/// [Tooltip("The range of depth values that the dial will rotate between.")]
/// @brief Field depthRange, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___depthRange;

/// [Tooltip("The range of rotation values that the dial will rotate between.")]
/// @brief Field dialRotationRange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___dialRotationRange;

/// [Tooltip("The axis that the dial will rotate around.")]
/// @brief Field dialRotationAxis, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___dialRotationAxis;

/// [Tooltip("The current depth of the player.")]
/// [DebugOption]
/// @brief Field currentDepth, offset: 0x5c, size: 0x4, def value: None
 float_t  ___currentDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___onLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___dialNeedle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___initialDialRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___depthRange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___dialRotationRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___dialRotationAxis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ScubaWatchWearable, ___currentDepth) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ScubaWatchWearable) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SmoothScaleModifierCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__SmoothScaleModifierCosmetic_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothScaleModifierCosmetic)
namespace GlobalNamespace {
struct SmoothScaleModifierCosmetic_State;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SmoothScaleModifierCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic*, "GorillaTag.Cosmetics", "SmoothScaleModifierCosmetic");
// Dependencies GorillaTag.Cosmetics.SmoothScaleModifierCosmetic::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SmoothScaleModifierCosmetic
class CORDL_TYPE SmoothScaleModifierCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::SmoothScaleModifierCosmetic_State;

/// @brief Field currentState, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SmoothScaleModifierCosmetic_State  currentState;

/// @brief Field initialScale, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialScale, put=__cordl_internal_set_initialScale)) ::UnityEngine::Vector3  initialScale;

/// @brief Field objectPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectPrefab, put=__cordl_internal_set_objectPrefab)) ::UnityW<::UnityEngine::GameObject>  objectPrefab;

/// @brief Field onReset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReset, put=__cordl_internal_set_onReset)) ::UnityEngine::Events::UnityEvent*  onReset;

/// @brief Field onScaled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onScaled, put=__cordl_internal_set_onScaled)) ::UnityEngine::Events::UnityEvent*  onScaled;

/// @brief Field speed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field targetScale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetScale, put=__cordl_internal_set_targetScale)) ::UnityEngine::Vector3  targetScale;

/// @brief Method Awake, addr 0x5da1194, size 0x38, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic* New_ctor() ;

/// @brief Method OnEnable, addr 0x5da11cc, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SmoothScale, addr 0x5da1430, size 0x160, virtual false, abstract: false, final false
inline void SmoothScale(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  target) ;

/// @brief Method TriggerReset, addr 0x5da15b0, size 0x18, virtual false, abstract: false, final false
inline void TriggerReset() ;

/// @brief Method TriggerScale, addr 0x5da1598, size 0x18, virtual false, abstract: false, final false
inline void TriggerScale() ;

/// @brief Method Update, addr 0x5da11d8, size 0x258, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateState, addr 0x5da1590, size 0x8, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SmoothScaleModifierCosmetic_State  newState) ;

constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SmoothScaleModifierCosmetic_State& __cordl_internal_get_currentState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialScale() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectPrefab() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onReset() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onReset() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onScaled() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onScaled() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetScale() ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SmoothScaleModifierCosmetic_State  value) ;

constexpr void __cordl_internal_set_initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_objectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_onReset(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onScaled(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_targetScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5da15c8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmoothScaleModifierCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothScaleModifierCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothScaleModifierCosmetic(SmoothScaleModifierCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothScaleModifierCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothScaleModifierCosmetic(SmoothScaleModifierCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4970};

/// [Tooltip("The GameObject to scale up or down. This should reference the cosmetic mesh or object you want to visually modify.")]
/// [SerializeField]
/// @brief Field objectPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectPrefab;

/// [Tooltip("The target scale applied when scaling is triggered.")]
/// [SerializeField]
/// @brief Field targetScale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetScale;

/// [Tooltip("Speed at which the object scales toward its target or initial size")]
/// [SerializeField]
/// @brief Field speed, offset: 0x34, size: 0x4, def value: None
 float_t  ___speed;

/// [Tooltip("Invoked once when the object reaches the target scale.")]
/// @brief Field onScaled, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onScaled;

/// [Tooltip("Invoked once when the object returns to its initial scale.")]
/// @brief Field onReset, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onReset;

/// @brief Field currentState, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::SmoothScaleModifierCosmetic_State  ___currentState;

/// @brief Field initialScale, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___objectPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___targetScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___speed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___onScaled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___onReset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___currentState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic, ___initialScale) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SmoothScaleModifierCosmetic) == 0x58, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

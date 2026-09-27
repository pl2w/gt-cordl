#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOESender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__AOESender_FalloffMode_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AOESender)
namespace GlobalNamespace {
struct AOESender_FalloffMode;
}
namespace GorillaTag::Cosmetics {
class AOEReceiver;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class AOESender;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::AOESender*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::AOESender*, "GorillaTag.Cosmetics", "AOESender");
// Dependencies GorillaTag.Cosmetics.AOESender::FalloffMode, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.QueryTriggerInteraction
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.AOESender
class CORDL_TYPE AOESender : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FalloffMode = ::GlobalNamespace::AOESender_FalloffMode;

/// @brief Field applyOnEnable, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnEnable, put=__cordl_internal_set_applyOnEnable)) bool  applyOnEnable;

/// @brief Field falloffCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloffCurve, put=__cordl_internal_set_falloffCurve)) ::UnityEngine::AnimationCurve*  falloffCurve;

/// @brief Field falloffMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_falloffMode, put=__cordl_internal_set_falloffMode)) ::GlobalNamespace::AOESender_FalloffMode  falloffMode;

/// @brief Field hits, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  hits;

/// @brief Field includeTags, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_includeTags, put=__cordl_internal_set_includeTags)) ::ArrayW<::StringW>  includeTags;

/// @brief Field layerMask, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field maxColliders, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxColliders, put=__cordl_internal_set_maxColliders)) int32_t  maxColliders;

/// @brief Field minStrength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minStrength, put=__cordl_internal_set_minStrength)) float_t  minStrength;

/// @brief Field nextTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextTime, put=__cordl_internal_set_nextTime)) float_t  nextTime;

/// @brief Field radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field repeatInterval, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatInterval, put=__cordl_internal_set_repeatInterval)) float_t  repeatInterval;

/// @brief Field strength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Field triggerInteraction, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerInteraction, put=__cordl_internal_set_triggerInteraction)) ::UnityEngine::QueryTriggerInteraction  triggerInteraction;

/// @brief Field visited, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_visited, put=__cordl_internal_set_visited)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*  visited;

/// @brief Method ApplyAOE, addr 0x5d6d854, size 0x2c, virtual false, abstract: false, final false
inline void ApplyAOE() ;

/// @brief Method ApplyAOE, addr 0x5d6d8cc, size 0x3d8, virtual false, abstract: false, final false
inline void ApplyAOE(::UnityEngine::Vector3  worldOrigin) ;

/// @brief Method Awake, addr 0x5d6d79c, size 0x84, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateFalloff, addr 0x5d6ddb0, size 0x50, virtual false, abstract: false, final false
inline float_t EvaluateFalloff(float_t  t) ;

static inline ::GorillaTag::Cosmetics::AOESender* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d6d820, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TagValidation, addr 0x5d6dca4, size 0x10c, virtual false, abstract: false, final false
inline bool TagValidation(::UnityEngine::GameObject*  go) ;

/// @brief Method Update, addr 0x5d6d880, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_applyOnEnable() const;

constexpr bool& __cordl_internal_get_applyOnEnable() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_falloffCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_falloffCurve() ;

constexpr ::GlobalNamespace::AOESender_FalloffMode const& __cordl_internal_get_falloffMode() const;

constexpr ::GlobalNamespace::AOESender_FalloffMode& __cordl_internal_get_falloffMode() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_hits() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_includeTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_includeTags() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr int32_t const& __cordl_internal_get_maxColliders() const;

constexpr int32_t& __cordl_internal_get_maxColliders() ;

constexpr float_t const& __cordl_internal_get_minStrength() const;

constexpr float_t& __cordl_internal_get_minStrength() ;

constexpr float_t const& __cordl_internal_get_nextTime() const;

constexpr float_t& __cordl_internal_get_nextTime() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_repeatInterval() const;

constexpr float_t& __cordl_internal_get_repeatInterval() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_triggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_triggerInteraction() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>* const& __cordl_internal_get_visited() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*& __cordl_internal_get_visited() ;

constexpr void __cordl_internal_set_applyOnEnable(bool  value) ;

constexpr void __cordl_internal_set_falloffCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_falloffMode(::GlobalNamespace::AOESender_FalloffMode  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_includeTags(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxColliders(int32_t  value) ;

constexpr void __cordl_internal_set_minStrength(float_t  value) ;

constexpr void __cordl_internal_set_nextTime(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_repeatInterval(float_t  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

constexpr void __cordl_internal_set_triggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_visited(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*  value) ;

/// @brief Method .ctor, addr 0x5d6de00, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AOESender() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AOESender", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AOESender(AOESender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AOESender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AOESender(AOESender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4846};

/// [Min(0)]
/// [SerializeField]
/// @brief Field radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___radius;

/// [SerializeField]
/// @brief Field layerMask, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// [SerializeField]
/// @brief Field triggerInteraction, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___triggerInteraction;

/// [Tooltip("If empty, all AOEReceiver targets pass. If not empty, only receivers with these tags pass.")]
/// [SerializeField]
/// @brief Field includeTags, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___includeTags;

/// [SerializeField]
/// @brief Field falloffMode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::AOESender_FalloffMode  ___falloffMode;

/// [SerializeField]
/// @brief Field falloffCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___falloffCurve;

/// [Tooltip("Base strength before distance falloff.")]
/// [SerializeField]
/// @brief Field strength, offset: 0x48, size: 0x4, def value: None
 float_t  ___strength;

/// [Tooltip("Optional after falloff, applied as: max(minStrength, base*falloff).")]
/// [SerializeField]
/// @brief Field minStrength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___minStrength;

/// [SerializeField]
/// @brief Field applyOnEnable, offset: 0x50, size: 0x1, def value: None
 bool  ___applyOnEnable;

/// [Min(0)]
/// [SerializeField]
/// @brief Field repeatInterval, offset: 0x54, size: 0x4, def value: None
 float_t  ___repeatInterval;

/// [SerializeField]
/// [Tooltip("Max colliders captured per trigger/apply.")]
/// @brief Field maxColliders, offset: 0x58, size: 0x4, def value: None
 int32_t  ___maxColliders;

/// @brief Field hits, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___hits;

/// @brief Field visited, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::AOEReceiver>>*  ___visited;

/// @brief Field nextTime, offset: 0x70, size: 0x4, def value: None
 float_t  ___nextTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___layerMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___triggerInteraction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___includeTags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___falloffMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___falloffCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___strength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___minStrength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___applyOnEnable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___repeatInterval) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___maxColliders) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___hits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___visited) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::AOESender, ___nextTime) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::AOESender) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

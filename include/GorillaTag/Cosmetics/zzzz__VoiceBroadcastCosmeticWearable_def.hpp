#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VoiceBroadcastCosmeticWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__TalkingCosmeticType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceBroadcastCosmeticWearable)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaTag::Cosmetics {
class VoiceBroadcastCosmetic;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class VoiceBroadcastCosmeticWearable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*, "GorillaTag.Cosmetics", "VoiceBroadcastCosmeticWearable");
// Dependencies GorillaTag.Cosmetics.TalkingCosmeticType, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.VoiceBroadcastCosmeticWearable
class CORDL_TYPE VoiceBroadcastCosmeticWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field headDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_headDistance, put=__cordl_internal_set_headDistance)) float_t  headDistance;

/// @brief Field headDistanceActivation, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_headDistanceActivation, put=__cordl_internal_set_headDistanceActivation)) bool  headDistanceActivation;

/// @brief Field lastToggleTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastToggleTime, put=__cordl_internal_set_lastToggleTime)) float_t  lastToggleTime;

/// @brief Field onStartListening, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartListening, put=__cordl_internal_set_onStartListening)) ::UnityEngine::Events::UnityEvent*  onStartListening;

/// @brief Field onStopListening, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStopListening, put=__cordl_internal_set_onStopListening)) ::UnityEngine::Events::UnityEvent*  onStopListening;

/// @brief Field playerHeadCollider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHeadCollider, put=__cordl_internal_set_playerHeadCollider)) ::UnityW<::UnityEngine::Collider>  playerHeadCollider;

/// @brief Field talkingCosmeticType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_talkingCosmeticType, put=__cordl_internal_set_talkingCosmeticType)) ::GorillaTag::Cosmetics::TalkingCosmeticType  talkingCosmeticType;

/// @brief Field toggleCooldown, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleCooldown, put=__cordl_internal_set_toggleCooldown)) float_t  toggleCooldown;

/// @brief Field toggleState, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_toggleState, put=__cordl_internal_set_toggleState)) bool  toggleState;

/// @brief Field voiceBroadcasters, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceBroadcasters, put=__cordl_internal_set_voiceBroadcasters)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic>>*  voiceBroadcasters;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable* New_ctor() ;

/// @brief Method OnCosmeticStartListening, addr 0x5da5b68, size 0x1c, virtual false, abstract: false, final false
inline void OnCosmeticStartListening() ;

/// @brief Method OnCosmeticStopListening, addr 0x5da5be4, size 0x1c, virtual false, abstract: false, final false
inline void OnCosmeticStopListening() ;

/// @brief Method OnDisable, addr 0x5da6150, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da6048, size 0x108, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5da615c, size 0x16c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5da5e98, size 0x1b0, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_headDistance() const;

constexpr float_t& __cordl_internal_get_headDistance() ;

constexpr bool const& __cordl_internal_get_headDistanceActivation() const;

constexpr bool& __cordl_internal_get_headDistanceActivation() ;

constexpr float_t const& __cordl_internal_get_lastToggleTime() const;

constexpr float_t& __cordl_internal_get_lastToggleTime() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStartListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStartListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStopListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStopListening() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_playerHeadCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_playerHeadCollider() ;

constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType const& __cordl_internal_get_talkingCosmeticType() const;

constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType& __cordl_internal_get_talkingCosmeticType() ;

constexpr float_t const& __cordl_internal_get_toggleCooldown() const;

constexpr float_t& __cordl_internal_get_toggleCooldown() ;

constexpr bool const& __cordl_internal_get_toggleState() const;

constexpr bool& __cordl_internal_get_toggleState() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic>>* const& __cordl_internal_get_voiceBroadcasters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic>>*& __cordl_internal_get_voiceBroadcasters() ;

constexpr void __cordl_internal_set_headDistance(float_t  value) ;

constexpr void __cordl_internal_set_headDistanceActivation(bool  value) ;

constexpr void __cordl_internal_set_lastToggleTime(float_t  value) ;

constexpr void __cordl_internal_set_onStartListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStopListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_playerHeadCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_talkingCosmeticType(::GorillaTag::Cosmetics::TalkingCosmeticType  value) ;

constexpr void __cordl_internal_set_toggleCooldown(float_t  value) ;

constexpr void __cordl_internal_set_toggleState(bool  value) ;

constexpr void __cordl_internal_set_voiceBroadcasters(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic>>*  value) ;

/// @brief Method .ctor, addr 0x5da62c8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceBroadcastCosmeticWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastCosmeticWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceBroadcastCosmeticWearable(VoiceBroadcastCosmeticWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastCosmeticWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceBroadcastCosmeticWearable(VoiceBroadcastCosmeticWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4986};

/// @brief Field talkingCosmeticType, offset: 0x20, size: 0x4, def value: None
 ::GorillaTag::Cosmetics::TalkingCosmeticType  ___talkingCosmeticType;

/// [SerializeField]
/// @brief Field headDistanceActivation, offset: 0x24, size: 0x1, def value: None
 bool  ___headDistanceActivation;

/// [SerializeField]
/// @brief Field headDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___headDistance;

/// [SerializeField]
/// @brief Field toggleCooldown, offset: 0x2c, size: 0x4, def value: None
 float_t  ___toggleCooldown;

/// @brief Field toggleState, offset: 0x30, size: 0x1, def value: None
 bool  ___toggleState;

/// @brief Field lastToggleTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastToggleTime;

/// [SerializeField]
/// @brief Field onStartListening, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStartListening;

/// [SerializeField]
/// @brief Field onStopListening, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStopListening;

/// @brief Field voiceBroadcasters, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmetic>>*  ___voiceBroadcasters;

/// @brief Field playerHeadCollider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___playerHeadCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___talkingCosmeticType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___headDistanceActivation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___headDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___toggleCooldown) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___toggleState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___lastToggleTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___onStartListening) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___onStopListening) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___voiceBroadcasters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable, ___playerHeadCollider) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable) == 0x58, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

#pragma once
// IWYU pragma private; include "GlobalNamespace/MouthReactorCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MouthReactorCosmetic)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MouthReactorCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MouthReactorCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MouthReactorCosmetic*, "", "MouthReactorCosmetic");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MouthReactorCosmetic
class CORDL_TYPE MouthReactorCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DEFAULT_OFFSET, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_DEFAULT_OFFSET, put=setStaticF_DEFAULT_OFFSET)) ::UnityEngine::Vector3  DEFAULT_OFFSET;

 __declspec(property(get=get_IsOffsetChanged)) bool  IsOffsetChanged;

 __declspec(property(get=get_IsRadiusChanged)) bool  IsRadiusChanged;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field continuousProperties, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field eventRefireDelay, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventRefireDelay, put=__cordl_internal_set_eventRefireDelay)) float_t  eventRefireDelay;

/// @brief Field lastInsideTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastInsideTime, put=__cordl_internal_set_lastInsideTime)) float_t  lastInsideTime;

/// @brief Field mouthOffset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_mouthOffset, put=__cordl_internal_set_mouthOffset)) ::UnityEngine::Vector3  mouthOffset;

/// @brief Field mustExitBeforeRefire, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_mustExitBeforeRefire, put=__cordl_internal_set_mustExitBeforeRefire)) bool  mustExitBeforeRefire;

/// @brief Field myRig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onInsideMouth, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onInsideMouth, put=__cordl_internal_set_onInsideMouth)) ::UnityEngine::Events::UnityEvent*  onInsideMouth;

/// @brief Field reactorOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_reactorOffset, put=__cordl_internal_set_reactorOffset)) ::UnityEngine::Vector3  reactorOffset;

/// @brief Field reactorRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_reactorRadius, put=__cordl_internal_set_reactorRadius)) float_t  reactorRadius;

/// @brief Field reactorTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactorTransform, put=__cordl_internal_set_reactorTransform)) ::UnityW<::UnityEngine::Transform>  reactorTransform;

/// @brief Field wasInside, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInside, put=__cordl_internal_set_wasInside)) bool  wasInside;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GlobalNamespace::MouthReactorCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x596bb88, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x596bae0, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetOffset, addr 0x596b9e0, size 0x68, virtual false, abstract: false, final false
inline void ResetOffset() ;

/// @brief Method ResetRadius, addr 0x596b9b8, size 0x10, virtual false, abstract: false, final false
inline void ResetRadius() ;

/// @brief Method ResetReactorTransform, addr 0x596b928, size 0x90, virtual false, abstract: false, final false
inline void ResetReactorTransform() ;

/// @brief Method Tick, addr 0x596bc04, size 0x14c, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_eventRefireDelay() const;

constexpr float_t& __cordl_internal_get_eventRefireDelay() ;

constexpr float_t const& __cordl_internal_get_lastInsideTime() const;

constexpr float_t& __cordl_internal_get_lastInsideTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mouthOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mouthOffset() ;

constexpr bool const& __cordl_internal_get_mustExitBeforeRefire() const;

constexpr bool& __cordl_internal_get_mustExitBeforeRefire() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onInsideMouth() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onInsideMouth() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reactorOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reactorOffset() ;

constexpr float_t const& __cordl_internal_get_reactorRadius() const;

constexpr float_t& __cordl_internal_get_reactorRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reactorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reactorTransform() ;

constexpr bool const& __cordl_internal_get_wasInside() const;

constexpr bool& __cordl_internal_get_wasInside() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_eventRefireDelay(float_t  value) ;

constexpr void __cordl_internal_set_lastInsideTime(float_t  value) ;

constexpr void __cordl_internal_set_mouthOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mustExitBeforeRefire(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onInsideMouth(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_reactorOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reactorRadius(float_t  value) ;

constexpr void __cordl_internal_set_reactorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_wasInside(bool  value) ;

/// @brief Method .ctor, addr 0x596bd50, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_DEFAULT_OFFSET() ;

/// @brief Method get_IsOffsetChanged, addr 0x596ba48, size 0x98, virtual false, abstract: false, final false
inline bool get_IsOffsetChanged() ;

/// @brief Method get_IsRadiusChanged, addr 0x596b9c8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsRadiusChanged() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x596bbf4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_DEFAULT_OFFSET(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x596bbfc, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouthReactorCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouthReactorCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MouthReactorCosmetic(MouthReactorCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouthReactorCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouthReactorCosmetic(MouthReactorCosmetic const& ) = delete;

/// @brief Field DEFAULT_RADIUS offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_RADIUS{static_cast<float_t>(0.1666667f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2387};

/// [Tooltip("The transform to check against the mouth\'s position. Defaults to the transform this script is attached to.")]
/// @brief Field reactorTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reactorTransform;

/// [Tooltip("Offset the relative position of the reactor transform.")]
/// @brief Field reactorOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reactorOffset;

/// [Tooltip("How close the reactor needs to be to the mouth to trigger the event.")]
/// @brief Field reactorRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ___reactorRadius;

/// [Tooltip("The continuous value is the distance to the mouth. When inside the mouth radius, the value will always be 0.")]
/// @brief Field continuousProperties, offset: 0x38, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [Tooltip("After the event fires, it must wait this many seconds before it fires again.")]
/// @brief Field eventRefireDelay, offset: 0x40, size: 0x4, def value: None
 float_t  ___eventRefireDelay;

/// [Tooltip("After the event fires, prevent firing again until the reactor transform is moved outside the mouth and then back in.")]
/// @brief Field mustExitBeforeRefire, offset: 0x44, size: 0x1, def value: None
 bool  ___mustExitBeforeRefire;

/// @brief Field onInsideMouth, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onInsideMouth;

/// @brief Field mouthOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mouthOffset;

/// @brief Field myRig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field lastInsideTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___lastInsideTime;

/// @brief Field wasInside, offset: 0x6c, size: 0x1, def value: None
 bool  ___wasInside;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x6d, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___reactorTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___reactorOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___reactorRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___continuousProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___eventRefireDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___mustExitBeforeRefire) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___onInsideMouth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___mouthOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___myRig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___lastInsideTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ___wasInside) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthReactorCosmetic, ____TickRunning_k__BackingField) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MouthReactorCosmetic) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

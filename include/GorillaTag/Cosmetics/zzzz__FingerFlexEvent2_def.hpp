#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_FingerType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_HandType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_RangeState_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent2_FlexEvent_TriggerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexEvent2)
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_FingerType;
}
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_HandType;
}
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_RangeState;
}
namespace GlobalNamespace {
struct FlexEvent_FingerFlexEvent2_TriggerType;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag::Cosmetics {
class FingerFlexEvent2_FlexEvent;
}
namespace GorillaTag::Cosmetics {
class IHeldItem;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class FingerFlexEvent2;
}
namespace GorillaTag::Cosmetics {
class FingerFlexEvent2_FlexEvent;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::FingerFlexEvent2*);
MARK_REF_T(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::FingerFlexEvent2*, "GorillaTag.Cosmetics", "FingerFlexEvent2");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*, "GorillaTag.Cosmetics", "FingerFlexEvent2/FlexEvent");
// Dependencies GorillaTag.Cosmetics.FingerFlexEvent2::FlexEvent, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent2
class CORDL_TYPE FingerFlexEvent2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FlexEvent = ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field list, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>  list;

/// @brief Field myHeldItem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHeldItem, put=__cordl_internal_set_myHeldItem)) ::GorillaTag::Cosmetics::IHeldItem*  myHeldItem;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field myTransferrable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTransferrable, put=__cordl_internal_set_myTransferrable)) ::UnityW<::GlobalNamespace::TransferrableObject>  myTransferrable;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5d97208, size 0x1d8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcFlex, addr 0x5d973f0, size 0x650, virtual false, abstract: false, final false
inline void CalcFlex(bool  disable) ;

static inline ::GorillaTag::Cosmetics::FingerFlexEvent2* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d97c58, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d97bec, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x5d97ce0, size 0x8, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryLinkToNextEvent, addr 0x5d9713c, size 0xac, virtual false, abstract: false, final false
inline bool TryLinkToNextEvent(int32_t  index) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*> const& __cordl_internal_get_list() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>& __cordl_internal_get_list() ;

constexpr ::GorillaTag::Cosmetics::IHeldItem* const& __cordl_internal_get_myHeldItem() const;

constexpr ::GorillaTag::Cosmetics::IHeldItem*& __cordl_internal_get_myHeldItem() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_myTransferrable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_myTransferrable() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_list(::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>  value) ;

constexpr void __cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_myTransferrable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d97ce8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d97cd0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d97cd8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexEvent2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexEvent2(FingerFlexEvent2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexEvent2(FingerFlexEvent2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4940};

/// @brief Field list, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent*>  ___list;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field myTransferrable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___myTransferrable;

/// @brief Field myHeldItem, offset: 0x38, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::IHeldItem*  ___myHeldItem;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2, ___list) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2, ___myTransferrable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2, ___myHeldItem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2, ____TickRunning_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::FingerFlexEvent2) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.FingerFlexEvent2::FlexEvent::FingerType, GorillaTag.Cosmetics.FingerFlexEvent2::FlexEvent::HandType, GorillaTag.Cosmetics.FingerFlexEvent2::FlexEvent::RangeState, GorillaTag.Cosmetics.FingerFlexEvent2::FlexEvent::TriggerType, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.FingerFlexEvent2/FlexEvent
class CORDL_TYPE FingerFlexEvent2_FlexEvent : public ::System::Object {
public:
// Declarations
using FingerType = ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType;

using HandType = ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType;

using RangeState = ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState;

using TriggerType = ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType;

 __declspec(property(get=get_HasValidLink)) bool  HasValidLink;

 __declspec(property(get=get_IsFlexTrigger)) bool  IsFlexTrigger;

 __declspec(property(get=get_IsLinked)) bool  IsLinked;

 __declspec(property(get=get_IsReleaseTrigger)) bool  IsReleaseTrigger;

 __declspec(property(get=get_RequiresHeldItem)) bool  RequiresHeldItem;

 __declspec(property(get=get_ShowFlexThreshold)) bool  ShowFlexThreshold;

 __declspec(property(get=get_ShowMainProperties)) bool  ShowMainProperties;

 __declspec(property(get=get_ShowReleaseThreshold)) bool  ShowReleaseThreshold;

/// @brief Field continuousProperties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field currentState, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  currentState;

/// @brief Field fingerType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerType, put=__cordl_internal_set_fingerType)) ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType  fingerType;

/// @brief Field flexThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_flexThreshold, put=__cordl_internal_set_flexThreshold)) float_t  flexThreshold;

/// @brief Field handType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_handType, put=__cordl_internal_set_handType)) ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType  handType;

/// @brief Field lastState, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  lastState;

/// @brief Field lastThresholdTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastThresholdTime, put=__cordl_internal_set_lastThresholdTime)) float_t  lastThresholdTime;

/// @brief Field linkIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_linkIndex, put=__cordl_internal_set_linkIndex)) int32_t  linkIndex;

/// @brief Field marginError, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_marginError, put=__cordl_internal_set_marginError)) bool  marginError;

/// @brief Field networked, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_networked, put=__cordl_internal_set_networked)) bool  networked;

/// @brief Field releaseThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseThreshold, put=__cordl_internal_set_releaseThreshold)) float_t  releaseThreshold;

/// @brief Field triggerType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerType, put=__cordl_internal_set_triggerType)) ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType  triggerType;

/// @brief Field tryLink, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_tryLink, put=__cordl_internal_set_tryLink)) bool  tryLink;

/// @brief Field unityEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  unityEvent;

/// @brief Field wasHeld, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeld, put=__cordl_internal_set_wasHeld)) bool  wasHeld;

static inline ::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent* New_ctor() ;

/// @brief Method ProcessState, addr 0x5d97a40, size 0x18c, virtual false, abstract: false, final false
inline void ProcessState(bool  leftHand, float_t  flexValue) ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType const& __cordl_internal_get_fingerType() const;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType& __cordl_internal_get_fingerType() ;

constexpr float_t const& __cordl_internal_get_flexThreshold() const;

constexpr float_t& __cordl_internal_get_flexThreshold() ;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType const& __cordl_internal_get_handType() const;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType& __cordl_internal_get_handType() ;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_lastThresholdTime() const;

constexpr float_t& __cordl_internal_get_lastThresholdTime() ;

constexpr int32_t const& __cordl_internal_get_linkIndex() const;

constexpr int32_t& __cordl_internal_get_linkIndex() ;

constexpr bool const& __cordl_internal_get_marginError() const;

constexpr bool& __cordl_internal_get_marginError() ;

constexpr bool const& __cordl_internal_get_networked() const;

constexpr bool& __cordl_internal_get_networked() ;

constexpr float_t const& __cordl_internal_get_releaseThreshold() const;

constexpr float_t& __cordl_internal_get_releaseThreshold() ;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType const& __cordl_internal_get_triggerType() const;

constexpr ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType& __cordl_internal_get_triggerType() ;

constexpr bool const& __cordl_internal_get_tryLink() const;

constexpr bool& __cordl_internal_get_tryLink() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& __cordl_internal_get_unityEvent() ;

constexpr bool const& __cordl_internal_get_wasHeld() const;

constexpr bool& __cordl_internal_get_wasHeld() ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  value) ;

constexpr void __cordl_internal_set_fingerType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType  value) ;

constexpr void __cordl_internal_set_flexThreshold(float_t  value) ;

constexpr void __cordl_internal_set_handType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  value) ;

constexpr void __cordl_internal_set_lastThresholdTime(float_t  value) ;

constexpr void __cordl_internal_set_linkIndex(int32_t  value) ;

constexpr void __cordl_internal_set_marginError(bool  value) ;

constexpr void __cordl_internal_set_networked(bool  value) ;

constexpr void __cordl_internal_set_releaseThreshold(float_t  value) ;

constexpr void __cordl_internal_set_triggerType(::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType  value) ;

constexpr void __cordl_internal_set_tryLink(bool  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value) ;

constexpr void __cordl_internal_set_wasHeld(bool  value) ;

/// @brief Method .ctor, addr 0x5d97d84, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasValidLink, addr 0x5d97cf0, size 0x10, virtual false, abstract: false, final false
inline bool get_HasValidLink() ;

/// @brief Method get_IsFlexTrigger, addr 0x5d971e8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFlexTrigger() ;

/// @brief Method get_IsLinked, addr 0x5d97bcc, size 0x20, virtual false, abstract: false, final false
inline bool get_IsLinked() ;

/// @brief Method get_IsReleaseTrigger, addr 0x5d971f8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsReleaseTrigger() ;

/// @brief Method get_RequiresHeldItem, addr 0x5d973e0, size 0x10, virtual false, abstract: false, final false
inline bool get_RequiresHeldItem() ;

/// @brief Method get_ShowFlexThreshold, addr 0x5d97d28, size 0x28, virtual false, abstract: false, final false
inline bool get_ShowFlexThreshold() ;

/// @brief Method get_ShowMainProperties, addr 0x5d97d00, size 0x28, virtual false, abstract: false, final false
inline bool get_ShowMainProperties() ;

/// @brief Method get_ShowReleaseThreshold, addr 0x5d97d50, size 0x34, virtual false, abstract: false, final false
inline bool get_ShowReleaseThreshold() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexEvent2_FlexEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent2_FlexEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexEvent2_FlexEvent(FingerFlexEvent2_FlexEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexEvent2_FlexEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexEvent2_FlexEvent(FingerFlexEvent2_FlexEvent const& ) = delete;

/// @brief Field ADVANCED offset 0xffffffff size 0x8
static constexpr ::ConstString  ADVANCED{u"Advanced Properties"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4939};

/// @brief Field triggerType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::FlexEvent_FingerFlexEvent2_TriggerType  ___triggerType;

/// @brief Field tryLink, offset: 0x14, size: 0x1, def value: None
 bool  ___tryLink;

/// [HideInInspector]
/// @brief Field linkIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___linkIndex;

/// [Space]
/// @brief Field fingerType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::FlexEvent_FingerFlexEvent2_FingerType  ___fingerType;

/// [Space]
/// @brief Field handType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::FlexEvent_FingerFlexEvent2_HandType  ___handType;

/// [Tooltip("When this is checked, all players in the room will fire the event. Otherwise, only the local player will fire it. You should usually leave this on, unless you\'re using it for something local like controller haptics.")]
/// @brief Field networked, offset: 0x24, size: 0x1, def value: None
 bool  ___networked;

/// [Range(0.01, 0.75)]
/// @brief Field flexThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___flexThreshold;

/// [Range(0.01, 1)]
/// @brief Field releaseThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___releaseThreshold;

/// @brief Field continuousProperties, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// @brief Field unityEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  ___unityEvent;

/// @brief Field wasHeld, offset: 0x40, size: 0x1, def value: None
 bool  ___wasHeld;

/// @brief Field marginError, offset: 0x41, size: 0x1, def value: None
 bool  ___marginError;

/// @brief Field currentState, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  ___currentState;

/// @brief Field lastState, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::FlexEvent_FingerFlexEvent2_RangeState  ___lastState;

/// @brief Field lastThresholdTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___lastThresholdTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___triggerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___tryLink) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___linkIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___fingerType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___handType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___networked) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___flexThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___releaseThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___continuousProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___unityEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___wasHeld) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___marginError) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___currentState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___lastState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent, ___lastThresholdTime) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::FingerFlexEvent2_FlexEvent) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

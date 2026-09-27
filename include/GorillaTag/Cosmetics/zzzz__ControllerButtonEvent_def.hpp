#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ControllerButtonEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ControllerButtonEvent_ButtonType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButtonEvent)
namespace GlobalNamespace {
struct ControllerButtonEvent_ButtonType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ControllerButtonEvent;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ControllerButtonEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ControllerButtonEvent*, "GorillaTag.Cosmetics", "ControllerButtonEvent");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.ControllerButtonEvent::ButtonType, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ControllerButtonEvent
class CORDL_TYPE ControllerButtonEvent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonType = ::GlobalNamespace::ControllerButtonEvent_ButtonType;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field buttonType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::ControllerButtonEvent_ButtonType  buttonType;

/// @brief Field frameCounter, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCounter, put=__cordl_internal_set_frameCounter)) int32_t  frameCounter;

/// @brief Field frameInterval, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameInterval, put=__cordl_internal_set_frameInterval)) int32_t  frameInterval;

/// @brief Field gripLastValue, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_gripLastValue, put=__cordl_internal_set_gripLastValue)) float_t  gripLastValue;

/// @brief Field gripReleaseValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gripReleaseValue, put=__cordl_internal_set_gripReleaseValue)) float_t  gripReleaseValue;

/// @brief Field gripValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gripValue, put=__cordl_internal_set_gripValue)) float_t  gripValue;

/// @brief Field inLeftHand, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_inLeftHand, put=__cordl_internal_set_inLeftHand)) bool  inLeftHand;

/// @brief Field myRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onButtonPressStayed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onButtonPressStayed, put=__cordl_internal_set_onButtonPressStayed)) ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  onButtonPressStayed;

/// @brief Field onButtonPressed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onButtonPressed, put=__cordl_internal_set_onButtonPressed)) ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  onButtonPressed;

/// @brief Field onButtonReleased, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onButtonReleased, put=__cordl_internal_set_onButtonReleased)) ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  onButtonReleased;

/// @brief Field primaryLastValue, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryLastValue, put=__cordl_internal_set_primaryLastValue)) bool  primaryLastValue;

/// @brief Field secondaryLastValue, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_secondaryLastValue, put=__cordl_internal_set_secondaryLastValue)) bool  secondaryLastValue;

/// @brief Field triggerLastValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerLastValue, put=__cordl_internal_set_triggerLastValue)) float_t  triggerLastValue;

/// @brief Field triggerReleaseValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerReleaseValue, put=__cordl_internal_set_triggerReleaseValue)) float_t  triggerReleaseValue;

/// @brief Field triggerValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerValue, put=__cordl_internal_set_triggerValue)) float_t  triggerValue;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5d85e10, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsMyItem, addr 0x5d85d88, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

/// @brief Method LateUpdate, addr 0x5d85e20, size 0x3dc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Cosmetics::ControllerButtonEvent* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5d85d84, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnSpawn, addr 0x5d85d7c, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType& __cordl_internal_get_buttonType() ;

constexpr int32_t const& __cordl_internal_get_frameCounter() const;

constexpr int32_t& __cordl_internal_get_frameCounter() ;

constexpr int32_t const& __cordl_internal_get_frameInterval() const;

constexpr int32_t& __cordl_internal_get_frameInterval() ;

constexpr float_t const& __cordl_internal_get_gripLastValue() const;

constexpr float_t& __cordl_internal_get_gripLastValue() ;

constexpr float_t const& __cordl_internal_get_gripReleaseValue() const;

constexpr float_t& __cordl_internal_get_gripReleaseValue() ;

constexpr float_t const& __cordl_internal_get_gripValue() const;

constexpr float_t& __cordl_internal_get_gripValue() ;

constexpr bool const& __cordl_internal_get_inLeftHand() const;

constexpr bool& __cordl_internal_get_inLeftHand() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& __cordl_internal_get_onButtonPressStayed() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& __cordl_internal_get_onButtonPressStayed() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& __cordl_internal_get_onButtonPressed() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& __cordl_internal_get_onButtonPressed() ;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& __cordl_internal_get_onButtonReleased() const;

constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& __cordl_internal_get_onButtonReleased() ;

constexpr bool const& __cordl_internal_get_primaryLastValue() const;

constexpr bool& __cordl_internal_get_primaryLastValue() ;

constexpr bool const& __cordl_internal_get_secondaryLastValue() const;

constexpr bool& __cordl_internal_get_secondaryLastValue() ;

constexpr float_t const& __cordl_internal_get_triggerLastValue() const;

constexpr float_t& __cordl_internal_get_triggerLastValue() ;

constexpr float_t const& __cordl_internal_get_triggerReleaseValue() const;

constexpr float_t& __cordl_internal_get_triggerReleaseValue() ;

constexpr float_t const& __cordl_internal_get_triggerValue() const;

constexpr float_t& __cordl_internal_get_triggerValue() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::ControllerButtonEvent_ButtonType  value) ;

constexpr void __cordl_internal_set_frameCounter(int32_t  value) ;

constexpr void __cordl_internal_set_frameInterval(int32_t  value) ;

constexpr void __cordl_internal_set_gripLastValue(float_t  value) ;

constexpr void __cordl_internal_set_gripReleaseValue(float_t  value) ;

constexpr void __cordl_internal_set_gripValue(float_t  value) ;

constexpr void __cordl_internal_set_inLeftHand(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onButtonPressStayed(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value) ;

constexpr void __cordl_internal_set_onButtonPressed(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value) ;

constexpr void __cordl_internal_set_onButtonReleased(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value) ;

constexpr void __cordl_internal_set_primaryLastValue(bool  value) ;

constexpr void __cordl_internal_set_secondaryLastValue(bool  value) ;

constexpr void __cordl_internal_set_triggerLastValue(float_t  value) ;

constexpr void __cordl_internal_set_triggerReleaseValue(float_t  value) ;

constexpr void __cordl_internal_set_triggerValue(float_t  value) ;

/// @brief Method .ctor, addr 0x5d861fc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d85d6c, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d85d5c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d85d74, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d85d64, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerButtonEvent(ControllerButtonEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerButtonEvent(ControllerButtonEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4900};

/// [SerializeField]
/// @brief Field gripValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___gripValue;

/// [SerializeField]
/// @brief Field gripReleaseValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___gripReleaseValue;

/// [SerializeField]
/// @brief Field triggerValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___triggerValue;

/// [SerializeField]
/// @brief Field triggerReleaseValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ___triggerReleaseValue;

/// [SerializeField]
/// @brief Field buttonType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ControllerButtonEvent_ButtonType  ___buttonType;

/// [Tooltip("How many frames should pass to trigger a press stayed button")]
/// [SerializeField]
/// @brief Field frameInterval, offset: 0x34, size: 0x4, def value: None
 int32_t  ___frameInterval;

/// @brief Field onButtonPressed, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  ___onButtonPressed;

/// @brief Field onButtonReleased, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  ___onButtonReleased;

/// @brief Field onButtonPressStayed, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<bool,float_t>*  ___onButtonPressStayed;

/// @brief Field triggerLastValue, offset: 0x50, size: 0x4, def value: None
 float_t  ___triggerLastValue;

/// @brief Field gripLastValue, offset: 0x54, size: 0x4, def value: None
 float_t  ___gripLastValue;

/// @brief Field primaryLastValue, offset: 0x58, size: 0x1, def value: None
 bool  ___primaryLastValue;

/// @brief Field secondaryLastValue, offset: 0x59, size: 0x1, def value: None
 bool  ___secondaryLastValue;

/// @brief Field frameCounter, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___frameCounter;

/// @brief Field inLeftHand, offset: 0x60, size: 0x1, def value: None
 bool  ___inLeftHand;

/// @brief Field myRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x74, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___gripValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___gripReleaseValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___triggerValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___triggerReleaseValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___buttonType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___frameInterval) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___onButtonPressed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___onButtonReleased) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___onButtonPressStayed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___triggerLastValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___gripLastValue) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___primaryLastValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___secondaryLastValue) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___frameCounter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___inLeftHand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ___myRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ____IsSpawned_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ControllerButtonEvent, ____CosmeticSelectedSide_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ControllerButtonEvent) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

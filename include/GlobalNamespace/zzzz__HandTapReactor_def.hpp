#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandTapReactor)
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1;
}
namespace GlobalNamespace {
class HandEffectContext;
}
namespace GlobalNamespace {
struct HandTapReactor_TapType;
}
namespace GlobalNamespace {
struct IHandEffectsTrigger_Mode;
}
namespace GlobalNamespace {
class VRRig;
}
namespace TagEffects {
class IHandEffectsTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTapReactor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTapReactor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapReactor*, "", "HandTapReactor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapReactor
class CORDL_TYPE HandTapReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TapType = ::GlobalNamespace::HandTapReactor_TapType;

/// @brief Field handTapEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapEvents, put=__cordl_internal_set_handTapEvents)) ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*  handTapEvents;

/// @brief Field leftHandTrigger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTrigger, put=__cordl_internal_set_leftHandTrigger)) ::TagEffects::IHandEffectsTrigger*  leftHandTrigger;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rightHandTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTrigger, put=__cordl_internal_set_rightHandTrigger)) ::TagEffects::IHandEffectsTrigger*  rightHandTrigger;

/// @brief Method LeftDown, addr 0x5653704, size 0x58, virtual false, abstract: false, final false
inline void LeftDown(::GlobalNamespace::HandEffectContext*  ctx) ;

/// @brief Method LeftGesture, addr 0x56537b4, size 0xb0, virtual false, abstract: false, final false
inline void LeftGesture(::GlobalNamespace::IHandEffectsTrigger_Mode  mode) ;

/// @brief Method LeftUp, addr 0x565375c, size 0x58, virtual false, abstract: false, final false
inline void LeftUp(::GlobalNamespace::HandEffectContext*  ctx) ;

static inline ::GlobalNamespace::HandTapReactor* New_ctor() ;

/// @brief Method OnDisable, addr 0x5653fbc, size 0x48c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56539c4, size 0x5f8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RightDown, addr 0x5653864, size 0x58, virtual false, abstract: false, final false
inline void RightDown(::GlobalNamespace::HandEffectContext*  ctx) ;

/// @brief Method RightGesture, addr 0x5653914, size 0xb0, virtual false, abstract: false, final false
inline void RightGesture(::GlobalNamespace::IHandEffectsTrigger_Mode  mode) ;

/// @brief Method RightUp, addr 0x56538bc, size 0x58, virtual false, abstract: false, final false
inline void RightUp(::GlobalNamespace::HandEffectContext*  ctx) ;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>* const& __cordl_internal_get_handTapEvents() const;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*& __cordl_internal_get_handTapEvents() ;

constexpr ::TagEffects::IHandEffectsTrigger* const& __cordl_internal_get_leftHandTrigger() const;

constexpr ::TagEffects::IHandEffectsTrigger*& __cordl_internal_get_leftHandTrigger() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::TagEffects::IHandEffectsTrigger* const& __cordl_internal_get_rightHandTrigger() const;

constexpr ::TagEffects::IHandEffectsTrigger*& __cordl_internal_get_rightHandTrigger() ;

constexpr void __cordl_internal_set_handTapEvents(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*  value) ;

constexpr void __cordl_internal_set_leftHandTrigger(::TagEffects::IHandEffectsTrigger*  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightHandTrigger(::TagEffects::IHandEffectsTrigger*  value) ;

/// @brief Method .ctor, addr 0x5654448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapReactor(HandTapReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapReactor(HandTapReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{741};

/// [SerializeField]
/// @brief Field handTapEvents, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::HandTapReactor_TapType>*  ___handTapEvents;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field leftHandTrigger, offset: 0x30, size: 0x8, def value: None
 ::TagEffects::IHandEffectsTrigger*  ___leftHandTrigger;

/// @brief Field rightHandTrigger, offset: 0x38, size: 0x8, def value: None
 ::TagEffects::IHandEffectsTrigger*  ___rightHandTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapReactor, ___handTapEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapReactor, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapReactor, ___leftHandTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapReactor, ___rightHandTrigger) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapReactor) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SITouchscreenButton_ButtonMode_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SITouchscreenButton)
namespace GlobalNamespace {
class IClickable;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
struct SITouchscreenButton_ButtonMode;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityEvent_3;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityEvent_4;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SITouchscreenButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITouchscreenButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITouchscreenButton*, "", "SITouchscreenButton");
// Dependencies SITouchscreenButton::ButtonMode, SITouchscreenButton::SITouchscreenButtonType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITouchscreenButton
class CORDL_TYPE SITouchscreenButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonMode = ::GlobalNamespace::SITouchscreenButton_ButtonMode;

using SITouchscreenButtonType = ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType;

 __declspec(property(get=get_IsReady)) bool  IsReady;

 __declspec(property(get=get_IsToggledOn)) bool  IsToggledOn;

/// @brief Field _enableTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__enableTime, put=__cordl_internal_set__enableTime)) float_t  _enableTime;

/// @brief Field _isToggledOn, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isToggledOn, put=__cordl_internal_set__isToggledOn)) bool  _isToggledOn;

/// @brief Field _pressSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pressSound, put=__cordl_internal_set__pressSound)) ::UnityW<::UnityEngine::AudioClip>  _pressSound;

/// @brief Field _pressSoundVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressSoundVolume, put=__cordl_internal_set__pressSoundVolume)) float_t  _pressSoundVolume;

/// @brief Field _screenRegion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenRegion, put=__cordl_internal_set__screenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  _screenRegion;

/// @brief Field _startToggledOn, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__startToggledOn, put=__cordl_internal_set__startToggledOn)) bool  _startToggledOn;

/// @brief Field buttonMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonMode, put=__cordl_internal_set_buttonMode)) ::GlobalNamespace::SITouchscreenButton_ButtonMode  buttonMode;

/// @brief Field buttonPressed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonPressed, put=__cordl_internal_set_buttonPressed)) ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*  buttonPressed;

/// @brief Field buttonToggled, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonToggled, put=__cordl_internal_set_buttonToggled)) ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*  buttonToggled;

/// @brief Field buttonType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType;

/// @brief Field data, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) int32_t  data;

/// @brief Field isUsable, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUsable, put=__cordl_internal_set_isUsable)) bool  isUsable;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Awake, addr 0x5af6658, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Click, addr 0x5af6c84, size 0x4, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

static inline ::GlobalNamespace::SITouchscreenButton* New_ctor() ;

/// @brief Method OnEnable, addr 0x5af6740, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5af675c, size 0x1bc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method PressButton, addr 0x5af6918, size 0x274, virtual false, abstract: false, final false
inline void PressButton() ;

/// @brief Method SetToggleState, addr 0x5af6b8c, size 0xf8, virtual false, abstract: false, final false
inline void SetToggleState(bool  state, bool  invokeEvent) ;

constexpr float_t const& __cordl_internal_get__enableTime() const;

constexpr float_t& __cordl_internal_get__enableTime() ;

constexpr bool const& __cordl_internal_get__isToggledOn() const;

constexpr bool& __cordl_internal_get__isToggledOn() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__pressSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__pressSound() ;

constexpr float_t const& __cordl_internal_get__pressSoundVolume() const;

constexpr float_t& __cordl_internal_get__pressSoundVolume() ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get__screenRegion() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get__screenRegion() ;

constexpr bool const& __cordl_internal_get__startToggledOn() const;

constexpr bool& __cordl_internal_get__startToggledOn() ;

constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode const& __cordl_internal_get_buttonMode() const;

constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode& __cordl_internal_get_buttonMode() ;

constexpr ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>* const& __cordl_internal_get_buttonPressed() const;

constexpr ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*& __cordl_internal_get_buttonPressed() ;

constexpr ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>* const& __cordl_internal_get_buttonToggled() const;

constexpr ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*& __cordl_internal_get_buttonToggled() ;

constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType& __cordl_internal_get_buttonType() ;

constexpr int32_t const& __cordl_internal_get_data() const;

constexpr int32_t& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_isUsable() const;

constexpr bool& __cordl_internal_get_isUsable() ;

constexpr void __cordl_internal_set__enableTime(float_t  value) ;

constexpr void __cordl_internal_set__isToggledOn(bool  value) ;

constexpr void __cordl_internal_set__pressSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__pressSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__screenRegion(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

constexpr void __cordl_internal_set__startToggledOn(bool  value) ;

constexpr void __cordl_internal_set_buttonMode(::GlobalNamespace::SITouchscreenButton_ButtonMode  value) ;

constexpr void __cordl_internal_set_buttonPressed(::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_buttonToggled(::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  value) ;

constexpr void __cordl_internal_set_data(int32_t  value) ;

constexpr void __cordl_internal_set_isUsable(bool  value) ;

/// @brief Method .ctor, addr 0x5af6c88, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReady, addr 0x5af659c, size 0xb4, virtual false, abstract: false, final false
inline bool get_IsReady() ;

/// @brief Method get_IsToggledOn, addr 0x5af6650, size 0x8, virtual false, abstract: false, final false
inline bool get_IsToggledOn() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITouchscreenButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreenButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITouchscreenButton(SITouchscreenButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreenButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITouchscreenButton(SITouchscreenButton const& ) = delete;

/// @brief Field DEBOUNCE_TIME offset 0xffffffff size 0x4
static constexpr float_t  DEBOUNCE_TIME{static_cast<float_t>(0.2f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{375};

/// @brief Field buttonMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SITouchscreenButton_ButtonMode  ___buttonMode;

/// @brief Field buttonType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  ___buttonType;

/// @brief Field data, offset: 0x28, size: 0x4, def value: None
 int32_t  ___data;

/// [SerializeField]
/// @brief Field _pressSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____pressSound;

/// [SerializeField]
/// @brief Field _pressSoundVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ____pressSoundVolume;

/// [SerializeField]
/// @brief Field _isToggledOn, offset: 0x3c, size: 0x1, def value: None
 bool  ____isToggledOn;

/// [SerializeField]
/// @brief Field _startToggledOn, offset: 0x3d, size: 0x1, def value: None
 bool  ____startToggledOn;

/// @brief Field buttonPressed, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_3<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t>*  ___buttonPressed;

/// @brief Field buttonToggled, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_4<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType,int32_t,int32_t,bool>*  ___buttonToggled;

/// @brief Field _screenRegion, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ____screenRegion;

/// @brief Field _enableTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____enableTime;

/// @brief Field isUsable, offset: 0x5c, size: 0x1, def value: None
 bool  ___isUsable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___buttonMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___buttonType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____pressSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____pressSoundVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____isToggledOn) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____startToggledOn) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___buttonPressed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___buttonToggled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____screenRegion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ____enableTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButton, ___isUsable) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITouchscreenButton) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

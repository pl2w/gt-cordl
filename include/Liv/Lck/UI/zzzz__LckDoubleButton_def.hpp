#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckDoubleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckDoubleButton)
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck::UI {
class LckDoubleButtonTrigger;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckDoubleButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckDoubleButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckDoubleButton*, "Liv.Lck.UI", "LckDoubleButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckDoubleButton
class CORDL_TYPE LckDoubleButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnValueChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<float_t>*  OnValueChanged;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field _audioController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colors;

/// @brief Field _currentValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentValue, put=__cordl_internal_set__currentValue)) int32_t  _currentValue;

/// @brief Field _decrease, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__decrease, put=__cordl_internal_set__decrease)) ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  _decrease;

/// @brief Field _increase, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__increase, put=__cordl_internal_set__increase)) ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  _increase;

/// @brief Field _increment, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__increment, put=__cordl_internal_set__increment)) int32_t  _increment;

/// @brief Field _maxValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) int32_t  _maxValue;

/// @brief Field _minValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) int32_t  _minValue;

/// @brief Field _valueText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueText, put=__cordl_internal_set__valueText)) ::UnityW<::TMPro::TMP_Text>  _valueText;

/// @brief Field _visuals, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::Transform>  _visuals;

/// @brief Method CheckIfValueIsMinOrMax, addr 0x9d50190, size 0x2c, virtual false, abstract: false, final false
inline bool CheckIfValueIsMinOrMax(bool  isIncrease) ;

static inline ::Liv::Lck::UI::LckDoubleButton* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d506bc, size 0xa4, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnDisable, addr 0x9d4fec4, size 0x23c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d4fb88, size 0x244, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x9d50100, size 0x90, virtual false, abstract: false, final false
inline void OnEnter(bool  isIncrease) ;

/// @brief Method OnExit, addr 0x9d50618, size 0xa4, virtual false, abstract: false, final false
inline void OnExit(bool  isIncrease) ;

/// @brief Method OnPressDown, addr 0x9d501dc, size 0x268, virtual false, abstract: false, final false
inline void OnPressDown(bool  isIncrease) ;

/// @brief Method OnPressUp, addr 0x9d50484, size 0x194, virtual false, abstract: false, final false
inline void OnPressUp(bool  isIncrease, bool  usingCollider) ;

/// @brief Method OnValidate, addr 0x9d50760, size 0x9c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMinMaxVisuals, addr 0x9d4fdcc, size 0xf8, virtual false, abstract: false, final false
inline void SetMinMaxVisuals() ;

/// @brief Method UpdateValueText, addr 0x9d50444, size 0x20, virtual false, abstract: false, final false
inline void UpdateValueText(::StringW  text) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colors() ;

constexpr int32_t const& __cordl_internal_get__currentValue() const;

constexpr int32_t& __cordl_internal_get__currentValue() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger> const& __cordl_internal_get__decrease() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>& __cordl_internal_get__decrease() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger> const& __cordl_internal_get__increase() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>& __cordl_internal_get__increase() ;

constexpr int32_t const& __cordl_internal_get__increment() const;

constexpr int32_t& __cordl_internal_get__increment() ;

constexpr int32_t const& __cordl_internal_get__maxValue() const;

constexpr int32_t& __cordl_internal_get__maxValue() ;

constexpr int32_t const& __cordl_internal_get__minValue() const;

constexpr int32_t& __cordl_internal_get__minValue() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__valueText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__valueText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__currentValue(int32_t  value) ;

constexpr void __cordl_internal_set__decrease(::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  value) ;

constexpr void __cordl_internal_set__increase(::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  value) ;

constexpr void __cordl_internal_set__increment(int32_t  value) ;

constexpr void __cordl_internal_set__maxValue(int32_t  value) ;

constexpr void __cordl_internal_set__minValue(int32_t  value) ;

constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9d507fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnValueChanged, addr 0x9d4fa1c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnValueChanged(::System::Action_1<float_t>*  value) ;

/// @brief Method get_Value, addr 0x9d4fb7c, size 0xc, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// [CompilerGenerated]
/// @brief Method remove_OnValueChanged, addr 0x9d4facc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnValueChanged(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDoubleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDoubleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDoubleButton(LckDoubleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDoubleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDoubleButton(LckDoubleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24917};

/// [CompilerGenerated]
/// @brief Field OnValueChanged, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnValueChanged;

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colors;

/// [SerializeField]
/// @brief Field _maxValue, offset: 0x30, size: 0x4, def value: None
 int32_t  ____maxValue;

/// [SerializeField]
/// @brief Field _minValue, offset: 0x34, size: 0x4, def value: None
 int32_t  ____minValue;

/// [SerializeField]
/// @brief Field _currentValue, offset: 0x38, size: 0x4, def value: None
 int32_t  ____currentValue;

/// [SerializeField]
/// @brief Field _increment, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____increment;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _increase, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  ____increase;

/// [SerializeField]
/// @brief Field _decrease, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  ____decrease;

/// [SerializeField]
/// @brief Field _visuals, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____visuals;

/// [SerializeField]
/// @brief Field _valueText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____valueText;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ___OnValueChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____maxValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____minValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____currentValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____increment) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____increase) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____decrease) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____visuals) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____valueText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButton, ____audioController) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckDoubleButton) == 0x68, "Size mismatch!");

} // namespace end def Liv::Lck::UI

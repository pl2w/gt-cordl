#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSlider)
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Slider;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckSlider;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckSlider*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckSlider*, "Liv.Lck.UI", "LckSlider");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckSlider
class CORDL_TYPE LckSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnValueChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<float_t>*  OnValueChanged;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field _defaultValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultValue, put=__cordl_internal_set__defaultValue)) float_t  _defaultValue;

/// @brief Field _isInt, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInt, put=__cordl_internal_set__isInt)) bool  _isInt;

/// @brief Field _maxValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) float_t  _maxValue;

/// @brief Field _minValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) float_t  _minValue;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _precision, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__precision, put=__cordl_internal_set__precision)) int32_t  _precision;

/// @brief Field _slider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__slider, put=__cordl_internal_set__slider)) ::UnityW<::UnityEngine::UI::Slider>  _slider;

/// @brief Field _typeText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeText, put=__cordl_internal_set__typeText)) ::UnityW<::TMPro::TextMeshProUGUI>  _typeText;

/// @brief Field _valueMultiplier, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueMultiplier, put=__cordl_internal_set__valueMultiplier)) float_t  _valueMultiplier;

/// @brief Field _valueText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueText, put=__cordl_internal_set__valueText)) ::UnityW<::TMPro::TextMeshProUGUI>  _valueText;

/// @brief Method ChangeValue, addr 0x9d51d84, size 0x44, virtual false, abstract: false, final false
inline void ChangeValue(float_t  value) ;

/// @brief Method GetValue, addr 0x9d51958, size 0x34, virtual false, abstract: false, final false
inline float_t GetValue() ;

static inline ::Liv::Lck::UI::LckSlider* New_ctor() ;

/// @brief Method OnValidate, addr 0x9d51afc, size 0x104, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x9d5198c, size 0x170, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateValueText, addr 0x9d51c00, size 0x184, virtual false, abstract: false, final false
inline void UpdateValueText() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr float_t const& __cordl_internal_get__defaultValue() const;

constexpr float_t& __cordl_internal_get__defaultValue() ;

constexpr bool const& __cordl_internal_get__isInt() const;

constexpr bool& __cordl_internal_get__isInt() ;

constexpr float_t const& __cordl_internal_get__maxValue() const;

constexpr float_t& __cordl_internal_get__maxValue() ;

constexpr float_t const& __cordl_internal_get__minValue() const;

constexpr float_t& __cordl_internal_get__minValue() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr int32_t const& __cordl_internal_get__precision() const;

constexpr int32_t& __cordl_internal_get__precision() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get__slider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get__slider() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__typeText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__typeText() ;

constexpr float_t const& __cordl_internal_get__valueMultiplier() const;

constexpr float_t& __cordl_internal_get__valueMultiplier() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__valueText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__valueText() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__defaultValue(float_t  value) ;

constexpr void __cordl_internal_set__isInt(bool  value) ;

constexpr void __cordl_internal_set__maxValue(float_t  value) ;

constexpr void __cordl_internal_set__minValue(float_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__precision(int32_t  value) ;

constexpr void __cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set__typeText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__valueMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x9d51dc8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnValueChanged, addr 0x9d517c4, size 0xb0, virtual false, abstract: false, final false
inline void add_OnValueChanged(::System::Action_1<float_t>*  value) ;

/// @brief Method get_Value, addr 0x9d51924, size 0x34, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// [CompilerGenerated]
/// @brief Method remove_OnValueChanged, addr 0x9d51874, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnValueChanged(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSlider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSlider(LckSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSlider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSlider(LckSlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24923};

/// [SerializeField]
/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _slider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ____slider;

/// [SerializeField]
/// @brief Field _defaultValue, offset: 0x30, size: 0x4, def value: None
 float_t  ____defaultValue;

/// [SerializeField]
/// @brief Field _minValue, offset: 0x34, size: 0x4, def value: None
 float_t  ____minValue;

/// [SerializeField]
/// @brief Field _maxValue, offset: 0x38, size: 0x4, def value: None
 float_t  ____maxValue;

/// [SerializeField]
/// @brief Field _isInt, offset: 0x3c, size: 0x1, def value: None
 bool  ____isInt;

/// [SerializeField]
/// @brief Field _precision, offset: 0x40, size: 0x4, def value: None
 int32_t  ____precision;

/// [SerializeField]
/// @brief Field _valueMultiplier, offset: 0x44, size: 0x4, def value: None
 float_t  ____valueMultiplier;

/// [SerializeField]
/// @brief Field _valueText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____valueText;

/// [SerializeField]
/// @brief Field _typeText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____typeText;

/// [CompilerGenerated]
/// @brief Field OnValueChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____slider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____defaultValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____minValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____maxValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____isInt) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____precision) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____valueMultiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____valueText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ____typeText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckSlider, ___OnValueChanged) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckSlider) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck::UI

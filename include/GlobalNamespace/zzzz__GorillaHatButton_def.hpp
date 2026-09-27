#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHatButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaHatButton_HatButtonType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaHatButton)
namespace GlobalNamespace {
class GorillaHatButtonParent;
}
namespace GlobalNamespace {
struct GorillaHatButton_HatButtonType;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHatButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHatButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHatButton*, "", "GorillaHatButton");
// [Obsolete("This class is obsolete and will be removed in a future version. (MattO 2024-02-26) It doesn\'t appear to be used anywhere.")]
// Dependencies GorillaHatButton::HatButtonType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHatButton
class CORDL_TYPE GorillaHatButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HatButtonType = ::GlobalNamespace::GorillaHatButton_HatButtonType;

/// @brief Field buttonParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonParent, put=__cordl_internal_set_buttonParent)) ::UnityW<::GlobalNamespace::GorillaHatButtonParent>  buttonParent;

/// @brief Field buttonType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::GorillaHatButton_HatButtonType  buttonType;

/// @brief Field cosmeticName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticName, put=__cordl_internal_set_cosmeticName)) ::StringW  cosmeticName;

/// @brief Field debounceTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isOn, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field myText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field offMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field offText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

/// @brief Field onText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field testPress, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field touchTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

static inline ::GlobalNamespace::GorillaHatButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x590e538, size 0x248, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method Update, addr 0x590e278, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateColor, addr 0x590e780, size 0xa4, virtual false, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHatButtonParent> const& __cordl_internal_get_buttonParent() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHatButtonParent>& __cordl_internal_get_buttonParent() ;

constexpr ::GlobalNamespace::GorillaHatButton_HatButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::GorillaHatButton_HatButtonType& __cordl_internal_get_buttonType() ;

constexpr ::StringW const& __cordl_internal_get_cosmeticName() const;

constexpr ::StringW& __cordl_internal_get_cosmeticName() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_offMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_offMaterial() ;

constexpr ::StringW const& __cordl_internal_get_offText() const;

constexpr ::StringW& __cordl_internal_get_offText() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onMaterial() ;

constexpr ::StringW const& __cordl_internal_get_onText() const;

constexpr ::StringW& __cordl_internal_get_onText() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr void __cordl_internal_set_buttonParent(::UnityW<::GlobalNamespace::GorillaHatButtonParent>  value) ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::GorillaHatButton_HatButtonType  value) ;

constexpr void __cordl_internal_set_cosmeticName(::StringW  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x590e824, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHatButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHatButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHatButton(GorillaHatButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHatButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHatButton(GorillaHatButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2176};

/// @brief Field buttonParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHatButtonParent>  ___buttonParent;

/// @brief Field buttonType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GorillaHatButton_HatButtonType  ___buttonType;

/// @brief Field isOn, offset: 0x2c, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field offMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

/// @brief Field offText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___offText;

/// @brief Field onText, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___onText;

/// @brief Field myText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

/// @brief Field debounceTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field touchTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field cosmeticName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___cosmeticName;

/// @brief Field testPress, offset: 0x68, size: 0x1, def value: None
 bool  ___testPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___buttonParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___buttonType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___isOn) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___offMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___onMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___offText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___onText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___myText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___debounceTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___touchTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___cosmeticName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButton, ___testPress) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHatButton) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

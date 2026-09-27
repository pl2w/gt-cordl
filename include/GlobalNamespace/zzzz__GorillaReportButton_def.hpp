#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaReportButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPlayerLineButton_ButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaReportButton_MetaReportReason_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaReportButton)
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
namespace GlobalNamespace {
struct GorillaReportButton_MetaReportReason;
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
class GorillaReportButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaReportButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaReportButton*, "", "GorillaReportButton");
// Dependencies GorillaPlayerLineButton::ButtonType, GorillaReportButton::MetaReportReason, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaReportButton
class CORDL_TYPE GorillaReportButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MetaReportReason = ::GlobalNamespace::GorillaReportButton_MetaReportReason;

/// @brief Field buttonType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonType, put=__cordl_internal_set_buttonType)) ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  buttonType;

/// @brief Field debounceTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isOn, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field metaReportType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_metaReportType, put=__cordl_internal_set_metaReportType)) ::GlobalNamespace::GorillaReportButton_MetaReportReason  metaReportType;

/// @brief Field myText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field offMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field offText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

/// @brief Field onText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field parentLine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentLine, put=__cordl_internal_set_parentLine)) ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  parentLine;

/// @brief Field selected, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_selected, put=__cordl_internal_set_selected)) bool  selected;

/// @brief Field testPress, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field touchTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Method AssignParentLine, addr 0x5714c10, size 0x8, virtual false, abstract: false, final false
inline void AssignParentLine(::GlobalNamespace::GorillaPlayerScoreboardLine*  parent) ;

static inline ::GlobalNamespace::GorillaReportButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5714c18, size 0x480, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x5715098, size 0xa8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method UpdateColor, addr 0x5714084, size 0x74, virtual false, abstract: false, final false
inline void UpdateColor() ;

constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType const& __cordl_internal_get_buttonType() const;

constexpr ::GlobalNamespace::GorillaPlayerLineButton_ButtonType& __cordl_internal_get_buttonType() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr ::GlobalNamespace::GorillaReportButton_MetaReportReason const& __cordl_internal_get_metaReportType() const;

constexpr ::GlobalNamespace::GorillaReportButton_MetaReportReason& __cordl_internal_get_metaReportType() ;

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

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine> const& __cordl_internal_get_parentLine() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>& __cordl_internal_get_parentLine() ;

constexpr bool const& __cordl_internal_get_selected() const;

constexpr bool& __cordl_internal_get_selected() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr void __cordl_internal_set_buttonType(::GlobalNamespace::GorillaPlayerLineButton_ButtonType  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_metaReportType(::GlobalNamespace::GorillaReportButton_MetaReportReason  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_parentLine(::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  value) ;

constexpr void __cordl_internal_set_selected(bool  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5715140, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaReportButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaReportButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaReportButton(GorillaReportButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaReportButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaReportButton(GorillaReportButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1189};

/// @brief Field metaReportType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GorillaReportButton_MetaReportReason  ___metaReportType;

/// @brief Field buttonType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPlayerLineButton_ButtonType  ___buttonType;

/// @brief Field parentLine, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>  ___parentLine;

/// @brief Field isOn, offset: 0x30, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field offMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

/// @brief Field offText, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___offText;

/// @brief Field onText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___onText;

/// @brief Field myText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

/// @brief Field debounceTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field touchTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field testPress, offset: 0x68, size: 0x1, def value: None
 bool  ___testPress;

/// @brief Field selected, offset: 0x69, size: 0x1, def value: None
 bool  ___selected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___metaReportType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___buttonType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___parentLine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___isOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___offMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___onMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___offText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___onText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___myText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___debounceTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___touchTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___testPress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaReportButton, ___selected) == 0x69, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaReportButton) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

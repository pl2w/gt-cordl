#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_InputFieldController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KIDUI_InputFieldController)
namespace GlobalNamespace {
class UXSettings;
}
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_InputFieldController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_InputFieldController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_InputFieldController*, "", "KIDUI_InputFieldController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_InputFieldController
class CORDL_TYPE KIDUI_InputFieldController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_InputModule)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  InputModule;

/// @brief Field _cbUXSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbUXSettings, put=__cordl_internal_set__cbUXSettings)) ::UnityW<::GlobalNamespace::UXSettings>  _cbUXSettings;

/// @brief Field _highlightedVibrationDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedVibrationDuration, put=__cordl_internal_set__highlightedVibrationDuration)) float_t  _highlightedVibrationDuration;

/// @brief Field _highlightedVibrationStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedVibrationStrength, put=__cordl_internal_set__highlightedVibrationStrength)) float_t  _highlightedVibrationStrength;

/// @brief Field _inputField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Method Awake, addr 0x5a566b4, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KIDUI_InputFieldController* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::UXSettings> const& __cordl_internal_get__cbUXSettings() const;

constexpr ::UnityW<::GlobalNamespace::UXSettings>& __cordl_internal_get__cbUXSettings() ;

constexpr float_t const& __cordl_internal_get__highlightedVibrationDuration() const;

constexpr float_t& __cordl_internal_get__highlightedVibrationDuration() ;

constexpr float_t const& __cordl_internal_get__highlightedVibrationStrength() const;

constexpr float_t& __cordl_internal_get__highlightedVibrationStrength() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr void __cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value) ;

constexpr void __cordl_internal_set__highlightedVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set__highlightedVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x5a56750, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InputModule, addr 0x5a56608, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> get_InputModule() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_InputFieldController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_InputFieldController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_InputFieldController(KIDUI_InputFieldController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_InputFieldController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_InputFieldController(KIDUI_InputFieldController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3028};

/// [Header("Haptics")]
/// [SerializeField]
/// @brief Field _highlightedVibrationStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ____highlightedVibrationStrength;

/// [SerializeField]
/// @brief Field _highlightedVibrationDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ____highlightedVibrationDuration;

/// [Header("Steam Settings")]
/// [SerializeField]
/// @brief Field _inputField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

/// [SerializeField]
/// @brief Field _cbUXSettings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UXSettings>  ____cbUXSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_InputFieldController, ____highlightedVibrationStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_InputFieldController, ____highlightedVibrationDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_InputFieldController, ____inputField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_InputFieldController, ____cbUXSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_InputFieldController) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

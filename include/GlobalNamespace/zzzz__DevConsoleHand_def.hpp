#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsoleHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleMode_def.hpp"
#include "GlobalNamespace/zzzz__DevConsoleInstance_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DevConsoleHand)
namespace GlobalNamespace {
class DevInspector;
}
namespace GlobalNamespace {
class GorillaDevButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DevConsoleHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevConsoleHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevConsoleHand*, "", "DevConsoleHand");
// Dependencies ConsoleMode, DevConsoleInstance
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevConsoleHand
class CORDL_TYPE DevConsoleHand : public ::GlobalNamespace::DevConsoleInstance {
public:
// Declarations
/// @brief Field componentInspectionText, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentInspectionText, put=__cordl_internal_set_componentInspectionText)) ::UnityW<::UnityEngine::UI::Text>  componentInspectionText;

/// @brief Field componentInspectorButton, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentInspectorButton, put=__cordl_internal_set_componentInspectorButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  componentInspectorButton;

/// @brief Field componentInspectorButtons, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentInspectorButtons, put=__cordl_internal_set_componentInspectorButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  componentInspectorButtons;

/// @brief Field componentInspectorScale, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentInspectorScale, put=__cordl_internal_set_componentInspectorScale)) double_t  componentInspectorScale;

/// @brief Field consoleButton, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_consoleButton, put=__cordl_internal_set_consoleButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  consoleButton;

/// @brief Field consoleButtons, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_consoleButtons, put=__cordl_internal_set_consoleButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  consoleButtons;

/// @brief Field debugScale, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugScale, put=__cordl_internal_set_debugScale)) double_t  debugScale;

/// @brief Field inspectorButton, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_inspectorButton, put=__cordl_internal_set_inspectorButton)) ::UnityW<::GlobalNamespace::GorillaDevButton>  inspectorButton;

/// @brief Field inspectorButtons, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inspectorButtons, put=__cordl_internal_set_inspectorButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  inspectorButtons;

/// @brief Field inspectorScale, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_inspectorScale, put=__cordl_internal_set_inspectorScale)) double_t  inspectorScale;

/// @brief Field isLeftHand, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field isStillEnabled, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStillEnabled, put=__cordl_internal_set_isStillEnabled)) bool  isStillEnabled;

/// @brief Field mode, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::ConsoleMode  mode;

/// @brief Field otherButtonsList, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherButtonsList, put=__cordl_internal_set_otherButtonsList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  otherButtonsList;

/// @brief Field selectedInspector, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedInspector, put=__cordl_internal_set_selectedInspector)) ::UnityW<::GlobalNamespace::DevInspector>  selectedInspector;

/// @brief Field showNonStarItems, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_showNonStarItems, put=__cordl_internal_set_showNonStarItems)) ::UnityW<::GlobalNamespace::GorillaDevButton>  showNonStarItems;

/// @brief Field showPrivateItems, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_showPrivateItems, put=__cordl_internal_set_showPrivateItems)) ::UnityW<::GlobalNamespace::GorillaDevButton>  showPrivateItems;

static inline ::GlobalNamespace::DevConsoleHand* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_componentInspectionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_componentInspectionText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_componentInspectorButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_componentInspectorButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_componentInspectorButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_componentInspectorButtons() ;

constexpr double_t const& __cordl_internal_get_componentInspectorScale() const;

constexpr double_t& __cordl_internal_get_componentInspectorScale() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_consoleButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_consoleButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_consoleButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_consoleButtons() ;

constexpr double_t const& __cordl_internal_get_debugScale() const;

constexpr double_t& __cordl_internal_get_debugScale() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_inspectorButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_inspectorButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_inspectorButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_inspectorButtons() ;

constexpr double_t const& __cordl_internal_get_inspectorScale() const;

constexpr double_t& __cordl_internal_get_inspectorScale() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr bool const& __cordl_internal_get_isStillEnabled() const;

constexpr bool& __cordl_internal_get_isStillEnabled() ;

constexpr ::GlobalNamespace::ConsoleMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::ConsoleMode& __cordl_internal_get_mode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_otherButtonsList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_otherButtonsList() ;

constexpr ::UnityW<::GlobalNamespace::DevInspector> const& __cordl_internal_get_selectedInspector() const;

constexpr ::UnityW<::GlobalNamespace::DevInspector>& __cordl_internal_get_selectedInspector() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_showNonStarItems() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_showNonStarItems() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& __cordl_internal_get_showPrivateItems() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& __cordl_internal_get_showPrivateItems() ;

constexpr void __cordl_internal_set_componentInspectionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_componentInspectorButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_componentInspectorButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_componentInspectorScale(double_t  value) ;

constexpr void __cordl_internal_set_consoleButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_consoleButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_debugScale(double_t  value) ;

constexpr void __cordl_internal_set_inspectorButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_inspectorButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_inspectorScale(double_t  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_isStillEnabled(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::ConsoleMode  value) ;

constexpr void __cordl_internal_set_otherButtonsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_selectedInspector(::UnityW<::GlobalNamespace::DevInspector>  value) ;

constexpr void __cordl_internal_set_showNonStarItems(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

constexpr void __cordl_internal_set_showPrivateItems(::UnityW<::GlobalNamespace::GorillaDevButton>  value) ;

/// @brief Method .ctor, addr 0x566f5ac, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevConsoleHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevConsoleHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevConsoleHand(DevConsoleHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevConsoleHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevConsoleHand(DevConsoleHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{802};

/// @brief Field otherButtonsList, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___otherButtonsList;

/// @brief Field isStillEnabled, offset: 0xa8, size: 0x1, def value: None
 bool  ___isStillEnabled;

/// @brief Field isLeftHand, offset: 0xa9, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field mode, offset: 0xac, size: 0x4, def value: None
 ::GlobalNamespace::ConsoleMode  ___mode;

/// @brief Field debugScale, offset: 0xb0, size: 0x8, def value: None
 double_t  ___debugScale;

/// @brief Field inspectorScale, offset: 0xb8, size: 0x8, def value: None
 double_t  ___inspectorScale;

/// @brief Field componentInspectorScale, offset: 0xc0, size: 0x8, def value: None
 double_t  ___componentInspectorScale;

/// @brief Field consoleButtons, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___consoleButtons;

/// @brief Field inspectorButtons, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___inspectorButtons;

/// @brief Field componentInspectorButtons, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___componentInspectorButtons;

/// @brief Field consoleButton, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___consoleButton;

/// @brief Field inspectorButton, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___inspectorButton;

/// @brief Field componentInspectorButton, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___componentInspectorButton;

/// @brief Field showNonStarItems, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___showNonStarItems;

/// @brief Field showPrivateItems, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDevButton>  ___showPrivateItems;

/// @brief Field componentInspectionText, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___componentInspectionText;

/// @brief Field selectedInspector, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevInspector>  ___selectedInspector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___otherButtonsList) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___isStillEnabled) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___isLeftHand) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___mode) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___debugScale) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___inspectorScale) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___componentInspectorScale) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___consoleButtons) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___inspectorButtons) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___componentInspectorButtons) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___consoleButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___inspectorButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___componentInspectorButton) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___showNonStarItems) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___showPrivateItems) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___componentInspectionText) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevConsoleHand, ___selectedInspector) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevConsoleHand) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace

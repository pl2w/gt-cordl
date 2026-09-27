#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath_ParsedPathComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlPath_ParsedPathComponent)
namespace GlobalNamespace {
struct InputControlPath_HumanReadableStringOptions;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class ParsedPathComponent_InputControlPath___c;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlPath_ParsedPathComponent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlPath_ParsedPathComponent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlPath_ParsedPathComponent, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent");
// Dependencies UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.InputSystem.Utilities.Substring
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct CORDL_TYPE InputControlPath_ParsedPathComponent {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c;

 __declspec(property(get=get_displayName)) ::StringW  displayName;

 __declspec(property(get=get_isDoubleWildcard)) bool  isDoubleWildcard;

 __declspec(property(get=get_isWildcard)) bool  isWildcard;

 __declspec(property(get=get_layout)) ::StringW  layout;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_usages)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  usages;

/// @brief Method ComparePathElementToString, addr 0xaf59f68, size 0x13c, virtual false, abstract: false, final false
static inline bool ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring  pathElement, ::StringW  element) ;

/// @brief Method Matches, addr 0xaf596fc, size 0x2ac, virtual false, abstract: false, final false
inline bool Matches(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToHumanReadableString, addr 0xaf57ce8, size 0x790, virtual false, abstract: false, final false
inline ::StringW ToHumanReadableString(::StringW  parentLayoutName, ::StringW  parentControlPath, ::by_ref<::StringW>  referencedLayoutName, ::by_ref<::StringW>  controlPath, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions  options) ;

/// @brief Method ToHumanReadableString, addr 0xaf59f04, size 0x64, virtual false, abstract: false, final false
static inline ::StringW ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring  substring) ;

/// @brief Method get_displayName, addr 0xaf59e94, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_displayName() ;

/// @brief Method get_isDoubleWildcard, addr 0xaf59ea0, size 0x64, virtual false, abstract: false, final false
inline bool get_isDoubleWildcard() ;

/// @brief Method get_isWildcard, addr 0xaf5873c, size 0x64, virtual false, abstract: false, final false
inline bool get_isWildcard() ;

/// @brief Method get_layout, addr 0xaf59d48, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_layout() ;

/// @brief Method get_name, addr 0xaf59e88, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_usages, addr 0xaf59d50, size 0x138, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_usages() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlPath_ParsedPathComponent() ;

// Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Usages", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Name", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None, comment: None }]
constexpr InputControlPath_ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring  m_Layout, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  m_Usages, ::UnityEngine::InputSystem::Utilities::Substring  m_Name, ::UnityEngine::InputSystem::Utilities::Substring  m_DisplayName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_Layout, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::Substring  m_Layout;

/// @brief Field m_Usages, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  m_Usages;

/// @brief Field m_Name, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::Substring  m_Name;

/// @brief Field m_DisplayName, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::Substring  m_DisplayName;

/// @brief Size padding 0x50 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlPath_ParsedPathComponent, m_Layout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_ParsedPathComponent, m_Usages) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_ParsedPathComponent, m_Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlPath_ParsedPathComponent, m_DisplayName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlPath_ParsedPathComponent) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

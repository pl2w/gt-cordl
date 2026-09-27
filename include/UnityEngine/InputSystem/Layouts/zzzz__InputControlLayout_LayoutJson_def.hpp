#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_LayoutJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_LayoutJson)
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class LayoutJson_InputControlLayout___c;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_LayoutJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_LayoutJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_LayoutJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson");
// Dependencies UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItemJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJson
struct CORDL_TYPE InputControlLayout_LayoutJson {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c;

/// @brief Method FromLayout, addr 0xb000444, size 0x3dc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlLayout_LayoutJson FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout) ;

/// @brief Method ToLayout, addr 0xb000890, size 0x938, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_LayoutJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "controls", ty: "::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_LayoutJson(::StringW  name, ::StringW  extend, ::ArrayW<::StringW>  extendMultiple, ::StringW  format, ::StringW  beforeRender, ::StringW  runInBackground, ::ArrayW<::StringW>  commonUsages, ::StringW  displayName, ::StringW  description, ::StringW  type, ::StringW  variant, bool  isGenericTypeOfDevice, bool  hideInUI, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>  controls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13828};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field extend, offset: 0x8, size: 0x8, def value: None
 ::StringW  extend;

/// @brief Field extendMultiple, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  extendMultiple;

/// @brief Field format, offset: 0x18, size: 0x8, def value: None
 ::StringW  format;

/// @brief Field beforeRender, offset: 0x20, size: 0x8, def value: None
 ::StringW  beforeRender;

/// @brief Field runInBackground, offset: 0x28, size: 0x8, def value: None
 ::StringW  runInBackground;

/// @brief Field commonUsages, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  commonUsages;

/// @brief Field displayName, offset: 0x38, size: 0x8, def value: None
 ::StringW  displayName;

/// @brief Field description, offset: 0x40, size: 0x8, def value: None
 ::StringW  description;

/// @brief Field type, offset: 0x48, size: 0x8, def value: None
 ::StringW  type;

/// @brief Field variant, offset: 0x50, size: 0x8, def value: None
 ::StringW  variant;

/// @brief Field isGenericTypeOfDevice, offset: 0x58, size: 0x1, def value: None
 bool  isGenericTypeOfDevice;

/// @brief Field hideInUI, offset: 0x59, size: 0x1, def value: None
 bool  hideInUI;

/// @brief Field controls, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>  controls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, extend) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, extendMultiple) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, beforeRender) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, runInBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, commonUsages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, displayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, type) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, variant) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, isGenericTypeOfDevice) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, hideInUI) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_LayoutJson, controls) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_LayoutJson) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

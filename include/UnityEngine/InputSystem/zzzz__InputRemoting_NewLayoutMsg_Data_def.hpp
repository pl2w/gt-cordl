#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_NewLayoutMsg_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputRemoting_NewLayoutMsg_Data)
// Forward declare root types
namespace GlobalNamespace {
struct NewLayoutMsg_InputRemoting_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/NewLayoutMsg/Data
struct CORDL_TYPE NewLayoutMsg_InputRemoting_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NewLayoutMsg_InputRemoting_Data() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOverride", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NewLayoutMsg_InputRemoting_Data(::StringW  name, ::StringW  layoutJson, bool  isOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13474};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field layoutJson, offset: 0x8, size: 0x8, def value: None
 ::StringW  layoutJson;

/// @brief Field isOverride, offset: 0x10, size: 0x1, def value: None
 bool  isOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data, layoutJson) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data, isOverride) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NewLayoutMsg_InputRemoting_Data) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

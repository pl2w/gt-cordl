#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_BindingOverrideListJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_BindingOverrideListJson)
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideJson;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideListJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_BindingOverrideListJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingOverrideListJson
struct CORDL_TYPE InputActionMap_BindingOverrideListJson {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_BindingOverrideListJson() ;

// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::InputActionMap_BindingOverrideJson>*", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_BindingOverrideListJson(::System::Collections::Generic::List_1<::GlobalNamespace::InputActionMap_BindingOverrideJson>*  bindings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field bindings, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::InputActionMap_BindingOverrideJson>*  bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideListJson, bindings) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_BindingOverrideListJson) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

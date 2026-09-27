#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_Parameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions_Parameter)
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionRebindingExtensions_Parameter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionRebindingExtensions_Parameter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionRebindingExtensions_Parameter, "UnityEngine.InputSystem", "InputActionRebindingExtensions/Parameter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/Parameter
struct CORDL_TYPE InputActionRebindingExtensions_Parameter {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_Parameter() ;

// Ctor Parameters [CppParam { name: "instance", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionRebindingExtensions_Parameter(::System::Object*  instance, ::System::Reflection::FieldInfo*  field, int32_t  bindingIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field instance, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  instance;

/// @brief Field field, offset: 0x8, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  field;

/// @brief Field bindingIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  bindingIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_Parameter, instance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_Parameter, field) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_Parameter, bindingIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionRebindingExtensions_Parameter) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

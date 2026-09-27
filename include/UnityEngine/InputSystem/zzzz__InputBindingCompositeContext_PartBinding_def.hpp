#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingCompositeContext_PartBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingCompositeContext_PartBinding)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputBindingCompositeContext_PartBinding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputBindingCompositeContext_PartBinding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputBindingCompositeContext_PartBinding, "UnityEngine.InputSystem", "InputBindingCompositeContext/PartBinding");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct CORDL_TYPE InputBindingCompositeContext_PartBinding {
public:
// Declarations
 __declspec(property(get=get_control, put=set_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_part, put=set_part)) int32_t  part;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_control, addr 0xaf4840c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_part, addr 0xaf483fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_part() ;

/// [CompilerGenerated]
/// @brief Method set_control, addr 0xaf48414, size 0x8, virtual false, abstract: false, final false
inline void set_control(::UnityEngine::InputSystem::InputControl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_part, addr 0xaf48404, size 0x8, virtual false, abstract: false, final false
inline void set_part(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputBindingCompositeContext_PartBinding() ;

// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None, comment: None }]
constexpr InputBindingCompositeContext_PartBinding(int32_t  _part_k__BackingField, ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <part>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _part_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <control>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputBindingCompositeContext_PartBinding, _part_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputBindingCompositeContext_PartBinding, _control_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputBindingCompositeContext_PartBinding) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_PrecompiledLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_Collection_PrecompiledLayout)
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct Collection_InputControlLayout_PrecompiledLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/PrecompiledLayout");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout
struct CORDL_TYPE Collection_InputControlLayout_PrecompiledLayout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Collection_InputControlLayout_PrecompiledLayout() ;

// Ctor Parameters [CppParam { name: "factoryMethod", ty: "::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "metadata", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr Collection_InputControlLayout_PrecompiledLayout(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  factoryMethod, ::StringW  metadata) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field factoryMethod, offset: 0x0, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  factoryMethod;

/// @brief Field metadata, offset: 0x8, size: 0x8, def value: None
 ::StringW  metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout, factoryMethod) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout, metadata) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

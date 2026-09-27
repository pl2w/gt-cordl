#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_ParameterEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions_ParameterEnumerable)
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterEnumerator;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterOverride;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_Parameter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterEnumerable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
// Dependencies UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct CORDL_TYPE InputActionRebindingExtensions_ParameterEnumerable {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0xaf16594, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator, addr 0xaf1bb20, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf1bbc8, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0xaf1654c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputActionState*  state, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  parameter, int32_t  mapIndex) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputActionRebindingExtensions_Parameter_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_ParameterEnumerable() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Parameter", ty: "::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionRebindingExtensions_ParameterEnumerable(::UnityEngine::InputSystem::InputActionState*  m_State, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  m_Parameter, int32_t  m_MapIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_Parameter, offset: 0x8, size: 0x78, def value: None
 ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  m_Parameter;

/// @brief Field m_MapIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  m_MapIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable, m_Parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable, m_MapIndex) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerable) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

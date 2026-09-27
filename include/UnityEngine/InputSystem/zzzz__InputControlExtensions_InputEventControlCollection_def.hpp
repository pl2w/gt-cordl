#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_InputEventControlCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_Enumerate_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlExtensions_InputEventControlCollection)
namespace GlobalNamespace {
struct InputControlExtensions_InputEventControlEnumerator;
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
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlExtensions_InputEventControlCollection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlExtensions_InputEventControlCollection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlExtensions_InputEventControlCollection, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlCollection");
// Dependencies UnityEngine.InputSystem.InputControlExtensions::Enumerate, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct CORDL_TYPE InputControlExtensions_InputEventControlCollection {
public:
// Declarations
 __declspec(property(get=get_eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0xaf555a4, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator, addr 0xaf55f68, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf55ffc, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_eventPtr, addr 0xaf55d70, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_eventPtr() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions_InputEventControlCollection() ;

// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::InputControlExtensions_Enumerate", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlExtensions_InputEventControlCollection(::UnityEngine::InputSystem::InputDevice*  m_Device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr, ::GlobalNamespace::InputControlExtensions_Enumerate  m_Flags, float_t  m_MagnitudeThreshold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Device, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_EventPtr, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::InputControlExtensions_Enumerate  m_Flags;

/// @brief Field m_MagnitudeThreshold, offset: 0x14, size: 0x4, def value: None
 float_t  m_MagnitudeThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlCollection, m_Device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlCollection, m_EventPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlCollection, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlCollection, m_MagnitudeThreshold) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlExtensions_InputEventControlCollection) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

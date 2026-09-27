#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_InputEventControlEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_Enumerate_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions_InputEventControlEnumerator)
namespace GlobalNamespace {
struct InputControlExtensions_Enumerate;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
struct InputControlExtensions_InputEventControlEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlEnumerator");
// Dependencies UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputControlExtensions::Enumerate, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct CORDL_TYPE InputControlExtensions_InputEventControlEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::InputControl*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CheckCurrent, addr 0xaf56500, size 0x1c, virtual false, abstract: false, final false
inline bool CheckCurrent(uint32_t  numBits) ;

/// @brief Method CheckDefault, addr 0xaf564e0, size 0x20, virtual false, abstract: false, final false
inline bool CheckDefault(uint32_t  numBits) ;

/// @brief Method Dispose, addr 0xaf56538, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xaf555cc, size 0x3c8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xaf56090, size 0x450, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf56548, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xaf55d78, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device, ::GlobalNamespace::InputControlExtensions_Enumerate  flags, float_t  magnitudeThreshold) ;

/// @brief Method get_Current, addr 0xaf56540, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputControl* get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions_InputEventControlEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Flags", ty: "::GlobalNamespace::InputControlExtensions_Enumerate", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllControls", ty: "::ArrayW<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DefaultState", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentState", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NoiseMask", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentControl", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventState", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InputControlExtensions_InputEventControlEnumerator(::GlobalNamespace::InputControlExtensions_Enumerate  m_Flags, ::UnityEngine::InputSystem::InputDevice*  m_Device, ::ArrayW<uint32_t>  m_StateOffsetToControlIndex, int32_t  m_StateOffsetToControlIndexLength, ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_AllControls, uint8_t*  m_DefaultState, uint8_t*  m_CurrentState, uint8_t*  m_NoiseMask, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr, ::UnityEngine::InputSystem::InputControl*  m_CurrentControl, int32_t  m_CurrentIndexInStateOffsetToControlIndexMap, uint32_t  m_CurrentControlStateBitOffset, uint8_t*  m_EventState, uint32_t  m_CurrentBitOffset, uint32_t  m_EndBitOffset, float_t  m_MagnitudeThreshold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field m_Flags, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::InputControlExtensions_Enumerate  m_Flags;

/// @brief Field m_Device, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_StateOffsetToControlIndex, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t>  m_StateOffsetToControlIndex;

/// @brief Field m_StateOffsetToControlIndexLength, offset: 0x18, size: 0x4, def value: None
 int32_t  m_StateOffsetToControlIndexLength;

/// @brief Field m_AllControls, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  m_AllControls;

/// @brief Field m_DefaultState, offset: 0x28, size: 0x8, def value: None
 uint8_t*  m_DefaultState;

/// @brief Field m_CurrentState, offset: 0x30, size: 0x8, def value: None
 uint8_t*  m_CurrentState;

/// @brief Field m_NoiseMask, offset: 0x38, size: 0x8, def value: None
 uint8_t*  m_NoiseMask;

/// @brief Field m_EventPtr, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr;

/// @brief Field m_CurrentControl, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  m_CurrentControl;

/// @brief Field m_CurrentIndexInStateOffsetToControlIndexMap, offset: 0x50, size: 0x4, def value: None
 int32_t  m_CurrentIndexInStateOffsetToControlIndexMap;

/// @brief Field m_CurrentControlStateBitOffset, offset: 0x54, size: 0x4, def value: None
 uint32_t  m_CurrentControlStateBitOffset;

/// @brief Field m_EventState, offset: 0x58, size: 0x8, def value: None
 uint8_t*  m_EventState;

/// @brief Field m_CurrentBitOffset, offset: 0x60, size: 0x4, def value: None
 uint32_t  m_CurrentBitOffset;

/// @brief Field m_EndBitOffset, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_EndBitOffset;

/// @brief Field m_MagnitudeThreshold, offset: 0x68, size: 0x4, def value: None
 float_t  m_MagnitudeThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_Device) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_StateOffsetToControlIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_StateOffsetToControlIndexLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_AllControls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_DefaultState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_CurrentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_NoiseMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_EventPtr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_CurrentControl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_CurrentIndexInStateOffsetToControlIndexMap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_CurrentControlStateBitOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_EventState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_CurrentBitOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_EndBitOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator, m_MagnitudeThreshold) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlExtensions_InputEventControlEnumerator) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

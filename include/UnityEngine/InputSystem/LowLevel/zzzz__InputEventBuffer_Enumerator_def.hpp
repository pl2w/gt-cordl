#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventBuffer_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventBuffer_Enumerator)
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
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputEventBuffer_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputEventBuffer_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputEventBuffer_Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct CORDL_TYPE InputEventBuffer_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaff063c, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xaff05c8, size 0x68, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xaff0630, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaff0648, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xaff03f0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  buffer) ;

/// @brief Method get_Current, addr 0xaff0640, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputEventBuffer_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputEventBuffer_Enumerator(::UnityEngine::InputSystem::LowLevel::InputEvent*  m_Buffer, int32_t  m_EventCount, ::UnityEngine::InputSystem::LowLevel::InputEvent*  m_CurrentEvent, int32_t  m_CurrentIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEvent*  m_Buffer;

/// @brief Field m_EventCount, offset: 0x8, size: 0x4, def value: None
 int32_t  m_EventCount;

/// @brief Field m_CurrentEvent, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEvent*  m_CurrentEvent;

/// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  m_CurrentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputEventBuffer_Enumerator, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventBuffer_Enumerator, m_EventCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventBuffer_Enumerator, m_CurrentEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEventBuffer_Enumerator, m_CurrentIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputEventBuffer_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

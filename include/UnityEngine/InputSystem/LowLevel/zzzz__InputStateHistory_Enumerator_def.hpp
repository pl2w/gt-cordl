#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_Enumerator)
namespace GlobalNamespace {
struct InputStateHistory_Record;
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
class InputStateHistory;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputStateHistory_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputStateHistory_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputStateHistory_Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct CORDL_TYPE InputStateHistory_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::InputStateHistory_Record  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaffd324, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xaffd264, size 0x34, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xaffd298, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaffd2c0, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xaffcc5c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  history) ;

/// @brief Method get_Current, addr 0xaffd2a4, size 0x1c, virtual true, abstract: false, final true
inline ::GlobalNamespace::InputStateHistory_Record get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_Record>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__InputStateHistory_Record_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputStateHistory_Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  m_History, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_History, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateHistory*  m_History;

/// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputStateHistory_Enumerator, m_History) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputStateHistory_Enumerator, m_Index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputStateHistory_Enumerator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

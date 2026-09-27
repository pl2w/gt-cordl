#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme_MatchResult_Enumerator)
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Match;
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
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Enumerator");
// Dependencies UnityEngine.InputSystem.InputControlList`1<TControl>, UnityEngine.InputSystem.InputControlScheme::DeviceRequirement
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult/Enumerator
struct CORDL_TYPE MatchResult_InputControlScheme_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::MatchResult_InputControlScheme_Match  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf4b73c, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xaf4b5e4, size 0x2c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xaf4b610, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf4b6dc, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current, addr 0xaf4b61c, size 0xc0, virtual true, abstract: false, final true
inline ::GlobalNamespace::MatchResult_InputControlScheme_Match get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__MatchResult_InputControlScheme_Match_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr MatchResult_InputControlScheme_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None, comment: None }]
constexpr MatchResult_InputControlScheme_Enumerator(int32_t  m_Index, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Index;

/// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements;

/// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator, m_Controls) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchResult_InputControlScheme_Enumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

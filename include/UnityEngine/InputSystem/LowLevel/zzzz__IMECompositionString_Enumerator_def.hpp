#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionString_Enumerator)
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
struct IMECompositionString;
}
// Forward declare root types
namespace GlobalNamespace {
struct IMECompositionString_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IMECompositionString_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IMECompositionString_Enumerator, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/Enumerator");
// Dependencies UnityEngine.InputSystem.LowLevel.IMECompositionString
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct CORDL_TYPE IMECompositionString_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) char16_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xafef590, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xafef554, size 0x30, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xafef584, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xafef59c, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xafef52c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString  compositionString) ;

/// @brief Method get_Current, addr 0xafef594, size 0x8, virtual true, abstract: false, final true
inline char16_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IMECompositionString_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_CompositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentCharacter", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IMECompositionString_Enumerator(::UnityEngine::InputSystem::LowLevel::IMECompositionString  m_CompositionString, char16_t  m_CurrentCharacter, int32_t  m_CurrentIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c};

/// @brief Field m_CompositionString, offset: 0x0, size: 0x84, def value: None
 ::UnityEngine::InputSystem::LowLevel::IMECompositionString  m_CompositionString;

/// @brief Field m_CurrentCharacter, offset: 0x84, size: 0x2, def value: None
 char16_t  m_CurrentCharacter;

/// @brief Field m_CurrentIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  m_CurrentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IMECompositionString_Enumerator, m_CompositionString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMECompositionString_Enumerator, m_CurrentCharacter) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMECompositionString_Enumerator, m_CurrentIndex) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IMECompositionString_Enumerator) == 0x8c, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/InlinedArray`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InlinedArray`1_Enumerator)
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
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct InlinedArray_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::InlinedArray_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::InlinedArray_1_Enumerator, "UnityEngine.InputSystem.Utilities", "InlinedArray`1/Enumerator");
// Dependencies UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1/Enumerator<TValue>
struct CORDL_TYPE InlinedArray_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) TValue  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InlinedArray_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InlinedArray_1_Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field array, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>  array;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

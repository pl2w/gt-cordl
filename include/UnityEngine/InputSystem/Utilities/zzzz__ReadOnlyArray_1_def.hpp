#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyArray_1)
namespace GlobalNamespace {
template<typename TValue>
struct ReadOnlyArray_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1");
// [DefaultMember("Item")]
// Dependencies 
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
struct CORDL_TYPE ReadOnlyArray_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) TValue  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<TValue>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyArray_1_Enumerator<TValue> GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Predicate_1<TValue>*  predicate) ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TValue>* System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<TValue> ToArray() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<TValue>  array) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<TValue>  array, int32_t  index, int32_t  length) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* i___System__Collections__Generic__IReadOnlyList_1_TValue_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_(::ArrayW<TValue>  array) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyArray_1() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyArray_1(::ArrayW<TValue>  m_Array, int32_t  m_StartIndex, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13925};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<TValue>  m_Array;

/// @brief Field m_StartIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_StartIndex;

/// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities

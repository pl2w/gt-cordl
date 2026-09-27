#pragma once
// IWYU pragma private; include "System/Array_InternalEnumerator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Array_InternalEnumerator_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Array_InternalEnumerator_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Array_InternalEnumerator_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Array_InternalEnumerator_1, "System", "Array/InternalEnumerator`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Array/InternalEnumerator`1<T>
struct CORDL_TYPE Array_InternalEnumerator_1 {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Array*  array) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Array_InternalEnumerator_1() ;

// Ctor Parameters [CppParam { name: "array", ty: "::System::Array*", modifiers: "", def_value: None, comment: None }, CppParam { name: "idx", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Array_InternalEnumerator_1(::System::Array*  array, int32_t  idx) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field array, offset: 0x0, size: 0x8, def value: None
 ::System::Array*  array;

/// @brief Field idx, offset: 0x8, size: 0x4, def value: None
 int32_t  idx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

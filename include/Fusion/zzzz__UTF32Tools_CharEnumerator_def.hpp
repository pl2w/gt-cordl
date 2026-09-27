#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools_CharEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UTF32Tools_CharEnumerator)
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
struct UTF32Tools_CharEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UTF32Tools_CharEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UTF32Tools_CharEnumerator, "Fusion", "UTF32Tools/CharEnumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.UTF32Tools/CharEnumerator
struct CORDL_TYPE UTF32Tools_CharEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) char16_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x5f41888, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x5f4188c, size 0x5c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x5f418e8, size 0x8, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f41860, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x5f4183c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint32_t*  utf32, int32_t  length) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x5f41850, size 0x8, virtual true, abstract: false, final true
inline char16_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x5f41858, size 0x8, virtual false, abstract: false, final false
inline void set_Current(char16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UTF32Tools_CharEnumerator() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pendingLowSurrogate", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ptr", ty: "uint32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Current_k__BackingField", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr UTF32Tools_CharEnumerator(int32_t  _index, int32_t  _length, char16_t  _pendingLowSurrogate, uint32_t*  _ptr, char16_t  _Current_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _length, offset: 0x4, size: 0x4, def value: None
 int32_t  _length;

/// @brief Field _pendingLowSurrogate, offset: 0x8, size: 0x2, def value: None
 char16_t  _pendingLowSurrogate;

/// @brief Field _ptr, offset: 0x10, size: 0x8, def value: None
 uint32_t*  _ptr;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Current>k__BackingField, offset: 0x18, size: 0x2, def value: None
 char16_t  _Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UTF32Tools_CharEnumerator, _index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF32Tools_CharEnumerator, _length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF32Tools_CharEnumerator, _pendingLowSurrogate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF32Tools_CharEnumerator, _ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF32Tools_CharEnumerator, _Current_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UTF32Tools_CharEnumerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

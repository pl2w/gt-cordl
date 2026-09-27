#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/ReadOnlyListSpan`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyListSpan`1_Enumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
template<typename T>
struct ReadOnlyListSpan_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ReadOnlyListSpan_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ReadOnlyListSpan_1_Enumerator, "Unity.XR.CoreUtils.Collections", "ReadOnlyListSpan`1/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.XR.CoreUtils.Collections.ReadOnlyListSpan`1/Enumerator<T>
struct CORDL_TYPE ReadOnlyListSpan_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_end)) int32_t  end;

 __declspec(property(get=get_start)) int32_t  start;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list, int32_t  start, int32_t  end) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_end, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_end() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_start() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyListSpan_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_end_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "list", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyListSpan_1_Enumerator(int32_t  _start_k__BackingField, int32_t  _end_k__BackingField, ::System::Collections::Generic::IReadOnlyList_1<T>*  list, int32_t  m_CurrentIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <start>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _start_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <end>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _end_k__BackingField;

/// @brief Field list, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<T>*  list;

/// @brief Field m_CurrentIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_CurrentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

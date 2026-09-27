#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArray`1_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArray`1_ReadOnly)
namespace GlobalNamespace {
template<typename T>
struct ReadOnly_NativeArray_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeArray_1_ReadOnly);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeArray_1_ReadOnly, "Unity.Collections", "NativeArray`1/ReadOnly");
// [DebuggerTypeProxy(typeof(Unity.Collections.NativeArrayReadOnlyDebugView`1<T>))]
// [DebuggerDisplay("Length = {Length}")]
// [NativeContainerIsReadOnly]
// [DefaultMember("Item")]
// [NativeContainer]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeArray`1/ReadOnly<T>
struct CORDL_TYPE NativeArray_1_ReadOnly {
public:
// Declarations
using Enumerator = ::GlobalNamespace::ReadOnly_NativeArray_1_Enumerator<T>;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// [IsReadOnly]
/// @brief Method AsReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> AsReadOnlySpan() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnly_NativeArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method UnsafeElementAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> UnsafeElementAt(int32_t  index) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(void*  buffer, int32_t  length) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<T>>  source) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeArray_1_ReadOnly() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NativeArray_1_ReadOnly(void*  m_Buffer, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 void*  m_Buffer;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

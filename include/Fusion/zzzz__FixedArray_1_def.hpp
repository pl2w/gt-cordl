#pragma once
// IWYU pragma private; include "Fusion/FixedArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray_1)
namespace GlobalNamespace {
template<typename T>
struct FixedArray_1_Enumerator;
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
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Fusion {
template<typename T>
struct FixedArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::FixedArray_1);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::FixedArray_1, "Fusion", "FixedArray`1");
// [DefaultMember("Item")]
// [DebuggerDisplay("Length = {Length}")]
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.FixedArray`1<T>
struct CORDL_TYPE FixedArray_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::FixedArray_1_Enumerator<T>;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field _stringBuilderCached, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stringBuilderCached, put=setStaticF__stringBuilderCached)) ::System::Text::StringBuilder*  _stringBuilderCached;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::ArrayW<T>  source, int32_t  sourceOffset, int32_t  sourceCount) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::System::Collections::Generic::List_1<T>*  source, int32_t  sourceOffset, int32_t  sourceCount) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<T>  array, bool  throwIfOverflow) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::FixedArray_1_Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method ToListString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW ToListString() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T*  array, int32_t  length) ;

static inline ::System::Text::StringBuilder* getStaticF__stringBuilderCached() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

static inline void setStaticF__stringBuilderCached(::System::Text::StringBuilder*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedArray_1() ;

// Ctor Parameters [CppParam { name: "_array", ty: "T*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FixedArray_1(T*  _array, int32_t  _length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19020};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _array, offset: 0x0, size: 0x8, def value: None
 T*  _array;

/// @brief Field _length, offset: 0x8, size: 0x4, def value: None
 int32_t  _length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion

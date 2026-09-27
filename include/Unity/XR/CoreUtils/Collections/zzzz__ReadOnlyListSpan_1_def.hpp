#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/ReadOnlyListSpan_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Collections/zzzz__ReadOnlyListSpan`1_Enumerator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyListSpan_1)
namespace GlobalNamespace {
template<typename T>
struct ReadOnlyListSpan_1_Enumerator;
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
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
struct ReadOnlyListSpan_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1, "Unity.XR.CoreUtils.Collections", "ReadOnlyListSpan`1");
// [DefaultMember("Item")]
// Dependencies Unity.XR.CoreUtils.Collections.ReadOnlyListSpan`1::Enumerator<T>
namespace Unity::XR::CoreUtils::Collections {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.XR.CoreUtils.Collections.ReadOnlyListSpan`1<T>
struct CORDL_TYPE ReadOnlyListSpan_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field s_EmptyList, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_EmptyList, put=setStaticF_s_EmptyList)) ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  s_EmptyList;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>>"
constexpr operator  ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>>*() ;

/// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T> Empty() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  other) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T> Slice(int32_t  start, int32_t  length) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  list, int32_t  start, int32_t  length) ;

static inline ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T> getStaticF_s_EmptyList() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>>"
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>>* i___System__IEquatable_1___Unity__XR__CoreUtils__Collections__ReadOnlyListSpan_1_T__() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  rhs) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  rhs) ;

static inline void setStaticF_s_EmptyList(::Unity::XR::CoreUtils::Collections::ReadOnlyListSpan_1<T>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyListSpan_1() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyListSpan_1(::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Enumerator, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::ReadOnlyListSpan_1_Enumerator<T>  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Collections

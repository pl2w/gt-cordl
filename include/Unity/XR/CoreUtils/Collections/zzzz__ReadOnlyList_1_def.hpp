#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/ReadOnlyList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyList_1)
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
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
class ReadOnlyList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1, "Unity.XR.CoreUtils.Collections", "ReadOnlyList`1");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Unity::XR::CoreUtils::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Collections.ReadOnlyList`1<T>
class CORDL_TYPE ReadOnlyList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field m_List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<T>*  m_List;

/// @brief Field s_EmptyList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EmptyList, put=setStaticF_s_EmptyList)) ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  s_EmptyList;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>"
constexpr operator  ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>*() noexcept;

/// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* Empty() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  other) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::List_1_Enumerator<T> GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* New_ctor(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_List() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_List() ;

constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<T>*  list) ;

static inline ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>* getStaticF_s_EmptyList() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>"
constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*>* i___System__IEquatable_1___Unity__XR__CoreUtils__Collections__ReadOnlyList_1_T___() noexcept;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  rhs) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  lhs, ::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  rhs) ;

static inline void setStaticF_s_EmptyList(::Unity::XR::CoreUtils::Collections::ReadOnlyList_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyList_1(ReadOnlyList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyList_1(ReadOnlyList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30449};

/// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___m_List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Collections

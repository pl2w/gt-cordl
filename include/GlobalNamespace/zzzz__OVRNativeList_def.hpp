#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRNativeList)
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
struct OVRNativeList_1;
}
namespace GlobalNamespace {
struct OVRNativeList_CapacityHelper;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeList;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRNativeList*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNativeList*, "", "OVRNativeList");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNativeList
class CORDL_TYPE OVRNativeList : public ::System::Object {
public:
// Declarations
using CapacityHelper = ::GlobalNamespace::OVRNativeList_CapacityHelper;

/// [Extension]
/// @brief Method ToNativeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::OVRNativeList_1<T> ToNativeList(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method WithSuggestedCapacityFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::OVRNativeList_CapacityHelper WithSuggestedCapacityFrom(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

/// @brief Method WithSuggestedCapacityFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::OVRNativeList_CapacityHelper WithSuggestedCapacityFrom(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>*  collection, ::by_ref<::GlobalNamespace::OVREnumerable_1<T>>  nonAllocatingEnumerable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRNativeList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRNativeList(OVRNativeList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRNativeList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRNativeList(OVRNativeList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRNativeList) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

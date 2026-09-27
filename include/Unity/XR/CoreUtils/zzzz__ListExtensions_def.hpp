#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ListExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ListExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ListExtensions*, "Unity.XR.CoreUtils", "ListExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ListExtensions
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCapacity(::System::Collections::Generic::List_1<T>*  list, int32_t  capacity) ;

/// [Extension]
/// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::default_constructor_constraint<T>)
static inline ::System::Collections::Generic::List_1<T>* Fill(::System::Collections::Generic::List_1<T>*  list, int32_t  count) ;

/// [Extension]
/// @brief Method SwapAtIndices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SwapAtIndices(::System::Collections::Generic::List_1<T>*  list, int32_t  first, int32_t  second) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListExtensions(ListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListExtensions(ListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::ListExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

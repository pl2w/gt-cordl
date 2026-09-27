#pragma once
// IWYU pragma private; include "BuildSafe/ListUtilsUnsafe_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ListUtilsUnsafe_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace BuildSafe {
template<typename T>
class ListUtilsUnsafe_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::BuildSafe::ListUtilsUnsafe_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::BuildSafe::ListUtilsUnsafe_1, "BuildSafe", "ListUtilsUnsafe`1");
// Dependencies System.Object
namespace BuildSafe {
// cpp template
template<typename T>
// Is value type: false
// CS Name: BuildSafe.ListUtilsUnsafe`1<T>
class CORDL_TYPE ListUtilsUnsafe_1 : public ::System::Object {
public:
// Declarations
/// @brief Method GetInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<T> GetInternalArray(::System::Collections::Generic::List_1<T>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListUtilsUnsafe_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListUtilsUnsafe_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListUtilsUnsafe_1(ListUtilsUnsafe_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListUtilsUnsafe_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListUtilsUnsafe_1(ListUtilsUnsafe_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BuildSafe

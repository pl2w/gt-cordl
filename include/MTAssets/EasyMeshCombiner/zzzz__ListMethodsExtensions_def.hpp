#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/ListMethodsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListMethodsExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class ListMethodsExtensions;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::ListMethodsExtensions*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::ListMethodsExtensions*, "MTAssets.EasyMeshCombiner", "ListMethodsExtensions");
// [Extension]
// Dependencies System.Object
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.ListMethodsExtensions
class CORDL_TYPE ListMethodsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method RemoveAllNullItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveAllNullItems(::System::Collections::Generic::List_1<T>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMethodsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMethodsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMethodsExtensions(ListMethodsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMethodsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMethodsExtensions(ListMethodsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MTAssets::EasyMeshCombiner::ListMethodsExtensions) == 0x10, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner

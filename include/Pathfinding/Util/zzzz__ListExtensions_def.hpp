#pragma once
// IWYU pragma private; include "Pathfinding/Util/ListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::Util {
class ListExtensions;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::ListExtensions*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::ListExtensions*, "Pathfinding.Util", "ListExtensions");
// [Extension]
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.ListExtensions
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ClearFast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ClearFast(::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method ToArrayFromPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ToArrayFromPool(::System::Collections::Generic::List_1<T>*  list) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Util::ListExtensions) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Util

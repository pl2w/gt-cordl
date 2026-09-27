#pragma once
// IWYU pragma private; include "Meta/WitAi/EnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumerableExtensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Meta::WitAi {
class EnumerableExtensions;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::EnumerableExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::EnumerableExtensions*, "Meta.WitAi", "EnumerableExtensions");
// [Extension]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.EnumerableExtensions
class CORDL_TYPE EnumerableExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Equivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline bool Equivalent(::System::Collections::Generic::IEnumerable_1<TSource>*  first, ::System::Collections::Generic::IEnumerable_1<TSource>*  second) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableExtensions(EnumerableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableExtensions(EnumerableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::EnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi

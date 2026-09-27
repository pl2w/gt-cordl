#pragma once
// IWYU pragma private; include "GorillaExtensions/CollectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GorillaExtensions {
class CollectionExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::CollectionExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::CollectionExtensions*, "GorillaExtensions", "CollectionExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.CollectionExtensions
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void AddAll(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IEnumerable_1<T>*  ts) ;

/// [Extension]
/// @brief Method ContainsAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ContainsAll(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IEnumerable_1<T>*  ts) ;

/// [Extension]
/// @brief Method CopyStringKeepDelimiterAtEnd, addr 0x5cf4acc, size 0xe0, virtual false, abstract: false, final false
static inline void CopyStringKeepDelimiterAtEnd(::System::Collections::Generic::HashSet_1<::StringW>*  hash, ::StringW  str, char16_t  delimiter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionExtensions(CollectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionExtensions(CollectionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::CollectionExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions

#pragma once
// IWYU pragma private; include "Oculus/Interaction/HashSetExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HashSetExtensions)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Oculus::Interaction {
class HashSetExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HashSetExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HashSetExtensions*, "Oculus.Interaction", "HashSetExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HashSetExtensions
class CORDL_TYPE HashSetExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ExceptWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::HashSet_1<T>*  other) ;

/// [Extension]
/// @brief Method ExceptWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ExceptWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::IList_1<T>*  other) ;

/// [Extension]
/// @brief Method OverlapsNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool OverlapsNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToCheck, ::System::Collections::Generic::HashSet_1<T>*  other) ;

/// [Extension]
/// @brief Method OverlapsNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool OverlapsNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToCheck, ::System::Collections::Generic::IList_1<T>*  other) ;

/// [Extension]
/// @brief Method UnionWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void UnionWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::HashSet_1<T>*  other) ;

/// [Extension]
/// @brief Method UnionWithNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void UnionWithNonAlloc(::System::Collections::Generic::HashSet_1<T>*  hashSetToModify, ::System::Collections::Generic::IList_1<T>*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashSetExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSetExtensions(HashSetExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSetExtensions(HashSetExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15704};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HashSetExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction

#pragma once
// IWYU pragma private; include "Fusion/ListSpecialized.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListSpecialized)
namespace Fusion {
struct NetworkId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion {
class ListSpecialized;
}
// Write type traits
MARK_REF_T(::Fusion::ListSpecialized*);
DEFINE_IL2CPP_CLASS(::Fusion::ListSpecialized*, "Fusion", "ListSpecialized");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ListSpecialized
class CORDL_TYPE ListSpecialized : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddUnique, addr 0x5fa07a4, size 0x78, virtual false, abstract: false, final false
static inline bool AddUnique(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value) ;

/// [Extension]
/// @brief Method BinarySearchSpecialized, addr 0x5fa06e4, size 0xc0, virtual false, abstract: false, final false
static inline int32_t BinarySearchSpecialized(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value) ;

/// [Extension]
/// @brief Method RemoveUnique, addr 0x5fa081c, size 0x78, virtual false, abstract: false, final false
static inline bool RemoveUnique(::System::Collections::Generic::List_1<::Fusion::NetworkId>*  list, ::Fusion::NetworkId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListSpecialized() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListSpecialized", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListSpecialized(ListSpecialized && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListSpecialized", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListSpecialized(ListSpecialized const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ListSpecialized) == 0x10, "Size mismatch!");

} // namespace end def Fusion

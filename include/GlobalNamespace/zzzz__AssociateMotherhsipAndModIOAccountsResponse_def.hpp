#pragma once
// IWYU pragma private; include "GlobalNamespace/AssociateMotherhsipAndModIOAccountsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AssociateMotherhsipAndModIOAccountsResponse)
namespace GlobalNamespace {
class ModIOMothershipAssociation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AssociateMotherhsipAndModIOAccountsResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*, "", "AssociateMotherhsipAndModIOAccountsResponse");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssociateMotherhsipAndModIOAccountsResponse
class CORDL_TYPE AssociateMotherhsipAndModIOAccountsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Results, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Results, put=__cordl_internal_set_Results)) ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*  Results;

static inline ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>* const& __cordl_internal_get_Results() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*& __cordl_internal_get_Results() ;

constexpr void __cordl_internal_set_Results(::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*  value) ;

/// @brief Method .ctor, addr 0x59f1868, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssociateMotherhsipAndModIOAccountsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssociateMotherhsipAndModIOAccountsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssociateMotherhsipAndModIOAccountsResponse(AssociateMotherhsipAndModIOAccountsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssociateMotherhsipAndModIOAccountsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssociateMotherhsipAndModIOAccountsResponse(AssociateMotherhsipAndModIOAccountsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2724};

/// @brief Field Results, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*  ___Results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse, ___Results) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

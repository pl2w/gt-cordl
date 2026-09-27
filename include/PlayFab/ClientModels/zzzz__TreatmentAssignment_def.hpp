#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TreatmentAssignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TreatmentAssignment)
namespace PlayFab::ClientModels {
class Variable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class TreatmentAssignment;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::TreatmentAssignment*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TreatmentAssignment*, "PlayFab.ClientModels", "TreatmentAssignment");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.TreatmentAssignment
class CORDL_TYPE TreatmentAssignment : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Variables, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variables, put=__cordl_internal_set_Variables)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*  Variables;

/// @brief Field Variants, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variants, put=__cordl_internal_set_Variants)) ::System::Collections::Generic::List_1<::StringW>*  Variants;

static inline ::PlayFab::ClientModels::TreatmentAssignment* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>* const& __cordl_internal_get_Variables() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*& __cordl_internal_get_Variables() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Variants() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Variants() ;

constexpr void __cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*  value) ;

constexpr void __cordl_internal_set_Variants(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84e2d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreatmentAssignment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreatmentAssignment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TreatmentAssignment(TreatmentAssignment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreatmentAssignment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreatmentAssignment(TreatmentAssignment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20242};

/// @brief Field Variables, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*  ___Variables;

/// @brief Field Variants, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Variants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TreatmentAssignment, ___Variables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TreatmentAssignment, ___Variants) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TreatmentAssignment) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

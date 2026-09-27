#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/TreatmentAssignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TreatmentAssignment)
namespace PlayFab::ExperimentationModels {
class Variable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class TreatmentAssignment;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::TreatmentAssignment*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::TreatmentAssignment*, "PlayFab.ExperimentationModels", "TreatmentAssignment");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.TreatmentAssignment
class CORDL_TYPE TreatmentAssignment : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Variables, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variables, put=__cordl_internal_set_Variables)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  Variables;

/// @brief Field Variants, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variants, put=__cordl_internal_set_Variants)) ::System::Collections::Generic::List_1<::StringW>*  Variants;

static inline ::PlayFab::ExperimentationModels::TreatmentAssignment* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>* const& __cordl_internal_get_Variables() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*& __cordl_internal_get_Variables() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Variants() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Variants() ;

constexpr void __cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  value) ;

constexpr void __cordl_internal_set_Variants(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840f00, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19834};

/// @brief Field Variables, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  ___Variables;

/// @brief Field Variants, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Variants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::TreatmentAssignment, ___Variables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::TreatmentAssignment, ___Variants) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::TreatmentAssignment) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels

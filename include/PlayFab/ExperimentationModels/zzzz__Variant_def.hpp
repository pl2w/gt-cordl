#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Variant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Variant)
namespace PlayFab::ExperimentationModels {
class Variable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class Variant;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::Variant*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::Variant*, "PlayFab.ExperimentationModels", "Variant");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.Variant
class CORDL_TYPE Variant : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Description, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field Id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field IsControl, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsControl, put=__cordl_internal_set_IsControl)) bool  IsControl;

/// @brief Field Name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field TitleDataOverrideId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDataOverrideId, put=__cordl_internal_set_TitleDataOverrideId)) ::StringW  TitleDataOverrideId;

/// @brief Field TrafficPercentage, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_TrafficPercentage, put=__cordl_internal_set_TrafficPercentage)) uint32_t  TrafficPercentage;

/// @brief Field Variables, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variables, put=__cordl_internal_set_Variables)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  Variables;

static inline ::PlayFab::ExperimentationModels::Variant* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_IsControl() const;

constexpr bool& __cordl_internal_get_IsControl() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_TitleDataOverrideId() const;

constexpr ::StringW& __cordl_internal_get_TitleDataOverrideId() ;

constexpr uint32_t const& __cordl_internal_get_TrafficPercentage() const;

constexpr uint32_t& __cordl_internal_get_TrafficPercentage() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>* const& __cordl_internal_get_Variables() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*& __cordl_internal_get_Variables() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_IsControl(bool  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_TitleDataOverrideId(::StringW  value) ;

constexpr void __cordl_internal_set_TrafficPercentage(uint32_t  value) ;

constexpr void __cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  value) ;

/// @brief Method .ctor, addr 0xa840f18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Variant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Variant", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Variant(Variant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Variant", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Variant(Variant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19837};

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field Id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field IsControl, offset: 0x20, size: 0x1, def value: None
 bool  ___IsControl;

/// @brief Field Name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field TitleDataOverrideId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TitleDataOverrideId;

/// @brief Field TrafficPercentage, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___TrafficPercentage;

/// @brief Field Variables, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  ___Variables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___IsControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___TitleDataOverrideId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___TrafficPercentage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Variant, ___Variables) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::Variant) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels

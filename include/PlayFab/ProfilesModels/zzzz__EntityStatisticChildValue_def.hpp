#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityStatisticChildValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntityStatisticChildValue)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityStatisticChildValue;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityStatisticChildValue*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityStatisticChildValue*, "PlayFab.ProfilesModels", "EntityStatisticChildValue");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityStatisticChildValue
class CORDL_TYPE EntityStatisticChildValue : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ChildName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ChildName, put=__cordl_internal_set_ChildName)) ::StringW  ChildName;

/// @brief Field Metadata, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::StringW  Metadata;

/// @brief Field Value, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) int32_t  Value;

static inline ::PlayFab::ProfilesModels::EntityStatisticChildValue* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ChildName() const;

constexpr ::StringW& __cordl_internal_get_ChildName() ;

constexpr ::StringW const& __cordl_internal_get_Metadata() const;

constexpr ::StringW& __cordl_internal_get_Metadata() ;

constexpr int32_t const& __cordl_internal_get_Value() const;

constexpr int32_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_ChildName(::StringW  value) ;

constexpr void __cordl_internal_set_Metadata(::StringW  value) ;

constexpr void __cordl_internal_set_Value(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840718, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityStatisticChildValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityStatisticChildValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityStatisticChildValue(EntityStatisticChildValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityStatisticChildValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityStatisticChildValue(EntityStatisticChildValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19564};

/// @brief Field ChildName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ChildName;

/// @brief Field Metadata, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Metadata;

/// @brief Field Value, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticChildValue, ___ChildName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticChildValue, ___Metadata) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticChildValue, ___Value) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityStatisticChildValue) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels

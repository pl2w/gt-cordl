#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityStatisticValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntityStatisticValue)
namespace PlayFab::ProfilesModels {
class EntityStatisticChildValue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityStatisticValue;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityStatisticValue*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityStatisticValue*, "PlayFab.ProfilesModels", "EntityStatisticValue");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityStatisticValue
class CORDL_TYPE EntityStatisticValue : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ChildStatistics, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ChildStatistics, put=__cordl_internal_set_ChildStatistics)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*  ChildStatistics;

/// @brief Field Metadata, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::StringW  Metadata;

/// @brief Field Name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Value, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::System::Nullable_1<int32_t>  Value;

/// @brief Field Version, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

static inline ::PlayFab::ProfilesModels::EntityStatisticValue* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>* const& __cordl_internal_get_ChildStatistics() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*& __cordl_internal_get_ChildStatistics() ;

constexpr ::StringW const& __cordl_internal_get_Metadata() const;

constexpr ::StringW& __cordl_internal_get_Metadata() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Value() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Value() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_ChildStatistics(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*  value) ;

constexpr void __cordl_internal_set_Metadata(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Value(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840720, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityStatisticValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityStatisticValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityStatisticValue(EntityStatisticValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityStatisticValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityStatisticValue(EntityStatisticValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19565};

/// @brief Field ChildStatistics, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*  ___ChildStatistics;

/// @brief Field Metadata, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Metadata;

/// @brief Field Name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Value, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Value;

/// @brief Field Version, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Version;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticValue, ___ChildStatistics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticValue, ___Metadata) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticValue, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticValue, ___Value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityStatisticValue, ___Version) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityStatisticValue) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels

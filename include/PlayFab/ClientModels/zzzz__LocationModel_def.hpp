#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LocationModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__ContinentCode_def.hpp"
#include "PlayFab/ClientModels/zzzz__CountryCode_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocationModel)
// Forward declare root types
namespace PlayFab::ClientModels {
class LocationModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LocationModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LocationModel*, "PlayFab.ClientModels", "LocationModel");
// Dependencies PlayFab.ClientModels.ContinentCode, PlayFab.ClientModels.CountryCode, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LocationModel
class CORDL_TYPE LocationModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field City, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_City, put=__cordl_internal_set_City)) ::StringW  City;

/// @brief Field ContinentCode, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_ContinentCode, put=__cordl_internal_set_ContinentCode)) ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode>  ContinentCode;

/// @brief Field CountryCode, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_CountryCode, put=__cordl_internal_set_CountryCode)) ::System::Nullable_1<::PlayFab::ClientModels::CountryCode>  CountryCode;

/// @brief Field Latitude, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_Latitude, put=__cordl_internal_set_Latitude)) ::System::Nullable_1<double_t>  Latitude;

/// @brief Field Longitude, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_Longitude, put=__cordl_internal_set_Longitude)) ::System::Nullable_1<double_t>  Longitude;

static inline ::PlayFab::ClientModels::LocationModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_City() const;

constexpr ::StringW& __cordl_internal_get_City() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode> const& __cordl_internal_get_ContinentCode() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode>& __cordl_internal_get_ContinentCode() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::CountryCode> const& __cordl_internal_get_CountryCode() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::CountryCode>& __cordl_internal_get_CountryCode() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_Latitude() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_Latitude() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_Longitude() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_Longitude() ;

constexpr void __cordl_internal_set_City(::StringW  value) ;

constexpr void __cordl_internal_set_ContinentCode(::System::Nullable_1<::PlayFab::ClientModels::ContinentCode>  value) ;

constexpr void __cordl_internal_set_CountryCode(::System::Nullable_1<::PlayFab::ClientModels::CountryCode>  value) ;

constexpr void __cordl_internal_set_Latitude(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_Longitude(::System::Nullable_1<double_t>  value) ;

/// @brief Method .ctor, addr 0xa84dff8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocationModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocationModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocationModel(LocationModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocationModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocationModel(LocationModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20142};

/// @brief Field City, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___City;

/// @brief Field ContinentCode, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::ContinentCode>  ___ContinentCode;

/// @brief Field CountryCode, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::CountryCode>  ___CountryCode;

/// @brief Field Latitude, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___Latitude;

/// @brief Field Longitude, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___Longitude;

/// @brief Size padding 0x48 - 0x58 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LocationModel, ___City) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LocationModel, ___ContinentCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LocationModel, ___CountryCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LocationModel, ___Latitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LocationModel, ___Longitude) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LocationModel) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

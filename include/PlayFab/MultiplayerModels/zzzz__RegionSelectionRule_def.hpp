#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RegionSelectionRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RegionSelectionRule)
namespace PlayFab::MultiplayerModels {
class CustomRegionSelectionRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class LinearRegionSelectionRuleExpansion;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class RegionSelectionRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::RegionSelectionRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::RegionSelectionRule*, "PlayFab.MultiplayerModels", "RegionSelectionRule");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.RegionSelectionRule
class CORDL_TYPE RegionSelectionRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CustomExpansion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomExpansion, put=__cordl_internal_set_CustomExpansion)) ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*  CustomExpansion;

/// @brief Field LinearExpansion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LinearExpansion, put=__cordl_internal_set_LinearExpansion)) ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*  LinearExpansion;

/// @brief Field MaxLatency, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxLatency, put=__cordl_internal_set_MaxLatency)) uint32_t  MaxLatency;

/// @brief Field Name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Path, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Path, put=__cordl_internal_set_Path)) ::StringW  Path;

/// @brief Field SecondsUntilOptional, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

/// @brief Field Weight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) double_t  Weight;

static inline ::PlayFab::MultiplayerModels::RegionSelectionRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion* const& __cordl_internal_get_CustomExpansion() const;

constexpr ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*& __cordl_internal_get_CustomExpansion() ;

constexpr ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion* const& __cordl_internal_get_LinearExpansion() const;

constexpr ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*& __cordl_internal_get_LinearExpansion() ;

constexpr uint32_t const& __cordl_internal_get_MaxLatency() const;

constexpr uint32_t& __cordl_internal_get_MaxLatency() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_Path() const;

constexpr ::StringW& __cordl_internal_get_Path() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr double_t const& __cordl_internal_get_Weight() const;

constexpr double_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*  value) ;

constexpr void __cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*  value) ;

constexpr void __cordl_internal_set_MaxLatency(uint32_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Path(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Weight(double_t  value) ;

/// @brief Method .ctor, addr 0xa840bc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegionSelectionRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegionSelectionRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegionSelectionRule(RegionSelectionRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegionSelectionRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegionSelectionRule(RegionSelectionRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19724};

/// @brief Field CustomExpansion, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*  ___CustomExpansion;

/// @brief Field LinearExpansion, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*  ___LinearExpansion;

/// @brief Field MaxLatency, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___MaxLatency;

/// @brief Field Name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Path, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Path;

/// @brief Field SecondsUntilOptional, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Field Weight, offset: 0x48, size: 0x8, def value: None
 double_t  ___Weight;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___CustomExpansion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___LinearExpansion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___MaxLatency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___Path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___SecondsUntilOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RegionSelectionRule, ___Weight) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::RegionSelectionRule) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

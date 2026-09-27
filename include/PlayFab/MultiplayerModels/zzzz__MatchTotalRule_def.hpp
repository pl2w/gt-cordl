#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchTotalRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchTotalRule)
namespace PlayFab::MultiplayerModels {
class MatchTotalRuleExpansion;
}
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchTotalRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchTotalRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchTotalRule*, "PlayFab.MultiplayerModels", "MatchTotalRule");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchTotalRule
class CORDL_TYPE MatchTotalRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Attribute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attribute, put=__cordl_internal_set_Attribute)) ::PlayFab::MultiplayerModels::QueueRuleAttribute*  Attribute;

/// @brief Field Expansion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expansion, put=__cordl_internal_set_Expansion)) ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*  Expansion;

/// @brief Field Max, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Max, put=__cordl_internal_set_Max)) double_t  Max;

/// @brief Field Min, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Min, put=__cordl_internal_set_Min)) double_t  Min;

/// @brief Field Name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

/// @brief Field Weight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) double_t  Weight;

static inline ::PlayFab::MultiplayerModels::MatchTotalRule* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& __cordl_internal_get_Attribute() const;

constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& __cordl_internal_get_Attribute() ;

constexpr ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion* const& __cordl_internal_get_Expansion() const;

constexpr ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*& __cordl_internal_get_Expansion() ;

constexpr double_t const& __cordl_internal_get_Max() const;

constexpr double_t& __cordl_internal_get_Max() ;

constexpr double_t const& __cordl_internal_get_Min() const;

constexpr double_t& __cordl_internal_get_Min() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr double_t const& __cordl_internal_get_Weight() const;

constexpr double_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value) ;

constexpr void __cordl_internal_set_Expansion(::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*  value) ;

constexpr void __cordl_internal_set_Max(double_t  value) ;

constexpr void __cordl_internal_set_Min(double_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_Weight(double_t  value) ;

/// @brief Method .ctor, addr 0xa840b78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchTotalRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchTotalRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchTotalRule(MatchTotalRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchTotalRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchTotalRule(MatchTotalRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19713};

/// @brief Field Attribute, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::QueueRuleAttribute*  ___Attribute;

/// @brief Field Expansion, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*  ___Expansion;

/// @brief Field Max, offset: 0x20, size: 0x8, def value: None
 double_t  ___Max;

/// @brief Field Min, offset: 0x28, size: 0x8, def value: None
 double_t  ___Min;

/// @brief Field Name, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Field Weight, offset: 0x48, size: 0x8, def value: None
 double_t  ___Weight;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Expansion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Max) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Min) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___SecondsUntilOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchTotalRule, ___Weight) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchTotalRule) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

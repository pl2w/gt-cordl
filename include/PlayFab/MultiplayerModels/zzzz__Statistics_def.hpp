#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Statistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Statistics)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class Statistics;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::Statistics*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::Statistics*, "PlayFab.MultiplayerModels", "Statistics");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.Statistics
class CORDL_TYPE Statistics : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Average, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Average, put=__cordl_internal_set_Average)) double_t  Average;

/// @brief Field Percentile50, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Percentile50, put=__cordl_internal_set_Percentile50)) double_t  Percentile50;

/// @brief Field Percentile90, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Percentile90, put=__cordl_internal_set_Percentile90)) double_t  Percentile90;

/// @brief Field Percentile99, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Percentile99, put=__cordl_internal_set_Percentile99)) double_t  Percentile99;

static inline ::PlayFab::MultiplayerModels::Statistics* New_ctor() ;

constexpr double_t const& __cordl_internal_get_Average() const;

constexpr double_t& __cordl_internal_get_Average() ;

constexpr double_t const& __cordl_internal_get_Percentile50() const;

constexpr double_t& __cordl_internal_get_Percentile50() ;

constexpr double_t const& __cordl_internal_get_Percentile90() const;

constexpr double_t& __cordl_internal_get_Percentile90() ;

constexpr double_t const& __cordl_internal_get_Percentile99() const;

constexpr double_t& __cordl_internal_get_Percentile99() ;

constexpr void __cordl_internal_set_Average(double_t  value) ;

constexpr void __cordl_internal_set_Percentile50(double_t  value) ;

constexpr void __cordl_internal_set_Percentile90(double_t  value) ;

constexpr void __cordl_internal_set_Percentile99(double_t  value) ;

/// @brief Method .ctor, addr 0xa840c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Statistics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Statistics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Statistics(Statistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Statistics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Statistics(Statistics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19737};

/// @brief Field Average, offset: 0x10, size: 0x8, def value: None
 double_t  ___Average;

/// @brief Field Percentile50, offset: 0x18, size: 0x8, def value: None
 double_t  ___Percentile50;

/// @brief Field Percentile90, offset: 0x20, size: 0x8, def value: None
 double_t  ___Percentile90;

/// @brief Field Percentile99, offset: 0x28, size: 0x8, def value: None
 double_t  ___Percentile99;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::Statistics, ___Average) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Statistics, ___Percentile50) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Statistics, ___Percentile90) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Statistics, ___Percentile99) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::Statistics) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

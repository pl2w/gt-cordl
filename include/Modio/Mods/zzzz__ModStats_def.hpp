#pragma once
// IWYU pragma private; include "Modio/Mods/ModStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModRating_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModStats)
namespace Modio::API::SchemaDefinitions {
struct ModStatsObject;
}
namespace Modio::Mods {
struct ModRating;
}
// Forward declare root types
namespace Modio::Mods {
class ModStats;
}
// Write type traits
MARK_REF_T(::Modio::Mods::ModStats*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModStats*, "Modio.Mods", "ModStats");
// Dependencies Modio.Mods.ModRating, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModStats
class CORDL_TYPE ModStats : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Downloads, put=set_Downloads)) int64_t  Downloads;

 __declspec(property(get=get_RatingsNegative, put=set_RatingsNegative)) int64_t  RatingsNegative;

 __declspec(property(get=get_RatingsPercent, put=set_RatingsPercent)) int64_t  RatingsPercent;

 __declspec(property(get=get_RatingsPositive, put=set_RatingsPositive)) int64_t  RatingsPositive;

 __declspec(property(get=get_Subscribers, put=set_Subscribers)) int64_t  Subscribers;

/// @brief Field <Downloads>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Downloads_k__BackingField, put=__cordl_internal_set__Downloads_k__BackingField)) int64_t  _Downloads_k__BackingField;

/// @brief Field <RatingsNegative>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__RatingsNegative_k__BackingField, put=__cordl_internal_set__RatingsNegative_k__BackingField)) int64_t  _RatingsNegative_k__BackingField;

/// @brief Field <RatingsPercent>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__RatingsPercent_k__BackingField, put=__cordl_internal_set__RatingsPercent_k__BackingField)) int64_t  _RatingsPercent_k__BackingField;

/// @brief Field <RatingsPositive>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RatingsPositive_k__BackingField, put=__cordl_internal_set__RatingsPositive_k__BackingField)) int64_t  _RatingsPositive_k__BackingField;

/// @brief Field <Subscribers>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Subscribers_k__BackingField, put=__cordl_internal_set__Subscribers_k__BackingField)) int64_t  _Subscribers_k__BackingField;

/// @brief Field _previousRating, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousRating, put=__cordl_internal_set__previousRating)) ::Modio::Mods::ModRating  _previousRating;

static inline ::Modio::Mods::ModStats* New_ctor(::Modio::API::SchemaDefinitions::ModStatsObject  statsObject, ::Modio::Mods::ModRating  previousRating) ;

/// @brief Method UpdateEstimateFromLocalRatingChange, addr 0xa02a4f8, size 0x84, virtual false, abstract: false, final false
inline void UpdateEstimateFromLocalRatingChange(::Modio::Mods::ModRating  rating) ;

/// @brief Method UpdatePreviousRating, addr 0xa03188c, size 0x8, virtual false, abstract: false, final false
inline void UpdatePreviousRating(::Modio::Mods::ModRating  rating) ;

constexpr int64_t const& __cordl_internal_get__Downloads_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Downloads_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__RatingsNegative_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__RatingsNegative_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__RatingsPercent_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__RatingsPercent_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__RatingsPositive_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__RatingsPositive_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Subscribers_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Subscribers_k__BackingField() ;

constexpr ::Modio::Mods::ModRating const& __cordl_internal_get__previousRating() const;

constexpr ::Modio::Mods::ModRating& __cordl_internal_get__previousRating() ;

constexpr void __cordl_internal_set__Downloads_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__RatingsNegative_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__RatingsPercent_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__RatingsPositive_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Subscribers_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__previousRating(::Modio::Mods::ModRating  value) ;

/// @brief Method .ctor, addr 0xa0290b0, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::ModStatsObject  statsObject, ::Modio::Mods::ModRating  previousRating) ;

/// [CompilerGenerated]
/// @brief Method get_Downloads, addr 0xa03184c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Downloads() ;

/// [CompilerGenerated]
/// @brief Method get_RatingsNegative, addr 0xa03186c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_RatingsNegative() ;

/// [CompilerGenerated]
/// @brief Method get_RatingsPercent, addr 0xa03187c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_RatingsPercent() ;

/// [CompilerGenerated]
/// @brief Method get_RatingsPositive, addr 0xa03185c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_RatingsPositive() ;

/// [CompilerGenerated]
/// @brief Method get_Subscribers, addr 0xa03183c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Subscribers() ;

/// [CompilerGenerated]
/// @brief Method set_Downloads, addr 0xa031854, size 0x8, virtual false, abstract: false, final false
inline void set_Downloads(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RatingsNegative, addr 0xa031874, size 0x8, virtual false, abstract: false, final false
inline void set_RatingsNegative(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RatingsPercent, addr 0xa031884, size 0x8, virtual false, abstract: false, final false
inline void set_RatingsPercent(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RatingsPositive, addr 0xa031864, size 0x8, virtual false, abstract: false, final false
inline void set_RatingsPositive(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Subscribers, addr 0xa031844, size 0x8, virtual false, abstract: false, final false
inline void set_Subscribers(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModStats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModStats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModStats(ModStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModStats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModStats(ModStats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17602};

/// [CompilerGenerated]
/// @brief Field <Subscribers>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____Subscribers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Downloads>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____Downloads_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RatingsPositive>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____RatingsPositive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RatingsNegative>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____RatingsNegative_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RatingsPercent>k__BackingField, offset: 0x30, size: 0x8, def value: None
 int64_t  ____RatingsPercent_k__BackingField;

/// @brief Field _previousRating, offset: 0x38, size: 0x4, def value: None
 ::Modio::Mods::ModRating  ____previousRating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModStats, ____Subscribers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModStats, ____Downloads_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModStats, ____RatingsPositive_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModStats, ____RatingsNegative_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModStats, ____RatingsPercent_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModStats, ____previousRating) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModStats) == 0x40, "Size mismatch!");

} // namespace end def Modio::Mods

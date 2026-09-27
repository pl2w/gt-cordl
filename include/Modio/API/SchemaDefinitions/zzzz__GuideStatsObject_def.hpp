#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideStatsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuideStatsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GuideStatsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GuideStatsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GuideStatsObject, "Modio.API.SchemaDefinitions", "GuideStatsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GuideStatsObject
struct CORDL_TYPE GuideStatsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecf9c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int64_t  guide_id, int64_t  visits_today, int64_t  visits_total, int64_t  comments_total) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuideStatsObject() ;

// Ctor Parameters [CppParam { name: "GuideId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VisitsToday", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VisitsTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommentsTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GuideStatsObject(int64_t  GuideId, int64_t  VisitsToday, int64_t  VisitsTotal, int64_t  CommentsTotal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field GuideId, offset: 0x0, size: 0x8, def value: None
 int64_t  GuideId;

/// @brief Field VisitsToday, offset: 0x8, size: 0x8, def value: None
 int64_t  VisitsToday;

/// @brief Field VisitsTotal, offset: 0x10, size: 0x8, def value: None
 int64_t  VisitsTotal;

/// @brief Field CommentsTotal, offset: 0x18, size: 0x8, def value: None
 int64_t  CommentsTotal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideStatsObject, GuideId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideStatsObject, VisitsToday) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideStatsObject, VisitsTotal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideStatsObject, CommentsTotal) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GuideStatsObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions

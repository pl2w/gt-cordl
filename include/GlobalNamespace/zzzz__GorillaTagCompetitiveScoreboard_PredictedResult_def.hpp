#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveScoreboard_PredictedResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveScoreboard_PredictedResult)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagCompetitiveScoreboard_PredictedResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult, "", "GorillaTagCompetitiveScoreboard/PredictedResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagCompetitiveScoreboard/PredictedResult
struct CORDL_TYPE GorillaTagCompetitiveScoreboard_PredictedResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaTagCompetitiveScoreboard_PredictedResult_Unwrapped
enum struct __GorillaTagCompetitiveScoreboard_PredictedResult_Unwrapped : int32_t {
__E_Great = static_cast<int32_t>(0x0),
__E_Good = static_cast<int32_t>(0x1),
__E_Even = static_cast<int32_t>(0x2),
__E_Bad = static_cast<int32_t>(0x3),
__E_Poor = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaTagCompetitiveScoreboard_PredictedResult_Unwrapped () const noexcept {
return static_cast<__GorillaTagCompetitiveScoreboard_PredictedResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveScoreboard_PredictedResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagCompetitiveScoreboard_PredictedResult(int32_t  value__) noexcept;

/// @brief Field Bad value: I32(3)
static ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult const Bad;

/// @brief Field Even value: I32(2)
static ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult const Even;

/// @brief Field Good value: I32(1)
static ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult const Good;

/// @brief Field Great value: I32(0)
static ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult const Great;

/// @brief Field Poor value: I32(4)
static ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult const Poor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/BaseStyleMatcher_MatchContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseStyleMatcher_MatchContext)
// Forward declare root types
namespace GlobalNamespace {
struct BaseStyleMatcher_MatchContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseStyleMatcher_MatchContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseStyleMatcher_MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext
struct CORDL_TYPE BaseStyleMatcher_MatchContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseStyleMatcher_MatchContext() ;

// Ctor Parameters [CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "matchedVariableCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BaseStyleMatcher_MatchContext(int32_t  valueIndex, int32_t  matchedVariableCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field valueIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  valueIndex;

/// @brief Field matchedVariableCount, offset: 0x4, size: 0x4, def value: None
 int32_t  matchedVariableCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseStyleMatcher_MatchContext, valueIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseStyleMatcher_MatchContext, matchedVariableCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseStyleMatcher_MatchContext) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

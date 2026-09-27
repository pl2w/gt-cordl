#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_RecordHolder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerScore_RecordHolder_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RankedMultiplayerScore_RecordHolder_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1, "", "RankedMultiplayerScore/RecordHolder`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: RankedMultiplayerScore/RecordHolder`1<T>
struct CORDL_TYPE RankedMultiplayerScore_RecordHolder_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerScore_RecordHolder_1() ;

// Ctor Parameters [CppParam { name: "PlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr RankedMultiplayerScore_RecordHolder_1(int32_t  PlayerId, T  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PlayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerId;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 T  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

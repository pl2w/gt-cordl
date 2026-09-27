#pragma once
// IWYU pragma private; include "System/String_ProbabilisticMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(String_ProbabilisticMap)
// Forward declare root types
namespace GlobalNamespace {
struct String_ProbabilisticMap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::String_ProbabilisticMap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::String_ProbabilisticMap, "System", "String/ProbabilisticMap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.String/ProbabilisticMap
#pragma pack(push, 0)
struct CORDL_TYPE String_ProbabilisticMap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr String_ProbabilisticMap() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Size padding 0x20 - 0x0 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::String_ProbabilisticMap) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

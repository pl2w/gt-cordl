#pragma once
// IWYU pragma private; include "System/Number_NumberBuffer_DigitsAndNullTerminator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Number_NumberBuffer_DigitsAndNullTerminator)
// Forward declare root types
namespace GlobalNamespace {
struct NumberBuffer_Number_DigitsAndNullTerminator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NumberBuffer_Number_DigitsAndNullTerminator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NumberBuffer_Number_DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/NumberBuffer/DigitsAndNullTerminator
#pragma pack(push, 0)
struct CORDL_TYPE NumberBuffer_Number_DigitsAndNullTerminator {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NumberBuffer_Number_DigitsAndNullTerminator() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x66};

/// @brief Size padding 0x66 - 0x0 = 0x66, packed as 0x66
 uint8_t  _cordl_size_padding[0x66];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NumberBuffer_Number_DigitsAndNullTerminator) == 0x66, "Size mismatch!");

} // namespace end def GlobalNamespace

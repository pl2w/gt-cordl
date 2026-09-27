#pragma once
// IWYU pragma private; include "VYaml/Serialization/ScalarStyleScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ScalarStyleScope)
// Forward declare root types
namespace VYaml::Serialization {
struct ScalarStyleScope;
}
// Write type traits
MARK_VAL_T(::VYaml::Serialization::ScalarStyleScope);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::ScalarStyleScope, "VYaml.Serialization", "ScalarStyleScope");
// [IsReadOnly]
// Dependencies 
namespace VYaml::Serialization {
// Is value type: true
// CS Name: VYaml.Serialization.ScalarStyleScope
#pragma pack(push, 0)
struct CORDL_TYPE ScalarStyleScope {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScalarStyleScope() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::ScalarStyleScope) == 0x1, "Size mismatch!");

} // namespace end def VYaml::Serialization

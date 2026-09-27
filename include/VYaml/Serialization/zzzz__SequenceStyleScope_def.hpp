#pragma once
// IWYU pragma private; include "VYaml/Serialization/SequenceStyleScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SequenceStyleScope)
// Forward declare root types
namespace VYaml::Serialization {
struct SequenceStyleScope;
}
// Write type traits
MARK_VAL_T(::VYaml::Serialization::SequenceStyleScope);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::SequenceStyleScope, "VYaml.Serialization", "SequenceStyleScope");
// [IsReadOnly]
// Dependencies 
namespace VYaml::Serialization {
// Is value type: true
// CS Name: VYaml.Serialization.SequenceStyleScope
#pragma pack(push, 0)
struct CORDL_TYPE SequenceStyleScope {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SequenceStyleScope() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28986};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::SequenceStyleScope) == 0x1, "Size mismatch!");

} // namespace end def VYaml::Serialization

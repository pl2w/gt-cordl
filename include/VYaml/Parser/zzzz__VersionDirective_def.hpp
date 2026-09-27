#pragma once
// IWYU pragma private; include "VYaml/Parser/VersionDirective.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VersionDirective)
namespace VYaml::Parser {
class ITokenContent;
}
// Forward declare root types
namespace VYaml::Parser {
struct VersionDirective;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::VersionDirective);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::VersionDirective, "VYaml.Parser", "VersionDirective");
// Dependencies 
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.VersionDirective
struct CORDL_TYPE VersionDirective {
public:
// Declarations
/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr operator  ::VYaml::Parser::ITokenContent*() ;

/// @brief Method .ctor, addr 0xb962448, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  major, int32_t  minor) ;

/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* i___VYaml__Parser__ITokenContent() ;

// Ctor Parameters []
// @brief default ctor
constexpr VersionDirective() ;

// Ctor Parameters [CppParam { name: "Major", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Minor", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VersionDirective(int32_t  Major, int32_t  Minor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29020};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Major, offset: 0x0, size: 0x4, def value: None
 int32_t  Major;

/// @brief Field Minor, offset: 0x4, size: 0x4, def value: None
 int32_t  Minor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::VersionDirective, Major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::VersionDirective, Minor) == 0x4, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::VersionDirective) == 0x8, "Size mismatch!");

} // namespace end def VYaml::Parser

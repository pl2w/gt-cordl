#pragma once
// IWYU pragma private; include "VYaml/Parser/Marker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Marker)
// Forward declare root types
namespace VYaml::Parser {
struct Marker;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::Marker);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Marker, "VYaml.Parser", "Marker");
// Dependencies 
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.Marker
struct CORDL_TYPE Marker {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method ToString, addr 0xb95bce4, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb95bcd8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  position, int32_t  line, int32_t  col) ;

// Ctor Parameters []
// @brief default ctor
constexpr Marker() ;

// Ctor Parameters [CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Line", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Col", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Marker(int32_t  Position, int32_t  Line, int32_t  Col) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Position, offset: 0x0, size: 0x4, def value: None
 int32_t  Position;

/// @brief Field Line, offset: 0x4, size: 0x4, def value: None
 int32_t  Line;

/// @brief Field Col, offset: 0x8, size: 0x4, def value: None
 int32_t  Col;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Marker, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Marker, Line) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Marker, Col) == 0x8, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Marker) == 0xc, "Size mismatch!");

} // namespace end def VYaml::Parser

#pragma once
// IWYU pragma private; include "VYaml/Internal/EmitStringInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmitStringInfo)
namespace VYaml::Emitter {
struct ScalarStyle;
}
// Forward declare root types
namespace VYaml::Internal {
struct EmitStringInfo;
}
// Write type traits
MARK_VAL_T(::VYaml::Internal::EmitStringInfo);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::EmitStringInfo, "VYaml.Internal", "EmitStringInfo");
// [IsReadOnly]
// Dependencies 
namespace VYaml::Internal {
// Is value type: true
// CS Name: VYaml.Internal.EmitStringInfo
struct CORDL_TYPE EmitStringInfo {
public:
// Declarations
/// @brief Method SuggestScalarStyle, addr 0xb9665f4, size 0x28, virtual false, abstract: false, final false
inline ::VYaml::Emitter::ScalarStyle SuggestScalarStyle() ;

/// @brief Method .ctor, addr 0xb9665e4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  lines, bool  needsQuotes, bool  isReservedWord) ;

// Ctor Parameters []
// @brief default ctor
constexpr EmitStringInfo() ;

// Ctor Parameters [CppParam { name: "Lines", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NeedsQuotes", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsReservedWord", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EmitStringInfo(int32_t  Lines, bool  NeedsQuotes, bool  IsReservedWord) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Lines, offset: 0x0, size: 0x4, def value: None
 int32_t  Lines;

/// @brief Field NeedsQuotes, offset: 0x4, size: 0x1, def value: None
 bool  NeedsQuotes;

/// @brief Field IsReservedWord, offset: 0x5, size: 0x1, def value: None
 bool  IsReservedWord;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Internal::EmitStringInfo, Lines) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Internal::EmitStringInfo, NeedsQuotes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VYaml::Internal::EmitStringInfo, IsReservedWord) == 0x5, "Offset mismatch!");

static_assert(sizeof(::VYaml::Internal::EmitStringInfo) == 0x8, "Size mismatch!");

} // namespace end def VYaml::Internal

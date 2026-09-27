#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker_FacetsCompiler_Map.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FacetsChecker_FacetsCompiler_Map)
// Forward declare root types
namespace GlobalNamespace {
struct FacetsCompiler_FacetsChecker_Map;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FacetsCompiler_FacetsChecker_Map);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FacetsCompiler_FacetsChecker_Map, "System.Xml.Schema", "FacetsChecker/FacetsCompiler/Map");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct CORDL_TYPE FacetsCompiler_FacetsChecker_Map {
public:
// Declarations
/// @brief Method .ctor, addr 0xaaddb38, size 0x10, virtual false, abstract: false, final false
inline void _ctor(char16_t  m, ::StringW  r) ;

// Ctor Parameters []
// @brief default ctor
constexpr FacetsCompiler_FacetsChecker_Map() ;

// Ctor Parameters [CppParam { name: "match", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr FacetsCompiler_FacetsChecker_Map(char16_t  match, ::StringW  replacement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field match, offset: 0x0, size: 0x2, def value: None
 char16_t  match;

/// @brief Field replacement, offset: 0x8, size: 0x8, def value: None
 ::StringW  replacement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FacetsCompiler_FacetsChecker_Map, match) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FacetsCompiler_FacetsChecker_Map, replacement) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FacetsCompiler_FacetsChecker_Map) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

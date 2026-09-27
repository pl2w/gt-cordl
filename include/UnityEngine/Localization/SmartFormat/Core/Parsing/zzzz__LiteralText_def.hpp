#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/LiteralText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LiteralText)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class LiteralText;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "LiteralText");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.LiteralText
class CORDL_TYPE LiteralText : public ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem {
public:
// Declarations
/// @brief Method ConvertCharacterLiteralsToUnicode, addr 0xb045da0, size 0x22c, virtual false, abstract: false, final false
inline ::StringW ConvertCharacterLiteralsToUnicode() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* New_ctor() ;

/// @brief Method ToString, addr 0xb045d80, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb02e0b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiteralText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiteralText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiteralText(LiteralText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiteralText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiteralText(LiteralText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing

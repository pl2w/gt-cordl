#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_Tag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser_Tag)
namespace UnityEngine::TextCore {
class RichTextTagParser_TagValue;
}
// Forward declare root types
namespace GlobalNamespace {
struct RichTextTagParser_Tag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RichTextTagParser_Tag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichTextTagParser_Tag, "UnityEngine.TextCore", "RichTextTagParser/Tag");
// Dependencies UnityEngine.TextCore.RichTextTagParser::TagType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/Tag
struct CORDL_TYPE RichTextTagParser_Tag {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_Tag() ;

// Ctor Parameters [CppParam { name: "tagType", ty: "::GlobalNamespace::RichTextTagParser_TagType", modifiers: "", def_value: None, comment: None }, CppParam { name: "isClosing", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: None, comment: None }]
constexpr RichTextTagParser_Tag(::GlobalNamespace::RichTextTagParser_TagType  tagType, bool  isClosing, int32_t  start, int32_t  end, ::UnityEngine::TextCore::RichTextTagParser_TagValue*  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field tagType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::RichTextTagParser_TagType  tagType;

/// @brief Field isClosing, offset: 0x4, size: 0x1, def value: None
 bool  isClosing;

/// @brief Field start, offset: 0x8, size: 0x4, def value: None
 int32_t  start;

/// @brief Field end, offset: 0xc, size: 0x4, def value: None
 int32_t  end;

/// [Nullable(2)]
/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::TextCore::RichTextTagParser_TagValue*  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Tag, tagType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Tag, isClosing) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Tag, start) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Tag, end) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Tag, value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichTextTagParser_Tag) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

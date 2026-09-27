#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_Segment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser_Segment)
namespace GlobalNamespace {
struct RichTextTagParser_Tag;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct RichTextTagParser_Segment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RichTextTagParser_Segment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichTextTagParser_Segment, "UnityEngine.TextCore", "RichTextTagParser/Segment");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/Segment
struct CORDL_TYPE RichTextTagParser_Segment {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_Segment() ;

// Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RichTextTagParser_Segment(::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  tags, int32_t  start, int32_t  end) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Nullable(2)]
/// @brief Field tags, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  tags;

/// @brief Field start, offset: 0x8, size: 0x4, def value: None
 int32_t  start;

/// @brief Field end, offset: 0xc, size: 0x4, def value: None
 int32_t  end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Segment, tags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Segment, start) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RichTextTagParser_Segment, end) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichTextTagParser_Segment) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

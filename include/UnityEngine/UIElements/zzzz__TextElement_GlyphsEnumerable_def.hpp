#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextElement_GlyphsEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElement_GlyphsEnumerable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextElement_GlyphsEnumerable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextElement_GlyphsEnumerable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextElement_GlyphsEnumerable, "UnityEngine.UIElements", "TextElement/GlyphsEnumerable");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextElement/GlyphsEnumerable
struct CORDL_TYPE TextElement_GlyphsEnumerable {
public:
// Declarations
/// @brief Method ComputeCount, addr 0xb7a1e4c, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ComputeCount(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  verts) ;

/// @brief Method .ctor, addr 0xb7a1e0c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::TextElement*  te, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  vertices) ;

/// @brief Method .ctor, addr 0xb7a1f2c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::TextElement*  te, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  vertices, ::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>  meshInfos) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextElement_GlyphsEnumerable() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Vertices", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TextElement", ty: "::UnityEngine::UIElements::TextElement*", modifiers: "", def_value: None, comment: None }]
constexpr TextElement_GlyphsEnumerable(int32_t  Count, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  m_Vertices, ::UnityEngine::UIElements::TextElement*  m_TextElement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field m_Vertices, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  m_Vertices;

/// @brief Field m_TextElement, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextElement*  m_TextElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextElement_GlyphsEnumerable, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextElement_GlyphsEnumerable, m_Vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextElement_GlyphsEnumerable, m_TextElement) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextElement_GlyphsEnumerable) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

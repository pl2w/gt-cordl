#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RenderedText_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderedText_Enumerator)
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderedText_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderedText_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderedText_Enumerator, "UnityEngine.TextCore.Text", "RenderedText/Enumerator");
// Dependencies UnityEngine.TextCore.Text.RenderedText
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.RenderedText/Enumerator
struct CORDL_TYPE RenderedText_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) char16_t  Current;

/// @brief Method MoveNext, addr 0xb6ebf54, size 0xe4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0xb6ebf2c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::TextCore::Text::RenderedText>  source) ;

/// @brief Method get_Current, addr 0xb6ec288, size 0x8, virtual false, abstract: false, final false
inline char16_t get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderedText_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Source", ty: "::UnityEngine::TextCore::Text::RenderedText", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Stage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StageIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Current", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderedText_Enumerator(::UnityEngine::TextCore::Text::RenderedText  m_Source, int32_t  m_Stage, int32_t  m_StageIndex, char16_t  m_Current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26275};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Source, offset: 0x0, size: 0x20, def value: None
 ::UnityEngine::TextCore::Text::RenderedText  m_Source;

/// @brief Field m_Stage, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Stage;

/// @brief Field m_StageIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  m_StageIndex;

/// @brief Field m_Current, offset: 0x28, size: 0x2, def value: None
 char16_t  m_Current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderedText_Enumerator, m_Source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderedText_Enumerator, m_Stage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderedText_Enumerator, m_StageIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderedText_Enumerator, m_Current) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderedText_Enumerator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

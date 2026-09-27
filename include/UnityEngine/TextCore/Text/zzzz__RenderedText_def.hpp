#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RenderedText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderedText)
namespace GlobalNamespace {
struct RenderedText_Enumerator;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::RenderedText);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::RenderedText, "UnityEngine.TextCore.Text", "RenderedText");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule", "UnityEditor.GraphToolsFoundationModule" })]
// [IsReadOnly]
// Dependencies 
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.RenderedText
struct CORDL_TYPE RenderedText {
public:
// Declarations
using Enumerator = ::GlobalNamespace::RenderedText_Enumerator;

 __declspec(property(get=get_CharacterCount)) int32_t  CharacterCount;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>*() ;

/// @brief Method CreateString, addr 0xb6ea5ac, size 0x104, virtual false, abstract: false, final false
inline ::StringW CreateString() ;

/// @brief Method Equals, addr 0xb6ec12c, size 0xb8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb6ec038, size 0xf4, virtual true, abstract: false, final true
inline bool Equals(::StringW  other) ;

/// @brief Method Equals, addr 0xb6ea9c8, size 0x8c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::TextCore::Text::RenderedText  other) ;

/// @brief Method GetEnumerator, addr 0xb6ebefc, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::RenderedText_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0xb6ec1e4, size 0xa4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xb6ebe88, size 0x54, virtual false, abstract: false, final false
inline void _ctor(char16_t  repeat, int32_t  repeatCount, ::StringW  suffix) ;

/// @brief Method .ctor, addr 0xb6ea714, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xb6ebdac, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  value, int32_t  start, int32_t  length, ::StringW  suffix) ;

/// @brief Method .ctor, addr 0xb6ebe6c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  value, ::StringW  suffix) ;

/// @brief Method get_CharacterCount, addr 0xb6ebedc, size 0x20, virtual false, abstract: false, final false
inline int32_t get_CharacterCount() ;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>"
constexpr ::System::IEquatable_1<::UnityEngine::TextCore::Text::RenderedText>* i___System__IEquatable_1___UnityEngine__TextCore__Text__RenderedText_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderedText() ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueStart", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "suffix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "repeat", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "repeatCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderedText(::StringW  value, int32_t  valueStart, int32_t  valueLength, ::StringW  suffix, char16_t  repeat, int32_t  repeatCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field value, offset: 0x0, size: 0x8, def value: None
 ::StringW  value;

/// @brief Field valueStart, offset: 0x8, size: 0x4, def value: None
 int32_t  valueStart;

/// @brief Field valueLength, offset: 0xc, size: 0x4, def value: None
 int32_t  valueLength;

/// @brief Field suffix, offset: 0x10, size: 0x8, def value: None
 ::StringW  suffix;

/// @brief Field repeat, offset: 0x18, size: 0x2, def value: None
 char16_t  repeat;

/// @brief Field repeatCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  repeatCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, valueStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, valueLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, suffix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, repeat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::RenderedText, repeatCount) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::RenderedText) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text

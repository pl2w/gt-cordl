#pragma once
// IWYU pragma private; include "UnityEngine/TextMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextMesh)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextMesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
// [RequireComponent(typeof(UnityEngine.Transform), typeof(UnityEngine.MeshRenderer))]
// [NativeClass("TextRenderingPrivate::TextMesh")]
// [NativeHeader("Modules/TextRendering/Public/TextMesh.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(put=set_font)) ::UnityW<::UnityEngine::Font>  font;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

static inline ::UnityEngine::TextMesh* New_ctor() ;

/// @brief Method .ctor, addr 0xb6fa928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_text, addr 0xb6fa40c, size 0x12c, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method get_text_Injected, addr 0xb6fa538, size 0x44, virtual false, abstract: false, final false
static inline void get_text_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method set_color, addr 0xb6fa854, size 0x90, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0xb6fa8e4, size 0x44, virtual false, abstract: false, final false
static inline void set_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_font, addr 0xb6fa75c, size 0xb4, virtual false, abstract: false, final false
inline void set_font(::UnityEngine::Font*  value) ;

/// @brief Method set_font_Injected, addr 0xb6fa810, size 0x44, virtual false, abstract: false, final false
static inline void set_font_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_text, addr 0xb6fa57c, size 0x19c, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_text_Injected, addr 0xb6fa718, size 0x44, virtual false, abstract: false, final false
static inline void set_text_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMesh(TextMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMesh(TextMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextMesh) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

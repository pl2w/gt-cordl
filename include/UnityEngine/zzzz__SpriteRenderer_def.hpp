#pragma once
// IWYU pragma private; include "UnityEngine/SpriteRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpriteRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
// [NativeType("Runtime/Graphics/Mesh/SpriteRenderer.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpriteRenderer
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

/// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpriteChangeEvent, put=__cordl_internal_set_m_SpriteChangeEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  m_SpriteChangeEvent;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector2  size;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityW<::UnityEngine::Sprite>  sprite;

/// [RequiredByNativeCode]
/// @brief Method InvokeSpriteChanged, addr 0xb560690, size 0xf0, virtual false, abstract: false, final false
inline void InvokeSpriteChanged() ;

static inline ::UnityEngine::SpriteRenderer* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* const& __cordl_internal_get_m_SpriteChangeEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*& __cordl_internal_get_m_SpriteChangeEvent() ;

constexpr void __cordl_internal_set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  value) ;

/// @brief Method .ctor, addr 0xb560d9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_color, addr 0xb560bf0, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0xb560c84, size 0x44, virtual false, abstract: false, final false
static inline void get_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_size, addr 0xb560a5c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_size() ;

/// @brief Method get_size_Injected, addr 0xb560ae4, size 0x44, virtual false, abstract: false, final false
static inline void get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_sprite, addr 0xb560894, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_sprite() ;

/// @brief Method get_sprite_Injected, addr 0xb560928, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sprite_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_color, addr 0xb560cc8, size 0x90, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0xb560d58, size 0x44, virtual false, abstract: false, final false
static inline void set_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_size, addr 0xb560b28, size 0x84, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector2  value) ;

/// @brief Method set_size_Injected, addr 0xb560bac, size 0x44, virtual false, abstract: false, final false
static inline void set_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_sprite, addr 0xb560964, size 0xb4, virtual false, abstract: false, final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_sprite_Injected, addr 0xb560a18, size 0x44, virtual false, abstract: false, final false
static inline void set_sprite_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteRenderer(SpriteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteRenderer(SpriteRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14776};

/// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  ___m_SpriteChangeEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SpriteRenderer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine

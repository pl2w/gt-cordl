#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointableCanvasEventArgs)
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableCanvasEventArgs;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableCanvasEventArgs*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasEventArgs*, "Oculus.Interaction", "PointableCanvasEventArgs");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasEventArgs
class CORDL_TYPE PointableCanvasEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field Canvas, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Canvas, put=__cordl_internal_set_Canvas)) ::UnityW<::UnityEngine::Canvas>  Canvas;

/// @brief Field Dragging, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Dragging, put=__cordl_internal_set_Dragging)) bool  Dragging;

/// @brief Field Hovered, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hovered, put=__cordl_internal_set_Hovered)) ::UnityW<::UnityEngine::GameObject>  Hovered;

static inline ::Oculus::Interaction::PointableCanvasEventArgs* New_ctor(::UnityEngine::Canvas*  canvas, ::UnityEngine::GameObject*  hovered, bool  dragging) ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_Canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_Canvas() ;

constexpr bool const& __cordl_internal_get_Dragging() const;

constexpr bool& __cordl_internal_get_Dragging() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Hovered() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Hovered() ;

constexpr void __cordl_internal_set_Canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set_Dragging(bool  value) ;

constexpr void __cordl_internal_set_Hovered(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xa485224, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Canvas*  canvas, ::UnityEngine::GameObject*  hovered, bool  dragging) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasEventArgs(PointableCanvasEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasEventArgs(PointableCanvasEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15995};

/// @brief Field Canvas, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ___Canvas;

/// @brief Field Hovered, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Hovered;

/// @brief Field Dragging, offset: 0x20, size: 0x1, def value: None
 bool  ___Dragging;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasEventArgs, ___Canvas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasEventArgs, ___Hovered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasEventArgs, ___Dragging) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasEventArgs) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction

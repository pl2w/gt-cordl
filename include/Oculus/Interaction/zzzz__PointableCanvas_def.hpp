#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
CORDL_MODULE_EXPORT(PointableCanvas)
namespace Oculus::Interaction {
class IPointableCanvas;
}
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
class IPointable;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableCanvas;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableCanvas*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvas*, "Oculus.Interaction", "PointableCanvas");
// Dependencies Oculus.Interaction.PointableElement
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvas
class CORDL_TYPE PointableCanvas : public ::Oculus::Interaction::PointableElement {
public:
// Declarations
 __declspec(property(get=get_Canvas)) ::UnityW<::UnityEngine::Canvas>  Canvas;

/// @brief Field _canvas, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _registered, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__registered, put=__cordl_internal_set__registered)) bool  _registered;

/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IPointableCanvas"
constexpr operator  ::Oculus::Interaction::IPointableCanvas*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr operator  ::Oculus::Interaction::IPointableElement*() noexcept;

/// @brief Method InjectAllPointableCanvas, addr 0xa485098, size 0x8, virtual false, abstract: false, final false
inline void InjectAllPointableCanvas(::UnityEngine::Canvas*  canvas) ;

/// @brief Method InjectCanvas, addr 0xa4850a0, size 0x8, virtual false, abstract: false, final false
inline void InjectCanvas(::UnityEngine::Canvas*  canvas) ;

static inline ::Oculus::Interaction::PointableCanvas* New_ctor() ;

/// @brief Method OnDisable, addr 0xa485064, size 0x34, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa485034, size 0x30, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0xa484f40, size 0x1c, virtual false, abstract: false, final false
inline void Register() ;

/// @brief Method Start, addr 0xa484ea8, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unregister, addr 0xa484fb4, size 0x20, virtual false, abstract: false, final false
inline void Unregister() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__4_0, addr 0xa4850b0, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__4_0() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr bool const& __cordl_internal_get__registered() const;

constexpr bool& __cordl_internal_get__registered() ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__registered(bool  value) ;

/// @brief Method .ctor, addr 0xa4850a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Canvas, addr 0xa484ea0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Canvas> get_Canvas() ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

/// @brief Convert to "::Oculus::Interaction::IPointableCanvas"
constexpr ::Oculus::Interaction::IPointableCanvas* i___Oculus__Interaction__IPointableCanvas() noexcept;

/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* i___Oculus__Interaction__IPointableElement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvas(PointableCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvas(PointableCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15993};

/// [Tooltip("PointerEvents will be forwarded to this Unity Canvas.")]
/// [SerializeField]
/// @brief Field _canvas, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// @brief Field _registered, offset: 0x70, size: 0x1, def value: None
 bool  ____registered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvas, ____canvas) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvas, ____registered) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvas) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction

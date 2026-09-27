#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointableCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointableCanvas)
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
class IPointableCanvas;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IPointableCanvas*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IPointableCanvas*, "Oculus.Interaction", "IPointableCanvas");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IPointableCanvas
class CORDL_TYPE IPointableCanvas {
public:
// Declarations
 __declspec(property(get=get_Canvas)) ::UnityW<::UnityEngine::Canvas>  Canvas;

/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr operator  ::Oculus::Interaction::IPointableElement*() noexcept;

/// @brief Method get_Canvas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Canvas> get_Canvas() ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* i___Oculus__Interaction__IPointableElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPointableCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPointableCanvas(IPointableCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

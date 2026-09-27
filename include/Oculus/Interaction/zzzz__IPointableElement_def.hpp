#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointableElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointableElement)
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
// Forward declare root types
namespace Oculus::Interaction {
class IPointableElement;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IPointableElement*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IPointableElement*, "Oculus.Interaction", "IPointableElement");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IPointableElement
class CORDL_TYPE IPointableElement {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Method ProcessPointerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPointableElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPointableElement(IPointableElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

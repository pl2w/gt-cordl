#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ISurfacePatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISurfacePatch)
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::ISurfacePatch*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::ISurfacePatch*, "Oculus.Interaction.Surfaces", "ISurfacePatch");
// Dependencies 
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.ISurfacePatch
class CORDL_TYPE ISurfacePatch {
public:
// Declarations
 __declspec(property(get=get_BackingSurface)) ::Oculus::Interaction::Surfaces::ISurface*  BackingSurface;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method get_BackingSurface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISurfacePatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISurfacePatch(ISurfacePatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Surfaces

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/IClippedSurface_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClippedSurface_1)
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
template<typename TClipper>
class IClippedSurface_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Surfaces::IClippedSurface_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Surfaces::IClippedSurface_1, "Oculus.Interaction.Surfaces", "IClippedSurface`1");
// Dependencies 
namespace Oculus::Interaction::Surfaces {
// cpp template
template<typename TClipper>
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.IClippedSurface`1<TClipper>
class CORDL_TYPE IClippedSurface_1 {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept;

/// @brief Method GetClippers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IReadOnlyList_1<TClipper>* GetClippers() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IClippedSurface_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IClippedSurface_1(IClippedSurface_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Surfaces

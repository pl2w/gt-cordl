#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/IBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBounds)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class IBounds;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::IBounds*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::IBounds*, "Oculus.Interaction.Surfaces", "IBounds");
// Dependencies 
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.IBounds
class CORDL_TYPE IBounds {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Method get_Bounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Bounds get_Bounds() ;

// Ctor Parameters [CppParam { name: "", ty: "IBounds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBounds(IBounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Surfaces

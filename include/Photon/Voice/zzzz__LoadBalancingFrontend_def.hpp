#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingFrontend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LoadBalancingTransport_def.hpp"
CORDL_MODULE_EXPORT(LoadBalancingFrontend)
// Forward declare root types
namespace Photon::Voice {
class LoadBalancingFrontend;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LoadBalancingFrontend*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LoadBalancingFrontend*, "Photon.Voice", "LoadBalancingFrontend");
// [Obsolete("Class renamed. Use LoadBalancingTransport instead.")]
// Dependencies Photon.Voice.LoadBalancingTransport
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LoadBalancingFrontend
class CORDL_TYPE LoadBalancingFrontend : public ::Photon::Voice::LoadBalancingTransport {
public:
// Declarations
static inline ::Photon::Voice::LoadBalancingFrontend* New_ctor() ;

/// @brief Method .ctor, addr 0xa765950, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingFrontend() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingFrontend", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingFrontend(LoadBalancingFrontend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingFrontend", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingFrontend(LoadBalancingFrontend const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28871};

/// @brief Size padding 0x190 - 0x198 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::LoadBalancingFrontend) == 0x190, "Size mismatch!");

} // namespace end def Photon::Voice

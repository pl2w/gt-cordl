#pragma once
// IWYU pragma private; include "Photon/Pun/IPunInstantiateMagicCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunInstantiateMagicCallback)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPunInstantiateMagicCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPunInstantiateMagicCallback*, "Photon.Pun", "IPunInstantiateMagicCallback");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPunInstantiateMagicCallback
class CORDL_TYPE IPunInstantiateMagicCallback {
public:
// Declarations
/// @brief Method OnPhotonInstantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

// Ctor Parameters [CppParam { name: "", ty: "IPunInstantiateMagicCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPunInstantiateMagicCallback(IPunInstantiateMagicCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29698};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun

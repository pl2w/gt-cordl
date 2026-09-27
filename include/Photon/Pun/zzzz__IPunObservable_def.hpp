#pragma once
// IWYU pragma private; include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunObservable)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace Photon::Pun {
class IPunObservable;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPunObservable*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPunObservable*, "Photon.Pun", "IPunObservable");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPunObservable
class CORDL_TYPE IPunObservable {
public:
// Declarations
/// @brief Method OnPhotonSerializeView, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

// Ctor Parameters [CppParam { name: "", ty: "IPunObservable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPunObservable(IPunObservable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun

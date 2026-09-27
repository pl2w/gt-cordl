#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IConnectionCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IConnectionCallbacks)
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class IConnectionCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::IConnectionCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::IConnectionCallbacks*, "Fusion.Photon.Realtime", "IConnectionCallbacks");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.IConnectionCallbacks
class CORDL_TYPE IConnectionCallbacks {
public:
// Declarations
/// @brief Method OnConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectedToMaster() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnRegionListReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

// Ctor Parameters [CppParam { name: "", ty: "IConnectionCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConnectionCallbacks(IConnectionCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Photon::Realtime

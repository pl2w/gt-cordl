#pragma once
// IWYU pragma private; include "Photon/Realtime/IOnEventCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOnEventCallback)
namespace ExitGames::Client::Photon {
class EventData;
}
// Forward declare root types
namespace Photon::Realtime {
class IOnEventCallback;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::IOnEventCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::IOnEventCallback*, "Photon.Realtime", "IOnEventCallback");
// Dependencies 
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.IOnEventCallback
class CORDL_TYPE IOnEventCallback {
public:
// Declarations
/// @brief Method OnEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent) ;

// Ctor Parameters [CppParam { name: "", ty: "IOnEventCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOnEventCallback(IOnEventCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Realtime

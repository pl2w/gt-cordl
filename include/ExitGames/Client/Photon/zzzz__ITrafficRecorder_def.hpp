#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ITrafficRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITrafficRecorder)
namespace ExitGames::Client::Photon {
class IPhotonSocket;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ITrafficRecorder;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::ITrafficRecorder*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ITrafficRecorder*, "ExitGames.Client.Photon", "ITrafficRecorder");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.ITrafficRecorder
class CORDL_TYPE ITrafficRecorder {
public:
// Declarations
 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief Method Record, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Record(::ArrayW<uint8_t>  inBuffer, int32_t  length, bool  incoming, int16_t  peerId, ::ExitGames::Client::Photon::IPhotonSocket*  connection) ;

/// @brief Method get_Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Enabled() ;

/// @brief Method set_Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Enabled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITrafficRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITrafficRecorder(ITrafficRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ExitGames::Client::Photon

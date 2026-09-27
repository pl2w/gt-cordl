#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonLobbyCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhotonLobbyCallbacks)
namespace System {
class Action;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class PhotonLobbyCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*, "Fusion.Photon.Realtime.Async", "PhotonLobbyCallbacks");
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.PhotonLobbyCallbacks
class CORDL_TYPE PhotonLobbyCallbacks : public ::System::Object {
public:
// Declarations
/// @brief Field JoinedLobby, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinedLobby, put=__cordl_internal_set_JoinedLobby)) ::System::Action*  JoinedLobby;

static inline ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_JoinedLobby() const;

constexpr ::System::Action*& __cordl_internal_get_JoinedLobby() ;

constexpr void __cordl_internal_set_JoinedLobby(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5f6911c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonLobbyCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonLobbyCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonLobbyCallbacks(PhotonLobbyCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonLobbyCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonLobbyCallbacks(PhotonLobbyCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28120};

/// @brief Field JoinedLobby, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___JoinedLobby;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks, ___JoinedLobby) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async

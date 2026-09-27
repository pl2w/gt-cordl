#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PingMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PingMono)
namespace System::Net::Sockets {
class Socket;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class PingMono;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::PingMono*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::PingMono*, "Fusion.Photon.Realtime", "PingMono");
// Dependencies Fusion.Photon.Realtime.PhotonPing
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.PingMono
class CORDL_TYPE PingMono : public ::Fusion::Photon::Realtime::PhotonPing {
public:
// Declarations
/// @brief Field sock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sock, put=__cordl_internal_set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Method Dispose, addr 0x5f5ed54, size 0xb0, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Done, addr 0x5f5eb30, size 0x224, virtual true, abstract: false, final false
inline bool Done() ;

static inline ::Fusion::Photon::Realtime::PingMono* New_ctor() ;

/// @brief Method StartPing, addr 0x5f5e89c, size 0x294, virtual true, abstract: false, final false
inline bool StartPing(::StringW  ip) ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock() ;

constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket*  value) ;

/// @brief Method .ctor, addr 0x5f5ee04, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PingMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PingMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PingMono(PingMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingMono(PingMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28094};

/// @brief Field sock, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___sock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::PingMono, ___sock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::PingMono) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

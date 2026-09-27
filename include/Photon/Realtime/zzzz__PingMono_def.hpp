#pragma once
// IWYU pragma private; include "Photon/Realtime/PingMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PingMono)
namespace System::Net::Sockets {
class Socket;
}
// Forward declare root types
namespace Photon::Realtime {
class PingMono;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::PingMono*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::PingMono*, "Photon.Realtime", "PingMono");
// Dependencies Photon.Realtime.PhotonPing
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.PingMono
class CORDL_TYPE PingMono : public ::Photon::Realtime::PhotonPing {
public:
// Declarations
/// @brief Field sock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sock, put=__cordl_internal_set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Method Dispose, addr 0xa70a6dc, size 0xa8, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Done, addr 0xa70a4b8, size 0x224, virtual true, abstract: false, final false
inline bool Done() ;

static inline ::Photon::Realtime::PingMono* New_ctor() ;

/// @brief Method StartPing, addr 0xa70a224, size 0x294, virtual true, abstract: false, final false
inline bool StartPing(::StringW  ip) ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock() ;

constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket*  value) ;

/// @brief Method .ctor, addr 0xa70a784, size 0x54, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29891};

/// @brief Field sock, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___sock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::PingMono, ___sock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::PingMono) == 0x38, "Size mismatch!");

} // namespace end def Photon::Realtime

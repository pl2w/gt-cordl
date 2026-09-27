#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PingHttp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PingHttp)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class PingHttp;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::PingHttp*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::PingHttp*, "Fusion.Photon.Realtime", "PingHttp");
// Dependencies Fusion.Photon.Realtime.PhotonPing
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.PingHttp
class CORDL_TYPE PingHttp : public ::Fusion::Photon::Realtime::PhotonPing {
public:
// Declarations
/// @brief Field webRequest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_webRequest, put=__cordl_internal_set_webRequest)) ::UnityEngine::Networking::UnityWebRequest*  webRequest;

/// @brief Method Dispose, addr 0x5f5efc0, size 0x18, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Done, addr 0x5f5ef8c, size 0x34, virtual true, abstract: false, final false
inline bool Done() ;

static inline ::Fusion::Photon::Realtime::PingHttp* New_ctor() ;

/// @brief Method StartPing, addr 0x5f5ee58, size 0x134, virtual true, abstract: false, final false
inline bool StartPing(::StringW  address) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_webRequest() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_webRequest() ;

constexpr void __cordl_internal_set_webRequest(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5f5efd8, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PingHttp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PingHttp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PingHttp(PingHttp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingHttp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingHttp(PingHttp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28095};

/// @brief Field webRequest, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___webRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::PingHttp, ___webRequest) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::PingHttp) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

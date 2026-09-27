#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/SystemConnectionSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemConnectionSummary)
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class SystemConnectionSummary_SCSBitPos;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class SystemConnectionSummary;
}
namespace Fusion::Photon::Realtime {
class SystemConnectionSummary_SCSBitPos;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::SystemConnectionSummary*);
MARK_REF_T(::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::SystemConnectionSummary*, "Fusion.Photon.Realtime", "SystemConnectionSummary");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos*, "Fusion.Photon.Realtime", "SystemConnectionSummary/SCSBitPos");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.SystemConnectionSummary
class CORDL_TYPE SystemConnectionSummary : public ::System::Object {
public:
// Declarations
using SCSBitPos = ::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos;

/// @brief Field AppOutOfFocus, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_AppOutOfFocus, put=__cordl_internal_set_AppOutOfFocus)) bool  AppOutOfFocus;

/// @brief Field AppOutOfFocusRecent, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_AppOutOfFocusRecent, put=__cordl_internal_set_AppOutOfFocusRecent)) bool  AppOutOfFocusRecent;

/// @brief Field AppPause, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_AppPause, put=__cordl_internal_set_AppPause)) bool  AppPause;

/// @brief Field AppPauseRecent, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_AppPauseRecent, put=__cordl_internal_set_AppPauseRecent)) bool  AppPauseRecent;

/// @brief Field AppQuits, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_AppQuits, put=__cordl_internal_set_AppQuits)) bool  AppQuits;

/// @brief Field ErrorCodeFits, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ErrorCodeFits, put=__cordl_internal_set_ErrorCodeFits)) bool  ErrorCodeFits;

/// @brief Field ErrorCodeWinSock, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_ErrorCodeWinSock, put=__cordl_internal_set_ErrorCodeWinSock)) bool  ErrorCodeWinSock;

/// @brief Field NetworkReachable, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_NetworkReachable, put=__cordl_internal_set_NetworkReachable)) bool  NetworkReachable;

/// @brief Field ProtocolIdToName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ProtocolIdToName, put=setStaticF_ProtocolIdToName)) ::ArrayW<::StringW>  ProtocolIdToName;

/// @brief Field SocketErrorCode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SocketErrorCode, put=__cordl_internal_set_SocketErrorCode)) int32_t  SocketErrorCode;

/// @brief Field UsedProtocol, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsedProtocol, put=__cordl_internal_set_UsedProtocol)) uint8_t  UsedProtocol;

/// @brief Field Version, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) uint8_t  Version;

/// @brief Method GetBit, addr 0x5f67e58, size 0x10, virtual false, abstract: false, final false
static inline bool GetBit(::by_ref<int32_t>  value, int32_t  bitpos) ;

/// @brief Method GetBits, addr 0x5f67e48, size 0x10, virtual false, abstract: false, final false
static inline uint8_t GetBits(::by_ref<int32_t>  value, int32_t  bitpos, uint8_t  mask) ;

static inline ::Fusion::Photon::Realtime::SystemConnectionSummary* New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

static inline ::Fusion::Photon::Realtime::SystemConnectionSummary* New_ctor(int32_t  summary) ;

/// @brief Method SetBit, addr 0x5f67f4c, size 0x24, virtual false, abstract: false, final false
static inline void SetBit(::by_ref<int32_t>  value, bool  bitval, int32_t  bitpos) ;

/// @brief Method SetBits, addr 0x5f67f34, size 0x18, virtual false, abstract: false, final false
static inline void SetBits(::by_ref<int32_t>  value, uint8_t  bitvals, int32_t  bitpos) ;

/// @brief Method ToInt, addr 0x5f67e68, size 0xcc, virtual false, abstract: false, final false
inline int32_t ToInt() ;

/// @brief Method ToString, addr 0x5f67f70, size 0x2c8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_AppOutOfFocus() const;

constexpr bool& __cordl_internal_get_AppOutOfFocus() ;

constexpr bool const& __cordl_internal_get_AppOutOfFocusRecent() const;

constexpr bool& __cordl_internal_get_AppOutOfFocusRecent() ;

constexpr bool const& __cordl_internal_get_AppPause() const;

constexpr bool& __cordl_internal_get_AppPause() ;

constexpr bool const& __cordl_internal_get_AppPauseRecent() const;

constexpr bool& __cordl_internal_get_AppPauseRecent() ;

constexpr bool const& __cordl_internal_get_AppQuits() const;

constexpr bool& __cordl_internal_get_AppQuits() ;

constexpr bool const& __cordl_internal_get_ErrorCodeFits() const;

constexpr bool& __cordl_internal_get_ErrorCodeFits() ;

constexpr bool const& __cordl_internal_get_ErrorCodeWinSock() const;

constexpr bool& __cordl_internal_get_ErrorCodeWinSock() ;

constexpr bool const& __cordl_internal_get_NetworkReachable() const;

constexpr bool& __cordl_internal_get_NetworkReachable() ;

constexpr int32_t const& __cordl_internal_get_SocketErrorCode() const;

constexpr int32_t& __cordl_internal_get_SocketErrorCode() ;

constexpr uint8_t const& __cordl_internal_get_UsedProtocol() const;

constexpr uint8_t& __cordl_internal_get_UsedProtocol() ;

constexpr uint8_t const& __cordl_internal_get_Version() const;

constexpr uint8_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_AppOutOfFocus(bool  value) ;

constexpr void __cordl_internal_set_AppOutOfFocusRecent(bool  value) ;

constexpr void __cordl_internal_set_AppPause(bool  value) ;

constexpr void __cordl_internal_set_AppPauseRecent(bool  value) ;

constexpr void __cordl_internal_set_AppQuits(bool  value) ;

constexpr void __cordl_internal_set_ErrorCodeFits(bool  value) ;

constexpr void __cordl_internal_set_ErrorCodeWinSock(bool  value) ;

constexpr void __cordl_internal_set_NetworkReachable(bool  value) ;

constexpr void __cordl_internal_set_SocketErrorCode(int32_t  value) ;

constexpr void __cordl_internal_set_UsedProtocol(uint8_t  value) ;

constexpr void __cordl_internal_set_Version(uint8_t  value) ;

/// @brief Method .ctor, addr 0x5f67cc4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method .ctor, addr 0x5f67d90, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  summary) ;

static inline ::ArrayW<::StringW> getStaticF_ProtocolIdToName() ;

static inline void setStaticF_ProtocolIdToName(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemConnectionSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemConnectionSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemConnectionSummary(SystemConnectionSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemConnectionSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemConnectionSummary(SystemConnectionSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28110};

/// @brief Field Version, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___Version;

/// @brief Field UsedProtocol, offset: 0x11, size: 0x1, def value: None
 uint8_t  ___UsedProtocol;

/// @brief Field AppQuits, offset: 0x12, size: 0x1, def value: None
 bool  ___AppQuits;

/// @brief Field AppPause, offset: 0x13, size: 0x1, def value: None
 bool  ___AppPause;

/// @brief Field AppPauseRecent, offset: 0x14, size: 0x1, def value: None
 bool  ___AppPauseRecent;

/// @brief Field AppOutOfFocus, offset: 0x15, size: 0x1, def value: None
 bool  ___AppOutOfFocus;

/// @brief Field AppOutOfFocusRecent, offset: 0x16, size: 0x1, def value: None
 bool  ___AppOutOfFocusRecent;

/// @brief Field NetworkReachable, offset: 0x17, size: 0x1, def value: None
 bool  ___NetworkReachable;

/// @brief Field ErrorCodeFits, offset: 0x18, size: 0x1, def value: None
 bool  ___ErrorCodeFits;

/// @brief Field ErrorCodeWinSock, offset: 0x19, size: 0x1, def value: None
 bool  ___ErrorCodeWinSock;

/// @brief Field SocketErrorCode, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___SocketErrorCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___UsedProtocol) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___AppQuits) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___AppPause) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___AppPauseRecent) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___AppOutOfFocus) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___AppOutOfFocusRecent) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___NetworkReachable) == 0x17, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___ErrorCodeFits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___ErrorCodeWinSock) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SystemConnectionSummary, ___SocketErrorCode) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::SystemConnectionSummary) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.SystemConnectionSummary/SCSBitPos
class CORDL_TYPE SystemConnectionSummary_SCSBitPos : public ::System::Object {
public:
// Declarations
static inline ::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos* New_ctor() ;

/// @brief Method .ctor, addr 0x5f68454, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemConnectionSummary_SCSBitPos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemConnectionSummary_SCSBitPos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemConnectionSummary_SCSBitPos(SystemConnectionSummary_SCSBitPos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemConnectionSummary_SCSBitPos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemConnectionSummary_SCSBitPos(SystemConnectionSummary_SCSBitPos const& ) = delete;

/// @brief Field AppOutOfFocus offset 0xffffffff size 0x4
static constexpr int32_t  AppOutOfFocus{static_cast<int32_t>(0x14)};

/// @brief Field AppOutOfFocusRecent offset 0xffffffff size 0x4
static constexpr int32_t  AppOutOfFocusRecent{static_cast<int32_t>(0x13)};

/// @brief Field AppPause offset 0xffffffff size 0x4
static constexpr int32_t  AppPause{static_cast<int32_t>(0x16)};

/// @brief Field AppPauseRecent offset 0xffffffff size 0x4
static constexpr int32_t  AppPauseRecent{static_cast<int32_t>(0x15)};

/// @brief Field AppQuits offset 0xffffffff size 0x4
static constexpr int32_t  AppQuits{static_cast<int32_t>(0x17)};

/// @brief Field EmptyBit offset 0xffffffff size 0x4
static constexpr int32_t  EmptyBit{static_cast<int32_t>(0x18)};

/// @brief Field ErrorCodeFits offset 0xffffffff size 0x4
static constexpr int32_t  ErrorCodeFits{static_cast<int32_t>(0x11)};

/// @brief Field ErrorCodeWinSock offset 0xffffffff size 0x4
static constexpr int32_t  ErrorCodeWinSock{static_cast<int32_t>(0x10)};

/// @brief Field NetworkReachable offset 0xffffffff size 0x4
static constexpr int32_t  NetworkReachable{static_cast<int32_t>(0x12)};

/// @brief Field UsedProtocol offset 0xffffffff size 0x4
static constexpr int32_t  UsedProtocol{static_cast<int32_t>(0x19)};

/// @brief Field Version offset 0xffffffff size 0x4
static constexpr int32_t  Version{static_cast<int32_t>(0x1c)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::SystemConnectionSummary_SCSBitPos) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

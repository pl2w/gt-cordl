#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/WebFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebFlags)
// Forward declare root types
namespace Fusion::Photon::Realtime {
class WebFlags;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::WebFlags*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::WebFlags*, "Fusion.Photon.Realtime", "WebFlags");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.WebFlags
class CORDL_TYPE WebFlags : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Fusion::Photon::Realtime::WebFlags*  Default;

 __declspec(property(get=get_HttpForward, put=set_HttpForward)) bool  HttpForward;

 __declspec(property(get=get_SendAuthCookie, put=set_SendAuthCookie)) bool  SendAuthCookie;

 __declspec(property(get=get_SendState, put=set_SendState)) bool  SendState;

 __declspec(property(get=get_SendSync, put=set_SendSync)) bool  SendSync;

/// @brief Field WebhookFlags, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_WebhookFlags, put=__cordl_internal_set_WebhookFlags)) uint8_t  WebhookFlags;

static inline ::Fusion::Photon::Realtime::WebFlags* New_ctor(uint8_t  webhookFlags) ;

constexpr uint8_t const& __cordl_internal_get_WebhookFlags() const;

constexpr uint8_t& __cordl_internal_get_WebhookFlags() ;

constexpr void __cordl_internal_set_WebhookFlags(uint8_t  value) ;

/// @brief Method .ctor, addr 0x5f688cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(uint8_t  webhookFlags) ;

static inline ::Fusion::Photon::Realtime::WebFlags* getStaticF_Default() ;

/// @brief Method get_HttpForward, addr 0x5f5c7f4, size 0xc, virtual false, abstract: false, final false
inline bool get_HttpForward() ;

/// @brief Method get_SendAuthCookie, addr 0x5f68848, size 0xc, virtual false, abstract: false, final false
inline bool get_SendAuthCookie() ;

/// @brief Method get_SendState, addr 0x5f688a0, size 0xc, virtual false, abstract: false, final false
inline bool get_SendState() ;

/// @brief Method get_SendSync, addr 0x5f68874, size 0xc, virtual false, abstract: false, final false
inline bool get_SendSync() ;

static inline void setStaticF_Default(::Fusion::Photon::Realtime::WebFlags*  value) ;

/// @brief Method set_HttpForward, addr 0x5f68834, size 0x14, virtual false, abstract: false, final false
inline void set_HttpForward(bool  value) ;

/// @brief Method set_SendAuthCookie, addr 0x5f68854, size 0x20, virtual false, abstract: false, final false
inline void set_SendAuthCookie(bool  value) ;

/// @brief Method set_SendState, addr 0x5f688ac, size 0x20, virtual false, abstract: false, final false
inline void set_SendState(bool  value) ;

/// @brief Method set_SendSync, addr 0x5f68880, size 0x20, virtual false, abstract: false, final false
inline void set_SendSync(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebFlags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebFlags(WebFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebFlags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebFlags(WebFlags const& ) = delete;

/// @brief Field HttpForwardConst offset 0xffffffff size 0x1
static constexpr uint8_t  HttpForwardConst{static_cast<uint8_t>(0x1u)};

/// @brief Field SendAuthCookieConst offset 0xffffffff size 0x1
static constexpr uint8_t  SendAuthCookieConst{static_cast<uint8_t>(0x2u)};

/// @brief Field SendStateConst offset 0xffffffff size 0x1
static constexpr uint8_t  SendStateConst{static_cast<uint8_t>(0x8u)};

/// @brief Field SendSyncConst offset 0xffffffff size 0x1
static constexpr uint8_t  SendSyncConst{static_cast<uint8_t>(0x4u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28112};

/// @brief Field WebhookFlags, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___WebhookFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::WebFlags, ___WebhookFlags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::WebFlags) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime

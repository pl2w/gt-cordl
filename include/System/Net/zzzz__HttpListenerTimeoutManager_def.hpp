#pragma once
// IWYU pragma private; include "System/Net/HttpListenerTimeoutManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerTimeoutManager)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net {
class HttpListenerTimeoutManager;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListenerTimeoutManager*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListenerTimeoutManager*, "System.Net", "HttpListenerTimeoutManager");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerTimeoutManager
class CORDL_TYPE HttpListenerTimeoutManager : public ::System::Object {
public:
// Declarations
/// @brief [MonoTODO]
 __declspec(property(get=get_DrainEntityBody, put=set_DrainEntityBody)) ::System::TimeSpan  DrainEntityBody;

/// @brief [MonoTODO]
 __declspec(property(get=get_EntityBody, put=set_EntityBody)) ::System::TimeSpan  EntityBody;

/// @brief [MonoTODO]
 __declspec(property(get=get_HeaderWait, put=set_HeaderWait)) ::System::TimeSpan  HeaderWait;

/// @brief [MonoTODO]
 __declspec(property(get=get_IdleConnection, put=set_IdleConnection)) ::System::TimeSpan  IdleConnection;

/// @brief [MonoTODO]
 __declspec(property(get=get_MinSendBytesPerSecond, put=set_MinSendBytesPerSecond)) int64_t  MinSendBytesPerSecond;

/// @brief [MonoTODO]
 __declspec(property(get=get_RequestQueue, put=set_RequestQueue)) ::System::TimeSpan  RequestQueue;

static inline ::System::Net::HttpListenerTimeoutManager* New_ctor() ;

/// @brief Method .ctor, addr 0xaca0344, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrainEntityBody, addr 0xaca0114, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_DrainEntityBody() ;

/// @brief Method get_EntityBody, addr 0xaca00a4, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_EntityBody() ;

/// @brief Method get_HeaderWait, addr 0xaca0264, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_HeaderWait() ;

/// @brief Method get_IdleConnection, addr 0xaca01f4, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_IdleConnection() ;

/// @brief Method get_MinSendBytesPerSecond, addr 0xaca02d4, size 0x38, virtual false, abstract: false, final false
inline int64_t get_MinSendBytesPerSecond() ;

/// @brief Method get_RequestQueue, addr 0xaca0184, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_RequestQueue() ;

/// @brief Method set_DrainEntityBody, addr 0xaca014c, size 0x38, virtual false, abstract: false, final false
inline void set_DrainEntityBody(::System::TimeSpan  value) ;

/// @brief Method set_EntityBody, addr 0xaca00dc, size 0x38, virtual false, abstract: false, final false
inline void set_EntityBody(::System::TimeSpan  value) ;

/// @brief Method set_HeaderWait, addr 0xaca029c, size 0x38, virtual false, abstract: false, final false
inline void set_HeaderWait(::System::TimeSpan  value) ;

/// @brief Method set_IdleConnection, addr 0xaca022c, size 0x38, virtual false, abstract: false, final false
inline void set_IdleConnection(::System::TimeSpan  value) ;

/// @brief Method set_MinSendBytesPerSecond, addr 0xaca030c, size 0x38, virtual false, abstract: false, final false
inline void set_MinSendBytesPerSecond(int64_t  value) ;

/// @brief Method set_RequestQueue, addr 0xaca01bc, size 0x38, virtual false, abstract: false, final false
inline void set_RequestQueue(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerTimeoutManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerTimeoutManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerTimeoutManager(HttpListenerTimeoutManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerTimeoutManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerTimeoutManager(HttpListenerTimeoutManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpListenerTimeoutManager) == 0x10, "Size mismatch!");

} // namespace end def System::Net

#pragma once
// IWYU pragma private; include "PlayFab/Public/IPlayFabLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPlayFabLogger)
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace PlayFab::Public {
class IPlayFabLogger;
}
// Write type traits
MARK_REF_T(::PlayFab::Public::IPlayFabLogger*);
DEFINE_IL2CPP_CLASS(::PlayFab::Public::IPlayFabLogger*, "PlayFab.Public", "IPlayFabLogger");
// Dependencies 
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.IPlayFabLogger
class CORDL_TYPE IPlayFabLogger {
public:
// Declarations
 __declspec(property(get=get_ip, put=set_ip)) ::System::Net::IPAddress*  ip;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

 __declspec(property(get=get_url, put=set_url)) ::StringW  url;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnable() ;

/// @brief Method get_ip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Net::IPAddress* get_ip() ;

/// @brief Method get_port, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_port() ;

/// @brief Method get_url, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_url() ;

/// @brief Method set_ip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ip(::System::Net::IPAddress*  value) ;

/// @brief Method set_port, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_port(int32_t  value) ;

/// @brief Method set_url, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_url(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlayFabLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayFabLogger(IPlayFabLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Public

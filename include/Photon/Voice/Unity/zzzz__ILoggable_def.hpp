#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/ILoggable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILoggable)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class ILoggable;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::ILoggable*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::ILoggable*, "Photon.Voice.Unity", "ILoggable");
// Dependencies 
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.ILoggable
class CORDL_TYPE ILoggable {
public:
// Declarations
 __declspec(property(get=get_LogLevel, put=set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

 __declspec(property(get=get_Logger)) ::Photon::Voice::Unity::VoiceLogger*  Logger;

/// @brief Method get_LogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ExitGames::Client::Photon::DebugLevel get_LogLevel() ;

/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Photon::Voice::Unity::VoiceLogger* get_Logger() ;

/// @brief Method set_LogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILoggable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILoggable(ILoggable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice::Unity

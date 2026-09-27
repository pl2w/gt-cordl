#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceComponent)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace Photon::Voice::Unity {
class ILoggableDependent;
}
namespace Photon::Voice::Unity {
class ILoggable;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class VoiceComponent;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::VoiceComponent*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceComponent*, "Photon.Voice.Unity", "VoiceComponent");
// [HelpURL("https://doc.photonengine.com/en-us/voice/v2")]
// Dependencies ExitGames.Client.Photon.DebugLevel, UnityEngine.MonoBehaviour
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceComponent
class CORDL_TYPE VoiceComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IgnoreGlobalLogLevel, put=set_IgnoreGlobalLogLevel)) bool  IgnoreGlobalLogLevel;

 __declspec(property(get=get_LogLevel, put=set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

 __declspec(property(get=get_Logger, put=set_Logger)) ::Photon::Voice::Unity::VoiceLogger*  Logger;

/// @brief Field currentPlatform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentPlatform, put=setStaticF_currentPlatform)) ::StringW  currentPlatform;

/// @brief Field ignoreGlobalLogLevel, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreGlobalLogLevel, put=__cordl_internal_set_ignoreGlobalLogLevel)) bool  ignoreGlobalLogLevel;

/// @brief Field logLevel, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::ExitGames::Client::Photon::DebugLevel  logLevel;

/// @brief Field logger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::Unity::VoiceLogger*  logger;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr operator  ::Photon::Voice::Unity::ILoggable*() noexcept;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggableDependent"
constexpr operator  ::Photon::Voice::Unity::ILoggableDependent*() noexcept;

/// @brief Method Awake, addr 0xa765a08, size 0xf8, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Voice::Unity::VoiceComponent* New_ctor() ;

constexpr bool const& __cordl_internal_get_ignoreGlobalLogLevel() const;

constexpr bool& __cordl_internal_get_ignoreGlobalLogLevel() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_logLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_logLevel() ;

constexpr ::Photon::Voice::Unity::VoiceLogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::Unity::VoiceLogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set_ignoreGlobalLogLevel(bool  value) ;

constexpr void __cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

/// @brief Method .ctor, addr 0xa76740c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_currentPlatform() ;

/// @brief Method get_CurrentPlatform, addr 0xa766864, size 0x14c, virtual false, abstract: false, final false
static inline ::StringW get_CurrentPlatform() ;

/// @brief Method get_IgnoreGlobalLogLevel, addr 0xa773d1c, size 0x8, virtual true, abstract: false, final true
inline bool get_IgnoreGlobalLogLevel() ;

/// @brief Method get_LogLevel, addr 0xa773ce4, size 0x38, virtual true, abstract: false, final true
inline ::ExitGames::Client::Photon::DebugLevel get_LogLevel() ;

/// @brief Method get_Logger, addr 0xa766774, size 0xf0, virtual true, abstract: false, final true
inline ::Photon::Voice::Unity::VoiceLogger* get_Logger() ;

/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* i___Photon__Voice__Unity__ILoggable() noexcept;

/// @brief Convert to "::Photon::Voice::Unity::ILoggableDependent"
constexpr ::Photon::Voice::Unity::ILoggableDependent* i___Photon__Voice__Unity__ILoggableDependent() noexcept;

static inline void setStaticF_currentPlatform(::StringW  value) ;

/// @brief Method set_IgnoreGlobalLogLevel, addr 0xa773d24, size 0x8, virtual true, abstract: false, final true
inline void set_IgnoreGlobalLogLevel(bool  value) ;

/// @brief Method set_LogLevel, addr 0xa76c6b8, size 0x34, virtual true, abstract: false, final true
inline void set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method set_Logger, addr 0xa773cdc, size 0x8, virtual false, abstract: false, final false
inline void set_Logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceComponent(VoiceComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceComponent(VoiceComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28888};

/// @brief Field logger, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::Unity::VoiceLogger*  ___logger;

/// [SerializeField]
/// @brief Field logLevel, offset: 0x28, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___logLevel;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field ignoreGlobalLogLevel, offset: 0x29, size: 0x1, def value: None
 bool  ___ignoreGlobalLogLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::VoiceComponent, ___logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceComponent, ___logLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceComponent, ___ignoreGlobalLogLevel) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::VoiceComponent) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice::Unity

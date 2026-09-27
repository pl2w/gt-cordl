#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceLogger)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace Photon::Voice {
class ILogger;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class VoiceLogger;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::VoiceLogger*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceLogger*, "Photon.Voice.Unity", "VoiceLogger");
// Dependencies ExitGames.Client.Photon.DebugLevel, System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceLogger
class CORDL_TYPE VoiceLogger : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDebugEnabled)) bool  IsDebugEnabled;

 __declspec(property(get=get_IsErrorEnabled)) bool  IsErrorEnabled;

 __declspec(property(get=get_IsInfoEnabled)) bool  IsInfoEnabled;

 __declspec(property(get=get_IsWarningEnabled)) bool  IsWarningEnabled;

 __declspec(property(get=get_LogLevel, put=set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

 __declspec(property(get=get_Tag, put=set_Tag)) ::StringW  Tag;

/// @brief Field <LogLevel>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__LogLevel_k__BackingField, put=__cordl_internal_set__LogLevel_k__BackingField)) ::ExitGames::Client::Photon::DebugLevel  _LogLevel_k__BackingField;

/// @brief Field <Tag>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tag_k__BackingField, put=__cordl_internal_set__Tag_k__BackingField)) ::StringW  _Tag_k__BackingField;

/// @brief Field context, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::UnityW<::UnityEngine::Object>  context;

/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr operator  ::Photon::Voice::ILogger*() noexcept;

/// @brief Method GetFormatString, addr 0xa783798, size 0x6c, virtual false, abstract: false, final false
inline ::StringW GetFormatString(::StringW  fmt) ;

/// @brief Method GetTimestamp, addr 0xa783818, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetTimestamp() ;

/// @brief Method LogDebug, addr 0xa783804, size 0x14, virtual true, abstract: false, final true
inline void LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogError, addr 0xa783690, size 0x108, virtual true, abstract: false, final true
inline void LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogInfo, addr 0xa783330, size 0x10c, virtual true, abstract: false, final true
inline void LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0xa78344c, size 0x10c, virtual true, abstract: false, final true
inline void LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::Photon::Voice::Unity::VoiceLogger* New_ctor(::UnityEngine::Object*  context, ::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level) ;

static inline ::Photon::Voice::Unity::VoiceLogger* New_ctor(::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level) ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get__LogLevel_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get__LogLevel_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Tag_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Tag_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_context() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_context() ;

constexpr void __cordl_internal_set__LogLevel_k__BackingField(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set__Tag_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_context(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa7835bc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Object*  context, ::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level) ;

/// @brief Method .ctor, addr 0xa783614, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level) ;

/// @brief Method get_IsDebugEnabled, addr 0xa783680, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDebugEnabled() ;

/// @brief Method get_IsErrorEnabled, addr 0xa783670, size 0x10, virtual false, abstract: false, final false
inline bool get_IsErrorEnabled() ;

/// @brief Method get_IsInfoEnabled, addr 0xa783320, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInfoEnabled() ;

/// @brief Method get_IsWarningEnabled, addr 0xa78343c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsWarningEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_LogLevel, addr 0xa783660, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::DebugLevel get_LogLevel() ;

/// [CompilerGenerated]
/// @brief Method get_Tag, addr 0xa783650, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Tag() ;

/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* i___Photon__Voice__ILogger() noexcept;

/// [CompilerGenerated]
/// @brief Method set_LogLevel, addr 0xa783668, size 0x8, virtual false, abstract: false, final false
inline void set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// [CompilerGenerated]
/// @brief Method set_Tag, addr 0xa783658, size 0x8, virtual false, abstract: false, final false
inline void set_Tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLogger(VoiceLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLogger(VoiceLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28893};

/// [CompilerGenerated]
/// @brief Field <Tag>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Tag_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LogLevel>k__BackingField, offset: 0x18, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ____LogLevel_k__BackingField;

/// @brief Field context, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::VoiceLogger, ____Tag_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceLogger, ____LogLevel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceLogger, ___context) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::VoiceLogger) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice::Unity

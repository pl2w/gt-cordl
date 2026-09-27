#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSharedSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipSharedSettings)
// Forward declare root types
namespace GlobalNamespace {
class MothershipSharedSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipSharedSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSharedSettings*, "", "MothershipSharedSettings");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSharedSettings
class CORDL_TYPE MothershipSharedSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field BaseUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BaseUrl, put=__cordl_internal_set_BaseUrl)) ::StringW  BaseUrl;

/// @brief Field DeploymentId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeploymentId, put=__cordl_internal_set_DeploymentId)) ::StringW  DeploymentId;

/// @brief Field Enabled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field EnvironmentId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnvironmentId, put=__cordl_internal_set_EnvironmentId)) ::StringW  EnvironmentId;

/// @brief Field RequestLoggingEnabled, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_RequestLoggingEnabled, put=__cordl_internal_set_RequestLoggingEnabled)) bool  RequestLoggingEnabled;

/// @brief Field ServerApiKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerApiKey, put=__cordl_internal_set_ServerApiKey)) ::StringW  ServerApiKey;

/// @brief Field TitleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field WebSocketUrl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WebSocketUrl, put=__cordl_internal_set_WebSocketUrl)) ::StringW  WebSocketUrl;

static inline ::GlobalNamespace::MothershipSharedSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BaseUrl() const;

constexpr ::StringW& __cordl_internal_get_BaseUrl() ;

constexpr ::StringW const& __cordl_internal_get_DeploymentId() const;

constexpr ::StringW& __cordl_internal_get_DeploymentId() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr ::StringW const& __cordl_internal_get_EnvironmentId() const;

constexpr ::StringW& __cordl_internal_get_EnvironmentId() ;

constexpr bool const& __cordl_internal_get_RequestLoggingEnabled() const;

constexpr bool& __cordl_internal_get_RequestLoggingEnabled() ;

constexpr ::StringW const& __cordl_internal_get_ServerApiKey() const;

constexpr ::StringW& __cordl_internal_get_ServerApiKey() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_WebSocketUrl() const;

constexpr ::StringW& __cordl_internal_get_WebSocketUrl() ;

constexpr void __cordl_internal_set_BaseUrl(::StringW  value) ;

constexpr void __cordl_internal_set_DeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_EnvironmentId(::StringW  value) ;

constexpr void __cordl_internal_set_RequestLoggingEnabled(bool  value) ;

constexpr void __cordl_internal_set_ServerApiKey(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_WebSocketUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x53c14b4, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSharedSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSharedSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSharedSettings(MothershipSharedSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSharedSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSharedSettings(MothershipSharedSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9775};

/// @brief Field TitleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field EnvironmentId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___EnvironmentId;

/// @brief Field DeploymentId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DeploymentId;

/// @brief Field BaseUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___BaseUrl;

/// @brief Field WebSocketUrl, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___WebSocketUrl;

/// @brief Field ServerApiKey, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___ServerApiKey;

/// @brief Field Enabled, offset: 0x48, size: 0x1, def value: None
 bool  ___Enabled;

/// @brief Field RequestLoggingEnabled, offset: 0x49, size: 0x1, def value: None
 bool  ___RequestLoggingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___TitleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___EnvironmentId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___DeploymentId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___BaseUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___WebSocketUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___ServerApiKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___Enabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSharedSettings, ___RequestLoggingEnabled) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipSharedSettings) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

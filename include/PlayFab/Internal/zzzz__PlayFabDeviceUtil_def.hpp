#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabDeviceUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabDeviceUtil)
namespace PlayFab::ClientModels {
class AttributeInstallResult;
}
namespace PlayFab::ClientModels {
class UserSettings;
}
namespace PlayFab::Internal {
class PlayFabDeviceUtil___c__DisplayClass9_0;
}
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab::SharedModels {
class PlayFabResultCommon;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabError;
}
// Forward declare root types
namespace PlayFab::Internal {
class PlayFabDeviceUtil;
}
namespace PlayFab::Internal {
class PlayFabDeviceUtil___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::PlayFabDeviceUtil*);
MARK_REF_T(::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabDeviceUtil*, "PlayFab.Internal", "PlayFabDeviceUtil");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0*, "PlayFab.Internal", "PlayFabDeviceUtil/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabDeviceUtil
class CORDL_TYPE PlayFabDeviceUtil : public ::System::Object {
public:
// Declarations
using __c__DisplayClass9_0 = ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0;

/// @brief Field _gatherDeviceInfo, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__gatherDeviceInfo, put=setStaticF__gatherDeviceInfo)) bool  _gatherDeviceInfo;

/// @brief Field _gatherScreenTime, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__gatherScreenTime, put=setStaticF__gatherScreenTime)) bool  _gatherScreenTime;

/// @brief Field _needsAttribution, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__needsAttribution, put=setStaticF__needsAttribution)) bool  _needsAttribution;

/// @brief Method DoAttributeInstall, addr 0xa84302c, size 0x280, virtual false, abstract: false, final false
static inline void DoAttributeInstall(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

/// @brief Method GetAdvertIdFromUnity, addr 0xa843a64, size 0x100, virtual false, abstract: false, final false
static inline void GetAdvertIdFromUnity(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

/// @brief Method OnAttributeInstall, addr 0xa8432b4, size 0xc0, virtual false, abstract: false, final false
static inline void OnAttributeInstall(::PlayFab::ClientModels::AttributeInstallResult*  result) ;

/// @brief Method OnGatherFail, addr 0xa843700, size 0x9c, virtual false, abstract: false, final false
static inline void OnGatherFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnPlayFabLogin, addr 0xa84379c, size 0x150, virtual false, abstract: false, final false
static inline void OnPlayFabLogin(::PlayFab::SharedModels::PlayFabResultCommon*  result, ::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

/// @brief Method SendDeviceInfoToPlayFab, addr 0xa843374, size 0x384, virtual false, abstract: false, final false
static inline void SendDeviceInfoToPlayFab(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

/// @brief Method _OnPlayFabLogin, addr 0xa8438ec, size 0x178, virtual false, abstract: false, final false
static inline void _OnPlayFabLogin(::PlayFab::ClientModels::UserSettings*  settingsForUser, ::StringW  playFabId, ::StringW  entityId, ::StringW  entityType, ::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi) ;

static inline bool getStaticF__gatherDeviceInfo() ;

static inline bool getStaticF__gatherScreenTime() ;

static inline bool getStaticF__needsAttribution() ;

static inline void setStaticF__gatherDeviceInfo(bool  value) ;

static inline void setStaticF__gatherScreenTime(bool  value) ;

static inline void setStaticF__needsAttribution(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabDeviceUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDeviceUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabDeviceUtil(PlayFabDeviceUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDeviceUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabDeviceUtil(PlayFabDeviceUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Internal::PlayFabDeviceUtil) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabDeviceUtil/<>c__DisplayClass9_0
class CORDL_TYPE PlayFabDeviceUtil___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field instanceApi, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceApi, put=__cordl_internal_set_instanceApi)) ::PlayFab::SharedModels::IPlayFabInstanceApi*  instanceApi;

/// @brief Field settings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::PlayFab::PlayFabApiSettings*  settings;

static inline ::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <GetAdvertIdFromUnity>b__0, addr 0xa843c94, size 0xc4, virtual false, abstract: false, final false
inline void _GetAdvertIdFromUnity_b__0(::StringW  advertisingId, bool  trackingEnabled, ::StringW  error) ;

constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* const& __cordl_internal_get_instanceApi() const;

constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi*& __cordl_internal_get_instanceApi() ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_settings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_instanceApi(::PlayFab::SharedModels::IPlayFabInstanceApi*  value) ;

constexpr void __cordl_internal_set_settings(::PlayFab::PlayFabApiSettings*  value) ;

/// @brief Method .ctor, addr 0xa843c8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabDeviceUtil___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDeviceUtil___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabDeviceUtil___c__DisplayClass9_0(PlayFabDeviceUtil___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDeviceUtil___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabDeviceUtil___c__DisplayClass9_0(PlayFabDeviceUtil___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19913};

/// @brief Field settings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___settings;

/// @brief Field instanceApi, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::SharedModels::IPlayFabInstanceApi*  ___instanceApi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0, ___settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0, ___instanceApi) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabDeviceUtil___c__DisplayClass9_0) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::Internal

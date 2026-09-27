#pragma once
// IWYU pragma private; include "PlayFab/PlayFabSettingsRedirect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabSettingsRedirect)
namespace GlobalNamespace {
class PlayFabSharedSettings;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace PlayFab {
class PlayFabSettingsRedirect;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabSettingsRedirect*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabSettingsRedirect*, "PlayFab", "PlayFabSettingsRedirect");
// Dependencies PlayFab.PlayFabApiSettings
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabSettingsRedirect
class CORDL_TYPE PlayFabSettingsRedirect : public ::PlayFab::PlayFabApiSettings {
public:
// Declarations
 __declspec(property(get=get_AdvertisingIdType, put=set_AdvertisingIdType)) ::StringW  AdvertisingIdType;

 __declspec(property(get=get_AdvertisingIdValue, put=set_AdvertisingIdValue)) ::StringW  AdvertisingIdValue;

 __declspec(property(get=get_DisableAdvertising, put=set_DisableAdvertising)) bool  DisableAdvertising;

 __declspec(property(get=get_DisableDeviceInfo, put=set_DisableDeviceInfo)) bool  DisableDeviceInfo;

 __declspec(property(get=get_DisableFocusTimeCollection, put=set_DisableFocusTimeCollection)) bool  DisableFocusTimeCollection;

/// @brief Field GetSO, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GetSO, put=__cordl_internal_set_GetSO)) ::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*  GetSO;

 __declspec(property(get=get_ProductionEnvironmentUrl, put=set_ProductionEnvironmentUrl)) ::StringW  ProductionEnvironmentUrl;

 __declspec(property(get=get_TitleId, put=set_TitleId)) ::StringW  TitleId;

 __declspec(property(get=get_VerticalName, put=set_VerticalName)) ::StringW  VerticalName;

static inline ::PlayFab::PlayFabSettingsRedirect* New_ctor(::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*  getSO) ;

constexpr ::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>* const& __cordl_internal_get_GetSO() const;

constexpr ::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*& __cordl_internal_get_GetSO() ;

constexpr void __cordl_internal_set_GetSO(::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*  value) ;

/// @brief Method .ctor, addr 0xa7dc7cc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*  getSO) ;

/// @brief Method get_AdvertisingIdType, addr 0xa7dcbd0, size 0x9c, virtual true, abstract: false, final false
inline ::StringW get_AdvertisingIdType() ;

/// @brief Method get_AdvertisingIdValue, addr 0xa7dcd18, size 0x9c, virtual true, abstract: false, final false
inline ::StringW get_AdvertisingIdValue() ;

/// @brief Method get_DisableAdvertising, addr 0xa7dce60, size 0x9c, virtual true, abstract: false, final false
inline bool get_DisableAdvertising() ;

/// @brief Method get_DisableDeviceInfo, addr 0xa7dcfa0, size 0x9c, virtual true, abstract: false, final false
inline bool get_DisableDeviceInfo() ;

/// @brief Method get_DisableFocusTimeCollection, addr 0xa7dd0e0, size 0x9c, virtual true, abstract: false, final false
inline bool get_DisableFocusTimeCollection() ;

/// @brief Method get_ProductionEnvironmentUrl, addr 0xa7dc7f8, size 0x9c, virtual true, abstract: false, final false
inline ::StringW get_ProductionEnvironmentUrl() ;

/// @brief Method get_TitleId, addr 0xa7dca88, size 0x9c, virtual true, abstract: false, final false
inline ::StringW get_TitleId() ;

/// @brief Method get_VerticalName, addr 0xa7dc940, size 0x9c, virtual true, abstract: false, final false
inline ::StringW get_VerticalName() ;

/// @brief Method set_AdvertisingIdType, addr 0xa7dcc6c, size 0xac, virtual true, abstract: false, final false
inline void set_AdvertisingIdType(::StringW  value) ;

/// @brief Method set_AdvertisingIdValue, addr 0xa7dcdb4, size 0xac, virtual true, abstract: false, final false
inline void set_AdvertisingIdValue(::StringW  value) ;

/// @brief Method set_DisableAdvertising, addr 0xa7dcefc, size 0xa4, virtual true, abstract: false, final false
inline void set_DisableAdvertising(bool  value) ;

/// @brief Method set_DisableDeviceInfo, addr 0xa7dd03c, size 0xa4, virtual true, abstract: false, final false
inline void set_DisableDeviceInfo(bool  value) ;

/// @brief Method set_DisableFocusTimeCollection, addr 0xa7dd17c, size 0xa4, virtual true, abstract: false, final false
inline void set_DisableFocusTimeCollection(bool  value) ;

/// @brief Method set_ProductionEnvironmentUrl, addr 0xa7dc894, size 0xac, virtual true, abstract: false, final false
inline void set_ProductionEnvironmentUrl(::StringW  value) ;

/// @brief Method set_TitleId, addr 0xa7dcb24, size 0xac, virtual true, abstract: false, final false
inline void set_TitleId(::StringW  value) ;

/// @brief Method set_VerticalName, addr 0xa7dc9dc, size 0xac, virtual true, abstract: false, final false
inline void set_VerticalName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSettingsRedirect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettingsRedirect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabSettingsRedirect(PlayFabSettingsRedirect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSettingsRedirect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabSettingsRedirect(PlayFabSettingsRedirect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19518};

/// @brief Field GetSO, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>*  ___GetSO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabSettingsRedirect, ___GetSO) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabSettingsRedirect) == 0x50, "Size mismatch!");

} // namespace end def PlayFab

#pragma once
// IWYU pragma private; include "PlayFab/PlayFabApiSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabApiSettings)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab {
class PlayFabApiSettings;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabApiSettings*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabApiSettings*, "PlayFab", "PlayFabApiSettings");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabApiSettings
class CORDL_TYPE PlayFabApiSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AdvertisingIdType, put=set_AdvertisingIdType)) ::StringW  AdvertisingIdType;

 __declspec(property(get=get_AdvertisingIdValue, put=set_AdvertisingIdValue)) ::StringW  AdvertisingIdValue;

 __declspec(property(get=get_DisableAdvertising, put=set_DisableAdvertising)) bool  DisableAdvertising;

 __declspec(property(get=get_DisableDeviceInfo, put=set_DisableDeviceInfo)) bool  DisableDeviceInfo;

 __declspec(property(get=get_DisableFocusTimeCollection, put=set_DisableFocusTimeCollection)) bool  DisableFocusTimeCollection;

 __declspec(property(get=get_ProductionEnvironmentUrl, put=set_ProductionEnvironmentUrl)) ::StringW  ProductionEnvironmentUrl;

 __declspec(property(get=get_RequestGetParams)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  RequestGetParams;

 __declspec(property(get=get_TitleId, put=set_TitleId)) ::StringW  TitleId;

 __declspec(property(get=get_VerticalName, put=set_VerticalName)) ::StringW  VerticalName;

/// @brief Field <AdvertisingIdType>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdvertisingIdType_k__BackingField, put=__cordl_internal_set__AdvertisingIdType_k__BackingField)) ::StringW  _AdvertisingIdType_k__BackingField;

/// @brief Field <AdvertisingIdValue>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdvertisingIdValue_k__BackingField, put=__cordl_internal_set__AdvertisingIdValue_k__BackingField)) ::StringW  _AdvertisingIdValue_k__BackingField;

/// @brief Field <DisableAdvertising>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableAdvertising_k__BackingField, put=__cordl_internal_set__DisableAdvertising_k__BackingField)) bool  _DisableAdvertising_k__BackingField;

/// @brief Field <DisableDeviceInfo>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableDeviceInfo_k__BackingField, put=__cordl_internal_set__DisableDeviceInfo_k__BackingField)) bool  _DisableDeviceInfo_k__BackingField;

/// @brief Field <DisableFocusTimeCollection>k__BackingField, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableFocusTimeCollection_k__BackingField, put=__cordl_internal_set__DisableFocusTimeCollection_k__BackingField)) bool  _DisableFocusTimeCollection_k__BackingField;

/// @brief Field _ProductionEnvironmentUrl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProductionEnvironmentUrl, put=__cordl_internal_set__ProductionEnvironmentUrl)) ::StringW  _ProductionEnvironmentUrl;

/// @brief Field <TitleId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TitleId_k__BackingField, put=__cordl_internal_set__TitleId_k__BackingField)) ::StringW  _TitleId_k__BackingField;

/// @brief Field <VerticalName>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__VerticalName_k__BackingField, put=__cordl_internal_set__VerticalName_k__BackingField)) ::StringW  _VerticalName_k__BackingField;

/// @brief Field _requestGetParams, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestGetParams, put=__cordl_internal_set__requestGetParams)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _requestGetParams;

/// @brief Method GetFullUrl, addr 0xa7dc180, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetFullUrl(::StringW  apiCall, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  getParams) ;

static inline ::PlayFab::PlayFabApiSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__AdvertisingIdType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AdvertisingIdType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__AdvertisingIdValue_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AdvertisingIdValue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DisableAdvertising_k__BackingField() const;

constexpr bool& __cordl_internal_get__DisableAdvertising_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DisableDeviceInfo_k__BackingField() const;

constexpr bool& __cordl_internal_get__DisableDeviceInfo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DisableFocusTimeCollection_k__BackingField() const;

constexpr bool& __cordl_internal_get__DisableFocusTimeCollection_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ProductionEnvironmentUrl() const;

constexpr ::StringW& __cordl_internal_get__ProductionEnvironmentUrl() ;

constexpr ::StringW const& __cordl_internal_get__TitleId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TitleId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__VerticalName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__VerticalName_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__requestGetParams() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__requestGetParams() ;

constexpr void __cordl_internal_set__AdvertisingIdType_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__AdvertisingIdValue_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DisableAdvertising_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DisableDeviceInfo_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DisableFocusTimeCollection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ProductionEnvironmentUrl(::StringW  value) ;

constexpr void __cordl_internal_set__TitleId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__VerticalName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__requestGetParams(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa7dc6c8, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AdvertisingIdType, addr 0xa7dc130, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_AdvertisingIdType() ;

/// [CompilerGenerated]
/// @brief Method get_AdvertisingIdValue, addr 0xa7dc140, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_AdvertisingIdValue() ;

/// [CompilerGenerated]
/// @brief Method get_DisableAdvertising, addr 0xa7dc150, size 0x8, virtual true, abstract: false, final false
inline bool get_DisableAdvertising() ;

/// [CompilerGenerated]
/// @brief Method get_DisableDeviceInfo, addr 0xa7dc160, size 0x8, virtual true, abstract: false, final false
inline bool get_DisableDeviceInfo() ;

/// [CompilerGenerated]
/// @brief Method get_DisableFocusTimeCollection, addr 0xa7dc170, size 0x8, virtual true, abstract: false, final false
inline bool get_DisableFocusTimeCollection() ;

/// @brief Method get_ProductionEnvironmentUrl, addr 0xa7dc100, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_ProductionEnvironmentUrl() ;

/// @brief Method get_RequestGetParams, addr 0xa7dc0f8, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_RequestGetParams() ;

/// [CompilerGenerated]
/// @brief Method get_TitleId, addr 0xa7dc110, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_TitleId() ;

/// [CompilerGenerated]
/// @brief Method get_VerticalName, addr 0xa7dc120, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_VerticalName() ;

/// [CompilerGenerated]
/// @brief Method set_AdvertisingIdType, addr 0xa7dc138, size 0x8, virtual true, abstract: false, final false
inline void set_AdvertisingIdType(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AdvertisingIdValue, addr 0xa7dc148, size 0x8, virtual true, abstract: false, final false
inline void set_AdvertisingIdValue(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisableAdvertising, addr 0xa7dc158, size 0x8, virtual true, abstract: false, final false
inline void set_DisableAdvertising(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisableDeviceInfo, addr 0xa7dc168, size 0x8, virtual true, abstract: false, final false
inline void set_DisableDeviceInfo(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisableFocusTimeCollection, addr 0xa7dc178, size 0x8, virtual true, abstract: false, final false
inline void set_DisableFocusTimeCollection(bool  value) ;

/// @brief Method set_ProductionEnvironmentUrl, addr 0xa7dc108, size 0x8, virtual true, abstract: false, final false
inline void set_ProductionEnvironmentUrl(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TitleId, addr 0xa7dc118, size 0x8, virtual true, abstract: false, final false
inline void set_TitleId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_VerticalName, addr 0xa7dc128, size 0x8, virtual true, abstract: false, final false
inline void set_VerticalName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabApiSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabApiSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabApiSettings(PlayFabApiSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabApiSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabApiSettings(PlayFabApiSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19517};

/// @brief Field _ProductionEnvironmentUrl, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ProductionEnvironmentUrl;

/// @brief Field _requestGetParams, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____requestGetParams;

/// [CompilerGenerated]
/// @brief Field <TitleId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____TitleId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VerticalName>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____VerticalName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AdvertisingIdType>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____AdvertisingIdType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AdvertisingIdValue>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____AdvertisingIdValue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DisableAdvertising>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____DisableAdvertising_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DisableDeviceInfo>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____DisableDeviceInfo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DisableFocusTimeCollection>k__BackingField, offset: 0x42, size: 0x1, def value: None
 bool  ____DisableFocusTimeCollection_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____ProductionEnvironmentUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____requestGetParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____TitleId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____VerticalName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____AdvertisingIdType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____AdvertisingIdValue_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____DisableAdvertising_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____DisableDeviceInfo_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabApiSettings, ____DisableFocusTimeCollection_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabApiSettings) == 0x48, "Size mismatch!");

} // namespace end def PlayFab

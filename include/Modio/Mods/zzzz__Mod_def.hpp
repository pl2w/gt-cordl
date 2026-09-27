#pragma once
// IWYU pragma private; include "Modio/Mods/Mod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModRating_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/Mods/zzzz__Mod_GalleryResolution_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mod)
namespace GlobalNamespace {
struct Mod_GalleryResolution;
}
namespace GlobalNamespace {
struct Mod_LogoResolution;
}
namespace GlobalNamespace {
struct Mod__GetModDetailsFromServer_d__118;
}
namespace GlobalNamespace {
struct Mod__GetMod_d__119;
}
namespace GlobalNamespace {
struct Mod__GetMods_d__117;
}
namespace GlobalNamespace {
struct Mod__GetMods_d__120;
}
namespace GlobalNamespace {
struct Mod__Purchase_d__126;
}
namespace GlobalNamespace {
struct Mod__RateMod_d__121;
}
namespace GlobalNamespace {
struct Mod__RefreshPotentiallyHiddenCachedMods_d__130;
}
namespace GlobalNamespace {
struct Mod__Report_d__123;
}
namespace GlobalNamespace {
struct Mod__SetSubscribed_d__111;
}
namespace Modio::API::SchemaDefinitions {
struct ImageObject;
}
namespace Modio::API::SchemaDefinitions {
struct MetadataKvpObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
namespace Modio::Mods::Builder {
class ModBuilder;
}
namespace Modio::Mods {
struct ModChangeType;
}
namespace Modio::Mods {
struct ModCommunityOptions;
}
namespace Modio::Mods {
class ModDependencies;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
struct ModMaturityOptions;
}
namespace Modio::Mods {
struct ModRating;
}
namespace Modio::Mods {
class ModSearchFilter;
}
namespace Modio::Mods {
class ModStats;
}
namespace Modio::Mods {
class ModTag;
}
namespace Modio::Mods {
class Mod___c;
}
namespace Modio::Mods {
class Modfile;
}
namespace Modio::Mods {
template<typename T>
class ModioPage_1;
}
namespace Modio::Reports {
struct ModNotWorkingReason;
}
namespace Modio::Reports {
struct ReportType;
}
namespace Modio::Users {
class UserProfile;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
class Mod___c;
}
// Write type traits
MARK_REF_T(::Modio::Mods::Mod*);
MARK_REF_T(::Modio::Mods::Mod___c*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Mod*, "Modio.Mods", "Mod");
DEFINE_IL2CPP_CLASS(::Modio::Mods::Mod___c*, "Modio.Mods", "Mod/<>c");
// Dependencies Modio.API.SchemaDefinitions.ModObject, Modio.Images.ModioImageSource`1<TResolution>, Modio.Mods.Mod::GalleryResolution, Modio.Mods.ModCommunityOptions, Modio.Mods.ModId, Modio.Mods.ModMaturityOptions, Modio.Mods.ModRating, Modio.Mods.ModTag, System.DateTime, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.Mod
class CORDL_TYPE Mod : public ::System::Object {
public:
// Declarations
using GalleryResolution = ::GlobalNamespace::Mod_GalleryResolution;

using LogoResolution = ::GlobalNamespace::Mod_LogoResolution;

using _GetModDetailsFromServer_d__118 = ::GlobalNamespace::Mod__GetModDetailsFromServer_d__118;

using _GetMod_d__119 = ::GlobalNamespace::Mod__GetMod_d__119;

using _GetMods_d__117 = ::GlobalNamespace::Mod__GetMods_d__117;

using _GetMods_d__120 = ::GlobalNamespace::Mod__GetMods_d__120;

using _Purchase_d__126 = ::GlobalNamespace::Mod__Purchase_d__126;

using _RateMod_d__121 = ::GlobalNamespace::Mod__RateMod_d__121;

using _RefreshPotentiallyHiddenCachedMods_d__130 = ::GlobalNamespace::Mod__RefreshPotentiallyHiddenCachedMods_d__130;

using _Report_d__123 = ::GlobalNamespace::Mod__Report_d__123;

using _SetSubscribed_d__111 = ::GlobalNamespace::Mod__SetSubscribed_d__111;

using __c = ::Modio::Mods::Mod___c;

/// @brief Field ChangeSubscribers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ChangeSubscribers, put=setStaticF_ChangeSubscribers)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*  ChangeSubscribers;

 __declspec(property(get=get_CommunityOptions, put=set_CommunityOptions)) ::Modio::Mods::ModCommunityOptions  CommunityOptions;

 __declspec(property(get=get_Creator, put=set_Creator)) ::Modio::Users::UserProfile*  Creator;

 __declspec(property(get=get_CurrentUserRating, put=set_CurrentUserRating)) ::Modio::Mods::ModRating  CurrentUserRating;

 __declspec(property(get=get_DateLive, put=set_DateLive)) ::System::DateTime  DateLive;

 __declspec(property(get=get_DateUpdated, put=set_DateUpdated)) ::System::DateTime  DateUpdated;

 __declspec(property(get=get_Dependencies, put=set_Dependencies)) ::Modio::Mods::ModDependencies*  Dependencies;

 __declspec(property(get=get_Description, put=set_Description)) ::StringW  Description;

 __declspec(property(get=get_File, put=set_File)) ::Modio::Mods::Modfile*  File;

 __declspec(property(get=get_Gallery, put=set_Gallery)) ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  Gallery;

 __declspec(property(get=get_Id)) ::Modio::Mods::ModId  Id;

 __declspec(property(get=get_IsEnabled, put=set_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsMonetized, put=set_IsMonetized)) bool  IsMonetized;

 __declspec(property(get=get_IsPurchased, put=set_IsPurchased)) bool  IsPurchased;

 __declspec(property(get=get_IsSubscribed, put=set_IsSubscribed)) bool  IsSubscribed;

 __declspec(property(get=get_LastModObject, put=set_LastModObject)) ::Modio::API::SchemaDefinitions::ModObject  LastModObject;

 __declspec(property(get=get_Logo, put=set_Logo)) ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  Logo;

 __declspec(property(get=get_MaturityOptions, put=set_MaturityOptions)) ::Modio::Mods::ModMaturityOptions  MaturityOptions;

 __declspec(property(get=get_MetadataBlob, put=set_MetadataBlob)) ::StringW  MetadataBlob;

 __declspec(property(get=get_MetadataKvps, put=set_MetadataKvps)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  MetadataKvps;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field OnModUpdated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnModUpdated, put=__cordl_internal_set_OnModUpdated)) ::System::Action*  OnModUpdated;

 __declspec(property(get=get_Price, put=set_Price)) int64_t  Price;

 __declspec(property(get=get_Stats, put=set_Stats)) ::Modio::Mods::ModStats*  Stats;

 __declspec(property(get=get_Summary)) ::StringW  Summary;

 __declspec(property(get=get_Tags, put=set_Tags)) ::ArrayW<::Modio::Mods::ModTag*>  Tags;

/// @brief Field <CommunityOptions>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__CommunityOptions_k__BackingField, put=__cordl_internal_set__CommunityOptions_k__BackingField)) ::Modio::Mods::ModCommunityOptions  _CommunityOptions_k__BackingField;

/// @brief Field <Creator>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Creator_k__BackingField, put=__cordl_internal_set__Creator_k__BackingField)) ::Modio::Users::UserProfile*  _Creator_k__BackingField;

/// @brief Field <CurrentUserRating>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentUserRating_k__BackingField, put=__cordl_internal_set__CurrentUserRating_k__BackingField)) ::Modio::Mods::ModRating  _CurrentUserRating_k__BackingField;

/// @brief Field <DateLive>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateLive_k__BackingField, put=__cordl_internal_set__DateLive_k__BackingField)) ::System::DateTime  _DateLive_k__BackingField;

/// @brief Field <DateUpdated>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateUpdated_k__BackingField, put=__cordl_internal_set__DateUpdated_k__BackingField)) ::System::DateTime  _DateUpdated_k__BackingField;

/// @brief Field <Dependencies>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Dependencies_k__BackingField, put=__cordl_internal_set__Dependencies_k__BackingField)) ::Modio::Mods::ModDependencies*  _Dependencies_k__BackingField;

/// @brief Field <Description>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Description_k__BackingField, put=__cordl_internal_set__Description_k__BackingField)) ::StringW  _Description_k__BackingField;

/// @brief Field <File>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__File_k__BackingField, put=__cordl_internal_set__File_k__BackingField)) ::Modio::Mods::Modfile*  _File_k__BackingField;

/// @brief Field <Gallery>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Gallery_k__BackingField, put=__cordl_internal_set__Gallery_k__BackingField)) ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  _Gallery_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::Modio::Mods::ModId  _Id_k__BackingField;

/// @brief Field <IsEnabled>k__BackingField, offset 0xa6, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsEnabled_k__BackingField, put=__cordl_internal_set__IsEnabled_k__BackingField)) bool  _IsEnabled_k__BackingField;

/// @brief Field <IsMonetized>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMonetized_k__BackingField, put=__cordl_internal_set__IsMonetized_k__BackingField)) bool  _IsMonetized_k__BackingField;

/// @brief Field <IsPurchased>k__BackingField, offset 0xa5, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPurchased_k__BackingField, put=__cordl_internal_set__IsPurchased_k__BackingField)) bool  _IsPurchased_k__BackingField;

/// @brief Field <IsSubscribed>k__BackingField, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSubscribed_k__BackingField, put=__cordl_internal_set__IsSubscribed_k__BackingField)) bool  _IsSubscribed_k__BackingField;

/// @brief Field <LastModObject>k__BackingField, offset 0xb8, size 0x270 
 __declspec(property(get=__cordl_internal_get__LastModObject_k__BackingField, put=__cordl_internal_set__LastModObject_k__BackingField)) ::Modio::API::SchemaDefinitions::ModObject  _LastModObject_k__BackingField;

/// @brief Field <Logo>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logo_k__BackingField, put=__cordl_internal_set__Logo_k__BackingField)) ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  _Logo_k__BackingField;

/// @brief Field <MaturityOptions>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaturityOptions_k__BackingField, put=__cordl_internal_set__MaturityOptions_k__BackingField)) ::Modio::Mods::ModMaturityOptions  _MaturityOptions_k__BackingField;

/// @brief Field <MetadataBlob>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataBlob_k__BackingField, put=__cordl_internal_set__MetadataBlob_k__BackingField)) ::StringW  _MetadataBlob_k__BackingField;

/// @brief Field <MetadataKvps>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataKvps_k__BackingField, put=__cordl_internal_set__MetadataKvps_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _MetadataKvps_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Price>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Price_k__BackingField, put=__cordl_internal_set__Price_k__BackingField)) int64_t  _Price_k__BackingField;

/// @brief Field <Stats>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Stats_k__BackingField, put=__cordl_internal_set__Stats_k__BackingField)) ::Modio::Mods::ModStats*  _Stats_k__BackingField;

/// @brief Field <Tags>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tags_k__BackingField, put=__cordl_internal_set__Tags_k__BackingField)) ::ArrayW<::Modio::Mods::ModTag*>  _Tags_k__BackingField;

/// @brief Field _summaryDecoded, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__summaryDecoded, put=__cordl_internal_set__summaryDecoded)) ::StringW  _summaryDecoded;

/// @brief Field _summaryHtmlEncoded, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__summaryHtmlEncoded, put=__cordl_internal_set__summaryHtmlEncoded)) ::StringW  _summaryHtmlEncoded;

/// @brief Method AddChangeListener, addr 0xa027dac, size 0x138, virtual false, abstract: false, final false
static inline void AddChangeListener(::Modio::Mods::ModChangeType  subscribedChange, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*  listener) ;

/// @brief Method ApplyDetailsFromModObject, addr 0xa0286e4, size 0x824, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* ApplyDetailsFromModObject(::Modio::API::SchemaDefinitions::ModObject  modObject) ;

/// @brief Method Create, addr 0xa028034, size 0x50, virtual false, abstract: false, final false
static inline ::Modio::Mods::Builder::ModBuilder* Create() ;

/// @brief Method Edit, addr 0xa02811c, size 0x58, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* Edit() ;

/// @brief Method Get, addr 0xa028f08, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* Get(int64_t  id) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<GetMod>d__119))]
/// @brief Method GetMod, addr 0xa029b48, size 0x134, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* GetMod(::Modio::Mods::ModId  modId, bool  forceRefresh, ::Modio::ModIndex*  tempIndex, bool  deferModInstallManagementRefresh) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<GetModDetailsFromServer>d__118))]
/// @brief Method GetModDetailsFromServer, addr 0xa029a40, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* GetModDetailsFromServer() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<GetMods>d__117))]
/// @brief Method GetMods, addr 0xa02992c, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* GetMods(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter, bool  forceRefresh) ;

/// @brief Method GetMods, addr 0xa029484, size 0x70, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* GetMods(::Modio::Mods::ModSearchFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<GetMods>d__120))]
/// @brief Method GetMods, addr 0xa029c7c, size 0x138, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* GetMods(::System::Collections::Generic::ICollection_1<int64_t>*  neededModIds, bool  forceRefresh, ::Modio::ModIndex*  tempIndex) ;

/// @brief Method InvokeModUpdated, addr 0xa02913c, size 0x1e0, virtual false, abstract: false, final false
inline void InvokeModUpdated(::Modio::Mods::ModChangeType  changeFlags) ;

/// @brief Method IsHidden, addr 0xa02a31c, size 0x20, virtual false, abstract: false, final false
inline bool IsHidden() ;

static inline ::Modio::Mods::Mod* New_ctor(::Modio::Mods::ModId  id) ;

static inline ::Modio::Mods::Mod* New_ctor(::Modio::API::SchemaDefinitions::ModObject  modObject) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<Purchase>d__126))]
/// @brief Method Purchase, addr 0xa02a038, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Purchase(bool  subscribeOnPurchase) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<RateMod>d__121))]
/// @brief Method RateMod, addr 0xa029db4, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RateMod(::Modio::Mods::ModRating  rating) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<RefreshPotentiallyHiddenCachedMods>d__130))]
/// @brief Method RefreshPotentiallyHiddenCachedMods, addr 0xa02a33c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RefreshPotentiallyHiddenCachedMods() ;

/// @brief Method RemoveChangeListener, addr 0xa027ee4, size 0x150, virtual false, abstract: false, final false
static inline void RemoveChangeListener(::Modio::Mods::ModChangeType  subscribedChange, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*  listener) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<Report>d__123))]
/// @brief Method Report, addr 0xa029ec8, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Report(::Modio::Reports::ReportType  reportType, ::Modio::Reports::ModNotWorkingReason  reportReason, ::StringW  contact, ::StringW  summary) ;

/// @brief Method SetCurrentUserRating, addr 0xa023f48, size 0x18, virtual false, abstract: false, final false
inline void SetCurrentUserRating(::Modio::Mods::ModRating  rating) ;

/// @brief Method SetIsEnabled, addr 0xa029464, size 0x10, virtual false, abstract: false, final false
inline void SetIsEnabled(bool  isEnabled) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Mod::<SetSubscribed>d__111))]
/// @brief Method SetSubscribed, addr 0xa029328, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SetSubscribed(bool  subscribed, bool  includeDependencies) ;

/// @brief Method Subscribe, addr 0xa02931c, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Subscribe(bool  includeDependencies) ;

/// @brief Method ToString, addr 0xa02a294, size 0x88, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UninstallOtherUserMod, addr 0xa02a150, size 0x144, virtual false, abstract: false, final false
inline void UninstallOtherUserMod(bool  force) ;

/// @brief Method Unsubscribe, addr 0xa029458, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Unsubscribe() ;

/// @brief Method UpdateLocalEnabledStatus, addr 0xa029474, size 0x10, virtual false, abstract: false, final false
inline void UpdateLocalEnabledStatus(bool  isEnabled) ;

/// @brief Method UpdateLocalPurchaseStatus, addr 0xa023700, size 0x10, virtual false, abstract: false, final false
inline void UpdateLocalPurchaseStatus(bool  isPurchased) ;

/// @brief Method UpdateLocalSubscriptionStatus, addr 0xa024a10, size 0x28, virtual false, abstract: false, final false
inline void UpdateLocalSubscriptionStatus(bool  isSubscribed) ;

/// @brief Method UpdateModfile, addr 0xa02a018, size 0x20, virtual false, abstract: false, final false
inline void UpdateModfile(::Modio::Mods::Modfile*  modfile) ;

/// [CompilerGenerated]
/// @brief Method <RateMod>g__UpdateStatsWithUserRating|121_0, addr 0xa02a4c0, size 0x38, virtual false, abstract: false, final false
inline void _RateMod_g__UpdateStatsWithUserRating_121_0(::Modio::Mods::ModRating  userRating) ;

constexpr ::System::Action* const& __cordl_internal_get_OnModUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnModUpdated() ;

constexpr ::Modio::Mods::ModCommunityOptions const& __cordl_internal_get__CommunityOptions_k__BackingField() const;

constexpr ::Modio::Mods::ModCommunityOptions& __cordl_internal_get__CommunityOptions_k__BackingField() ;

constexpr ::Modio::Users::UserProfile* const& __cordl_internal_get__Creator_k__BackingField() const;

constexpr ::Modio::Users::UserProfile*& __cordl_internal_get__Creator_k__BackingField() ;

constexpr ::Modio::Mods::ModRating const& __cordl_internal_get__CurrentUserRating_k__BackingField() const;

constexpr ::Modio::Mods::ModRating& __cordl_internal_get__CurrentUserRating_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateLive_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateLive_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateUpdated_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateUpdated_k__BackingField() ;

constexpr ::Modio::Mods::ModDependencies* const& __cordl_internal_get__Dependencies_k__BackingField() const;

constexpr ::Modio::Mods::ModDependencies*& __cordl_internal_get__Dependencies_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Description_k__BackingField() ;

constexpr ::Modio::Mods::Modfile* const& __cordl_internal_get__File_k__BackingField() const;

constexpr ::Modio::Mods::Modfile*& __cordl_internal_get__File_k__BackingField() ;

constexpr ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*> const& __cordl_internal_get__Gallery_k__BackingField() const;

constexpr ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>& __cordl_internal_get__Gallery_k__BackingField() ;

constexpr ::Modio::Mods::ModId const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::Modio::Mods::ModId& __cordl_internal_get__Id_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsEnabled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMonetized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMonetized_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPurchased_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPurchased_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSubscribed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSubscribed_k__BackingField() ;

constexpr ::Modio::API::SchemaDefinitions::ModObject const& __cordl_internal_get__LastModObject_k__BackingField() const;

constexpr ::Modio::API::SchemaDefinitions::ModObject& __cordl_internal_get__LastModObject_k__BackingField() ;

constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>* const& __cordl_internal_get__Logo_k__BackingField() const;

constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*& __cordl_internal_get__Logo_k__BackingField() ;

constexpr ::Modio::Mods::ModMaturityOptions const& __cordl_internal_get__MaturityOptions_k__BackingField() const;

constexpr ::Modio::Mods::ModMaturityOptions& __cordl_internal_get__MaturityOptions_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MetadataBlob_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MetadataBlob_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__MetadataKvps_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__MetadataKvps_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Price_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Price_k__BackingField() ;

constexpr ::Modio::Mods::ModStats* const& __cordl_internal_get__Stats_k__BackingField() const;

constexpr ::Modio::Mods::ModStats*& __cordl_internal_get__Stats_k__BackingField() ;

constexpr ::ArrayW<::Modio::Mods::ModTag*> const& __cordl_internal_get__Tags_k__BackingField() const;

constexpr ::ArrayW<::Modio::Mods::ModTag*>& __cordl_internal_get__Tags_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__summaryDecoded() const;

constexpr ::StringW& __cordl_internal_get__summaryDecoded() ;

constexpr ::StringW const& __cordl_internal_get__summaryHtmlEncoded() const;

constexpr ::StringW& __cordl_internal_get__summaryHtmlEncoded() ;

constexpr void __cordl_internal_set_OnModUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__CommunityOptions_k__BackingField(::Modio::Mods::ModCommunityOptions  value) ;

constexpr void __cordl_internal_set__Creator_k__BackingField(::Modio::Users::UserProfile*  value) ;

constexpr void __cordl_internal_set__CurrentUserRating_k__BackingField(::Modio::Mods::ModRating  value) ;

constexpr void __cordl_internal_set__DateLive_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__DateUpdated_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Dependencies_k__BackingField(::Modio::Mods::ModDependencies*  value) ;

constexpr void __cordl_internal_set__Description_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__File_k__BackingField(::Modio::Mods::Modfile*  value) ;

constexpr void __cordl_internal_set__Gallery_k__BackingField(::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(::Modio::Mods::ModId  value) ;

constexpr void __cordl_internal_set__IsEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsMonetized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsPurchased_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSubscribed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastModObject_k__BackingField(::Modio::API::SchemaDefinitions::ModObject  value) ;

constexpr void __cordl_internal_set__Logo_k__BackingField(::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  value) ;

constexpr void __cordl_internal_set__MaturityOptions_k__BackingField(::Modio::Mods::ModMaturityOptions  value) ;

constexpr void __cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MetadataKvps_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Price_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Stats_k__BackingField(::Modio::Mods::ModStats*  value) ;

constexpr void __cordl_internal_set__Tags_k__BackingField(::ArrayW<::Modio::Mods::ModTag*>  value) ;

constexpr void __cordl_internal_set__summaryDecoded(::StringW  value) ;

constexpr void __cordl_internal_set__summaryHtmlEncoded(::StringW  value) ;

/// @brief Method .ctor, addr 0xa0285b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::ModId  id) ;

/// @brief Method .ctor, addr 0xa0285e0, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::ModObject  modObject) ;

/// [CompilerGenerated]
/// @brief Method add_OnModUpdated, addr 0xa027c74, size 0x9c, virtual false, abstract: false, final false
inline void add_OnModUpdated(::System::Action*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>* getStaticF_ChangeSubscribers() ;

/// [CompilerGenerated]
/// @brief Method get_CommunityOptions, addr 0xa02849c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModCommunityOptions get_CommunityOptions() ;

/// [CompilerGenerated]
/// @brief Method get_Creator, addr 0xa02851c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Users::UserProfile* get_Creator() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentUserRating, addr 0xa02853c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModRating get_CurrentUserRating() ;

/// [CompilerGenerated]
/// @brief Method get_DateLive, addr 0xa02844c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateLive() ;

/// [CompilerGenerated]
/// @brief Method get_DateUpdated, addr 0xa02845c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateUpdated() ;

/// [CompilerGenerated]
/// @brief Method get_Dependencies, addr 0xa02852c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModDependencies* get_Dependencies() ;

/// [CompilerGenerated]
/// @brief Method get_Description, addr 0xa02843c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// [CompilerGenerated]
/// @brief Method get_File, addr 0xa0284bc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Modfile* get_File() ;

/// [CompilerGenerated]
/// @brief Method get_Gallery, addr 0xa02850c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*> get_Gallery() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0xa0283a0, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModId get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_IsEnabled, addr 0xa02856c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_IsMonetized, addr 0xa0284ec, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMonetized() ;

/// [CompilerGenerated]
/// @brief Method get_IsPurchased, addr 0xa02855c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPurchased() ;

/// [CompilerGenerated]
/// @brief Method get_IsSubscribed, addr 0xa02854c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSubscribed() ;

/// [CompilerGenerated]
/// @brief Method get_LastModObject, addr 0xa02857c, size 0x10, virtual false, abstract: false, final false
inline ::Modio::API::SchemaDefinitions::ModObject get_LastModObject() ;

/// [CompilerGenerated]
/// @brief Method get_Logo, addr 0xa0284fc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>* get_Logo() ;

/// [CompilerGenerated]
/// @brief Method get_MaturityOptions, addr 0xa0284ac, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModMaturityOptions get_MaturityOptions() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataBlob, addr 0xa02847c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MetadataBlob() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataKvps, addr 0xa02848c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_MetadataKvps() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xa0283a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Price, addr 0xa0284dc, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Price() ;

/// [CompilerGenerated]
/// @brief Method get_Stats, addr 0xa0284cc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModStats* get_Stats() ;

/// @brief Method get_Summary, addr 0xa0283b8, size 0x84, virtual false, abstract: false, final false
inline ::StringW get_Summary() ;

/// [CompilerGenerated]
/// @brief Method get_Tags, addr 0xa02846c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Modio::Mods::ModTag*> get_Tags() ;

/// [CompilerGenerated]
/// @brief Method remove_OnModUpdated, addr 0xa027d10, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnModUpdated(::System::Action*  value) ;

static inline void setStaticF_ChangeSubscribers(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CommunityOptions, addr 0xa0284a4, size 0x8, virtual false, abstract: false, final false
inline void set_CommunityOptions(::Modio::Mods::ModCommunityOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_Creator, addr 0xa028524, size 0x8, virtual false, abstract: false, final false
inline void set_Creator(::Modio::Users::UserProfile*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentUserRating, addr 0xa028544, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentUserRating(::Modio::Mods::ModRating  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateLive, addr 0xa028454, size 0x8, virtual false, abstract: false, final false
inline void set_DateLive(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateUpdated, addr 0xa028464, size 0x8, virtual false, abstract: false, final false
inline void set_DateUpdated(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Dependencies, addr 0xa028534, size 0x8, virtual false, abstract: false, final false
inline void set_Dependencies(::Modio::Mods::ModDependencies*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Description, addr 0xa028444, size 0x8, virtual false, abstract: false, final false
inline void set_Description(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_File, addr 0xa0284c4, size 0x8, virtual false, abstract: false, final false
inline void set_File(::Modio::Mods::Modfile*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Gallery, addr 0xa028514, size 0x8, virtual false, abstract: false, final false
inline void set_Gallery(::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsEnabled, addr 0xa028574, size 0x8, virtual false, abstract: false, final false
inline void set_IsEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMonetized, addr 0xa0284f4, size 0x8, virtual false, abstract: false, final false
inline void set_IsMonetized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPurchased, addr 0xa028564, size 0x8, virtual false, abstract: false, final false
inline void set_IsPurchased(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSubscribed, addr 0xa028554, size 0x8, virtual false, abstract: false, final false
inline void set_IsSubscribed(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastModObject, addr 0xa02858c, size 0x24, virtual false, abstract: false, final false
inline void set_LastModObject(::Modio::API::SchemaDefinitions::ModObject  value) ;

/// [CompilerGenerated]
/// @brief Method set_Logo, addr 0xa028504, size 0x8, virtual false, abstract: false, final false
inline void set_Logo(::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaturityOptions, addr 0xa0284b4, size 0x8, virtual false, abstract: false, final false
inline void set_MaturityOptions(::Modio::Mods::ModMaturityOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataBlob, addr 0xa028484, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataBlob(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataKvps, addr 0xa028494, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xa0283b0, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Price, addr 0xa0284e4, size 0x8, virtual false, abstract: false, final false
inline void set_Price(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Stats, addr 0xa0284d4, size 0x8, virtual false, abstract: false, final false
inline void set_Stats(::Modio::Mods::ModStats*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Tags, addr 0xa028474, size 0x8, virtual false, abstract: false, final false
inline void set_Tags(::ArrayW<::Modio::Mods::ModTag*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mod(Mod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mod(Mod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17582};

/// [CompilerGenerated]
/// @brief Field OnModUpdated, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___OnModUpdated;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Modio::Mods::ModId  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Description>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Description_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateLive>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____DateLive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateUpdated>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ____DateUpdated_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Tags>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::ModTag*>  ____Tags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataBlob>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____MetadataBlob_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataKvps>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____MetadataKvps_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CommunityOptions>k__BackingField, offset: 0x58, size: 0x4, def value: None
 ::Modio::Mods::ModCommunityOptions  ____CommunityOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaturityOptions>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::Modio::Mods::ModMaturityOptions  ____MaturityOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <File>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Modio::Mods::Modfile*  ____File_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Stats>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Modio::Mods::ModStats*  ____Stats_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Price>k__BackingField, offset: 0x70, size: 0x8, def value: None
 int64_t  ____Price_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsMonetized>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsMonetized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Logo>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  ____Logo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Gallery>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  ____Gallery_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Creator>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Modio::Users::UserProfile*  ____Creator_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Dependencies>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::Modio::Mods::ModDependencies*  ____Dependencies_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentUserRating>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::Modio::Mods::ModRating  ____CurrentUserRating_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsSubscribed>k__BackingField, offset: 0xa4, size: 0x1, def value: None
 bool  ____IsSubscribed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsPurchased>k__BackingField, offset: 0xa5, size: 0x1, def value: None
 bool  ____IsPurchased_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsEnabled>k__BackingField, offset: 0xa6, size: 0x1, def value: None
 bool  ____IsEnabled_k__BackingField;

/// @brief Field _summaryDecoded, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ____summaryDecoded;

/// @brief Field _summaryHtmlEncoded, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ____summaryHtmlEncoded;

/// [CompilerGenerated]
/// @brief Field <LastModObject>k__BackingField, offset: 0xb8, size: 0x270, def value: None
 ::Modio::API::SchemaDefinitions::ModObject  ____LastModObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Mod, ___OnModUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Name_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Description_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____DateLive_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____DateUpdated_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Tags_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____MetadataBlob_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____MetadataKvps_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____CommunityOptions_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____MaturityOptions_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____File_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Stats_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Price_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____IsMonetized_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Logo_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Gallery_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Creator_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____Dependencies_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____CurrentUserRating_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____IsSubscribed_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____IsPurchased_k__BackingField) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____IsEnabled_k__BackingField) == 0xa6, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____summaryDecoded) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____summaryHtmlEncoded) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Mod, ____LastModObject_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Mod) == 0x328, "Size mismatch!");

} // namespace end def Modio::Mods
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.Mod/<>c
class CORDL_TYPE Mod___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Mods::Mod___c*  __9;

/// @brief Field <>9__108_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__108_0, put=setStaticF___9__108_0)) ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  __9__108_0;

/// @brief Field <>9__108_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__108_1, put=setStaticF___9__108_1)) ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  __9__108_1;

/// @brief Field <>9__108_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__108_2, put=setStaticF___9__108_2)) ::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*  __9__108_2;

static inline ::Modio::Mods::Mod___c* New_ctor() ;

/// @brief Method <ApplyDetailsFromModObject>b__108_0, addr 0xa02a5ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW _ApplyDetailsFromModObject_b__108_0(::Modio::API::SchemaDefinitions::MetadataKvpObject  kvp) ;

/// @brief Method <ApplyDetailsFromModObject>b__108_1, addr 0xa02a5f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW _ApplyDetailsFromModObject_b__108_1(::Modio::API::SchemaDefinitions::MetadataKvpObject  kvp) ;

/// @brief Method <ApplyDetailsFromModObject>b__108_2, addr 0xa02a5fc, size 0x108, virtual false, abstract: false, final false
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>* _ApplyDetailsFromModObject_b__108_2(::Modio::API::SchemaDefinitions::ImageObject  imageObject) ;

/// @brief Method .ctor, addr 0xa02a5e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Mods::Mod___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>* getStaticF___9__108_0() ;

static inline ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>* getStaticF___9__108_1() ;

static inline ::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>* getStaticF___9__108_2() ;

static inline void setStaticF___9(::Modio::Mods::Mod___c*  value) ;

static inline void setStaticF___9__108_0(::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  value) ;

static inline void setStaticF___9__108_1(::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  value) ;

static inline void setStaticF___9__108_2(::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mod___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mod___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mod___c(Mod___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mod___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mod___c(Mod___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Mods::Mod___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods

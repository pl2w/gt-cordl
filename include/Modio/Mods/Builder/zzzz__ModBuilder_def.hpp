#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/Builder/zzzz__ChangeFlags_def.hpp"
#include "Modio/Mods/Builder/zzzz__ImageFormat_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_MonetizationOptions_def.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModBuilder)
namespace GlobalNamespace {
struct ModBuilder_MonetizationOptions;
}
namespace GlobalNamespace {
struct ModBuilder__GalleryZipFromFilePaths_d__126;
}
namespace GlobalNamespace {
struct ModBuilder__PublishDependencies_d__119;
}
namespace GlobalNamespace {
struct ModBuilder__PublishEdits_d__116;
}
namespace GlobalNamespace {
struct ModBuilder__PublishGallery_d__117;
}
namespace GlobalNamespace {
struct ModBuilder__PublishMetadataKvps_d__118;
}
namespace GlobalNamespace {
struct ModBuilder__PublishMonetization_d__121;
}
namespace GlobalNamespace {
struct ModBuilder__PublishNewMod_d__113;
}
namespace GlobalNamespace {
struct ModBuilder__PublishRemainingChanges_d__115;
}
namespace GlobalNamespace {
struct ModBuilder__Publish_d__112;
}
namespace Modio::API {
struct ModioAPIFileParameter;
}
namespace Modio::Mods::Builder {
struct ChangeFlags;
}
namespace Modio::Mods::Builder {
struct ImageFormat;
}
namespace Modio::Mods::Builder {
class ModBuilder___c;
}
namespace Modio::Mods::Builder {
class ModfileBuilder;
}
namespace Modio::Mods {
struct ModCommunityOptions;
}
namespace Modio::Mods {
struct ModMaturityOptions;
}
namespace Modio::Mods {
class ModTag;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
namespace Modio::Mods::Builder {
class ModBuilder;
}
namespace Modio::Mods::Builder {
class ModBuilder___c;
}
// Write type traits
MARK_REF_T(::Modio::Mods::Builder::ModBuilder*);
MARK_REF_T(::Modio::Mods::Builder::ModBuilder___c*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Builder::ModBuilder*, "Modio.Mods.Builder", "ModBuilder");
DEFINE_IL2CPP_CLASS(::Modio::Mods::Builder::ModBuilder___c*, "Modio.Mods.Builder", "ModBuilder/<>c");
// Dependencies Modio.Mods.Builder.ChangeFlags, Modio.Mods.Builder.ImageFormat, Modio.Mods.Builder.ModBuilder::MonetizationOptions, Modio.Mods.ModCommunityOptions, Modio.Mods.ModMaturityOptions, System.Object
namespace Modio::Mods::Builder {
// Is value type: false
// CS Name: Modio.Mods.Builder.ModBuilder
class CORDL_TYPE ModBuilder : public ::System::Object {
public:
// Declarations
using MonetizationOptions = ::GlobalNamespace::ModBuilder_MonetizationOptions;

using _GalleryZipFromFilePaths_d__126 = ::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126;

using _PublishDependencies_d__119 = ::GlobalNamespace::ModBuilder__PublishDependencies_d__119;

using _PublishEdits_d__116 = ::GlobalNamespace::ModBuilder__PublishEdits_d__116;

using _PublishGallery_d__117 = ::GlobalNamespace::ModBuilder__PublishGallery_d__117;

using _PublishMetadataKvps_d__118 = ::GlobalNamespace::ModBuilder__PublishMetadataKvps_d__118;

using _PublishMonetization_d__121 = ::GlobalNamespace::ModBuilder__PublishMonetization_d__121;

using _PublishNewMod_d__113 = ::GlobalNamespace::ModBuilder__PublishNewMod_d__113;

using _PublishRemainingChanges_d__115 = ::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115;

using _Publish_d__112 = ::GlobalNamespace::ModBuilder__Publish_d__112;

using __c = ::Modio::Mods::Builder::ModBuilder___c;

 __declspec(property(get=get_CommunityOptions, put=set_CommunityOptions)) ::Modio::Mods::ModCommunityOptions  CommunityOptions;

 __declspec(property(get=get_Dependencies, put=set_Dependencies)) ::System::Collections::Generic::List_1<int64_t>*  Dependencies;

 __declspec(property(get=get_Description, put=set_Description)) ::StringW  Description;

 __declspec(property(get=get_EditTarget, put=set_EditTarget)) ::Modio::Mods::Mod*  EditTarget;

 __declspec(property(get=get_GalleryFilePaths, put=set_GalleryFilePaths)) ::ArrayW<::StringW>  GalleryFilePaths;

 __declspec(property(get=get_IsEditMode)) bool  IsEditMode;

 __declspec(property(get=get_IsLimitedStock, put=set_IsLimitedStock)) bool  IsLimitedStock;

 __declspec(property(get=get_IsMonetized, put=set_IsMonetized)) bool  IsMonetized;

 __declspec(property(get=get_LogoFilePath, put=set_LogoFilePath)) ::StringW  LogoFilePath;

 __declspec(property(get=get_MaturityOptions, put=set_MaturityOptions)) ::Modio::Mods::ModMaturityOptions  MaturityOptions;

 __declspec(property(get=get_MetadataBlob, put=set_MetadataBlob)) ::StringW  MetadataBlob;

 __declspec(property(get=get_MetadataKvps, put=set_MetadataKvps)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  MetadataKvps;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Price, put=set_Price)) int32_t  Price;

 __declspec(property(get=get_Results)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*  Results;

 __declspec(property(get=get_Stock, put=set_Stock)) int32_t  Stock;

 __declspec(property(get=get_Summary, put=set_Summary)) ::StringW  Summary;

 __declspec(property(get=get_Tags, put=set_Tags)) ::ArrayW<::StringW>  Tags;

 __declspec(property(get=get_Visible, put=set_Visible)) bool  Visible;

/// @brief Field <CommunityOptions>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__CommunityOptions_k__BackingField, put=__cordl_internal_set__CommunityOptions_k__BackingField)) ::Modio::Mods::ModCommunityOptions  _CommunityOptions_k__BackingField;

/// @brief Field <Dependencies>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Dependencies_k__BackingField, put=__cordl_internal_set__Dependencies_k__BackingField)) ::System::Collections::Generic::List_1<int64_t>*  _Dependencies_k__BackingField;

/// @brief Field <Description>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Description_k__BackingField, put=__cordl_internal_set__Description_k__BackingField)) ::StringW  _Description_k__BackingField;

/// @brief Field <EditTarget>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__EditTarget_k__BackingField, put=__cordl_internal_set__EditTarget_k__BackingField)) ::Modio::Mods::Mod*  _EditTarget_k__BackingField;

/// @brief Field <GalleryFilePaths>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__GalleryFilePaths_k__BackingField, put=__cordl_internal_set__GalleryFilePaths_k__BackingField)) ::ArrayW<::StringW>  _GalleryFilePaths_k__BackingField;

/// @brief Field <IsLimitedStock>k__BackingField, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLimitedStock_k__BackingField, put=__cordl_internal_set__IsLimitedStock_k__BackingField)) bool  _IsLimitedStock_k__BackingField;

/// @brief Field <IsMonetized>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMonetized_k__BackingField, put=__cordl_internal_set__IsMonetized_k__BackingField)) bool  _IsMonetized_k__BackingField;

/// @brief Field <LogoFilePath>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__LogoFilePath_k__BackingField, put=__cordl_internal_set__LogoFilePath_k__BackingField)) ::StringW  _LogoFilePath_k__BackingField;

/// @brief Field <MaturityOptions>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaturityOptions_k__BackingField, put=__cordl_internal_set__MaturityOptions_k__BackingField)) ::Modio::Mods::ModMaturityOptions  _MaturityOptions_k__BackingField;

/// @brief Field <MetadataBlob>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataBlob_k__BackingField, put=__cordl_internal_set__MetadataBlob_k__BackingField)) ::StringW  _MetadataBlob_k__BackingField;

/// @brief Field <MetadataKvps>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataKvps_k__BackingField, put=__cordl_internal_set__MetadataKvps_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _MetadataKvps_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Price>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Price_k__BackingField, put=__cordl_internal_set__Price_k__BackingField)) int32_t  _Price_k__BackingField;

/// @brief Field <Stock>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Stock_k__BackingField, put=__cordl_internal_set__Stock_k__BackingField)) int32_t  _Stock_k__BackingField;

/// @brief Field <Summary>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Summary_k__BackingField, put=__cordl_internal_set__Summary_k__BackingField)) ::StringW  _Summary_k__BackingField;

/// @brief Field <Tags>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tags_k__BackingField, put=__cordl_internal_set__Tags_k__BackingField)) ::ArrayW<::StringW>  _Tags_k__BackingField;

/// @brief Field <Visible>k__BackingField, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__Visible_k__BackingField, put=__cordl_internal_set__Visible_k__BackingField)) bool  _Visible_k__BackingField;

/// @brief Field _appendingDependencies, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__appendingDependencies, put=__cordl_internal_set__appendingDependencies)) bool  _appendingDependencies;

/// @brief Field _appendingGallery, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__appendingGallery, put=__cordl_internal_set__appendingGallery)) bool  _appendingGallery;

/// @brief Field _commitErrors, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__commitErrors, put=__cordl_internal_set__commitErrors)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*  _commitErrors;

/// @brief Field _logoBytes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__logoBytes, put=__cordl_internal_set__logoBytes)) ::ArrayW<uint8_t>  _logoBytes;

/// @brief Field _logoBytesFormat, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__logoBytesFormat, put=__cordl_internal_set__logoBytesFormat)) ::Modio::Mods::Builder::ImageFormat  _logoBytesFormat;

/// @brief Field _modfileBuilder, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__modfileBuilder, put=__cordl_internal_set__modfileBuilder)) ::Modio::Mods::Builder::ModfileBuilder*  _modfileBuilder;

/// @brief Field _monetizationOptions, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__monetizationOptions, put=__cordl_internal_set__monetizationOptions)) ::GlobalNamespace::ModBuilder_MonetizationOptions  _monetizationOptions;

/// @brief Field _pendingChanges, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__pendingChanges, put=__cordl_internal_set__pendingChanges)) ::Modio::Mods::Builder::ChangeFlags  _pendingChanges;

/// @brief Method AppendDependencies, addr 0xa0325dc, size 0xa4, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendDependencies(::System::Collections::Generic::ICollection_1<int64_t>*  dependencies) ;

/// @brief Method AppendDependencies, addr 0xa032680, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendDependencies(int64_t  dependency) ;

/// @brief Method AppendGallery, addr 0xa032460, size 0x88, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendGallery(::StringW  galleryImageFilePath) ;

/// @brief Method AppendGallery, addr 0xa0323bc, size 0xa4, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendGallery(::System::Collections::Generic::ICollection_1<::StringW>*  galleryImageFilePaths) ;

/// @brief Method AppendMetadataBlob, addr 0xa03205c, size 0x48, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendMetadataBlob(::StringW  data) ;

/// @brief Method AppendTags, addr 0xa031fac, size 0x88, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendTags(::StringW  tag) ;

/// @brief Method AppendTags, addr 0xa031f10, size 0x9c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* AppendTags(::System::Collections::Generic::ICollection_1<::StringW>*  tags) ;

/// @brief Method EditModfile, addr 0xa0326f8, size 0x84, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* EditModfile() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<GalleryZipFromFilePaths>d__126))]
/// @brief Method GalleryZipFromFilePaths, addr 0xa033ee4, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>* GalleryZipFromFilePaths(::System::Collections::Generic::ICollection_1<::StringW>*  imageFilePaths) ;

/// @brief Method GetChangeSpecificPublishTask, addr 0xa033808, size 0x280, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GetChangeSpecificPublishTask(::Modio::Mods::Builder::ChangeFlags  flag) ;

/// @brief Method GetExtensionFromFormat, addr 0xa033ff8, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW GetExtensionFromFormat(::Modio::Mods::Builder::ImageFormat  format) ;

/// @brief Method LogoFromByteArray, addr 0xa0330a4, size 0x144, virtual false, abstract: false, final false
inline ::Modio::API::ModioAPIFileParameter LogoFromByteArray() ;

/// @brief Method LogoFromFilePath, addr 0xa032eac, size 0x1f8, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> LogoFromFilePath(::StringW  filePath) ;

static inline ::Modio::Mods::Builder::ModBuilder* New_ctor() ;

static inline ::Modio::Mods::Builder::ModBuilder* New_ctor(::Modio::Mods::Mod*  editTarget) ;

/// @brief Method OverwriteCommunityOptions, addr 0xa0327dc, size 0x14, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* OverwriteCommunityOptions(::Modio::Mods::ModCommunityOptions  communityOptions) ;

/// @brief Method OverwriteMaturityOptions, addr 0xa0327ac, size 0x14, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* OverwriteMaturityOptions(::Modio::Mods::ModMaturityOptions  maturityOptions) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<Publish>d__112))]
/// @brief Method Publish, addr 0xa032a04, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Publish() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishDependencies>d__119))]
/// @brief Method PublishDependencies, addr 0xa0335e0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishDependencies() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishEdits>d__116))]
/// @brief Method PublishEdits, addr 0xa0332c4, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* PublishEdits() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishGallery>d__117))]
/// @brief Method PublishGallery, addr 0xa0333d0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishGallery() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishMetadataKvps>d__118))]
/// @brief Method PublishMetadataKvps, addr 0xa0334d8, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishMetadataKvps() ;

/// @brief Method PublishModfile, addr 0xa0336e8, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishModfile() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishMonetization>d__121))]
/// @brief Method PublishMonetization, addr 0xa033700, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishMonetization() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishNewMod>d__113))]
/// @brief Method PublishNewMod, addr 0xa032b0c, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* PublishNewMod() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModBuilder::<PublishRemainingChanges>d__115))]
/// @brief Method PublishRemainingChanges, addr 0xa0331e8, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* PublishRemainingChanges() ;

/// @brief Method SetCommunityOptions, addr 0xa0327c0, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetCommunityOptions(::Modio::Mods::ModCommunityOptions  communityOptions) ;

/// @brief Method SetDependencies, addr 0xa0324e8, size 0x7c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetDependencies(::System::Collections::Generic::ICollection_1<int64_t>*  dependencies) ;

/// @brief Method SetDependencies, addr 0xa032564, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetDependencies(int64_t  dependency) ;

/// @brief Method SetDescription, addr 0xa031de8, size 0x28, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetDescription(::StringW  description) ;

/// @brief Method SetGallery, addr 0xa032334, size 0x88, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetGallery(::StringW  galleryImageFilePath) ;

/// @brief Method SetGallery, addr 0xa0322b8, size 0x7c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetGallery(::System::Collections::Generic::ICollection_1<::StringW>*  galleryImageFilePaths) ;

/// @brief Method SetLimitedStock, addr 0xa0328fc, size 0x2c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetLimitedStock(bool  isLimitedStock) ;

/// @brief Method SetLogo, addr 0xa032280, size 0x38, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetLogo(::ArrayW<uint8_t>  imageData, ::Modio::Mods::Builder::ImageFormat  format) ;

/// @brief Method SetLogo, addr 0xa032258, size 0x28, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetLogo(::StringW  logoFilePath) ;

/// @brief Method SetMaturityOptions, addr 0xa032790, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetMaturityOptions(::Modio::Mods::ModMaturityOptions  maturityOptions) ;

/// @brief Method SetMetadataBlob, addr 0xa032034, size 0x28, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetMetadataBlob(::StringW  data) ;

/// @brief Method SetMetadataKvps, addr 0xa0320a4, size 0x1b4, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetMetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  kvps) ;

/// @brief Method SetMonetized, addr 0xa0327f0, size 0x30, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetMonetized(bool  isMonetized) ;

/// @brief Method SetName, addr 0xa031d98, size 0x28, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetName(::StringW  name) ;

/// @brief Method SetPrice, addr 0xa032820, size 0xdc, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetPrice(int32_t  price) ;

/// @brief Method SetStockAmount, addr 0xa032928, size 0xdc, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetStockAmount(int32_t  stockAmount) ;

/// @brief Method SetSummary, addr 0xa031dc0, size 0x28, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetSummary(::StringW  summary) ;

/// @brief Method SetTags, addr 0xa031e88, size 0x88, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetTags(::StringW  tag) ;

/// @brief Method SetTags, addr 0xa031e10, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetTags(::System::Collections::Generic::ICollection_1<::StringW>*  tags) ;

/// @brief Method SetVisible, addr 0xa03277c, size 0x14, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* SetVisible(bool  isVisible) ;

/// @brief Method TryGetLogoFileParameter, addr 0xa032c18, size 0x294, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> TryGetLogoFileParameter() ;

/// @brief Method ValidateImageFilePath, addr 0xa033a88, size 0x45c, virtual false, abstract: false, final false
static inline bool ValidateImageFilePath(::StringW  filePath) ;

/// [CompilerGenerated]
/// @brief Method <PublishRemainingChanges>b__115_0, addr 0xa0340d0, size 0x10, virtual false, abstract: false, final false
inline bool _PublishRemainingChanges_b__115_0(::Modio::Mods::Builder::ChangeFlags  flag) ;

constexpr ::Modio::Mods::ModCommunityOptions const& __cordl_internal_get__CommunityOptions_k__BackingField() const;

constexpr ::Modio::Mods::ModCommunityOptions& __cordl_internal_get__CommunityOptions_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get__Dependencies_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get__Dependencies_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Description_k__BackingField() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__EditTarget_k__BackingField() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__EditTarget_k__BackingField() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__GalleryFilePaths_k__BackingField() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__GalleryFilePaths_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLimitedStock_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLimitedStock_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMonetized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMonetized_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LogoFilePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LogoFilePath_k__BackingField() ;

constexpr ::Modio::Mods::ModMaturityOptions const& __cordl_internal_get__MaturityOptions_k__BackingField() const;

constexpr ::Modio::Mods::ModMaturityOptions& __cordl_internal_get__MaturityOptions_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MetadataBlob_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MetadataBlob_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__MetadataKvps_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__MetadataKvps_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Price_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Price_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Stock_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Stock_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Summary_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Summary_k__BackingField() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__Tags_k__BackingField() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__Tags_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Visible_k__BackingField() const;

constexpr bool& __cordl_internal_get__Visible_k__BackingField() ;

constexpr bool const& __cordl_internal_get__appendingDependencies() const;

constexpr bool& __cordl_internal_get__appendingDependencies() ;

constexpr bool const& __cordl_internal_get__appendingGallery() const;

constexpr bool& __cordl_internal_get__appendingGallery() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>* const& __cordl_internal_get__commitErrors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*& __cordl_internal_get__commitErrors() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__logoBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__logoBytes() ;

constexpr ::Modio::Mods::Builder::ImageFormat const& __cordl_internal_get__logoBytesFormat() const;

constexpr ::Modio::Mods::Builder::ImageFormat& __cordl_internal_get__logoBytesFormat() ;

constexpr ::Modio::Mods::Builder::ModfileBuilder* const& __cordl_internal_get__modfileBuilder() const;

constexpr ::Modio::Mods::Builder::ModfileBuilder*& __cordl_internal_get__modfileBuilder() ;

constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions const& __cordl_internal_get__monetizationOptions() const;

constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions& __cordl_internal_get__monetizationOptions() ;

constexpr ::Modio::Mods::Builder::ChangeFlags const& __cordl_internal_get__pendingChanges() const;

constexpr ::Modio::Mods::Builder::ChangeFlags& __cordl_internal_get__pendingChanges() ;

constexpr void __cordl_internal_set__CommunityOptions_k__BackingField(::Modio::Mods::ModCommunityOptions  value) ;

constexpr void __cordl_internal_set__Dependencies_k__BackingField(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set__Description_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__EditTarget_k__BackingField(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__GalleryFilePaths_k__BackingField(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__IsLimitedStock_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsMonetized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LogoFilePath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MaturityOptions_k__BackingField(::Modio::Mods::ModMaturityOptions  value) ;

constexpr void __cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MetadataKvps_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Price_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Stock_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Summary_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Tags_k__BackingField(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__Visible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__appendingDependencies(bool  value) ;

constexpr void __cordl_internal_set__appendingGallery(bool  value) ;

constexpr void __cordl_internal_set__commitErrors(::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*  value) ;

constexpr void __cordl_internal_set__logoBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__logoBytesFormat(::Modio::Mods::Builder::ImageFormat  value) ;

constexpr void __cordl_internal_set__modfileBuilder(::Modio::Mods::Builder::ModfileBuilder*  value) ;

constexpr void __cordl_internal_set__monetizationOptions(::GlobalNamespace::ModBuilder_MonetizationOptions  value) ;

constexpr void __cordl_internal_set__pendingChanges(::Modio::Mods::Builder::ChangeFlags  value) ;

/// @brief Method .ctor, addr 0xa028084, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa028174, size 0x22c, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  editTarget) ;

/// [CompilerGenerated]
/// @brief Method get_CommunityOptions, addr 0xa031d28, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModCommunityOptions get_CommunityOptions() ;

/// [CompilerGenerated]
/// @brief Method get_Dependencies, addr 0xa031cf8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int64_t>* get_Dependencies() ;

/// [CompilerGenerated]
/// @brief Method get_Description, addr 0xa031c98, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// [CompilerGenerated]
/// @brief Method get_EditTarget, addr 0xa031d88, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_EditTarget() ;

/// [CompilerGenerated]
/// @brief Method get_GalleryFilePaths, addr 0xa031cb8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_GalleryFilePaths() ;

/// @brief Method get_IsEditMode, addr 0xa031d78, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEditMode() ;

/// [CompilerGenerated]
/// @brief Method get_IsLimitedStock, addr 0xa031d48, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLimitedStock() ;

/// [CompilerGenerated]
/// @brief Method get_IsMonetized, addr 0xa031d38, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMonetized() ;

/// [CompilerGenerated]
/// @brief Method get_LogoFilePath, addr 0xa031ca8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LogoFilePath() ;

/// [CompilerGenerated]
/// @brief Method get_MaturityOptions, addr 0xa031d18, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModMaturityOptions get_MaturityOptions() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataBlob, addr 0xa031cd8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MetadataBlob() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataKvps, addr 0xa031ce8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_MetadataKvps() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xa031c78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Price, addr 0xa031d58, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Price() ;

/// @brief Method get_Results, addr 0xa031b3c, size 0x13c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>* get_Results() ;

/// [CompilerGenerated]
/// @brief Method get_Stock, addr 0xa031d68, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Stock() ;

/// [CompilerGenerated]
/// @brief Method get_Summary, addr 0xa031c88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Summary() ;

/// [CompilerGenerated]
/// @brief Method get_Tags, addr 0xa031cc8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_Tags() ;

/// [CompilerGenerated]
/// @brief Method get_Visible, addr 0xa031d08, size 0x8, virtual false, abstract: false, final false
inline bool get_Visible() ;

/// [CompilerGenerated]
/// @brief Method set_CommunityOptions, addr 0xa031d30, size 0x8, virtual false, abstract: false, final false
inline void set_CommunityOptions(::Modio::Mods::ModCommunityOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_Dependencies, addr 0xa031d00, size 0x8, virtual false, abstract: false, final false
inline void set_Dependencies(::System::Collections::Generic::List_1<int64_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Description, addr 0xa031ca0, size 0x8, virtual false, abstract: false, final false
inline void set_Description(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_EditTarget, addr 0xa031d90, size 0x8, virtual false, abstract: false, final false
inline void set_EditTarget(::Modio::Mods::Mod*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GalleryFilePaths, addr 0xa031cc0, size 0x8, virtual false, abstract: false, final false
inline void set_GalleryFilePaths(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsLimitedStock, addr 0xa031d50, size 0x8, virtual false, abstract: false, final false
inline void set_IsLimitedStock(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMonetized, addr 0xa031d40, size 0x8, virtual false, abstract: false, final false
inline void set_IsMonetized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LogoFilePath, addr 0xa031cb0, size 0x8, virtual false, abstract: false, final false
inline void set_LogoFilePath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaturityOptions, addr 0xa031d20, size 0x8, virtual false, abstract: false, final false
inline void set_MaturityOptions(::Modio::Mods::ModMaturityOptions  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataBlob, addr 0xa031ce0, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataBlob(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataKvps, addr 0xa031cf0, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xa031c80, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Price, addr 0xa031d60, size 0x8, virtual false, abstract: false, final false
inline void set_Price(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Stock, addr 0xa031d70, size 0x8, virtual false, abstract: false, final false
inline void set_Stock(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Summary, addr 0xa031c90, size 0x8, virtual false, abstract: false, final false
inline void set_Summary(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Tags, addr 0xa031cd0, size 0x8, virtual false, abstract: false, final false
inline void set_Tags(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Visible, addr 0xa031d10, size 0x8, virtual false, abstract: false, final false
inline void set_Visible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModBuilder(ModBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModBuilder(ModBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17616};

/// @brief Field _commitErrors, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*  ____commitErrors;

/// @brief Field _pendingChanges, offset: 0x18, size: 0x4, def value: None
 ::Modio::Mods::Builder::ChangeFlags  ____pendingChanges;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Summary>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Summary_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Description>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Description_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LogoFilePath>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____LogoFilePath_k__BackingField;

/// @brief Field _logoBytes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____logoBytes;

/// @brief Field _logoBytesFormat, offset: 0x48, size: 0x4, def value: None
 ::Modio::Mods::Builder::ImageFormat  ____logoBytesFormat;

/// [CompilerGenerated]
/// @brief Field <GalleryFilePaths>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____GalleryFilePaths_k__BackingField;

/// @brief Field _appendingGallery, offset: 0x58, size: 0x1, def value: None
 bool  ____appendingGallery;

/// [CompilerGenerated]
/// @brief Field <Tags>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____Tags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataBlob>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____MetadataBlob_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataKvps>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____MetadataKvps_k__BackingField;

/// @brief Field _modfileBuilder, offset: 0x78, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModfileBuilder*  ____modfileBuilder;

/// [CompilerGenerated]
/// @brief Field <Dependencies>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ____Dependencies_k__BackingField;

/// @brief Field _appendingDependencies, offset: 0x88, size: 0x1, def value: None
 bool  ____appendingDependencies;

/// [CompilerGenerated]
/// @brief Field <Visible>k__BackingField, offset: 0x89, size: 0x1, def value: None
 bool  ____Visible_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaturityOptions>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::Modio::Mods::ModMaturityOptions  ____MaturityOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CommunityOptions>k__BackingField, offset: 0x90, size: 0x4, def value: None
 ::Modio::Mods::ModCommunityOptions  ____CommunityOptions_k__BackingField;

/// @brief Field _monetizationOptions, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::ModBuilder_MonetizationOptions  ____monetizationOptions;

/// [CompilerGenerated]
/// @brief Field <IsMonetized>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____IsMonetized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsLimitedStock>k__BackingField, offset: 0x99, size: 0x1, def value: None
 bool  ____IsLimitedStock_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Price>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____Price_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Stock>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____Stock_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EditTarget>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____EditTarget_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____commitErrors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____pendingChanges) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Name_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Summary_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Description_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____LogoFilePath_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____logoBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____logoBytesFormat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____GalleryFilePaths_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____appendingGallery) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Tags_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____MetadataBlob_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____MetadataKvps_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____modfileBuilder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Dependencies_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____appendingDependencies) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Visible_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____MaturityOptions_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____CommunityOptions_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____monetizationOptions) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____IsMonetized_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____IsLimitedStock_k__BackingField) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Price_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____Stock_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModBuilder, ____EditTarget_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Builder::ModBuilder) == 0xb0, "Size mismatch!");

} // namespace end def Modio::Mods::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Mods::Builder {
// Is value type: false
// CS Name: Modio.Mods.Builder.ModBuilder/<>c
class CORDL_TYPE ModBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Mods::Builder::ModBuilder___c*  __9;

/// @brief Field <>9__115_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__115_1, put=setStaticF___9__115_1)) ::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*  __9__115_1;

/// @brief Field <>9__118_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__118_0, put=setStaticF___9__118_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  __9__118_0;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*  __9__1_0;

/// @brief Field <>9__81_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_0, put=setStaticF___9__81_0)) ::System::Func_2<::Modio::Mods::ModTag*,::StringW>*  __9__81_0;

static inline ::Modio::Mods::Builder::ModBuilder___c* New_ctor() ;

/// @brief Method <PublishMetadataKvps>b__118_0, addr 0xa0341f8, size 0x54, virtual false, abstract: false, final false
inline ::StringW _PublishMetadataKvps_b__118_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kvp) ;

/// @brief Method <PublishRemainingChanges>b__115_1, addr 0xa0341ec, size 0xc, virtual false, abstract: false, final false
inline bool _PublishRemainingChanges_b__115_1(::Modio::Mods::Builder::ChangeFlags  flag) ;

/// @brief Method <.ctor>b__81_0, addr 0xa0341d8, size 0x14, virtual false, abstract: false, final false
inline ::StringW __ctor_b__81_0(::Modio::Mods::ModTag*  tag) ;

/// @brief Method .ctor, addr 0xa034148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Results>b__1_0, addr 0xa034150, size 0x88, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*> _get_Results_b__1_0(::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>  yeet) ;

static inline ::Modio::Mods::Builder::ModBuilder___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>* getStaticF___9__115_1() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* getStaticF___9__118_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>* getStaticF___9__1_0() ;

static inline ::System::Func_2<::Modio::Mods::ModTag*,::StringW>* getStaticF___9__81_0() ;

static inline void setStaticF___9(::Modio::Mods::Builder::ModBuilder___c*  value) ;

static inline void setStaticF___9__115_1(::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*  value) ;

static inline void setStaticF___9__118_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*  value) ;

static inline void setStaticF___9__81_0(::System::Func_2<::Modio::Mods::ModTag*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModBuilder___c(ModBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModBuilder___c(ModBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Mods::Builder::ModBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods::Builder

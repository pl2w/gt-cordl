#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateBuildWithManagedContainerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AzureVmSize_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateBuildWithManagedContainerResponse)
namespace PlayFab::MultiplayerModels {
class AssetReference;
}
namespace PlayFab::MultiplayerModels {
class BuildRegion;
}
namespace PlayFab::MultiplayerModels {
class GameCertificateReference;
}
namespace PlayFab::MultiplayerModels {
class InstrumentationConfiguration;
}
namespace PlayFab::MultiplayerModels {
class Port;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CreateBuildWithManagedContainerResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse*, "PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerResponse");
// Dependencies PlayFab.MultiplayerModels.AzureVmSize, PlayFab.MultiplayerModels.ContainerFlavor, PlayFab.SharedModels.PlayFabResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateBuildWithManagedContainerResponse
class CORDL_TYPE CreateBuildWithManagedContainerResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field BuildName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildName, put=__cordl_internal_set_BuildName)) ::StringW  BuildName;

/// @brief Field ContainerFlavor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_ContainerFlavor, put=__cordl_internal_set_ContainerFlavor)) ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  ContainerFlavor;

/// @brief Field CreationTime, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_CreationTime, put=__cordl_internal_set_CreationTime)) ::System::Nullable_1<::System::DateTime>  CreationTime;

/// @brief Field GameAssetReferences, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameAssetReferences, put=__cordl_internal_set_GameAssetReferences)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*  GameAssetReferences;

/// @brief Field GameCertificateReferences, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCertificateReferences, put=__cordl_internal_set_GameCertificateReferences)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*  GameCertificateReferences;

/// @brief Field GameWorkingDirectory, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameWorkingDirectory, put=__cordl_internal_set_GameWorkingDirectory)) ::StringW  GameWorkingDirectory;

/// @brief Field InstrumentationConfiguration, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstrumentationConfiguration, put=__cordl_internal_set_InstrumentationConfiguration)) ::PlayFab::MultiplayerModels::InstrumentationConfiguration*  InstrumentationConfiguration;

/// @brief Field Metadata, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Metadata;

/// @brief Field MultiplayerServerCountPerVm, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_MultiplayerServerCountPerVm, put=__cordl_internal_set_MultiplayerServerCountPerVm)) int32_t  MultiplayerServerCountPerVm;

/// @brief Field OsPlatform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OsPlatform, put=__cordl_internal_set_OsPlatform)) ::StringW  OsPlatform;

/// @brief Field Ports, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ports, put=__cordl_internal_set_Ports)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  Ports;

/// @brief Field RegionConfigurations, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionConfigurations, put=__cordl_internal_set_RegionConfigurations)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  RegionConfigurations;

/// @brief Field ServerType, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerType, put=__cordl_internal_set_ServerType)) ::StringW  ServerType;

/// @brief Field StartMultiplayerServerCommand, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartMultiplayerServerCommand, put=__cordl_internal_set_StartMultiplayerServerCommand)) ::StringW  StartMultiplayerServerCommand;

/// @brief Field VmSize, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_VmSize, put=__cordl_internal_set_VmSize)) ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  VmSize;

static inline ::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::StringW const& __cordl_internal_get_BuildName() const;

constexpr ::StringW& __cordl_internal_get_BuildName() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> const& __cordl_internal_get_ContainerFlavor() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& __cordl_internal_get_ContainerFlavor() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_CreationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_CreationTime() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>* const& __cordl_internal_get_GameAssetReferences() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*& __cordl_internal_get_GameAssetReferences() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>* const& __cordl_internal_get_GameCertificateReferences() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*& __cordl_internal_get_GameCertificateReferences() ;

constexpr ::StringW const& __cordl_internal_get_GameWorkingDirectory() const;

constexpr ::StringW& __cordl_internal_get_GameWorkingDirectory() ;

constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration* const& __cordl_internal_get_InstrumentationConfiguration() const;

constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration*& __cordl_internal_get_InstrumentationConfiguration() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Metadata() ;

constexpr int32_t const& __cordl_internal_get_MultiplayerServerCountPerVm() const;

constexpr int32_t& __cordl_internal_get_MultiplayerServerCountPerVm() ;

constexpr ::StringW const& __cordl_internal_get_OsPlatform() const;

constexpr ::StringW& __cordl_internal_get_OsPlatform() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& __cordl_internal_get_Ports() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& __cordl_internal_get_Ports() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* const& __cordl_internal_get_RegionConfigurations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& __cordl_internal_get_RegionConfigurations() ;

constexpr ::StringW const& __cordl_internal_get_ServerType() const;

constexpr ::StringW& __cordl_internal_get_ServerType() ;

constexpr ::StringW const& __cordl_internal_get_StartMultiplayerServerCommand() const;

constexpr ::StringW& __cordl_internal_get_StartMultiplayerServerCommand() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> const& __cordl_internal_get_VmSize() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& __cordl_internal_get_VmSize() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_BuildName(::StringW  value) ;

constexpr void __cordl_internal_set_ContainerFlavor(::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  value) ;

constexpr void __cordl_internal_set_CreationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_GameAssetReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*  value) ;

constexpr void __cordl_internal_set_GameCertificateReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*  value) ;

constexpr void __cordl_internal_set_GameWorkingDirectory(::StringW  value) ;

constexpr void __cordl_internal_set_InstrumentationConfiguration(::PlayFab::MultiplayerModels::InstrumentationConfiguration*  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_MultiplayerServerCountPerVm(int32_t  value) ;

constexpr void __cordl_internal_set_OsPlatform(::StringW  value) ;

constexpr void __cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value) ;

constexpr void __cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  value) ;

constexpr void __cordl_internal_set_ServerType(::StringW  value) ;

constexpr void __cordl_internal_set_StartMultiplayerServerCommand(::StringW  value) ;

constexpr void __cordl_internal_set_VmSize(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  value) ;

/// @brief Method .ctor, addr 0xa840868, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateBuildWithManagedContainerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateBuildWithManagedContainerResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateBuildWithManagedContainerResponse(CreateBuildWithManagedContainerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateBuildWithManagedContainerResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateBuildWithManagedContainerResponse(CreateBuildWithManagedContainerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19615};

/// @brief Field BuildId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field BuildName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___BuildName;

/// @brief Field ContainerFlavor, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  ___ContainerFlavor;

/// @brief Field CreationTime, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___CreationTime;

/// @brief Field GameAssetReferences, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*  ___GameAssetReferences;

/// @brief Field GameCertificateReferences, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*  ___GameCertificateReferences;

/// @brief Field GameWorkingDirectory, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___GameWorkingDirectory;

/// @brief Field InstrumentationConfiguration, offset: 0x68, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::InstrumentationConfiguration*  ___InstrumentationConfiguration;

/// @brief Field Metadata, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Metadata;

/// @brief Field MultiplayerServerCountPerVm, offset: 0x78, size: 0x4, def value: None
 int32_t  ___MultiplayerServerCountPerVm;

/// @brief Field OsPlatform, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___OsPlatform;

/// @brief Field Ports, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  ___Ports;

/// @brief Field RegionConfigurations, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  ___RegionConfigurations;

/// @brief Field ServerType, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___ServerType;

/// @brief Field StartMultiplayerServerCommand, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___StartMultiplayerServerCommand;

/// @brief Field VmSize, offset: 0xa8, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  ___VmSize;

/// @brief Size padding 0xa8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___BuildId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___BuildName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___ContainerFlavor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___CreationTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___GameAssetReferences) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___GameCertificateReferences) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___GameWorkingDirectory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___InstrumentationConfiguration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___Metadata) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___MultiplayerServerCountPerVm) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___OsPlatform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___Ports) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___RegionConfigurations) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___ServerType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___StartMultiplayerServerCommand) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse, ___VmSize) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse) == 0xa8, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

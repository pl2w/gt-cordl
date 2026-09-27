#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateBuildWithCustomContainerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AzureVmSize_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateBuildWithCustomContainerRequest)
namespace PlayFab::MultiplayerModels {
class AssetReferenceParams;
}
namespace PlayFab::MultiplayerModels {
class BuildRegionParams;
}
namespace PlayFab::MultiplayerModels {
class ContainerImageReference;
}
namespace PlayFab::MultiplayerModels {
class GameCertificateReferenceParams;
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
class CreateBuildWithCustomContainerRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*, "PlayFab.MultiplayerModels", "CreateBuildWithCustomContainerRequest");
// Dependencies PlayFab.MultiplayerModels.AzureVmSize, PlayFab.MultiplayerModels.ContainerFlavor, PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateBuildWithCustomContainerRequest
class CORDL_TYPE CreateBuildWithCustomContainerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildName, put=__cordl_internal_set_BuildName)) ::StringW  BuildName;

/// @brief Field ContainerFlavor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ContainerFlavor, put=__cordl_internal_set_ContainerFlavor)) ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  ContainerFlavor;

/// @brief Field ContainerImageReference, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContainerImageReference, put=__cordl_internal_set_ContainerImageReference)) ::PlayFab::MultiplayerModels::ContainerImageReference*  ContainerImageReference;

/// @brief Field ContainerRunCommand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContainerRunCommand, put=__cordl_internal_set_ContainerRunCommand)) ::StringW  ContainerRunCommand;

/// @brief Field GameAssetReferences, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameAssetReferences, put=__cordl_internal_set_GameAssetReferences)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*  GameAssetReferences;

/// @brief Field GameCertificateReferences, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCertificateReferences, put=__cordl_internal_set_GameCertificateReferences)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*  GameCertificateReferences;

/// @brief Field Metadata, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Metadata;

/// @brief Field MultiplayerServerCountPerVm, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_MultiplayerServerCountPerVm, put=__cordl_internal_set_MultiplayerServerCountPerVm)) int32_t  MultiplayerServerCountPerVm;

/// @brief Field Ports, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ports, put=__cordl_internal_set_Ports)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  Ports;

/// @brief Field RegionConfigurations, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RegionConfigurations, put=__cordl_internal_set_RegionConfigurations)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  RegionConfigurations;

/// @brief Field VmSize, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_VmSize, put=__cordl_internal_set_VmSize)) ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  VmSize;

static inline ::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildName() const;

constexpr ::StringW& __cordl_internal_get_BuildName() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> const& __cordl_internal_get_ContainerFlavor() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& __cordl_internal_get_ContainerFlavor() ;

constexpr ::PlayFab::MultiplayerModels::ContainerImageReference* const& __cordl_internal_get_ContainerImageReference() const;

constexpr ::PlayFab::MultiplayerModels::ContainerImageReference*& __cordl_internal_get_ContainerImageReference() ;

constexpr ::StringW const& __cordl_internal_get_ContainerRunCommand() const;

constexpr ::StringW& __cordl_internal_get_ContainerRunCommand() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>* const& __cordl_internal_get_GameAssetReferences() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*& __cordl_internal_get_GameAssetReferences() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>* const& __cordl_internal_get_GameCertificateReferences() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*& __cordl_internal_get_GameCertificateReferences() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Metadata() ;

constexpr int32_t const& __cordl_internal_get_MultiplayerServerCountPerVm() const;

constexpr int32_t& __cordl_internal_get_MultiplayerServerCountPerVm() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& __cordl_internal_get_Ports() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& __cordl_internal_get_Ports() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* const& __cordl_internal_get_RegionConfigurations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& __cordl_internal_get_RegionConfigurations() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> const& __cordl_internal_get_VmSize() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& __cordl_internal_get_VmSize() ;

constexpr void __cordl_internal_set_BuildName(::StringW  value) ;

constexpr void __cordl_internal_set_ContainerFlavor(::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  value) ;

constexpr void __cordl_internal_set_ContainerImageReference(::PlayFab::MultiplayerModels::ContainerImageReference*  value) ;

constexpr void __cordl_internal_set_ContainerRunCommand(::StringW  value) ;

constexpr void __cordl_internal_set_GameAssetReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*  value) ;

constexpr void __cordl_internal_set_GameCertificateReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_MultiplayerServerCountPerVm(int32_t  value) ;

constexpr void __cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value) ;

constexpr void __cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  value) ;

constexpr void __cordl_internal_set_VmSize(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  value) ;

/// @brief Method .ctor, addr 0xa840850, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateBuildWithCustomContainerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateBuildWithCustomContainerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateBuildWithCustomContainerRequest(CreateBuildWithCustomContainerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateBuildWithCustomContainerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateBuildWithCustomContainerRequest(CreateBuildWithCustomContainerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19612};

/// @brief Field BuildName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildName;

/// @brief Field ContainerFlavor, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  ___ContainerFlavor;

/// @brief Field ContainerImageReference, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::ContainerImageReference*  ___ContainerImageReference;

/// @brief Field ContainerRunCommand, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ContainerRunCommand;

/// @brief Field GameAssetReferences, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*  ___GameAssetReferences;

/// @brief Field GameCertificateReferences, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*  ___GameCertificateReferences;

/// @brief Field Metadata, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Metadata;

/// @brief Field MultiplayerServerCountPerVm, offset: 0x58, size: 0x4, def value: None
 int32_t  ___MultiplayerServerCountPerVm;

/// @brief Field Ports, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  ___Ports;

/// @brief Field RegionConfigurations, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  ___RegionConfigurations;

/// @brief Field VmSize, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  ___VmSize;

/// @brief Size padding 0x70 - 0x80 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___BuildName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___ContainerFlavor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___ContainerImageReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___ContainerRunCommand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___GameAssetReferences) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___GameCertificateReferences) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___Metadata) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___MultiplayerServerCountPerVm) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___Ports) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___RegionConfigurations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest, ___VmSize) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest) == 0x70, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

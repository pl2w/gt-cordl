#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateBuildWithManagedContainerRequest.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AzureVmSize_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateBuildWithManagedContainerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetReferenceParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegionParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GameCertificateReferenceParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__InstrumentationConfiguration_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::*)()>(&::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_BuildName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_BuildName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_BuildName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildName = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_ContainerFlavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_ContainerFlavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_ContainerFlavor(::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerFlavor = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameAssetReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameAssetReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_GameAssetReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameAssetReferences = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameCertificateReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameCertificateReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_GameCertificateReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCertificateReferences = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameWorkingDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameWorkingDirectory;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_GameWorkingDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameWorkingDirectory;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_GameWorkingDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameWorkingDirectory = value;
}
constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_InstrumentationConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentationConfiguration;
}
constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_InstrumentationConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentationConfiguration;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_InstrumentationConfiguration(::PlayFab::MultiplayerModels::InstrumentationConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstrumentationConfiguration = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_MultiplayerServerCountPerVm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_MultiplayerServerCountPerVm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_MultiplayerServerCountPerVm(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiplayerServerCountPerVm = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_Ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_Ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ports = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_RegionConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_RegionConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionConfigurations = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_StartMultiplayerServerCommand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMultiplayerServerCommand;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_StartMultiplayerServerCommand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMultiplayerServerCommand;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_StartMultiplayerServerCommand(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartMultiplayerServerCommand = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_VmSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> const& PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_get_VmSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::__cordl_internal_set_VmSize(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmSize = value;
}
inline void PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest* PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest()   {
}

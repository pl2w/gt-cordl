#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateBuildWithCustomContainerRequest.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AzureVmSize_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateBuildWithCustomContainerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetReferenceParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegionParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerImageReference_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GameCertificateReferenceParams_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::*)()>(&::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_BuildName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_BuildName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_BuildName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildName = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerFlavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerFlavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_ContainerFlavor(::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerFlavor = value;
}
constexpr ::PlayFab::MultiplayerModels::ContainerImageReference*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerImageReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerImageReference;
}
constexpr ::PlayFab::MultiplayerModels::ContainerImageReference* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerImageReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerImageReference;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_ContainerImageReference(::PlayFab::MultiplayerModels::ContainerImageReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerImageReference = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerRunCommand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerRunCommand;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_ContainerRunCommand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerRunCommand;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_ContainerRunCommand(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerRunCommand = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_GameAssetReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_GameAssetReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_GameAssetReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReferenceParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameAssetReferences = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_GameCertificateReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_GameCertificateReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_GameCertificateReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReferenceParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCertificateReferences = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_MultiplayerServerCountPerVm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_MultiplayerServerCountPerVm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_MultiplayerServerCountPerVm(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiplayerServerCountPerVm = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_Ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_Ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ports = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_RegionConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_RegionConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionConfigurations = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_VmSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> const& PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_get_VmSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::__cordl_internal_set_VmSize(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmSize = value;
}
inline void PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest* PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest()   {
}

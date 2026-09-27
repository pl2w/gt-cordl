#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetBuildResponse.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AzureVmSize_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerFlavor_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetBuildResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetReference_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ContainerImageReference_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GameCertificateReference_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__InstrumentationConfiguration_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetBuildResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetBuildResponse::*)()>(&::PlayFab::MultiplayerModels::GetBuildResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetBuildResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_BuildName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildStatus;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_BuildStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildStatus;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_BuildStatus(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildStatus = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ContainerFlavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor> const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ContainerFlavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerFlavor;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_ContainerFlavor(::System::Nullable_1<::PlayFab::MultiplayerModels::ContainerFlavor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerFlavor = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ContainerRunCommand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerRunCommand;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ContainerRunCommand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerRunCommand;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_ContainerRunCommand(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerRunCommand = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_CreationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_CreationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationTime;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_CreationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreationTime = value;
}
constexpr ::PlayFab::MultiplayerModels::ContainerImageReference*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_CustomGameContainerImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomGameContainerImage;
}
constexpr ::PlayFab::MultiplayerModels::ContainerImageReference* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_CustomGameContainerImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomGameContainerImage;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_CustomGameContainerImage(::PlayFab::MultiplayerModels::ContainerImageReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomGameContainerImage = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_GameAssetReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_GameAssetReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameAssetReferences;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_GameAssetReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::AssetReference*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameAssetReferences = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_GameCertificateReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_GameCertificateReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCertificateReferences;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_GameCertificateReferences(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::GameCertificateReference*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCertificateReferences = value;
}
constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_InstrumentationConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentationConfiguration;
}
constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_InstrumentationConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentationConfiguration;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_InstrumentationConfiguration(::PlayFab::MultiplayerModels::InstrumentationConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstrumentationConfiguration = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_MultiplayerServerCountPerVm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr int32_t const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_MultiplayerServerCountPerVm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerCountPerVm;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_MultiplayerServerCountPerVm(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiplayerServerCountPerVm = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_OsPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OsPlatform;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_OsPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OsPlatform;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_OsPlatform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OsPlatform = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_Ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_Ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ports = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_RegionConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_RegionConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionConfigurations = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ServerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerType;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_ServerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerType;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_ServerType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerType = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_StartMultiplayerServerCommand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMultiplayerServerCommand;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_StartMultiplayerServerCommand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartMultiplayerServerCommand;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_StartMultiplayerServerCommand(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartMultiplayerServerCommand = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_VmSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize> const& PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_get_VmSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmSize;
}
constexpr void PlayFab::MultiplayerModels::GetBuildResponse::__cordl_internal_set_VmSize(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmSize>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmSize = value;
}
inline void PlayFab::MultiplayerModels::GetBuildResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetBuildResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetBuildResponse* PlayFab::MultiplayerModels::GetBuildResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetBuildResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetBuildResponse::GetBuildResponse()   {
}

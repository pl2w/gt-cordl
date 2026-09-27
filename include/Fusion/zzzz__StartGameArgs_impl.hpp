#pragma once
// IWYU pragma private; include "Fusion/StartGameArgs.hpp"
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_impl.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/zzzz__GameMode_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Fusion/zzzz__StartGameArgs_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
#include "Fusion/zzzz__HostMigrationToken_def.hpp"
#include "Fusion/zzzz__INetworkObjectInitializer_def.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__INetworkSceneManager_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::StartGameArgs.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::StartGameArgs::*)()>(&::Fusion::StartGameArgs::ToString)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x5fdbf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::StartGameArgs>(),
                    {::i2c::class_of<::Fusion::StartGameArgs>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Fusion::StartGameArgs::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::StartGameArgs>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "GameMode", ty: "::Fusion::GameMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionNameGenerator", ty: "::System::Func_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomPublicAddress", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectProvider", ty: "::Fusion::INetworkObjectProvider*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SceneManager", ty: "::Fusion::INetworkSceneManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Updater", ty: "::Fusion::INetworkRunnerUpdater*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectInitializer", ty: "::Fusion::INetworkObjectInitializer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scene", ty: "::System::Nullable_1<::Fusion::NetworkSceneInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnGameStarted", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisableNATPunchthrough", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomCallbackInterfaces", ty: "::ArrayW<::System::Type*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionToken", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionProperties", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsOpen", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsVisible", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MatchmakingMode", ty: "::System::Nullable_1<::Fusion::Photon::Realtime::MatchmakingMode>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UseDefaultPhotonCloudPorts", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomLobbyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomSTUNServer", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AuthValues", ty: "::Fusion::Photon::Realtime::AuthenticationValues*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomPhotonAppSettings", ty: "::Fusion::Photon::Realtime::FusionAppSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EnableClientSessionCreation", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HostMigrationToken", ty: "::Fusion::HostMigrationToken*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HostMigrationResume", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StartGameCancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UseCachedRegions", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::StartGameArgs::StartGameArgs(::Fusion::GameMode  GameMode, ::StringW  SessionName, ::System::Func_1<::StringW>*  SessionNameGenerator, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  CustomPublicAddress, ::Fusion::INetworkObjectProvider*  ObjectProvider, ::Fusion::INetworkSceneManager*  SceneManager, ::Fusion::INetworkRunnerUpdater*  Updater, ::Fusion::INetworkObjectInitializer*  ObjectInitializer, ::Fusion::NetworkProjectConfig*  Config, ::System::Nullable_1<int32_t>  PlayerCount, ::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted, bool  DisableNATPunchthrough, ::ArrayW<::System::Type*>  CustomCallbackInterfaces, ::ArrayW<uint8_t>  ConnectionToken, ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  SessionProperties, ::System::Nullable_1<bool>  IsOpen, ::System::Nullable_1<bool>  IsVisible, ::System::Nullable_1<::Fusion::Photon::Realtime::MatchmakingMode>  MatchmakingMode, ::System::Nullable_1<bool>  UseDefaultPhotonCloudPorts, ::StringW  CustomLobbyName, ::StringW  CustomSTUNServer, ::Fusion::Photon::Realtime::AuthenticationValues*  AuthValues, ::Fusion::Photon::Realtime::FusionAppSettings*  CustomPhotonAppSettings, ::System::Nullable_1<bool>  EnableClientSessionCreation, ::Fusion::HostMigrationToken*  HostMigrationToken, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume, ::System::Threading::CancellationToken  StartGameCancellationToken, ::System::Nullable_1<bool>  UseCachedRegions) noexcept  {
this->GameMode = GameMode;
this->SessionName = SessionName;
this->SessionNameGenerator = SessionNameGenerator;
this->Address = Address;
this->CustomPublicAddress = CustomPublicAddress;
this->ObjectProvider = ObjectProvider;
this->SceneManager = SceneManager;
this->Updater = Updater;
this->ObjectInitializer = ObjectInitializer;
this->Config = Config;
this->PlayerCount = PlayerCount;
this->Scene = Scene;
this->OnGameStarted = OnGameStarted;
this->DisableNATPunchthrough = DisableNATPunchthrough;
this->CustomCallbackInterfaces = CustomCallbackInterfaces;
this->ConnectionToken = ConnectionToken;
this->SessionProperties = SessionProperties;
this->IsOpen = IsOpen;
this->IsVisible = IsVisible;
this->MatchmakingMode = MatchmakingMode;
this->UseDefaultPhotonCloudPorts = UseDefaultPhotonCloudPorts;
this->CustomLobbyName = CustomLobbyName;
this->CustomSTUNServer = CustomSTUNServer;
this->AuthValues = AuthValues;
this->CustomPhotonAppSettings = CustomPhotonAppSettings;
this->EnableClientSessionCreation = EnableClientSessionCreation;
this->HostMigrationToken = HostMigrationToken;
this->HostMigrationResume = HostMigrationResume;
this->StartGameCancellationToken = StartGameCancellationToken;
this->UseCachedRegions = UseCachedRegions;
}
// Ctor Parameters []
constexpr ::Fusion::StartGameArgs::StartGameArgs()   {
}

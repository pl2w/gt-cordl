#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerInitializeArgs.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_impl.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "Fusion/zzzz__INetworkObjectInitializer_def.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__INetworkSceneManager_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunnerInitializeArgs.get_IsSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunnerInitializeArgs::*)()>(&::Fusion::NetworkRunnerInitializeArgs::get_IsSinglePlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fda8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerInitializeArgs>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkRunnerInitializeArgs::get_IsSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerInitializeArgs>(),
                        {"get_IsSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Scene", ty: "::System::Nullable_1<::Fusion::NetworkSceneInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PublicAddress", ty: "::System::Nullable_1<::Fusion::Sockets::NetAddress>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SimulationMode", ty: "::System::Nullable_1<::Fusion::SimulationModes>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputWordCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SceneInfoWordCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Config", ty: "::Fusion::NetworkProjectConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnGameStarted", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectProvider", ty: "::Fusion::INetworkObjectProvider*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SceneManager", ty: "::Fusion::INetworkSceneManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Updater", ty: "::Fusion::INetworkRunnerUpdater*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectInitializer", ty: "::Fusion::INetworkObjectInitializer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomCallbackInterfaces", ty: "::ArrayW<::System::Type*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ConnectionToken", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeId", ty: "::System::Nullable_1<::Fusion::NetworkId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeTick", ty: "::System::Nullable_1<::Fusion::Tick>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeState", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HostMigrationResume", ty: "::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkRunnerInitializeArgs::NetworkRunnerInitializeArgs(::System::Nullable_1<::Fusion::NetworkSceneInfo>  Scene, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  Address, ::System::Nullable_1<::Fusion::Sockets::NetAddress>  PublicAddress, ::System::Nullable_1<int32_t>  PlayerCount, ::System::Nullable_1<::Fusion::SimulationModes>  SimulationMode, ::System::Nullable_1<int32_t>  InputWordCount, ::System::Nullable_1<int32_t>  SceneInfoWordCount, ::Fusion::NetworkProjectConfig*  Config, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  OnGameStarted, ::Fusion::INetworkObjectProvider*  ObjectProvider, ::Fusion::INetworkSceneManager*  SceneManager, ::Fusion::INetworkRunnerUpdater*  Updater, ::Fusion::INetworkObjectInitializer*  ObjectInitializer, ::ArrayW<::System::Type*>  CustomCallbackInterfaces, ::ArrayW<uint8_t>  ConnectionToken, ::System::Nullable_1<::Fusion::NetworkId>  ResumeId, ::System::Nullable_1<::Fusion::Tick>  ResumeTick, ::ArrayW<uint8_t>  ResumeState, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  HostMigrationResume) noexcept  {
this->Scene = Scene;
this->Address = Address;
this->PublicAddress = PublicAddress;
this->PlayerCount = PlayerCount;
this->SimulationMode = SimulationMode;
this->InputWordCount = InputWordCount;
this->SceneInfoWordCount = SceneInfoWordCount;
this->Config = Config;
this->OnGameStarted = OnGameStarted;
this->ObjectProvider = ObjectProvider;
this->SceneManager = SceneManager;
this->Updater = Updater;
this->ObjectInitializer = ObjectInitializer;
this->CustomCallbackInterfaces = CustomCallbackInterfaces;
this->ConnectionToken = ConnectionToken;
this->ResumeId = ResumeId;
this->ResumeTick = ResumeTick;
this->ResumeState = ResumeState;
this->HostMigrationResume = HostMigrationResume;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerInitializeArgs::NetworkRunnerInitializeArgs()   {
}

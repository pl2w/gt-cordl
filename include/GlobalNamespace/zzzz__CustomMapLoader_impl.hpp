#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapLoader.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/zzzz__LightmapData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapLoader_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapDescriptor_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapPackageInfo_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapAccessDoor_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapLoader_LoadZoneRequest_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapLoader_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterParameters_def.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SetZoneDynamicLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::CustomMapLoader::SetZoneDynamicLighting)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59a9ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetZoneDynamicLighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.InitOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::InitOnLoad)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x59a9c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader::*)()>(&::GlobalNamespace::CustomMapLoader::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59aa220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader::*)()>(&::GlobalNamespace::CustomMapLoader::Start)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x59aa380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*, ::System::Action_1<bool>*, ::System::Action_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::CustomMapLoader::Initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59aa670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*>(), ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::StringW)>(&::GlobalNamespace::CustomMapLoader::LoadMap)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x59aa728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadMap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.OpenDoorToMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::OpenDoorToMap)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59aab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OpenDoorToMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadAssetBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(int64_t, ::StringW, ::System::Action_2<bool,bool>*)>(&::GlobalNamespace::CustomMapLoader::LoadAssetBundle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59aaaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadAssetBundle", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<bool,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadInitialSceneNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::LoadInitialSceneNames)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x59aac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadInitialSceneNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.OnAssetBundleLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool)>(&::GlobalNamespace::CustomMapLoader::OnAssetBundleLoaded)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x59aae54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OnAssetBundleLoaded", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadInitialScenesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::ArrayW<int32_t>)>(&::GlobalNamespace::CustomMapLoader::LoadInitialScenesCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59ac2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadInitialScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.OnInitialLoadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool)>(&::GlobalNamespace::CustomMapLoader::OnInitialLoadComplete)> {
  constexpr static std::size_t size = 0xc3c;
  constexpr static std::size_t addrs = 0x59ab674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OnInitialLoadComplete", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadScenesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::ArrayW<int32_t>, ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*)>(&::GlobalNamespace::CustomMapLoader::LoadScenesCoroutine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59ac37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadSceneFromAssetBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(int32_t, ::System::Action_3<bool,bool,::StringW>*, bool, int32_t, int32_t)>(&::GlobalNamespace::CustomMapLoader::LoadSceneFromAssetBundle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59ac40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadSceneFromAssetBundle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_3<bool,bool,::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SanitizeObjectRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::SanitizeObjectRecursive)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59ac4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SanitizeObjectRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SanitizeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::SanitizeObject)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x59ac608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SanitizeObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ResolveVirtualStumpColliderOverlaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::CustomMapLoader::ResolveVirtualStumpColliderOverlaps)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x59acd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResolveVirtualStumpColliderOverlaps", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.FinalizeSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::GT_CustomMapSupportRuntime::MapDescriptor*, bool, int32_t, int32_t)>(&::GlobalNamespace::CustomMapLoader::FinalizeSceneLoad)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59ad270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"FinalizeSceneLoad", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ProcessChildObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::GameObject*, bool, int32_t, int32_t)>(&::GlobalNamespace::CustomMapLoader::ProcessChildObjects)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59ad32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ProcessChildObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.InitializeComponentsPhaseOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::InitializeComponentsPhaseOne)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59ad3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitializeComponentsPhaseOne", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.InitializeComponentsPhaseTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::InitializeComponentsPhaseTwo)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x59b1630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitializeComponentsPhaseTwo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SetupReviveStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::SetupReviveStation)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x59b12e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupReviveStation", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SetupCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::SetupCollisions)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x59ad444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupCollisions", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ValidateTeleporterDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::CustomMapLoader::ValidateTeleporterDestination)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x59b1acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ValidateTeleporterDestination", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ValidateStorePlaceholderPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::ValidateStorePlaceholderPosition)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x59b2004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ValidateStorePlaceholderPosition", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ReplaceDataOnlyScripts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::ReplaceDataOnlyScripts)> {
  constexpr static std::size_t size = 0xec4;
  constexpr static std::size_t addrs = 0x59ad7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplaceDataOnlyScripts", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ReplaceGravityDataOnlyScripts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::ReplaceGravityDataOnlyScripts)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x59b2524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplaceGravityDataOnlyScripts", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ReplacePlaceholders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::ReplacePlaceholders)> {
  constexpr static std::size_t size = 0x27dc;
  constexpr static std::size_t addrs = 0x59ae668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplacePlaceholders", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.SetupDynamicLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::SetupDynamicLight)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x59b0e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupDynamicLight", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.StoreMapEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CustomMapLoader::StoreMapEntity)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59b1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"StoreMapEntity", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.CacheLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::CacheLightmaps)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x59b2838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CacheLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Texture2D*>, ::ArrayW<::UnityEngine::Texture2D*>)>(&::GlobalNamespace::CustomMapLoader::LoadLightmaps)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x59b2c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadLightmaps", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ResetToInitialZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::CustomMapLoader::ResetToInitialZone)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x59b3104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResetToInitialZone", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadZoneTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::System::Action_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::CustomMapLoader::LoadZoneTriggered)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x59b3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadZoneTriggered", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadZoneCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::GlobalNamespace::CustomMapLoader::LoadZoneCoroutine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59b38b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadZoneCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.CloseDoorAndUnloadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::CustomMapLoader::CloseDoorAndUnloadMap)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59b3c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CloseDoorAndUnloadMap", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.CloseDoorAndUnloadMapCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GlobalNamespace::CustomMapLoader::CloseDoorAndUnloadMapCoroutine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b3e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CloseDoorAndUnloadMapCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.RequestAbortMapLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::RequestAbortMapLoad)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59b3e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"RequestAbortMapLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.AbortMapLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GlobalNamespace::CustomMapLoader::AbortMapLoad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59ac324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"AbortMapLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.UnloadMapCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GlobalNamespace::CustomMapLoader::UnloadMapCoroutine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b3f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadMapCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.AbortSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(int32_t)>(&::GlobalNamespace::CustomMapLoader::AbortSceneLoad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59b3f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"AbortSceneLoad", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.UnloadScenesCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::ArrayW<int32_t>)>(&::GlobalNamespace::CustomMapLoader::UnloadScenesCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59b3fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.UnloadSceneCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(int32_t, ::System::Action*)>(&::GlobalNamespace::CustomMapLoader::UnloadSceneCoroutine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59b405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadSceneCoroutine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.RemoveUnloadingStorePrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::CustomMapLoader::RemoveUnloadingStorePrefabs)> {
  constexpr static std::size_t size = 0xa1c;
  constexpr static std::size_t addrs = 0x59b40e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"RemoveUnloadingStorePrefabs", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.CleanupPlaceholders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::CleanupPlaceholders)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59b4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CleanupPlaceholders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.ResetLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)()>(&::GlobalNamespace::CustomMapLoader::ResetLightmaps)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b4c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResetLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.UnloadLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapLoader::UnloadLightmaps)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x59b2f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetSceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::CustomMapLoader::GetSceneIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59ab570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetSceneNameFromFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::CustomMapLoader::GetSceneNameFromFilePath)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59b4cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetSceneNameFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetPackageInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GT_CustomMapSupportRuntime::MapPackageInfo* (*)(::StringW)>(&::GlobalNamespace::CustomMapLoader::GetPackageInfo)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x59b4d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetPackageInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapModId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b4f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapModFileId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapModFileId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b4fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapModFileId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapSupportVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapSupportVersion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59b5014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapSupportVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapGravityZoneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapGravityZoneCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b507c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapGravityZoneCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapSizeChangerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapSizeChangerCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b50d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapSizeChangerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapHandHoldCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapHandHoldCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapHandHoldCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_LoadedMapMapperAssetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapLoader::get_LoadedMapMapperAssetCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b5184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapMapperAssetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.set_CanLoadEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::CustomMapLoader::set_CanLoadEntities)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59b51dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"set_CanLoadEntities", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.get_CanLoadEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::get_CanLoadEntities)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_CanLoadEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IsMapLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::IsMapLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59b3da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsMapLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IsMapLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::CustomMapLoader::IsMapLoaded)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x59aa93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsMapLoaded", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IsLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::IsLoading)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b5294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsLoading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetLoadingMapModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GlobalNamespace::CustomMapLoader::GetLoadingMapModId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59b52ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetLoadingMapModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetRoomSizeForCurrentlyLoadedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)()>(&::GlobalNamespace::CustomMapLoader::GetRoomSizeForCurrentlyLoadedMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59b5344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetRoomSizeForCurrentlyLoadedMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IsCustomScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::CustomMapLoader::IsCustomScene)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59b53bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsCustomScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetLuauGamemodeScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::CustomMapLoader::GetLuauGamemodeScript)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59b543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetLuauGamemodeScript", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IsDevModeEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::IsDevModeEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59b54c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsDevModeEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.GetCustomMapsDefaultSpawnLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(&::GlobalNamespace::CustomMapLoader::GetCustomMapsDefaultSpawnLocation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59b5548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetCustomMapsDefaultSpawnLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.LoadedMapWantsHoldingHandsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapLoader::LoadedMapWantsHoldingHandsDisabled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59b55d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadedMapWantsHoldingHandsDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader::*)()>(&::GlobalNamespace::CustomMapLoader::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59b56dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader::*)()>(&::GlobalNamespace::CustomMapLoader::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59b57dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultNexusGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultNexusGroupId;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultNexusGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultNexusGroupId;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_defaultNexusGroupId(::UnityW<::GlobalNamespace::NexusGroupId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultNexusGroupId = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_CustomMapsDefaultSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomMapsDefaultSpawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_CustomMapsDefaultSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomMapsDefaultSpawnLocation;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_CustomMapsDefaultSpawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomMapsDefaultSpawnLocation = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapAccessDoor>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_accessDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDoor;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapAccessDoor> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_accessDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDoor;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_accessDoor(::UnityW<::GlobalNamespace::CustomMapAccessDoor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accessDoor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_publicJoinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicJoinTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_publicJoinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicJoinTrigger;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_publicJoinTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicJoinTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_dayNightManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_dayNightManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ghostReactorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ghostReactorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorManager = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_placeholderParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_placeholderParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderParent;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_placeholderParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeholderParent = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_leafGliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafGliders;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_leafGliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafGliders;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_leafGliders(::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafGliders = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_leafGlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafGlider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_leafGlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafGlider;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_leafGlider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafGlider = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_gliderWindVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gliderWindVolume;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_gliderWindVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gliderWindVolume;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_gliderWindVolume(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gliderWindVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_waterVolumePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolumePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_waterVolumePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolumePrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_waterVolumePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterVolumePrefab = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultWaterParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultWaterParameters;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultWaterParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultWaterParameters;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_defaultWaterParameters(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultWaterParameters = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultLavaParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLavaParameters;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultLavaParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLavaParameters;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_defaultLavaParameters(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLavaParameters = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_forceVolumePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceVolumePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_forceVolumePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceVolumePrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_forceVolumePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceVolumePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_atmPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_atmPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_atmPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_atmNoShellPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmNoShellPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_atmNoShellPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmNoShellPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_atmNoShellPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmNoShellPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeDisplayStandPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeDisplayStandPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeDisplayStandPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeDisplayStandPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_storeDisplayStandPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeDisplayStandPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeCheckoutCounterPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCheckoutCounterPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeCheckoutCounterPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCheckoutCounterPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_storeCheckoutCounterPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeCheckoutCounterPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeTryOnConsolePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeTryOnConsolePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeTryOnConsolePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeTryOnConsolePrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_storeTryOnConsolePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeTryOnConsolePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeTryOnAreaPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeTryOnAreaPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_storeTryOnAreaPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeTryOnAreaPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_storeTryOnAreaPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeTryOnAreaPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_hoverboardDispenserPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardDispenserPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_hoverboardDispenserPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverboardDispenserPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_hoverboardDispenserPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverboardDispenserPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ropeSwingPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ropeSwingPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_ropeSwingPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSwingPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ziplinePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplinePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_ziplinePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplinePrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_ziplinePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplinePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_reviveStationPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStationPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_reviveStationPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStationPrefab;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_reviveStationPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveStationPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_zoneShaderSettingsTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettingsTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_zoneShaderSettingsTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettingsTrigger;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_zoneShaderSettingsTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneShaderSettingsTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_masterAudioMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterAudioMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_masterAudioMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___masterAudioMixer;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_masterAudioMixer(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___masterAudioMixer = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_customMapZoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapZoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_customMapZoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapZoneShaderSettings;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_customMapZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapZoneShaderSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_compositeTryOnArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compositeTryOnArea;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_compositeTryOnArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compositeTryOnArea;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_compositeTryOnArea(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compositeTryOnArea = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_virtualStumpMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_virtualStumpMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtualStumpMesh;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_virtualStumpMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___virtualStumpMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& GlobalNamespace::CustomMapLoader::__cordl_internal_get_availableModesForOldMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableModesForOldMaps;
}
constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_availableModesForOldMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableModesForOldMaps;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_availableModesForOldMaps(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableModesForOldMaps = value;
}
constexpr ::GorillaGameModes::GameModeType& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultGameModeForNonCustomOldMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameModeForNonCustomOldMaps;
}
constexpr ::GorillaGameModes::GameModeType const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_defaultGameModeForNonCustomOldMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameModeForNonCustomOldMaps;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_defaultGameModeForNonCustomOldMaps(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultGameModeForNonCustomOldMaps = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& GlobalNamespace::CustomMapLoader::__cordl_internal_get_DefaultFont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultFont;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_DefaultFont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultFont;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_DefaultFont(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultFont = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CustomMapLoader::__cordl_internal_get_loadScenesCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadScenesCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_loadScenesCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadScenesCoroutine;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_loadScenesCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadScenesCoroutine = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapLoader::__cordl_internal_get_dontDestroyOnLoadSceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoadSceneName;
}
constexpr ::StringW const& GlobalNamespace::CustomMapLoader::__cordl_internal_get_dontDestroyOnLoadSceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontDestroyOnLoadSceneName;
}
constexpr void GlobalNamespace::CustomMapLoader::__cordl_internal_set_dontDestroyOnLoadSceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontDestroyOnLoadSceneName = value;
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapLoader>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CustomMapLoader>, "instance", ::GlobalNamespace::CustomMapLoader*>(std::forward<::UnityW<::GlobalNamespace::CustomMapLoader>>(value));
}
inline ::UnityW<::GlobalNamespace::CustomMapLoader> GlobalNamespace::CustomMapLoader::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CustomMapLoader>, "instance", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_numObjectsToProcessPerFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "numObjectsToProcessPerFrame", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_numObjectsToProcessPerFrame()  {
return ::cordl_internals::getStaticField<int32_t, "numObjectsToProcessPerFrame", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_APPROVED_LAYERS(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "APPROVED_LAYERS", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::CustomMapLoader::getStaticF_APPROVED_LAYERS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "APPROVED_LAYERS", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_isLoading(bool  value)  {
::cordl_internals::setStaticField<bool, "isLoading", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_isLoading()  {
return ::cordl_internals::getStaticField<bool, "isLoading", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_isUnloading(bool  value)  {
::cordl_internals::setStaticField<bool, "isUnloading", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_isUnloading()  {
return ::cordl_internals::getStaticField<bool, "isUnloading", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_runningAsyncLoad(bool  value)  {
::cordl_internals::setStaticField<bool, "runningAsyncLoad", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_runningAsyncLoad()  {
return ::cordl_internals::getStaticField<bool, "runningAsyncLoad", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_attemptedLoadID(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "attemptedLoadID", ::GlobalNamespace::CustomMapLoader*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapLoader::getStaticF_attemptedLoadID()  {
return ::cordl_internals::getStaticField<int64_t, "attemptedLoadID", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_attemptedSceneToLoad(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "attemptedSceneToLoad", ::GlobalNamespace::CustomMapLoader*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapLoader::getStaticF_attemptedSceneToLoad()  {
return ::cordl_internals::getStaticField<::StringW, "attemptedSceneToLoad", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_shouldAbortMapLoading(bool  value)  {
::cordl_internals::setStaticField<bool, "shouldAbortMapLoading", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_shouldAbortMapLoading()  {
return ::cordl_internals::getStaticField<bool, "shouldAbortMapLoading", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_shouldAbortSceneLoad(bool  value)  {
::cordl_internals::setStaticField<bool, "shouldAbortSceneLoad", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_shouldAbortSceneLoad()  {
return ::cordl_internals::getStaticField<bool, "shouldAbortSceneLoad", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_errorEncounteredDuringLoad(bool  value)  {
::cordl_internals::setStaticField<bool, "errorEncounteredDuringLoad", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_errorEncounteredDuringLoad()  {
return ::cordl_internals::getStaticField<bool, "errorEncounteredDuringLoad", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_unloadMapCallback(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "unloadMapCallback", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CustomMapLoader::getStaticF_unloadMapCallback()  {
return ::cordl_internals::getStaticField<::System::Action*, "unloadMapCallback", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_cachedExceptionMessage(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "cachedExceptionMessage", ::GlobalNamespace::CustomMapLoader*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapLoader::getStaticF_cachedExceptionMessage()  {
return ::cordl_internals::getStaticField<::StringW, "cachedExceptionMessage", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_mapBundle(::UnityW<::UnityEngine::AssetBundle>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::AssetBundle>, "mapBundle", ::GlobalNamespace::CustomMapLoader*>(std::forward<::UnityW<::UnityEngine::AssetBundle>>(value));
}
inline ::UnityW<::UnityEngine::AssetBundle> GlobalNamespace::CustomMapLoader::getStaticF_mapBundle()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::AssetBundle>, "mapBundle", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_initialSceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "initialSceneNames", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_initialSceneNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "initialSceneNames", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_initialSceneIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "initialSceneIndexes", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::CustomMapLoader::getStaticF_initialSceneIndexes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "initialSceneIndexes", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_maxPlayersForMap(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "maxPlayersForMap", ::GlobalNamespace::CustomMapLoader*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::CustomMapLoader::getStaticF_maxPlayersForMap()  {
return ::cordl_internals::getStaticField<uint8_t, "maxPlayersForMap", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedMapModId(::Modio::Mods::ModId  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModId, "loadedMapModId", ::GlobalNamespace::CustomMapLoader*>(std::forward<::Modio::Mods::ModId>(value));
}
inline ::Modio::Mods::ModId GlobalNamespace::CustomMapLoader::getStaticF_loadedMapModId()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModId, "loadedMapModId", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedMapModFileId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "loadedMapModFileId", ::GlobalNamespace::CustomMapLoader*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapLoader::getStaticF_loadedMapModFileId()  {
return ::cordl_internals::getStaticField<int64_t, "loadedMapModFileId", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedMapPackageInfo(::GT_CustomMapSupportRuntime::MapPackageInfo*  value)  {
::cordl_internals::setStaticField<::GT_CustomMapSupportRuntime::MapPackageInfo*, "loadedMapPackageInfo", ::GlobalNamespace::CustomMapLoader*>(std::forward<::GT_CustomMapSupportRuntime::MapPackageInfo*>(value));
}
inline ::GT_CustomMapSupportRuntime::MapPackageInfo* GlobalNamespace::CustomMapLoader::getStaticF_loadedMapPackageInfo()  {
return ::cordl_internals::getStaticField<::GT_CustomMapSupportRuntime::MapPackageInfo*, "loadedMapPackageInfo", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_cachedLuauScript(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "cachedLuauScript", ::GlobalNamespace::CustomMapLoader*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CustomMapLoader::getStaticF_cachedLuauScript()  {
return ::cordl_internals::getStaticField<::StringW, "cachedLuauScript", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_devModeEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "devModeEnabled", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_devModeEnabled()  {
return ::cordl_internals::getStaticField<bool, "devModeEnabled", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_disableHoldingHandsAllModes(bool  value)  {
::cordl_internals::setStaticField<bool, "disableHoldingHandsAllModes", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_disableHoldingHandsAllModes()  {
return ::cordl_internals::getStaticField<bool, "disableHoldingHandsAllModes", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_disableHoldingHandsCustomMode(bool  value)  {
::cordl_internals::setStaticField<bool, "disableHoldingHandsCustomMode", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_disableHoldingHandsCustomMode()  {
return ::cordl_internals::getStaticField<bool, "disableHoldingHandsCustomMode", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_mapLoadProgressCallback(::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*, "mapLoadProgressCallback", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*>(value));
}
inline ::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_mapLoadProgressCallback()  {
return ::cordl_internals::getStaticField<::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*, "mapLoadProgressCallback", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_mapLoadFinishedCallback(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "mapLoadFinishedCallback", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::CustomMapLoader::getStaticF_mapLoadFinishedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "mapLoadFinishedCallback", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_zoneLoadingCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Coroutine*, "zoneLoadingCoroutine", ::GlobalNamespace::CustomMapLoader*>(std::forward<::UnityEngine::Coroutine*>(value));
}
inline ::UnityEngine::Coroutine* GlobalNamespace::CustomMapLoader::getStaticF_zoneLoadingCoroutine()  {
return ::cordl_internals::getStaticField<::UnityEngine::Coroutine*, "zoneLoadingCoroutine", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_sceneLoadedCallback(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "sceneLoadedCallback", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_sceneLoadedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "sceneLoadedCallback", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_sceneUnloadedCallback(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "sceneUnloadedCallback", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_sceneUnloadedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "sceneUnloadedCallback", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_queuedLoadZoneRequests(::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*, "queuedLoadZoneRequests", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>* GlobalNamespace::CustomMapLoader::getStaticF_queuedLoadZoneRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*, "queuedLoadZoneRequests", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_assetBundleSceneFilePaths(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "assetBundleSceneFilePaths", ::GlobalNamespace::CustomMapLoader*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::CustomMapLoader::getStaticF_assetBundleSceneFilePaths()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "assetBundleSceneFilePaths", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedSceneFilePaths(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "loadedSceneFilePaths", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_loadedSceneFilePaths()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "loadedSceneFilePaths", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedSceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "loadedSceneNames", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_loadedSceneNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "loadedSceneNames", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_loadedSceneIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "loadedSceneIndexes", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::CustomMapLoader::getStaticF_loadedSceneIndexes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "loadedSceneIndexes", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_leafGliderIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "leafGliderIndex", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_leafGliderIndex()  {
return ::cordl_internals::getStaticField<int32_t, "leafGliderIndex", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_gravityZoneCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "gravityZoneCount", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_gravityZoneCount()  {
return ::cordl_internals::getStaticField<int32_t, "gravityZoneCount", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_sizeChangerCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "sizeChangerCount", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_sizeChangerCount()  {
return ::cordl_internals::getStaticField<int32_t, "sizeChangerCount", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_handHoldCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "handHoldCount", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_handHoldCount()  {
return ::cordl_internals::getStaticField<int32_t, "handHoldCount", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_mapperAssetCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mapperAssetCount", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_mapperAssetCount()  {
return ::cordl_internals::getStaticField<int32_t, "mapperAssetCount", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_usingDynamicLighting(bool  value)  {
::cordl_internals::setStaticField<bool, "usingDynamicLighting", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_usingDynamicLighting()  {
return ::cordl_internals::getStaticField<bool, "usingDynamicLighting", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_refreshReviveStations(bool  value)  {
::cordl_internals::setStaticField<bool, "refreshReviveStations", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF_refreshReviveStations()  {
return ::cordl_internals::getStaticField<bool, "refreshReviveStations", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_totalObjectsInLoadingScene(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totalObjectsInLoadingScene", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_totalObjectsInLoadingScene()  {
return ::cordl_internals::getStaticField<int32_t, "totalObjectsInLoadingScene", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_objectsProcessedForLoadingScene(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "objectsProcessedForLoadingScene", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_objectsProcessedForLoadingScene()  {
return ::cordl_internals::getStaticField<int32_t, "objectsProcessedForLoadingScene", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_objectsProcessedThisFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "objectsProcessedThisFrame", ::GlobalNamespace::CustomMapLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapLoader::getStaticF_objectsProcessedThisFrame()  {
return ::cordl_internals::getStaticField<int32_t, "objectsProcessedThisFrame", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_initializePhaseTwoComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "initializePhaseTwoComponents", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GlobalNamespace::CustomMapLoader::getStaticF_initializePhaseTwoComponents()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "initializePhaseTwoComponents", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_entitiesToCreate(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*, "entitiesToCreate", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>* GlobalNamespace::CustomMapLoader::getStaticF_entitiesToCreate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*, "entitiesToCreate", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_monkeGravityControllersToReplace(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*, "monkeGravityControllersToReplace", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>* GlobalNamespace::CustomMapLoader::getStaticF_monkeGravityControllersToReplace()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*, "monkeGravityControllersToReplace", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_replacedGravityZones(::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*, "replacedGravityZones", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* GlobalNamespace::CustomMapLoader::getStaticF_replacedGravityZones()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*, "replacedGravityZones", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_lightmaps(::ArrayW<::UnityEngine::LightmapData*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::LightmapData*>, "lightmaps", ::GlobalNamespace::CustomMapLoader*>(std::forward<::ArrayW<::UnityEngine::LightmapData*>>(value));
}
inline ::ArrayW<::UnityEngine::LightmapData*> GlobalNamespace::CustomMapLoader::getStaticF_lightmaps()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::LightmapData*>, "lightmaps", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_lightmapsToKeep(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "lightmapsToKeep", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* GlobalNamespace::CustomMapLoader::getStaticF_lightmapsToKeep()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, "lightmapsToKeep", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_placeholderReplacements(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "placeholderReplacements", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomMapLoader::getStaticF_placeholderReplacements()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "placeholderReplacements", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_customMapATM(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "customMapATM", ::GlobalNamespace::CustomMapLoader*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CustomMapLoader::getStaticF_customMapATM()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "customMapATM", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_storeCheckouts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeCheckouts", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomMapLoader::getStaticF_storeCheckouts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeCheckouts", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_storeDisplayStands(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeDisplayStands", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomMapLoader::getStaticF_storeDisplayStands()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeDisplayStands", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_storeTryOnConsoles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeTryOnConsoles", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomMapLoader::getStaticF_storeTryOnConsoles()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeTryOnConsoles", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_storeTryOnAreas(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeTryOnAreas", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomMapLoader::getStaticF_storeTryOnAreas()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "storeTryOnAreas", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_teleporters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "teleporters", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GlobalNamespace::CustomMapLoader::getStaticF_teleporters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "teleporters", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_componentAllowlist(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "componentAllowlist", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Type*>* GlobalNamespace::CustomMapLoader::getStaticF_componentAllowlist()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Type*>*, "componentAllowlist", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_componentTypeStringAllowList(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringAllowList", ::GlobalNamespace::CustomMapLoader*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::CustomMapLoader::getStaticF_componentTypeStringAllowList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "componentTypeStringAllowList", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF_badComponents(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "badComponents", ::GlobalNamespace::CustomMapLoader*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> GlobalNamespace::CustomMapLoader::getStaticF_badComponents()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "badComponents", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::setStaticF__CanLoadEntities_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<CanLoadEntities>k__BackingField", ::GlobalNamespace::CustomMapLoader*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapLoader::getStaticF__CanLoadEntities_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<CanLoadEntities>k__BackingField", ::GlobalNamespace::CustomMapLoader*>();
}
inline void GlobalNamespace::CustomMapLoader::SetZoneDynamicLighting(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetZoneDynamicLighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enable);
}
inline void GlobalNamespace::CustomMapLoader::InitOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::Initialize(::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  onLoadProgress, ::System::Action_1<bool>*  onLoadFinished, ::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*>(), ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onLoadProgress, onLoadFinished, onSceneLoaded, onSceneUnloaded);
}
inline void GlobalNamespace::CustomMapLoader::LoadMap(int64_t  mapModId, ::StringW  mapFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadMap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mapModId, mapFilePath);
}
inline bool GlobalNamespace::CustomMapLoader::OpenDoorToMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OpenDoorToMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::LoadAssetBundle(int64_t  mapModID, ::StringW  packageInfoFilePath, ::System::Action_2<bool,bool>*  OnLoadComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadAssetBundle", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<bool,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, mapModID, packageInfoFilePath, OnLoadComplete);
}
inline void GlobalNamespace::CustomMapLoader::LoadInitialSceneNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadInitialSceneNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::OnAssetBundleLoaded(bool  loadSucceeded, bool  loadAborted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OnAssetBundleLoaded", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadSucceeded, loadAborted);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::LoadInitialScenesCoroutine(::ArrayW<int32_t>  sceneIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadInitialScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndexes);
}
inline void GlobalNamespace::CustomMapLoader::OnInitialLoadComplete(bool  loadSucceeded, bool  loadAborted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"OnInitialLoadComplete", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadSucceeded, loadAborted);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::LoadScenesCoroutine(::ArrayW<int32_t>  sceneIndexes, ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  loadCompleteCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndexes, loadCompleteCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::LoadSceneFromAssetBundle(int32_t  sceneIndex, ::System::Action_3<bool,bool,::StringW>*  OnLoadComplete, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadSceneFromAssetBundle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_3<bool,bool,::StringW>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndex, OnLoadComplete, useProgressCallback, startingProgress, endingProgress);
}
inline void GlobalNamespace::CustomMapLoader::SanitizeObjectRecursive(::UnityEngine::GameObject*  rootObject, ::UnityEngine::GameObject*  mapRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SanitizeObjectRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rootObject, mapRoot);
}
inline bool GlobalNamespace::CustomMapLoader::SanitizeObject(::UnityEngine::GameObject*  gameObject, ::UnityEngine::GameObject*  mapRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SanitizeObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject, mapRoot);
}
inline void GlobalNamespace::CustomMapLoader::ResolveVirtualStumpColliderOverlaps(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResolveVirtualStumpColliderOverlaps", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::FinalizeSceneLoad(::GT_CustomMapSupportRuntime::MapDescriptor*  sceneDescriptor, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"FinalizeSceneLoad", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneDescriptor, useProgressCallback, startingProgress, endingProgress);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::ProcessChildObjects(::UnityEngine::GameObject*  parent, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ProcessChildObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, parent, useProgressCallback, startingProgress, endingProgress);
}
inline void GlobalNamespace::CustomMapLoader::InitializeComponentsPhaseOne(::UnityEngine::GameObject*  childGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitializeComponentsPhaseOne", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, childGameObject);
}
inline void GlobalNamespace::CustomMapLoader::InitializeComponentsPhaseTwo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"InitializeComponentsPhaseTwo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::SetupReviveStation(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupReviveStation", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
inline void GlobalNamespace::CustomMapLoader::SetupCollisions(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupCollisions", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
inline bool GlobalNamespace::CustomMapLoader::ValidateTeleporterDestination(::UnityEngine::Transform*  teleportTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ValidateTeleporterDestination", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, teleportTarget);
}
inline bool GlobalNamespace::CustomMapLoader::ValidateStorePlaceholderPosition(::UnityEngine::GameObject*  storePlaceholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ValidateStorePlaceholderPosition", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, storePlaceholder);
}
inline void GlobalNamespace::CustomMapLoader::ReplaceDataOnlyScripts(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplaceDataOnlyScripts", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
inline void GlobalNamespace::CustomMapLoader::ReplaceGravityDataOnlyScripts(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplaceGravityDataOnlyScripts", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
inline void GlobalNamespace::CustomMapLoader::ReplacePlaceholders(::UnityEngine::GameObject*  placeholderGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ReplacePlaceholders", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, placeholderGameObject);
}
inline void GlobalNamespace::CustomMapLoader::SetupDynamicLight(::UnityEngine::GameObject*  dynamicLightGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"SetupDynamicLight", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dynamicLightGameObject);
}
inline void GlobalNamespace::CustomMapLoader::StoreMapEntity(::UnityEngine::GameObject*  entityGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"StoreMapEntity", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entityGameObject);
}
inline void GlobalNamespace::CustomMapLoader::CacheLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CacheLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::LoadLightmaps(::ArrayW<::UnityEngine::Texture2D*>  colorMaps, ::ArrayW<::UnityEngine::Texture2D*>  dirMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadLightmaps", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorMaps, dirMaps);
}
inline void GlobalNamespace::CustomMapLoader::ResetToInitialZone(::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResetToInitialZone", {}, {::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onSceneLoaded, onSceneUnloaded);
}
inline void GlobalNamespace::CustomMapLoader::LoadZoneTriggered(::ArrayW<int32_t>  loadSceneIndexes, ::ArrayW<int32_t>  unloadSceneIndexes, ::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadZoneTriggered", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadSceneIndexes, unloadSceneIndexes, onSceneLoaded, onSceneUnloaded);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::LoadZoneCoroutine(::ArrayW<int32_t>  loadScenes, ::ArrayW<int32_t>  unloadScenes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadZoneCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, loadScenes, unloadScenes);
}
inline void GlobalNamespace::CustomMapLoader::CloseDoorAndUnloadMap(::System::Action*  unloadCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CloseDoorAndUnloadMap", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unloadCompleted);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::CloseDoorAndUnloadMapCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CloseDoorAndUnloadMapCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::RequestAbortMapLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"RequestAbortMapLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::AbortMapLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"AbortMapLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::UnloadMapCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadMapCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::AbortSceneLoad(int32_t  sceneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"AbortSceneLoad", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndex);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::UnloadScenesCoroutine(::ArrayW<int32_t>  sceneIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadScenesCoroutine", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndexes);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::UnloadSceneCoroutine(int32_t  sceneIndex, ::System::Action*  OnUnloadComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadSceneCoroutine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, sceneIndex, OnUnloadComplete);
}
inline void GlobalNamespace::CustomMapLoader::RemoveUnloadingStorePrefabs(::UnityEngine::SceneManagement::Scene  unloadingScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"RemoveUnloadingStorePrefabs", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unloadingScene);
}
inline void GlobalNamespace::CustomMapLoader::CleanupPlaceholders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"CleanupPlaceholders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader::ResetLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"ResetLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::UnloadLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"UnloadLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::GetSceneIndex(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneName);
}
inline ::StringW GlobalNamespace::CustomMapLoader::GetSceneNameFromFilePath(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetSceneNameFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath);
}
inline ::GT_CustomMapSupportRuntime::MapPackageInfo* GlobalNamespace::CustomMapLoader::GetPackageInfo(::StringW  packageInfoFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetPackageInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GT_CustomMapSupportRuntime::MapPackageInfo*>(nullptr, ___internal_method, packageInfoFilePath);
}
inline ::Modio::Mods::ModId GlobalNamespace::CustomMapLoader::get_LoadedMapModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(nullptr, ___internal_method);
}
inline int64_t GlobalNamespace::CustomMapLoader::get_LoadedMapModFileId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapModFileId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::get_LoadedMapSupportVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapSupportVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::get_LoadedMapGravityZoneCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapGravityZoneCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::get_LoadedMapSizeChangerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapSizeChangerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::get_LoadedMapHandHoldCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapHandHoldCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapLoader::get_LoadedMapMapperAssetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_LoadedMapMapperAssetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::set_CanLoadEntities(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"set_CanLoadEntities", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::CustomMapLoader::get_CanLoadEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"get_CanLoadEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::IsMapLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsMapLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::IsMapLoaded(::Modio::Mods::ModId  mapModId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsMapLoaded", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mapModId);
}
inline bool GlobalNamespace::CustomMapLoader::IsLoading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsLoading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int64_t GlobalNamespace::CustomMapLoader::GetLoadingMapModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetLoadingMapModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline uint8_t GlobalNamespace::CustomMapLoader::GetRoomSizeForCurrentlyLoadedMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetRoomSizeForCurrentlyLoadedMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::IsCustomScene(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsCustomScene", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneName);
}
inline ::StringW GlobalNamespace::CustomMapLoader::GetLuauGamemodeScript()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetLuauGamemodeScript", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::IsDevModeEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IsDevModeEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CustomMapLoader::GetCustomMapsDefaultSpawnLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"GetCustomMapsDefaultSpawnLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::LoadedMapWantsHoldingHandsDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"LoadedMapWantsHoldingHandsDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapLoader* GlobalNamespace::CustomMapLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::CustomMapLoader::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::CustomMapLoader::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader::CustomMapLoader()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bee9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59beec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::MoveNext)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59beec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59befa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59befac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59befe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get_sceneIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get_sceneIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndexes = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138::CustomMapLoader__UnloadScenesCoroutine_d__138()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59be874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59be89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::MoveNext)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x59be8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bee54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get_sceneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get_sceneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set_sceneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndex = value;
}
constexpr ::System::Action*& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get_OnUnloadComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnloadComplete;
}
constexpr ::System::Action* const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get_OnUnloadComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnloadComplete;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set_OnUnloadComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUnloadComplete = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get__scenePathWithExtension_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenePathWithExtension_5__2;
}
constexpr ::StringW const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get__scenePathWithExtension_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scenePathWithExtension_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set__scenePathWithExtension_5__2(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scenePathWithExtension_5__2 = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get__sceneName_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneName_5__3;
}
constexpr ::StringW const& GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_get__sceneName_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneName_5__3;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::__cordl_internal_set__sceneName_5__3(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneName_5__3 = value;
}
inline void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139::CustomMapLoader__UnloadSceneCoroutine_d__139()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bdd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bdd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::MoveNext)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x59bdd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59be82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59be834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::*)()>(&::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59be86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get__sceneIndex_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneIndex_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_get__sceneIndex_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneIndex_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::__cordl_internal_set__sceneIndex_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneIndex_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136::CustomMapLoader__UnloadMapCoroutine_d__136()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bdb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)()>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bdb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)()>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::MoveNext)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59bdb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)()>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bdcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)()>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bdcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::*)()>(&::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bdd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142::CustomMapLoader__ResetLightmaps_d__142()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bd568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)()>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bd590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)()>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x59bd594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)()>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)()>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bdb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::*)()>(&::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set_parent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_endingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_endingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set_endingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingProgress = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_startingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_startingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set_startingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingProgress = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_useProgressCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr bool const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get_useProgressCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set_useProgressCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useProgressCallback = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get__progressAmount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmount_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get__progressAmount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmount_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set__progressAmount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressAmount_5__2 = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get__i_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_get__i_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::__cordl_internal_set__i_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__3 = value;
}
inline void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115::CustomMapLoader__ProcessChildObjects_d__115()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bd234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)()>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bd25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)()>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x59bd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)()>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)()>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bd528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::*)()>(&::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get_unloadScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadScenes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get_unloadScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadScenes;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_set_unloadScenes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unloadScenes = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get_loadScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadScenes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_get_loadScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadScenes;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::__cordl_internal_set_loadScenes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadScenes = value;
}
inline void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131::CustomMapLoader__LoadZoneCoroutine_d__131()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bcc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)()>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)()>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::MoveNext)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x59bccb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)()>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)()>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bd1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::*)()>(&::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bd22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get_loadCompleteCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteCallback;
}
constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get_loadCompleteCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteCallback;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set_loadCompleteCallback(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadCompleteCallback = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get_sceneIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get_sceneIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndexes = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set___8__1(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___8__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1* const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get___8__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set___8__2(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__2 = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109::CustomMapLoader__LoadScenesCoroutine_d__109()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)()>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)()>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::MoveNext)> {
  constexpr static std::size_t size = 0x11e4;
  constexpr static std::size_t addrs = 0x59bba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)()>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bcc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)()>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bcc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::*)()>(&::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bcc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_endingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_endingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set_endingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingProgress = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_startingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_startingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set_startingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingProgress = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_sceneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_sceneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set_sceneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndex = value;
}
constexpr ::System::Action_3<bool,bool,::StringW>*& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_OnLoadComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadComplete;
}
constexpr ::System::Action_3<bool,bool,::StringW>* const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_OnLoadComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadComplete;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set_OnLoadComplete(::System::Action_3<bool,bool,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoadComplete = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_useProgressCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr bool const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get_useProgressCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set_useProgressCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useProgressCallback = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__progressAmount_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmount_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__progressAmount_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmount_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set__progressAmount_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressAmount_5__2 = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__currentProgress_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__currentProgress_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set__currentProgress_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentProgress_5__3 = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__sceneName_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneName_5__4;
}
constexpr ::StringW const& GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_get__sceneName_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneName_5__4;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::__cordl_internal_set__sceneName_5__4(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneName_5__4 = value;
}
inline void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110::CustomMapLoader__LoadSceneFromAssetBundle_d__110()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bb59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)()>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bb5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)()>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::MoveNext)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x59bb5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)()>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bb9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)()>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bb9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::*)()>(&::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bba2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get_sceneIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get_sceneIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndexes = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set___8__1(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___8__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1* const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get___8__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set___8__2(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__2 = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get__progressAmountPerScene_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmountPerScene_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_get__progressAmountPerScene_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressAmountPerScene_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::__cordl_internal_set__progressAmountPerScene_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressAmountPerScene_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107::CustomMapLoader__LoadInitialScenesCoroutine_d__107()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bac9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)()>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bacc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)()>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::MoveNext)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x59bacc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)()>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bb554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)()>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bb55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::*)()>(&::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bb594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int64_t& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_mapModID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapModID;
}
constexpr int64_t const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_mapModID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapModID;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set_mapModID(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapModID = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_packageInfoFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packageInfoFilePath;
}
constexpr ::StringW const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_packageInfoFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packageInfoFilePath;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set_packageInfoFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packageInfoFilePath = value;
}
constexpr ::System::Action_2<bool,bool>*& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_OnLoadComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadComplete;
}
constexpr ::System::Action_2<bool,bool>* const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get_OnLoadComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadComplete;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set_OnLoadComplete(::System::Action_2<bool,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoadComplete = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get__loadBundleRequest_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadBundleRequest_5__2;
}
constexpr ::UnityEngine::AssetBundleCreateRequest* const& GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_get__loadBundleRequest_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadBundleRequest_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::__cordl_internal_set__loadBundleRequest_5__2(::UnityEngine::AssetBundleCreateRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadBundleRequest_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104::CustomMapLoader__LoadAssetBundle_d__104()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59ad304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)()>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b9e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)()>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::MoveNext)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x59b9e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)()>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)()>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59bab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::*)()>(&::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59baba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_endingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_endingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set_endingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingProgress = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_startingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_startingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingProgress;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set_startingProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingProgress = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_useProgressCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr bool const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_useProgressCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProgressCallback;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set_useProgressCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useProgressCallback = value;
}
constexpr ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_sceneDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneDescriptor;
}
constexpr ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor> const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get_sceneDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneDescriptor;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set_sceneDescriptor(::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneDescriptor = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get__processChildrenEndingProgress_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processChildrenEndingProgress_5__2;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_get__processChildrenEndingProgress_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processChildrenEndingProgress_5__2;
}
constexpr void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::__cordl_internal_set__processChildrenEndingProgress_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processChildrenEndingProgress_5__2 = value;
}
inline void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114::CustomMapLoader__FinalizeSceneLoad_d__114()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59b3eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)()>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b9bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)()>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x59b9bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)()>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)()>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59b9e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::*)()>(&::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59b3fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)()>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b9a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)()>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::MoveNext)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59b9a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)()>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)()>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59b9b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::*)()>(&::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get_sceneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_get_sceneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndex;
}
constexpr void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::__cordl_internal_set_sceneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndex = value;
}
inline void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137::CustomMapLoader__AbortSceneLoad_d__137()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)(int32_t)>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59b3ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)()>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b98b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)()>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::MoveNext)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59b98b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)()>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b99fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)()>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59b9a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::*)()>(&::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135::CustomMapLoader__AbortMapLoad_d__135()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::*)()>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1._LoadScenesCoroutine_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::*)(bool, bool, ::StringW)>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::_LoadScenesCoroutine_b__0)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59b973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*>(),
                        {"<LoadScenesCoroutine>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_shouldAbortLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldAbortLoad;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_shouldAbortLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldAbortLoad;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_set_shouldAbortLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldAbortLoad = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_isLastScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastScene;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_isLastScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastScene;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_set_isLastScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLastScene = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::_LoadScenesCoroutine_b__0(bool  loadSucceeded, bool  loadAborted, ::StringW  loadedSceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*>(),
                        {"<LoadScenesCoroutine>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadSucceeded, loadAborted, loadedSceneName);
}
inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1* GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1::CustomMapLoader___c__DisplayClass109_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::*)()>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_successfullyLoadedAllScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullyLoadedAllScenes;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_successfullyLoadedAllScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullyLoadedAllScenes;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_set_successfullyLoadedAllScenes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successfullyLoadedAllScenes = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_successfullyLoadedSceneNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullyLoadedSceneNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_successfullyLoadedSceneNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successfullyLoadedSceneNames;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_set_successfullyLoadedSceneNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successfullyLoadedSceneNames = value;
}
constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_loadCompleteCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteCallback;
}
constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* const& GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_get_loadCompleteCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadCompleteCallback;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::__cordl_internal_set_loadCompleteCallback(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadCompleteCallback = value;
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0::CustomMapLoader___c__DisplayClass109_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::*)()>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b95a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1._LoadInitialScenesCoroutine_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::*)(bool, bool, ::StringW)>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::_LoadInitialScenesCoroutine_b__0)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x59b95ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*>(),
                        {"<LoadInitialScenesCoroutine>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_stopLoading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopLoading;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_stopLoading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopLoading;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_set_stopLoading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopLoading = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_initialLoadAborted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLoadAborted;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_initialLoadAborted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLoadAborted;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_set_initialLoadAborted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLoadAborted = value;
}
constexpr bool& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_isLastScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastScene;
}
constexpr bool const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_isLastScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastScene;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_set_isLastScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLastScene = value;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::_LoadInitialScenesCoroutine_b__0(bool  loadSucceeded, bool  loadAborted, ::StringW  loadedSceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*>(),
                        {"<LoadInitialScenesCoroutine>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadSucceeded, loadAborted, loadedSceneName);
}
inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1* GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1::CustomMapLoader___c__DisplayClass107_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::*)()>(&::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b959c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_get_sceneIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_get_sceneIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneIndexes;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneIndexes = value;
}
constexpr int32_t& GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
inline void GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0::CustomMapLoader___c__DisplayClass107_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c::*)()>(&::GlobalNamespace::CustomMapLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c._OnAssetBundleLoaded_b__106_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapLoader___c::_OnAssetBundleLoaded_b__106_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b9450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {"<OnAssetBundleLoaded>b__106_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapLoader___c._LoadZoneCoroutine_b__131_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapLoader___c::*)(bool, bool, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::CustomMapLoader___c::_LoadZoneCoroutine_b__131_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59b94fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {"<LoadZoneCoroutine>b__131_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomMapLoader___c::setStaticF___9(::GlobalNamespace::CustomMapLoader___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CustomMapLoader___c*, "<>9", ::GlobalNamespace::CustomMapLoader___c*>(std::forward<::GlobalNamespace::CustomMapLoader___c*>(value));
}
inline ::GlobalNamespace::CustomMapLoader___c* GlobalNamespace::CustomMapLoader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CustomMapLoader___c*, "<>9", ::GlobalNamespace::CustomMapLoader___c*>();
}
inline void GlobalNamespace::CustomMapLoader___c::setStaticF___9__106_0(::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*, "<>9__106_0", ::GlobalNamespace::CustomMapLoader___c*>(std::forward<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>(value));
}
inline ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>* GlobalNamespace::CustomMapLoader___c::getStaticF___9__106_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*, "<>9__106_0", ::GlobalNamespace::CustomMapLoader___c*>();
}
inline void GlobalNamespace::CustomMapLoader___c::setStaticF___9__131_0(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*, "<>9__131_0", ::GlobalNamespace::CustomMapLoader___c*>(std::forward<::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*>(value));
}
inline ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* GlobalNamespace::CustomMapLoader___c::getStaticF___9__131_0()  {
return ::cordl_internals::getStaticField<::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*, "<>9__131_0", ::GlobalNamespace::CustomMapLoader___c*>();
}
inline void GlobalNamespace::CustomMapLoader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapLoader___c::_OnAssetBundleLoaded_b__106_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {"<OnAssetBundleLoaded>b__106_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapLoader___c::_LoadZoneCoroutine_b__131_0(bool  successfullyLoadedAllScenes, bool  loadAborted, ::System::Collections::Generic::List_1<::StringW>*  successfullyLoadedSceneNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapLoader___c*>(),
                        {"<LoadZoneCoroutine>b__131_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successfullyLoadedAllScenes, loadAborted, successfullyLoadedSceneNames);
}
inline ::GlobalNamespace::CustomMapLoader___c* GlobalNamespace::CustomMapLoader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapLoader___c::CustomMapLoader___c()   {
}

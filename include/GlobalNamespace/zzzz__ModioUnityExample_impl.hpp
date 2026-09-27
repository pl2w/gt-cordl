#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample.hpp"
#include "Modio/Mods/zzzz__Mod_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__AddModsIfNone_d__26_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__Authenticate_d__23_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__GenerateDummyMod_d__34_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__GenerateLogo_d__35_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__GetAllMods_d__28_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__GetAuthCode_d__24_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__InitPlugin_d__21_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__OnAuth_d__25_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__SetRandomMod_d__29_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__SubscribeToMod_d__31_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__UploadMod_d__27_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9f97174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f97318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.InitPlugin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::InitPlugin)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f9731c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"InitPlugin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.OnInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::OnInit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f973f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"OnInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::Authenticate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f9757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Authenticate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.GetAuthCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::GetAuthCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f97654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetAuthCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.OnAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::OnAuth)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f974d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"OnAuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.AddModsIfNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::AddModsIfNone)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9f97760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"AddModsIfNone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.UploadMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ModioUnityExample::*)(::StringW, ::StringW, ::UnityEngine::Texture2D*, ::StringW)>(&::GlobalNamespace::ModioUnityExample::UploadMod)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f97844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"UploadMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.GetAllMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::Modio::Mods::Mod*>>* (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::GetAllMods)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f9796c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetAllMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.SetRandomMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::SetRandomMod)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f97a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"SetRandomMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.GetSubscribedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Mods::Mod*> (*)()>(&::GlobalNamespace::ModioUnityExample::GetSubscribedMods)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f97afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetSubscribedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.SubscribeToMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ModioUnityExample::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModioUnityExample::SubscribeToMod)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f97b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"SubscribeToMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.WakeUpModManagement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::WakeUpModManagement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f97c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"WakeUpModManagement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9f97cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.GenerateDummyMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::ModioUnityExample_DummyModData>* (::GlobalNamespace::ModioUnityExample::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t)>(&::GlobalNamespace::ModioUnityExample::GenerateDummyMod)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9f97ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GenerateDummyMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample.GenerateLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::GlobalNamespace::ModioUnityExample::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::ModioUnityExample::GenerateLogo)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f98044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GenerateLogo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f98180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample._OnInit_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)()>(&::GlobalNamespace::ModioUnityExample::_OnInit_b__22_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f98248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"<OnInit>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample._WakeUpModManagement_g__HandleModManagementEvent_32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::GlobalNamespace::ModioUnityExample::_WakeUpModManagement_g__HandleModManagementEvent_32_0)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9f9824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"<WakeUpModManagement>g__HandleModManagementEvent|32_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authContainer;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_authContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authContainer = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInput;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInput;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_authInput(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authInput = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authRequest;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authRequest;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_authRequest(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authRequest = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authSubmit;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_authSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authSubmit;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_authSubmit(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authSubmit = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_tosContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tosContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_tosContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tosContainer;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_tosContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tosContainer = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_termsLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___termsLink;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_termsLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___termsLink;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_termsLink(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___termsLink = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_privacyLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privacyLink;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_privacyLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privacyLink;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_privacyLink(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privacyLink = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_denyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_denyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denyButton;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_denyButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___denyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_acceptButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_acceptButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptButton;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_acceptButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceptButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomContainer;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_randomContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomContainer = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomName;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomName;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_randomName(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomName = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomLogo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLogo;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomLogo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomLogo;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_randomLogo(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomLogo = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_randomButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomButton;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_randomButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomButton = value;
}
constexpr ::ArrayW<::Modio::Mods::Mod*>& GlobalNamespace::ModioUnityExample::__cordl_internal_get_allMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allMods;
}
constexpr ::ArrayW<::Modio::Mods::Mod*> const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_allMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allMods;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_allMods(::ArrayW<::Modio::Mods::Mod*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allMods = value;
}
constexpr ::Modio::Mods::Mod*& GlobalNamespace::ModioUnityExample::__cordl_internal_get_currentDownload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDownload;
}
constexpr ::Modio::Mods::Mod* const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_currentDownload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDownload;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_currentDownload(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDownload = value;
}
constexpr float_t& GlobalNamespace::ModioUnityExample::__cordl_internal_get_downloadProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadProgress;
}
constexpr float_t const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_downloadProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadProgress;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_downloadProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadProgress = value;
}
constexpr float_t& GlobalNamespace::ModioUnityExample::__cordl_internal_get_timeToProgressCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToProgressCheck;
}
constexpr float_t const& GlobalNamespace::ModioUnityExample::__cordl_internal_get_timeToProgressCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToProgressCheck;
}
constexpr void GlobalNamespace::ModioUnityExample::__cordl_internal_set_timeToProgressCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToProgressCheck = value;
}
inline void GlobalNamespace::ModioUnityExample::setStaticF_Megabyte(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Megabyte", ::GlobalNamespace::ModioUnityExample*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::ModioUnityExample::getStaticF_Megabyte()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Megabyte", ::GlobalNamespace::ModioUnityExample*>();
}
inline void GlobalNamespace::ModioUnityExample::setStaticF_RandomBytes(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "RandomBytes", ::GlobalNamespace::ModioUnityExample*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* GlobalNamespace::ModioUnityExample::getStaticF_RandomBytes()  {
return ::cordl_internals::getStaticField<::System::Random*, "RandomBytes", ::GlobalNamespace::ModioUnityExample*>();
}
inline void GlobalNamespace::ModioUnityExample::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModioUnityExample::InitPlugin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"InitPlugin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::OnInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"OnInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModioUnityExample::Authenticate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Authenticate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::ModioUnityExample::GetAuthCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetAuthCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::OnAuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"OnAuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModioUnityExample::AddModsIfNone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"AddModsIfNone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModioUnityExample::UploadMod(::StringW  modName, ::StringW  summary, ::UnityEngine::Texture2D*  logo, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"UploadMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, modName, summary, logo, path);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Modio::Mods::Mod*>>* GlobalNamespace::ModioUnityExample::GetAllMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetAllMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::Modio::Mods::Mod*>>*>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::SetRandomMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"SetRandomMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::Modio::Mods::Mod*> GlobalNamespace::ModioUnityExample::GetSubscribedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GetSubscribedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Mods::Mod*>>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModioUnityExample::SubscribeToMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"SubscribeToMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, mod);
}
inline void GlobalNamespace::ModioUnityExample::WakeUpModManagement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"WakeUpModManagement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ModioUnityExample_DummyModData>* GlobalNamespace::ModioUnityExample::GenerateDummyMod(::StringW  dummyName, ::StringW  summary, ::StringW  backgroundColor, ::StringW  textColor, int32_t  megabytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GenerateDummyMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::ModioUnityExample_DummyModData>*>(this, ___internal_method, dummyName, summary, backgroundColor, textColor, megabytes);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* GlobalNamespace::ModioUnityExample::GenerateLogo(::StringW  text, ::StringW  backgroundColor, ::StringW  textColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"GenerateLogo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*>(this, ___internal_method, text, backgroundColor, textColor);
}
inline void GlobalNamespace::ModioUnityExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::_OnInit_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"<OnInit>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample::_WakeUpModManagement_g__HandleModManagementEvent_32_0(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample*>(),
                        {"<WakeUpModManagement>g__HandleModManagementEvent|32_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline ::GlobalNamespace::ModioUnityExample* GlobalNamespace::ModioUnityExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModioUnityExample*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample::ModioUnityExample()   {
}
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::*)()>(&::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f986cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0._GetAuthCode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::*)()>(&::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::_GetAuthCode_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f986d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*>(),
                        {"<GetAuthCode>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::__cordl_internal_get_codeEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeEntered;
}
constexpr bool const& GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::__cordl_internal_get_codeEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeEntered;
}
constexpr void GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::__cordl_internal_set_codeEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codeEntered = value;
}
inline void GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::_GetAuthCode_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*>(),
                        {"<GetAuthCode>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0* GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0::ModioUnityExample___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample___c::*)()>(&::GlobalNamespace::ModioUnityExample___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c._OnAuth_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ModioUnityExample___c::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f98534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c._OnAuth_b__25_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ModioUnityExample___c::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f985bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample___c._OnAuth_b__25_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ModioUnityExample___c::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f98644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_2", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUnityExample___c::setStaticF___9(::GlobalNamespace::ModioUnityExample___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ModioUnityExample___c*, "<>9", ::GlobalNamespace::ModioUnityExample___c*>(std::forward<::GlobalNamespace::ModioUnityExample___c*>(value));
}
inline ::GlobalNamespace::ModioUnityExample___c* GlobalNamespace::ModioUnityExample___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ModioUnityExample___c*, "<>9", ::GlobalNamespace::ModioUnityExample___c*>();
}
inline void GlobalNamespace::ModioUnityExample___c::setStaticF___9__25_0(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_0", ::GlobalNamespace::ModioUnityExample___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* GlobalNamespace::ModioUnityExample___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_0", ::GlobalNamespace::ModioUnityExample___c*>();
}
inline void GlobalNamespace::ModioUnityExample___c::setStaticF___9__25_1(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_1", ::GlobalNamespace::ModioUnityExample___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* GlobalNamespace::ModioUnityExample___c::getStaticF___9__25_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_1", ::GlobalNamespace::ModioUnityExample___c*>();
}
inline void GlobalNamespace::ModioUnityExample___c::setStaticF___9__25_2(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_2", ::GlobalNamespace::ModioUnityExample___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* GlobalNamespace::ModioUnityExample___c::getStaticF___9__25_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__25_2", ::GlobalNamespace::ModioUnityExample___c*>();
}
inline void GlobalNamespace::ModioUnityExample___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, mod);
}
inline ::StringW GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_1(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, mod);
}
inline ::StringW GlobalNamespace::ModioUnityExample___c::_OnAuth_b__25_2(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample___c*>(),
                        {"<OnAuth>b__25_2", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, mod);
}
inline ::GlobalNamespace::ModioUnityExample___c* GlobalNamespace::ModioUnityExample___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModioUnityExample___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample___c::ModioUnityExample___c()   {
}

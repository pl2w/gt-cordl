#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUnityExample)
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace GlobalNamespace {
struct ModioUnityExample_DummyModData;
}
namespace GlobalNamespace {
struct ModioUnityExample__AddModsIfNone_d__26;
}
namespace GlobalNamespace {
struct ModioUnityExample__Authenticate_d__23;
}
namespace GlobalNamespace {
struct ModioUnityExample__GenerateDummyMod_d__34;
}
namespace GlobalNamespace {
struct ModioUnityExample__GenerateLogo_d__35;
}
namespace GlobalNamespace {
struct ModioUnityExample__GetAllMods_d__28;
}
namespace GlobalNamespace {
struct ModioUnityExample__GetAuthCode_d__24;
}
namespace GlobalNamespace {
struct ModioUnityExample__InitPlugin_d__21;
}
namespace GlobalNamespace {
struct ModioUnityExample__OnAuth_d__25;
}
namespace GlobalNamespace {
struct ModioUnityExample__SetRandomMod_d__29;
}
namespace GlobalNamespace {
struct ModioUnityExample__SubscribeToMod_d__31;
}
namespace GlobalNamespace {
struct ModioUnityExample__UploadMod_d__27;
}
namespace GlobalNamespace {
class ModioUnityExample___c;
}
namespace GlobalNamespace {
class ModioUnityExample___c__DisplayClass24_0;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
class Modfile;
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
class Random;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class ModioUnityExample;
}
namespace GlobalNamespace {
class ModioUnityExample___c;
}
namespace GlobalNamespace {
class ModioUnityExample___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModioUnityExample*);
MARK_REF_T(::GlobalNamespace::ModioUnityExample___c*);
MARK_REF_T(::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample*, "", "ModioUnityExample");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample___c*, "", "ModioUnityExample/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0*, "", "ModioUnityExample/<>c__DisplayClass24_0");
// Dependencies Modio.Mods.Mod, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModioUnityExample
class CORDL_TYPE ModioUnityExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DummyModData = ::GlobalNamespace::ModioUnityExample_DummyModData;

using _AddModsIfNone_d__26 = ::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26;

using _Authenticate_d__23 = ::GlobalNamespace::ModioUnityExample__Authenticate_d__23;

using _GenerateDummyMod_d__34 = ::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34;

using _GenerateLogo_d__35 = ::GlobalNamespace::ModioUnityExample__GenerateLogo_d__35;

using _GetAllMods_d__28 = ::GlobalNamespace::ModioUnityExample__GetAllMods_d__28;

using _GetAuthCode_d__24 = ::GlobalNamespace::ModioUnityExample__GetAuthCode_d__24;

using _InitPlugin_d__21 = ::GlobalNamespace::ModioUnityExample__InitPlugin_d__21;

using _OnAuth_d__25 = ::GlobalNamespace::ModioUnityExample__OnAuth_d__25;

using _SetRandomMod_d__29 = ::GlobalNamespace::ModioUnityExample__SetRandomMod_d__29;

using _SubscribeToMod_d__31 = ::GlobalNamespace::ModioUnityExample__SubscribeToMod_d__31;

using _UploadMod_d__27 = ::GlobalNamespace::ModioUnityExample__UploadMod_d__27;

using __c = ::GlobalNamespace::ModioUnityExample___c;

using __c__DisplayClass24_0 = ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0;

/// @brief Field Megabyte, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Megabyte, put=setStaticF_Megabyte)) ::ArrayW<uint8_t>  Megabyte;

/// @brief Field RandomBytes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RandomBytes, put=setStaticF_RandomBytes)) ::System::Random*  RandomBytes;

/// @brief Field acceptButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_acceptButton, put=__cordl_internal_set_acceptButton)) ::UnityW<::UnityEngine::UI::Button>  acceptButton;

/// @brief Field allMods, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_allMods, put=__cordl_internal_set_allMods)) ::ArrayW<::Modio::Mods::Mod*>  allMods;

/// @brief Field authContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_authContainer, put=__cordl_internal_set_authContainer)) ::UnityW<::UnityEngine::GameObject>  authContainer;

/// @brief Field authInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_authInput, put=__cordl_internal_set_authInput)) ::UnityW<::UnityEngine::UI::InputField>  authInput;

/// @brief Field authRequest, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_authRequest, put=__cordl_internal_set_authRequest)) ::UnityW<::UnityEngine::UI::Button>  authRequest;

/// @brief Field authSubmit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_authSubmit, put=__cordl_internal_set_authSubmit)) ::UnityW<::UnityEngine::UI::Button>  authSubmit;

/// @brief Field currentDownload, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDownload, put=__cordl_internal_set_currentDownload)) ::Modio::Mods::Mod*  currentDownload;

/// @brief Field denyButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_denyButton, put=__cordl_internal_set_denyButton)) ::UnityW<::UnityEngine::UI::Button>  denyButton;

/// @brief Field downloadProgress, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_downloadProgress, put=__cordl_internal_set_downloadProgress)) float_t  downloadProgress;

/// @brief Field privacyLink, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_privacyLink, put=__cordl_internal_set_privacyLink)) ::UnityW<::UnityEngine::UI::Button>  privacyLink;

/// @brief Field randomButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomButton, put=__cordl_internal_set_randomButton)) ::UnityW<::UnityEngine::UI::Button>  randomButton;

/// @brief Field randomContainer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomContainer, put=__cordl_internal_set_randomContainer)) ::UnityW<::UnityEngine::GameObject>  randomContainer;

/// @brief Field randomLogo, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomLogo, put=__cordl_internal_set_randomLogo)) ::UnityW<::UnityEngine::UI::Image>  randomLogo;

/// @brief Field randomName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomName, put=__cordl_internal_set_randomName)) ::UnityW<::UnityEngine::UI::Text>  randomName;

/// @brief Field termsLink, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_termsLink, put=__cordl_internal_set_termsLink)) ::UnityW<::UnityEngine::UI::Button>  termsLink;

/// @brief Field timeToProgressCheck, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToProgressCheck, put=__cordl_internal_set_timeToProgressCheck)) float_t  timeToProgressCheck;

/// @brief Field tosContainer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tosContainer, put=__cordl_internal_set_tosContainer)) ::UnityW<::UnityEngine::GameObject>  tosContainer;

/// [AsyncStateMachine(typeof(ModioUnityExample::<AddModsIfNone>d__26))]
/// @brief Method AddModsIfNone, addr 0x9f97760, size 0xe4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AddModsIfNone() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<Authenticate>d__23))]
/// @brief Method Authenticate, addr 0x9f9757c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Authenticate() ;

/// @brief Method Awake, addr 0x9f97174, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<GenerateDummyMod>d__34))]
/// @brief Method GenerateDummyMod, addr 0x9f97ec8, size 0x17c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::ModioUnityExample_DummyModData>* GenerateDummyMod(::StringW  dummyName, ::StringW  summary, ::StringW  backgroundColor, ::StringW  textColor, int32_t  megabytes) ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<GenerateLogo>d__35))]
/// @brief Method GenerateLogo, addr 0x9f98044, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* GenerateLogo(::StringW  text, ::StringW  backgroundColor, ::StringW  textColor) ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<GetAllMods>d__28))]
/// @brief Method GetAllMods, addr 0x9f9796c, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<::Modio::Mods::Mod*>>* GetAllMods() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<GetAuthCode>d__24))]
/// @brief Method GetAuthCode, addr 0x9f97654, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetAuthCode() ;

/// @brief Method GetSubscribedMods, addr 0x9f97afc, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<::Modio::Mods::Mod*> GetSubscribedMods() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<InitPlugin>d__21))]
/// @brief Method InitPlugin, addr 0x9f9731c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitPlugin() ;

static inline ::GlobalNamespace::ModioUnityExample* New_ctor() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<OnAuth>d__25))]
/// @brief Method OnAuth, addr 0x9f974d4, size 0xa8, virtual false, abstract: false, final false
inline void OnAuth() ;

/// @brief Method OnInit, addr 0x9f973f4, size 0xe0, virtual false, abstract: false, final false
inline void OnInit() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<SetRandomMod>d__29))]
/// @brief Method SetRandomMod, addr 0x9f97a58, size 0xa4, virtual false, abstract: false, final false
inline void SetRandomMod() ;

/// @brief Method Start, addr 0x9f97318, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<SubscribeToMod>d__31))]
/// @brief Method SubscribeToMod, addr 0x9f97b7c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SubscribeToMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method Update, addr 0x9f97cf8, size 0x1d0, virtual false, abstract: false, final false
inline void Update() ;

/// [AsyncStateMachine(typeof(ModioUnityExample::<UploadMod>d__27))]
/// @brief Method UploadMod, addr 0x9f97844, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UploadMod(::StringW  modName, ::StringW  summary, ::UnityEngine::Texture2D*  logo, ::StringW  path) ;

/// @brief Method WakeUpModManagement, addr 0x9f97c54, size 0xa4, virtual false, abstract: false, final false
inline void WakeUpModManagement() ;

/// [CompilerGenerated]
/// @brief Method <OnInit>b__22_0, addr 0x9f98248, size 0x4, virtual false, abstract: false, final false
inline void _OnInit_b__22_0() ;

/// [CompilerGenerated]
/// @brief Method <WakeUpModManagement>g__HandleModManagementEvent|32_0, addr 0x9f9824c, size 0x218, virtual false, abstract: false, final false
inline void _WakeUpModManagement_g__HandleModManagementEvent_32_0(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_acceptButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_acceptButton() ;

constexpr ::ArrayW<::Modio::Mods::Mod*> const& __cordl_internal_get_allMods() const;

constexpr ::ArrayW<::Modio::Mods::Mod*>& __cordl_internal_get_allMods() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_authContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_authContainer() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_authInput() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_authInput() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_authRequest() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_authRequest() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_authSubmit() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_authSubmit() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get_currentDownload() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get_currentDownload() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_denyButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_denyButton() ;

constexpr float_t const& __cordl_internal_get_downloadProgress() const;

constexpr float_t& __cordl_internal_get_downloadProgress() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_privacyLink() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_privacyLink() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_randomButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_randomButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_randomContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_randomContainer() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_randomLogo() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_randomLogo() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_randomName() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_randomName() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_termsLink() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_termsLink() ;

constexpr float_t const& __cordl_internal_get_timeToProgressCheck() const;

constexpr float_t& __cordl_internal_get_timeToProgressCheck() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tosContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tosContainer() ;

constexpr void __cordl_internal_set_acceptButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_allMods(::ArrayW<::Modio::Mods::Mod*>  value) ;

constexpr void __cordl_internal_set_authContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_authInput(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set_authRequest(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_authSubmit(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_currentDownload(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_denyButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_downloadProgress(float_t  value) ;

constexpr void __cordl_internal_set_privacyLink(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_randomButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_randomContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_randomLogo(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_randomName(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_termsLink(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_timeToProgressCheck(float_t  value) ;

constexpr void __cordl_internal_set_tosContainer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9f98180, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_Megabyte() ;

static inline ::System::Random* getStaticF_RandomBytes() ;

static inline void setStaticF_Megabyte(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_RandomBytes(::System::Random*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityExample(ModioUnityExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityExample(ModioUnityExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32500};

/// [Header("Authentication")]
/// [SerializeField]
/// @brief Field authContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___authContainer;

/// [SerializeField]
/// @brief Field authInput, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ___authInput;

/// [SerializeField]
/// @brief Field authRequest, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___authRequest;

/// [SerializeField]
/// @brief Field authSubmit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___authSubmit;

/// [Header("Terms of Use")]
/// [SerializeField]
/// @brief Field tosContainer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___tosContainer;

/// [SerializeField]
/// @brief Field termsLink, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___termsLink;

/// [SerializeField]
/// @brief Field privacyLink, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___privacyLink;

/// [SerializeField]
/// @brief Field denyButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___denyButton;

/// [SerializeField]
/// @brief Field acceptButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___acceptButton;

/// [Header("Random Mod")]
/// [SerializeField]
/// @brief Field randomContainer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___randomContainer;

/// [SerializeField]
/// @brief Field randomName, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___randomName;

/// [SerializeField]
/// @brief Field randomLogo, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___randomLogo;

/// [SerializeField]
/// @brief Field randomButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___randomButton;

/// @brief Field allMods, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::Mod*>  ___allMods;

/// @brief Field currentDownload, offset: 0x90, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ___currentDownload;

/// @brief Field downloadProgress, offset: 0x98, size: 0x4, def value: None
 float_t  ___downloadProgress;

/// @brief Field timeToProgressCheck, offset: 0x9c, size: 0x4, def value: None
 float_t  ___timeToProgressCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___authContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___authInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___authRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___authSubmit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___tosContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___termsLink) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___privacyLink) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___denyButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___acceptButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___randomContainer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___randomName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___randomLogo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___randomButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___allMods) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___currentDownload) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___downloadProgress) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample, ___timeToProgressCheck) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUnityExample) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModioUnityExample/<>c__DisplayClass24_0
class CORDL_TYPE ModioUnityExample___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field codeEntered, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_codeEntered, put=__cordl_internal_set_codeEntered)) bool  codeEntered;

static inline ::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <GetAuthCode>b__0, addr 0x9f986d4, size 0xc, virtual false, abstract: false, final false
inline void _GetAuthCode_b__0() ;

constexpr bool const& __cordl_internal_get_codeEntered() const;

constexpr bool& __cordl_internal_get_codeEntered() ;

constexpr void __cordl_internal_set_codeEntered(bool  value) ;

/// @brief Method .ctor, addr 0x9f986cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityExample___c__DisplayClass24_0(ModioUnityExample___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityExample___c__DisplayClass24_0(ModioUnityExample___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32488};

/// @brief Field codeEntered, offset: 0x10, size: 0x1, def value: None
 bool  ___codeEntered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0, ___codeEntered) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUnityExample___c__DisplayClass24_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModioUnityExample/<>c
class CORDL_TYPE ModioUnityExample___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ModioUnityExample___c*  __9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_2<::Modio::Mods::Mod*,::StringW>*  __9__25_0;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::System::Func_2<::Modio::Mods::Mod*,::StringW>*  __9__25_1;

/// @brief Field <>9__25_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_2, put=setStaticF___9__25_2)) ::System::Func_2<::Modio::Mods::Mod*,::StringW>*  __9__25_2;

static inline ::GlobalNamespace::ModioUnityExample___c* New_ctor() ;

/// @brief Method <OnAuth>b__25_0, addr 0x9f98534, size 0x88, virtual false, abstract: false, final false
inline ::StringW _OnAuth_b__25_0(::Modio::Mods::Mod*  mod) ;

/// @brief Method <OnAuth>b__25_1, addr 0x9f985bc, size 0x88, virtual false, abstract: false, final false
inline ::StringW _OnAuth_b__25_1(::Modio::Mods::Mod*  mod) ;

/// @brief Method <OnAuth>b__25_2, addr 0x9f98644, size 0x88, virtual false, abstract: false, final false
inline ::StringW _OnAuth_b__25_2(::Modio::Mods::Mod*  mod) ;

/// @brief Method .ctor, addr 0x9f9852c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ModioUnityExample___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* getStaticF___9__25_0() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* getStaticF___9__25_1() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* getStaticF___9__25_2() ;

static inline void setStaticF___9(::GlobalNamespace::ModioUnityExample___c*  value) ;

static inline void setStaticF___9__25_0(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value) ;

static inline void setStaticF___9__25_1(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value) ;

static inline void setStaticF___9__25_2(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityExample___c(ModioUnityExample___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityExample___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityExample___c(ModioUnityExample___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ModioUnityExample___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

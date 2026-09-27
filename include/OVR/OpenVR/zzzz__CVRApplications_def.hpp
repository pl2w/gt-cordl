#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRApplications.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRApplications)
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRApplications;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRApplications*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRApplications*, "OVR.OpenVR", "CVRApplications");
// Dependencies OVR.OpenVR.IVRApplications, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRApplications
class CORDL_TYPE CVRApplications : public ::System::Object {
public:
// Declarations
/// @brief Field FnTable, offset 0x10, size 0xf8 
 __declspec(property(get=__cordl_internal_get_FnTable, put=__cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRApplications  FnTable;

/// @brief Method AddApplicationManifest, addr 0xa5abd4c, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError AddApplicationManifest(::StringW  pchApplicationManifestFullPath, bool  bTemporary) ;

/// @brief Method CancelApplicationLaunch, addr 0xa5abe9c, size 0x20, virtual false, abstract: false, final false
inline bool CancelApplicationLaunch(::StringW  pchAppKey) ;

/// @brief Method GetApplicationAutoLaunch, addr 0xa5ac004, size 0x20, virtual false, abstract: false, final false
inline bool GetApplicationAutoLaunch(::StringW  pchAppKey) ;

/// @brief Method GetApplicationCount, addr 0xa5abdb0, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetApplicationCount() ;

/// @brief Method GetApplicationKeyByIndex, addr 0xa5abdd0, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByIndex(uint32_t  unApplicationIndex, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method GetApplicationKeyByProcessId, addr 0xa5abdf0, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError GetApplicationKeyByProcessId(uint32_t  unProcessId, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method GetApplicationLaunchArguments, addr 0xa5ac0a4, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetApplicationLaunchArguments(uint32_t  unHandle, ::System::Text::StringBuilder*  pchArgs, uint32_t  unArgs) ;

/// @brief Method GetApplicationProcessId, addr 0xa5abedc, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetApplicationProcessId(::StringW  pchAppKey) ;

/// @brief Method GetApplicationPropertyBool, addr 0xa5abfa0, size 0x20, virtual false, abstract: false, final false
inline bool GetApplicationPropertyBool(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method GetApplicationPropertyString, addr 0xa5abf80, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetApplicationPropertyString(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ::System::Text::StringBuilder*  pchPropertyValueBuffer, uint32_t  unPropertyValueBufferLen, ::by_ref<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method GetApplicationPropertyUint64, addr 0xa5abfc0, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetApplicationPropertyUint64(::StringW  pchAppKey, ::OVR::OpenVR::EVRApplicationProperty  eProperty, ::by_ref<::OVR::OpenVR::EVRApplicationError>  peError) ;

/// @brief Method GetApplicationSupportedMimeTypes, addr 0xa5ac064, size 0x20, virtual false, abstract: false, final false
inline bool GetApplicationSupportedMimeTypes(::StringW  pchAppKey, ::System::Text::StringBuilder*  pchMimeTypesBuffer, uint32_t  unMimeTypesBuffer) ;

/// @brief Method GetApplicationsErrorNameFromEnum, addr 0xa5abefc, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetApplicationsErrorNameFromEnum(::OVR::OpenVR::EVRApplicationError  error) ;

/// @brief Method GetApplicationsThatSupportMimeType, addr 0xa5ac084, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetApplicationsThatSupportMimeType(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeysThatSupportBuffer, uint32_t  unAppKeysThatSupportBuffer) ;

/// @brief Method GetApplicationsTransitionStateNameFromEnum, addr 0xa5ac124, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetApplicationsTransitionStateNameFromEnum(::OVR::OpenVR::EVRApplicationTransitionState  state) ;

/// @brief Method GetCurrentSceneProcessId, addr 0xa5ac1e8, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetCurrentSceneProcessId() ;

/// @brief Method GetDefaultApplicationForMimeType, addr 0xa5ac044, size 0x20, virtual false, abstract: false, final false
inline bool GetDefaultApplicationForMimeType(::StringW  pchMimeType, ::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method GetStartingApplication, addr 0xa5ac0c4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError GetStartingApplication(::System::Text::StringBuilder*  pchAppKeyBuffer, uint32_t  unAppKeyBufferLen) ;

/// @brief Method GetTransitionState, addr 0xa5ac0e4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationTransitionState GetTransitionState() ;

/// @brief Method IdentifyApplication, addr 0xa5abebc, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError IdentifyApplication(uint32_t  unProcessId, ::StringW  pchAppKey) ;

/// @brief Method IsApplicationInstalled, addr 0xa5abd90, size 0x20, virtual false, abstract: false, final false
inline bool IsApplicationInstalled(::StringW  pchAppKey) ;

/// @brief Method IsQuitUserPromptRequested, addr 0xa5ac1a8, size 0x20, virtual false, abstract: false, final false
inline bool IsQuitUserPromptRequested() ;

/// @brief Method LaunchApplication, addr 0xa5abe10, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError LaunchApplication(::StringW  pchAppKey) ;

/// @brief Method LaunchApplicationFromMimeType, addr 0xa5abe5c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError LaunchApplicationFromMimeType(::StringW  pchMimeType, ::StringW  pchArgs) ;

/// @brief Method LaunchDashboardOverlay, addr 0xa5abe7c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError LaunchDashboardOverlay(::StringW  pchAppKey) ;

/// @brief Method LaunchInternalProcess, addr 0xa5ac1c8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError LaunchInternalProcess(::StringW  pchBinaryPath, ::StringW  pchArguments, ::StringW  pchWorkingDirectory) ;

/// @brief Method LaunchTemplateApplication, addr 0xa5abe30, size 0x2c, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError LaunchTemplateApplication(::StringW  pchTemplateAppKey, ::StringW  pchNewAppKey, ::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>  pKeys) ;

static inline ::OVR::OpenVR::CVRApplications* New_ctor(::System::IntPtr  pInterface) ;

/// @brief Method PerformApplicationPrelaunchCheck, addr 0xa5ac104, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError PerformApplicationPrelaunchCheck(::StringW  pchAppKey) ;

/// @brief Method RemoveApplicationManifest, addr 0xa5abd70, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError RemoveApplicationManifest(::StringW  pchApplicationManifestFullPath) ;

/// @brief Method SetApplicationAutoLaunch, addr 0xa5abfe0, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError SetApplicationAutoLaunch(::StringW  pchAppKey, bool  bAutoLaunch) ;

/// @brief Method SetDefaultApplicationForMimeType, addr 0xa5ac024, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRApplicationError SetDefaultApplicationForMimeType(::StringW  pchAppKey, ::StringW  pchMimeType) ;

constexpr ::OVR::OpenVR::IVRApplications const& __cordl_internal_get_FnTable() const;

constexpr ::OVR::OpenVR::IVRApplications& __cordl_internal_get_FnTable() ;

constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRApplications  value) ;

/// @brief Method .ctor, addr 0xa5abc3c, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pInterface) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRApplications() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRApplications(CVRApplications && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRApplications(CVRApplications const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13105};

/// @brief Field FnTable, offset: 0x10, size: 0xf8, def value: None
 ::OVR::OpenVR::IVRApplications  ___FnTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRApplications, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRApplications) == 0x108, "Size mismatch!");

} // namespace end def OVR::OpenVR

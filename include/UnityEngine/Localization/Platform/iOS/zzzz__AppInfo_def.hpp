#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/iOS/AppInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AppInfo)
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace UnityEngine::Localization::Platform::iOS {
class AppInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::iOS::AppInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::iOS::AppInfo*, "UnityEngine.Localization.Platform.iOS", "AppInfo");
// [DisplayName("Apple App Info", null)]
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)256, AllowMultiple = false, MenuItem = "Apple/App Info")]
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::iOS {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.iOS.AppInfo
class CORDL_TYPE AppInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CameraUsageDescription, put=set_CameraUsageDescription)) ::UnityEngine::Localization::LocalizedString*  CameraUsageDescription;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::UnityEngine::Localization::LocalizedString*  DisplayName;

 __declspec(property(get=get_LocationUsageDescription, put=set_LocationUsageDescription)) ::UnityEngine::Localization::LocalizedString*  LocationUsageDescription;

 __declspec(property(get=get_MicrophoneUsageDescription, put=set_MicrophoneUsageDescription)) ::UnityEngine::Localization::LocalizedString*  MicrophoneUsageDescription;

 __declspec(property(get=get_ShortName, put=set_ShortName)) ::UnityEngine::Localization::LocalizedString*  ShortName;

 __declspec(property(get=get_UserTrackingUsageDescription, put=set_UserTrackingUsageDescription)) ::UnityEngine::Localization::LocalizedString*  UserTrackingUsageDescription;

/// @brief Field m_CameraUsageDescription, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraUsageDescription, put=__cordl_internal_set_m_CameraUsageDescription)) ::UnityEngine::Localization::LocalizedString*  m_CameraUsageDescription;

/// @brief Field m_DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisplayName, put=__cordl_internal_set_m_DisplayName)) ::UnityEngine::Localization::LocalizedString*  m_DisplayName;

/// @brief Field m_LocationUsageDescription, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocationUsageDescription, put=__cordl_internal_set_m_LocationUsageDescription)) ::UnityEngine::Localization::LocalizedString*  m_LocationUsageDescription;

/// @brief Field m_MicrophoneUsageDescription, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MicrophoneUsageDescription, put=__cordl_internal_set_m_MicrophoneUsageDescription)) ::UnityEngine::Localization::LocalizedString*  m_MicrophoneUsageDescription;

/// @brief Field m_ShortName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShortName, put=__cordl_internal_set_m_ShortName)) ::UnityEngine::Localization::LocalizedString*  m_ShortName;

/// @brief Field m_UserTrackingUsageDescription, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UserTrackingUsageDescription, put=__cordl_internal_set_m_UserTrackingUsageDescription)) ::UnityEngine::Localization::LocalizedString*  m_UserTrackingUsageDescription;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Platform::iOS::AppInfo* New_ctor() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_CameraUsageDescription() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_CameraUsageDescription() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_DisplayName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_DisplayName() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_LocationUsageDescription() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_LocationUsageDescription() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_MicrophoneUsageDescription() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_MicrophoneUsageDescription() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_ShortName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_ShortName() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_UserTrackingUsageDescription() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_UserTrackingUsageDescription() ;

constexpr void __cordl_internal_set_m_CameraUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_DisplayName(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_LocationUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_MicrophoneUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_ShortName(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_m_UserTrackingUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method .ctor, addr 0xb04b630, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraUsageDescription, addr 0xb04b5f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_CameraUsageDescription() ;

/// @brief Method get_DisplayName, addr 0xb04b5e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_DisplayName() ;

/// @brief Method get_LocationUsageDescription, addr 0xb04b610, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_LocationUsageDescription() ;

/// @brief Method get_MicrophoneUsageDescription, addr 0xb04b600, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_MicrophoneUsageDescription() ;

/// @brief Method get_ShortName, addr 0xb04b5d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_ShortName() ;

/// @brief Method get_UserTrackingUsageDescription, addr 0xb04b620, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_UserTrackingUsageDescription() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_CameraUsageDescription, addr 0xb04b5f8, size 0x8, virtual false, abstract: false, final false
inline void set_CameraUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method set_DisplayName, addr 0xb04b5e8, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method set_LocationUsageDescription, addr 0xb04b618, size 0x8, virtual false, abstract: false, final false
inline void set_LocationUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method set_MicrophoneUsageDescription, addr 0xb04b608, size 0x8, virtual false, abstract: false, final false
inline void set_MicrophoneUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method set_ShortName, addr 0xb04b5d8, size 0x8, virtual false, abstract: false, final false
inline void set_ShortName(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method set_UserTrackingUsageDescription, addr 0xb04b628, size 0x8, virtual false, abstract: false, final false
inline void set_UserTrackingUsageDescription(::UnityEngine::Localization::LocalizedString*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppInfo(AppInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppInfo(AppInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25283};

/// [Tooltip("The user-visible name for the bundle, used by Siri, visible on the iOS Home screen and Mac app menu.\nThis name can contain up to 15 characters.\nCFBundleName field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_ShortName, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_ShortName;

/// [Tooltip("The user-visible name for the bundle, used by Siri visible on the iOS Home screen and Mac app menu.\nUse this key if you want a product name that\'s longer than Bundle Name.\nCFBundleDisplayName field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_DisplayName, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_DisplayName;

/// [Tooltip("A message that tells the user why the app is requesting access to the device\u{2019}s camera.\nNSCameraUsageDescription field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_CameraUsageDescription, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_CameraUsageDescription;

/// [Tooltip("A message that tells the user why the app is requesting access to the device\u{2019}s microphone.\nNSMicrophoneUsageDescription field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_MicrophoneUsageDescription, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_MicrophoneUsageDescription;

/// [Tooltip("A message that tells the user why the app is requesting access to the user\u{2019}s location information while the app is running in the foreground.\nNSLocationWhenInUseUsageDescription field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_LocationUsageDescription, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_LocationUsageDescription;

/// [Tooltip("A message that informs the user why an app is requesting permission to use data for tracking the user or the device.\nNSUserTrackingUsageDescription field in xcode projects info.plist file.")]
/// [SerializeField]
/// @brief Field m_UserTrackingUsageDescription, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_UserTrackingUsageDescription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_ShortName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_CameraUsageDescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_MicrophoneUsageDescription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_LocationUsageDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::iOS::AppInfo, ___m_UserTrackingUsageDescription) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::iOS::AppInfo) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::iOS

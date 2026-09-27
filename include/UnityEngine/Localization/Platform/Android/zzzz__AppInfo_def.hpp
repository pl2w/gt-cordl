#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/AppInfo.hpp"
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
namespace UnityEngine::Localization::Platform::Android {
class AppInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::Android::AppInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::Android::AppInfo*, "UnityEngine.Localization.Platform.Android", "AppInfo");
// [DisplayName("Android App Info", "Packages/com.unity.localization/Editor/Icons/Android/Android.png")]
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)256, AllowMultiple = false, MenuItem = "Android/App Info")]
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::Android {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.Android.AppInfo
class CORDL_TYPE AppInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::UnityEngine::Localization::LocalizedString*  DisplayName;

/// @brief Field m_DisplayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisplayName, put=__cordl_internal_set_m_DisplayName)) ::UnityEngine::Localization::LocalizedString*  m_DisplayName;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Platform::Android::AppInfo* New_ctor() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_m_DisplayName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_m_DisplayName() ;

constexpr void __cordl_internal_set_m_DisplayName(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method .ctor, addr 0xb04b760, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0xb04b750, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedString* get_DisplayName() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_DisplayName, addr 0xb04b758, size 0x8, virtual false, abstract: false, final false
inline void set_DisplayName(::UnityEngine::Localization::LocalizedString*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25284};

/// [Tooltip("The user-visible name for the bundle, used by Google Assistant and visible on the Android Home screen.\n")]
/// [SerializeField]
/// @brief Field m_DisplayName, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___m_DisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AppInfo, ___m_DisplayName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::Android::AppInfo) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::Android

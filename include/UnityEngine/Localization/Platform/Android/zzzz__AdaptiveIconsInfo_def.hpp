#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/AdaptiveIconsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AdaptiveIconsInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Platform::Android {
class AdaptiveIcon;
}
// Forward declare root types
namespace UnityEngine::Localization::Platform::Android {
class AdaptiveIconsInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo*, "UnityEngine.Localization.Platform.Android", "AdaptiveIconsInfo");
// [DisplayName("Android Adaptive Icon Info", null)]
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)256, AllowMultiple = false, MenuItem = "Android/Adaptive Icon")]
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::Android {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.Android.AdaptiveIconsInfo
class CORDL_TYPE AdaptiveIconsInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AdaptiveHdpi, put=set_AdaptiveHdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveHdpi;

/// @brief Field AdaptiveIcons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdaptiveIcons, put=__cordl_internal_set_AdaptiveIcons)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>*  AdaptiveIcons;

 __declspec(property(get=get_AdaptiveIdpi, put=set_AdaptiveIdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveIdpi;

 __declspec(property(get=get_AdaptiveMdpi, put=set_AdaptiveMdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveMdpi;

 __declspec(property(get=get_AdaptiveXXHdpi, put=set_AdaptiveXXHdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveXXHdpi;

 __declspec(property(get=get_AdaptiveXXXHdpi, put=set_AdaptiveXXXHdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveXXXHdpi;

 __declspec(property(get=get_AdaptiveXhdpi, put=set_AdaptiveXhdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  AdaptiveXhdpi;

/// @brief Field m_Adaptive_hdpi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_hdpi, put=__cordl_internal_set_m_Adaptive_hdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_hdpi;

/// @brief Field m_Adaptive_idpi, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_idpi, put=__cordl_internal_set_m_Adaptive_idpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_idpi;

/// @brief Field m_Adaptive_mdpi, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_mdpi, put=__cordl_internal_set_m_Adaptive_mdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_mdpi;

/// @brief Field m_Adaptive_xhdpi, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_xhdpi, put=__cordl_internal_set_m_Adaptive_xhdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_xhdpi;

/// @brief Field m_Adaptive_xxhdpi, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_xxhdpi, put=__cordl_internal_set_m_Adaptive_xxhdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_xxhdpi;

/// @brief Field m_Adaptive_xxxhdpi, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Adaptive_xxxhdpi, put=__cordl_internal_set_m_Adaptive_xxxhdpi)) ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  m_Adaptive_xxxhdpi;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo* New_ctor() ;

/// @brief Method RefreshAdaptiveIcons, addr 0xb04b7f4, size 0x2bc, virtual false, abstract: false, final false
inline void RefreshAdaptiveIcons() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>* const& __cordl_internal_get_AdaptiveIcons() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>*& __cordl_internal_get_AdaptiveIcons() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_hdpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_hdpi() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_idpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_idpi() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_mdpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_mdpi() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_xhdpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_xhdpi() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_xxhdpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_xxhdpi() ;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* const& __cordl_internal_get_m_Adaptive_xxxhdpi() const;

constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*& __cordl_internal_get_m_Adaptive_xxxhdpi() ;

constexpr void __cordl_internal_set_AdaptiveIcons(::System::Collections::Generic::List_1<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_hdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_idpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_mdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_xhdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_xxhdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

constexpr void __cordl_internal_set_m_Adaptive_xxxhdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method .ctor, addr 0xb04bb10, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AdaptiveHdpi, addr 0xb04bab0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveHdpi() ;

/// @brief Method get_AdaptiveIdpi, addr 0xb04bac0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveIdpi() ;

/// @brief Method get_AdaptiveMdpi, addr 0xb04bad0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveMdpi() ;

/// @brief Method get_AdaptiveXXHdpi, addr 0xb04baf0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveXXHdpi() ;

/// @brief Method get_AdaptiveXXXHdpi, addr 0xb04bb00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveXXXHdpi() ;

/// @brief Method get_AdaptiveXhdpi, addr 0xb04bae0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* get_AdaptiveXhdpi() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_AdaptiveHdpi, addr 0xb04bab8, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveHdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method set_AdaptiveIdpi, addr 0xb04bac8, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveIdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method set_AdaptiveMdpi, addr 0xb04bad8, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveMdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method set_AdaptiveXXHdpi, addr 0xb04baf8, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveXXHdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method set_AdaptiveXXXHdpi, addr 0xb04bb08, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveXXXHdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

/// @brief Method set_AdaptiveXhdpi, addr 0xb04bae8, size 0x8, virtual false, abstract: false, final false
inline void set_AdaptiveXhdpi(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveIconsInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveIconsInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveIconsInfo(AdaptiveIconsInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveIconsInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveIconsInfo(AdaptiveIconsInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25286};

/// [SerializeField]
/// @brief Field m_Adaptive_idpi, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_idpi;

/// [SerializeField]
/// @brief Field m_Adaptive_mdpi, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_mdpi;

/// [SerializeField]
/// @brief Field m_Adaptive_hdpi, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_hdpi;

/// [SerializeField]
/// @brief Field m_Adaptive_xhdpi, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_xhdpi;

/// [SerializeField]
/// @brief Field m_Adaptive_xxhdpi, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_xxhdpi;

/// [SerializeField]
/// @brief Field m_Adaptive_xxxhdpi, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::Platform::Android::AdaptiveIcon*  ___m_Adaptive_xxxhdpi;

/// @brief Field AdaptiveIcons, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>*  ___AdaptiveIcons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_idpi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_mdpi) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_hdpi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_xhdpi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_xxhdpi) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___m_Adaptive_xxxhdpi) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo, ___AdaptiveIcons) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::Android::AdaptiveIconsInfo) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::Android

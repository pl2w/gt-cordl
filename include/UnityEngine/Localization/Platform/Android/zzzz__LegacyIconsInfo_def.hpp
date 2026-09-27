#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/LegacyIconsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LegacyIconsInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization {
class LocalizedTexture;
}
// Forward declare root types
namespace UnityEngine::Localization::Platform::Android {
class LegacyIconsInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo*, "UnityEngine.Localization.Platform.Android", "LegacyIconsInfo");
// [DisplayName("Android Legacy Icon Info", null)]
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)256, AllowMultiple = false, MenuItem = "Android/Legacy Icon")]
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::Android {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.Android.LegacyIconsInfo
class CORDL_TYPE LegacyIconsInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LegacyHdpi, put=set_LegacyHdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyHdpi;

/// @brief Field LegacyIcons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LegacyIcons, put=__cordl_internal_set_LegacyIcons)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  LegacyIcons;

 __declspec(property(get=get_LegacyIdpi, put=set_LegacyIdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyIdpi;

 __declspec(property(get=get_LegacyMdpi, put=set_LegacyMdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyMdpi;

 __declspec(property(get=get_LegacyXXHdpi, put=set_LegacyXXHdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyXXHdpi;

 __declspec(property(get=get_LegacyXXXHdpi, put=set_LegacyXXXHdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyXXXHdpi;

 __declspec(property(get=get_LegacyXhdpi, put=set_LegacyXhdpi)) ::UnityEngine::Localization::LocalizedTexture*  LegacyXhdpi;

/// @brief Field m_Legacy_hdpi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_hdpi, put=__cordl_internal_set_m_Legacy_hdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_hdpi;

/// @brief Field m_Legacy_idpi, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_idpi, put=__cordl_internal_set_m_Legacy_idpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_idpi;

/// @brief Field m_Legacy_mdpi, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_mdpi, put=__cordl_internal_set_m_Legacy_mdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_mdpi;

/// @brief Field m_Legacy_xhdpi, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_xhdpi, put=__cordl_internal_set_m_Legacy_xhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_xhdpi;

/// @brief Field m_Legacy_xxhdpi, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_xxhdpi, put=__cordl_internal_set_m_Legacy_xxhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_xxhdpi;

/// @brief Field m_Legacy_xxxhdpi, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Legacy_xxxhdpi, put=__cordl_internal_set_m_Legacy_xxxhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Legacy_xxxhdpi;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Platform::Android::LegacyIconsInfo* New_ctor() ;

/// @brief Method RefreshLegacyIcons, addr 0xb04bf3c, size 0x2bc, virtual false, abstract: false, final false
inline void RefreshLegacyIcons() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>* const& __cordl_internal_get_LegacyIcons() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*& __cordl_internal_get_LegacyIcons() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_hdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_hdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_idpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_idpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_mdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_mdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_xhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_xhdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_xxhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_xxhdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Legacy_xxxhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Legacy_xxxhdpi() ;

constexpr void __cordl_internal_set_LegacyIcons(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  value) ;

constexpr void __cordl_internal_set_m_Legacy_hdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Legacy_idpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Legacy_mdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Legacy_xhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Legacy_xxhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Legacy_xxxhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method .ctor, addr 0xb04c258, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LegacyHdpi, addr 0xb04c1f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyHdpi() ;

/// @brief Method get_LegacyIdpi, addr 0xb04c208, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyIdpi() ;

/// @brief Method get_LegacyMdpi, addr 0xb04c218, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyMdpi() ;

/// @brief Method get_LegacyXXHdpi, addr 0xb04c238, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyXXHdpi() ;

/// @brief Method get_LegacyXXXHdpi, addr 0xb04c248, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyXXXHdpi() ;

/// @brief Method get_LegacyXhdpi, addr 0xb04c228, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_LegacyXhdpi() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_LegacyHdpi, addr 0xb04c200, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_LegacyIdpi, addr 0xb04c210, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyIdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_LegacyMdpi, addr 0xb04c220, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyMdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_LegacyXXHdpi, addr 0xb04c240, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyXXHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_LegacyXXXHdpi, addr 0xb04c250, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyXXXHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_LegacyXhdpi, addr 0xb04c230, size 0x8, virtual false, abstract: false, final false
inline void set_LegacyXhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyIconsInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyIconsInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyIconsInfo(LegacyIconsInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyIconsInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyIconsInfo(LegacyIconsInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25288};

/// [SerializeField]
/// @brief Field m_Legacy_idpi, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_idpi;

/// [SerializeField]
/// @brief Field m_Legacy_mdpi, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_mdpi;

/// [SerializeField]
/// @brief Field m_Legacy_hdpi, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_hdpi;

/// [SerializeField]
/// @brief Field m_Legacy_xhdpi, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_xhdpi;

/// [SerializeField]
/// @brief Field m_Legacy_xxhdpi, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_xxhdpi;

/// [SerializeField]
/// @brief Field m_Legacy_xxxhdpi, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Legacy_xxxhdpi;

/// @brief Field LegacyIcons, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  ___LegacyIcons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_idpi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_mdpi) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_hdpi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_xhdpi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_xxhdpi) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___m_Legacy_xxxhdpi) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo, ___LegacyIcons) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::Android::LegacyIconsInfo) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::Android

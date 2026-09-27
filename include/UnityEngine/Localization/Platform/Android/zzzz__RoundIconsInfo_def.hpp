#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/RoundIconsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RoundIconsInfo)
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
class RoundIconsInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::Android::RoundIconsInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::Android::RoundIconsInfo*, "UnityEngine.Localization.Platform.Android", "RoundIconsInfo");
// [DisplayName("Android Round Icon Info", null)]
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)256, AllowMultiple = false, MenuItem = "Android/Round Icon")]
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::Android {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.Android.RoundIconsInfo
class CORDL_TYPE RoundIconsInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RoundHdpi, put=set_RoundHdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundHdpi;

/// @brief Field RoundIcons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoundIcons, put=__cordl_internal_set_RoundIcons)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  RoundIcons;

 __declspec(property(get=get_RoundIdpi, put=set_RoundIdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundIdpi;

 __declspec(property(get=get_RoundMdpi, put=set_RoundMdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundMdpi;

 __declspec(property(get=get_RoundXXHdpi, put=set_RoundXXHdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundXXHdpi;

 __declspec(property(get=get_RoundXXXHdpi, put=set_RoundXXXHdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundXXXHdpi;

 __declspec(property(get=get_RoundXhdpi, put=set_RoundXhdpi)) ::UnityEngine::Localization::LocalizedTexture*  RoundXhdpi;

/// @brief Field m_Round_hdpi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_hdpi, put=__cordl_internal_set_m_Round_hdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_hdpi;

/// @brief Field m_Round_idpi, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_idpi, put=__cordl_internal_set_m_Round_idpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_idpi;

/// @brief Field m_Round_mdpi, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_mdpi, put=__cordl_internal_set_m_Round_mdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_mdpi;

/// @brief Field m_Round_xhdpi, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_xhdpi, put=__cordl_internal_set_m_Round_xhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_xhdpi;

/// @brief Field m_Round_xxhdpi, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_xxhdpi, put=__cordl_internal_set_m_Round_xxhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_xxhdpi;

/// @brief Field m_Round_xxxhdpi, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Round_xxxhdpi, put=__cordl_internal_set_m_Round_xxxhdpi)) ::UnityEngine::Localization::LocalizedTexture*  m_Round_xxxhdpi;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Platform::Android::RoundIconsInfo* New_ctor() ;

/// @brief Method RefreshRoundIcons, addr 0xb04bb98, size 0x2bc, virtual false, abstract: false, final false
inline void RefreshRoundIcons() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>* const& __cordl_internal_get_RoundIcons() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*& __cordl_internal_get_RoundIcons() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_hdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_hdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_idpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_idpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_mdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_mdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_xhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_xhdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_xxhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_xxhdpi() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Round_xxxhdpi() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Round_xxxhdpi() ;

constexpr void __cordl_internal_set_RoundIcons(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  value) ;

constexpr void __cordl_internal_set_m_Round_hdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Round_idpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Round_mdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Round_xhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Round_xxhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Round_xxxhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method .ctor, addr 0xb04beb4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RoundHdpi, addr 0xb04be54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundHdpi() ;

/// @brief Method get_RoundIdpi, addr 0xb04be64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundIdpi() ;

/// @brief Method get_RoundMdpi, addr 0xb04be74, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundMdpi() ;

/// @brief Method get_RoundXXHdpi, addr 0xb04be94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundXXHdpi() ;

/// @brief Method get_RoundXXXHdpi, addr 0xb04bea4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundXXXHdpi() ;

/// @brief Method get_RoundXhdpi, addr 0xb04be84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_RoundXhdpi() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_RoundHdpi, addr 0xb04be5c, size 0x8, virtual false, abstract: false, final false
inline void set_RoundHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_RoundIdpi, addr 0xb04be6c, size 0x8, virtual false, abstract: false, final false
inline void set_RoundIdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_RoundMdpi, addr 0xb04be7c, size 0x8, virtual false, abstract: false, final false
inline void set_RoundMdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_RoundXXHdpi, addr 0xb04be9c, size 0x8, virtual false, abstract: false, final false
inline void set_RoundXXHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_RoundXXXHdpi, addr 0xb04beac, size 0x8, virtual false, abstract: false, final false
inline void set_RoundXXXHdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_RoundXhdpi, addr 0xb04be8c, size 0x8, virtual false, abstract: false, final false
inline void set_RoundXhdpi(::UnityEngine::Localization::LocalizedTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoundIconsInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundIconsInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundIconsInfo(RoundIconsInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundIconsInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundIconsInfo(RoundIconsInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25287};

/// [SerializeField]
/// @brief Field m_Round_idpi, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_idpi;

/// [SerializeField]
/// @brief Field m_Round_mdpi, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_mdpi;

/// [SerializeField]
/// @brief Field m_Round_hdpi, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_hdpi;

/// [SerializeField]
/// @brief Field m_Round_xhdpi, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_xhdpi;

/// [SerializeField]
/// @brief Field m_Round_xxhdpi, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_xxhdpi;

/// [SerializeField]
/// @brief Field m_Round_xxxhdpi, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Round_xxxhdpi;

/// @brief Field RoundIcons, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalizedTexture*>*  ___RoundIcons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_idpi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_mdpi) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_hdpi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_xhdpi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_xxhdpi) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___m_Round_xxxhdpi) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo, ___RoundIcons) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::Android::RoundIconsInfo) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::Android

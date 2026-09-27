#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/AdaptiveIcon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AdaptiveIcon)
namespace UnityEngine::Localization {
class LocalizedTexture;
}
// Forward declare root types
namespace UnityEngine::Localization::Platform::Android {
class AdaptiveIcon;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Platform::Android::AdaptiveIcon*, "UnityEngine.Localization.Platform.Android", "AdaptiveIcon");
// Dependencies System.Object
namespace UnityEngine::Localization::Platform::Android {
// Is value type: false
// CS Name: UnityEngine.Localization.Platform.Android.AdaptiveIcon
class CORDL_TYPE AdaptiveIcon : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Background, put=set_Background)) ::UnityEngine::Localization::LocalizedTexture*  Background;

 __declspec(property(get=get_Foreground, put=set_Foreground)) ::UnityEngine::Localization::LocalizedTexture*  Foreground;

/// @brief Field m_Background, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Background, put=__cordl_internal_set_m_Background)) ::UnityEngine::Localization::LocalizedTexture*  m_Background;

/// @brief Field m_Foreground, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Foreground, put=__cordl_internal_set_m_Foreground)) ::UnityEngine::Localization::LocalizedTexture*  m_Foreground;

static inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* New_ctor() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Background() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Background() ;

constexpr ::UnityEngine::Localization::LocalizedTexture* const& __cordl_internal_get_m_Foreground() const;

constexpr ::UnityEngine::Localization::LocalizedTexture*& __cordl_internal_get_m_Foreground() ;

constexpr void __cordl_internal_set_m_Background(::UnityEngine::Localization::LocalizedTexture*  value) ;

constexpr void __cordl_internal_set_m_Foreground(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method .ctor, addr 0xb04b7ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Background, addr 0xb04b7cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_Background() ;

/// @brief Method get_Foreground, addr 0xb04b7dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedTexture* get_Foreground() ;

/// @brief Method set_Background, addr 0xb04b7d4, size 0x8, virtual false, abstract: false, final false
inline void set_Background(::UnityEngine::Localization::LocalizedTexture*  value) ;

/// @brief Method set_Foreground, addr 0xb04b7e4, size 0x8, virtual false, abstract: false, final false
inline void set_Foreground(::UnityEngine::Localization::LocalizedTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdaptiveIcon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveIcon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdaptiveIcon(AdaptiveIcon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdaptiveIcon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdaptiveIcon(AdaptiveIcon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25285};

/// [SerializeField]
/// @brief Field m_Background, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Background;

/// [SerializeField]
/// @brief Field m_Foreground, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedTexture*  ___m_Foreground;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIcon, ___m_Background) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Platform::Android::AdaptiveIcon, ___m_Foreground) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Platform::Android::AdaptiveIcon) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Platform::Android

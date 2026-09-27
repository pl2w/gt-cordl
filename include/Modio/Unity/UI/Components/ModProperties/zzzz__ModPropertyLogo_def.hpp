#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyLogo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__Mod_LogoResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyLogo)
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyLogo;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyLogo");
// Dependencies Modio.Mods.Mod::LogoResolution, System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyLogo
class CORDL_TYPE ModPropertyLogo : public ::System::Object {
public:
// Declarations
/// @brief Field _image, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage>  _image;

/// @brief Field _lazyImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lazyImage, put=__cordl_internal_set__lazyImage)) ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  _lazyImage;

/// @brief Field _loadedActive, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedActive, put=__cordl_internal_set__loadedActive)) ::UnityW<::UnityEngine::GameObject>  _loadedActive;

/// @brief Field _loadingActive, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingActive, put=__cordl_internal_set__loadingActive)) ::UnityW<::UnityEngine::GameObject>  _loadingActive;

/// @brief Field _resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) ::GlobalNamespace::Mod_LogoResolution  _resolution;

/// @brief Field _useHighestAvailableResolutionAsFallback, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHighestAvailableResolutionAsFallback, put=__cordl_internal_set__useHighestAvailableResolutionAsFallback)) bool  _useHighestAvailableResolutionAsFallback;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc6ef0, size 0x18c, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// [CompilerGenerated]
/// @brief Method <OnModUpdate>b__6_0, addr 0x9fc708c, size 0x98, virtual false, abstract: false, final false
inline void _OnModUpdate_b__6_0(::UnityEngine::Texture2D*  texture2D) ;

/// [CompilerGenerated]
/// @brief Method <OnModUpdate>b__6_1, addr 0x9fc7124, size 0xd0, virtual false, abstract: false, final false
inline void _OnModUpdate_b__6_1(bool  isLoading) ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image() ;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__lazyImage() const;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__lazyImage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadedActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadedActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingActive() ;

constexpr ::GlobalNamespace::Mod_LogoResolution const& __cordl_internal_get__resolution() const;

constexpr ::GlobalNamespace::Mod_LogoResolution& __cordl_internal_get__resolution() ;

constexpr bool const& __cordl_internal_get__useHighestAvailableResolutionAsFallback() const;

constexpr bool& __cordl_internal_get__useHighestAvailableResolutionAsFallback() ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__loadedActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loadingActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__resolution(::GlobalNamespace::Mod_LogoResolution  value) ;

constexpr void __cordl_internal_set__useHighestAvailableResolutionAsFallback(bool  value) ;

/// @brief Method .ctor, addr 0x9fc707c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyLogo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyLogo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyLogo(ModPropertyLogo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyLogo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyLogo(ModPropertyLogo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27232};

/// [SerializeField]
/// @brief Field _image, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____image;

/// [SerializeField]
/// @brief Field _resolution, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::Mod_LogoResolution  ____resolution;

/// [SerializeField]
/// @brief Field _useHighestAvailableResolutionAsFallback, offset: 0x1c, size: 0x1, def value: None
 bool  ____useHighestAvailableResolutionAsFallback;

/// [Space]
/// [Tooltip("(Optional) Active while loading, inactive once loaded.")]
/// [SerializeField]
/// @brief Field _loadingActive, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadingActive;

/// [Tooltip("(Optional) Inactive while loading, active once loaded.")]
/// [SerializeField]
/// @brief Field _loadedActive, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadedActive;

/// @brief Field _lazyImage, offset: 0x30, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  ____lazyImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____useHighestAvailableResolutionAsFallback) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____loadingActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____loadedActive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo, ____lazyImage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties

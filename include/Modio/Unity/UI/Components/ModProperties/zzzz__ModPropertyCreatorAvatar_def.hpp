#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCreatorAvatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Users/zzzz__UserProfile_AvatarResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyCreatorAvatar)
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
class Texture2D;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyCreatorAvatar;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyCreatorAvatar");
// Dependencies Modio.Users.UserProfile::AvatarResolution, System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyCreatorAvatar
class CORDL_TYPE ModPropertyCreatorAvatar : public ::System::Object {
public:
// Declarations
/// @brief Field _image, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage>  _image;

/// @brief Field _lazyImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lazyImage, put=__cordl_internal_set__lazyImage)) ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  _lazyImage;

/// @brief Field _resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) ::GlobalNamespace::UserProfile_AvatarResolution  _resolution;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc5d14, size 0x150, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// [CompilerGenerated]
/// @brief Method <OnModUpdate>b__3_0, addr 0x9fc5e6c, size 0x98, virtual false, abstract: false, final false
inline void _OnModUpdate_b__3_0(::UnityEngine::Texture2D*  texture2D) ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image() ;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__lazyImage() const;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__lazyImage() ;

constexpr ::GlobalNamespace::UserProfile_AvatarResolution const& __cordl_internal_get__resolution() const;

constexpr ::GlobalNamespace::UserProfile_AvatarResolution& __cordl_internal_get__resolution() ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__resolution(::GlobalNamespace::UserProfile_AvatarResolution  value) ;

/// @brief Method .ctor, addr 0x9fc5e64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyCreatorAvatar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreatorAvatar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyCreatorAvatar(ModPropertyCreatorAvatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreatorAvatar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyCreatorAvatar(ModPropertyCreatorAvatar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27219};

/// [SerializeField]
/// @brief Field _image, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____image;

/// [SerializeField]
/// @brief Field _resolution, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::UserProfile_AvatarResolution  ____resolution;

/// @brief Field _lazyImage, offset: 0x20, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  ____lazyImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar, ____image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar, ____resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar, ____lazyImage) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties

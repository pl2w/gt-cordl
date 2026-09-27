#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyCreatorAvatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Users/zzzz__UserProfile_AvatarResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserPropertyCreatorAvatar)
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Users {
class UserProfile;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyCreatorAvatar;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyCreatorAvatar");
// Dependencies Modio.Users.UserProfile::AvatarResolution, System.Object
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyCreatorAvatar
class CORDL_TYPE UserPropertyCreatorAvatar : public ::System::Object {
public:
// Declarations
/// @brief Field _image, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage>  _image;

/// @brief Field _lazyImage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lazyImage, put=__cordl_internal_set__lazyImage)) ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  _lazyImage;

/// @brief Field _noUserImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noUserImage, put=__cordl_internal_set__noUserImage)) ::UnityW<::UnityEngine::Texture>  _noUserImage;

/// @brief Field _resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) ::GlobalNamespace::UserProfile_AvatarResolution  _resolution;

/// @brief Field _useHighestAvailableResolutionAsFallback, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHighestAvailableResolutionAsFallback, put=__cordl_internal_set__useHighestAvailableResolutionAsFallback)) bool  _useHighestAvailableResolutionAsFallback;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar* New_ctor() ;

/// @brief Method OnUserUpdate, addr 0x9fbed28, size 0x1a4, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

/// [CompilerGenerated]
/// @brief Method <OnUserUpdate>b__5_0, addr 0x9fbeedc, size 0x98, virtual false, abstract: false, final false
inline void _OnUserUpdate_b__5_0(::UnityEngine::Texture2D*  texture2D) ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image() ;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__lazyImage() const;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__lazyImage() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__noUserImage() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__noUserImage() ;

constexpr ::GlobalNamespace::UserProfile_AvatarResolution const& __cordl_internal_get__resolution() const;

constexpr ::GlobalNamespace::UserProfile_AvatarResolution& __cordl_internal_get__resolution() ;

constexpr bool const& __cordl_internal_get__useHighestAvailableResolutionAsFallback() const;

constexpr bool& __cordl_internal_get__useHighestAvailableResolutionAsFallback() ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__noUserImage(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__resolution(::GlobalNamespace::UserProfile_AvatarResolution  value) ;

constexpr void __cordl_internal_set__useHighestAvailableResolutionAsFallback(bool  value) ;

/// @brief Method .ctor, addr 0x9fbeecc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyCreatorAvatar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyCreatorAvatar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyCreatorAvatar(UserPropertyCreatorAvatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyCreatorAvatar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyCreatorAvatar(UserPropertyCreatorAvatar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27169};

/// [SerializeField]
/// @brief Field _image, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____image;

/// [SerializeField]
/// @brief Field _resolution, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::UserProfile_AvatarResolution  ____resolution;

/// [SerializeField]
/// @brief Field _useHighestAvailableResolutionAsFallback, offset: 0x1c, size: 0x1, def value: None
 bool  ____useHighestAvailableResolutionAsFallback;

/// [SerializeField]
/// @brief Field _noUserImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____noUserImage;

/// @brief Field _lazyImage, offset: 0x28, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  ____lazyImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar, ____image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar, ____resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar, ____useHighestAvailableResolutionAsFallback) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar, ____noUserImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar, ____lazyImage) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

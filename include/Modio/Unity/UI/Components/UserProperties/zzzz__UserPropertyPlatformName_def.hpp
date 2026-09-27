#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyPlatformName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UserPropertyPlatformName)
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyPlatformName_PlatformIcon;
}
namespace Modio::Users {
class UserProfile;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyPlatformName;
}
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyPlatformName_PlatformIcon;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*);
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyPlatformName");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyPlatformName/PlatformIcon");
// Dependencies Modio.Unity.UI.Components.UserProperties.UserPropertyPlatformName::PlatformIcon, System.Object, UnityEngine.GameObject
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyPlatformName
class CORDL_TYPE UserPropertyPlatformName : public ::System::Object {
public:
// Declarations
using PlatformIcon = ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon;

/// @brief Field _enableIsUsernameDefinedByPortal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__enableIsUsernameDefinedByPortal, put=__cordl_internal_set__enableIsUsernameDefinedByPortal)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _enableIsUsernameDefinedByPortal;

/// @brief Field _platformIcons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformIcons, put=__cordl_internal_set__platformIcons)) ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>  _platformIcons;

/// @brief Field _platformImage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformImage, put=__cordl_internal_set__platformImage)) ::UnityW<::UnityEngine::UI::Image>  _platformImage;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName* New_ctor() ;

/// @brief Method OnUserUpdate, addr 0x9fc09e4, size 0x22c, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__enableIsUsernameDefinedByPortal() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__enableIsUsernameDefinedByPortal() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*> const& __cordl_internal_get__platformIcons() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>& __cordl_internal_get__platformIcons() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__platformImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__platformImage() ;

constexpr void __cordl_internal_set__enableIsUsernameDefinedByPortal(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__platformIcons(::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>  value) ;

constexpr void __cordl_internal_set__platformImage(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x9fc0c10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyPlatformName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyPlatformName", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyPlatformName(UserPropertyPlatformName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyPlatformName", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyPlatformName(UserPropertyPlatformName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27177};

/// [SerializeField]
/// @brief Field _enableIsUsernameDefinedByPortal, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____enableIsUsernameDefinedByPortal;

/// [SerializeField]
/// @brief Field _platformImage, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____platformImage;

/// [SerializeField]
/// @brief Field _platformIcons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>  ____platformIcons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName, ____enableIsUsernameDefinedByPortal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName, ____platformImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName, ____platformIcons) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties
// Dependencies Modio.API.ModioAPI::Portal, System.Object
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyPlatformName/PlatformIcon
class CORDL_TYPE UserPropertyPlatformName_PlatformIcon : public ::System::Object {
public:
// Declarations
/// @brief Field Icon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Icon, put=__cordl_internal_set_Icon)) ::UnityW<::UnityEngine::Sprite>  Icon;

/// @brief Field Portal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Portal, put=__cordl_internal_set_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_Icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_Icon() ;

constexpr ::GlobalNamespace::ModioAPI_Portal const& __cordl_internal_get_Portal() const;

constexpr ::GlobalNamespace::ModioAPI_Portal& __cordl_internal_get_Portal() ;

constexpr void __cordl_internal_set_Icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_Portal(::GlobalNamespace::ModioAPI_Portal  value) ;

/// @brief Method .ctor, addr 0x9fc0c18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyPlatformName_PlatformIcon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyPlatformName_PlatformIcon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyPlatformName_PlatformIcon(UserPropertyPlatformName_PlatformIcon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyPlatformName_PlatformIcon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyPlatformName_PlatformIcon(UserPropertyPlatformName_PlatformIcon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27176};

/// @brief Field Portal, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ModioAPI_Portal  ___Portal;

/// @brief Field Icon, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___Icon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon, ___Portal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon, ___Icon) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

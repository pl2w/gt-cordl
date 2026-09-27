#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertySeeMoreFromUserButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserPropertySeeMoreFromUserButton)
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Users {
class UserProfile;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertySeeMoreFromUserButton;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton*, "Modio.Unity.UI.Components.UserProperties", "UserPropertySeeMoreFromUserButton");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertySeeMoreFromUserButton
class CORDL_TYPE UserPropertySeeMoreFromUserButton : public ::System::Object {
public:
// Declarations
/// @brief Field _button, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _user, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__user, put=__cordl_internal_set__user)) ::Modio::Users::UserProfile*  _user;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton* New_ctor() ;

/// @brief Method OnClicked, addr 0x9fc0d50, size 0x12c, virtual false, abstract: false, final false
inline void OnClicked() ;

/// @brief Method OnDestroy, addr 0x9fc0c2c, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc0cc0, size 0x90, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc0c30, size 0x90, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnUserUpdate, addr 0x9fc0c20, size 0x8, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

/// @brief Method Start, addr 0x9fc0c28, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr ::Modio::Users::UserProfile* const& __cordl_internal_get__user() const;

constexpr ::Modio::Users::UserProfile*& __cordl_internal_get__user() ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__user(::Modio::Users::UserProfile*  value) ;

/// @brief Method .ctor, addr 0x9fc0e7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertySeeMoreFromUserButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertySeeMoreFromUserButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertySeeMoreFromUserButton(UserPropertySeeMoreFromUserButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertySeeMoreFromUserButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertySeeMoreFromUserButton(UserPropertySeeMoreFromUserButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27178};

/// [SerializeField]
/// @brief Field _button, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// @brief Field _user, offset: 0x18, size: 0x8, def value: None
 ::Modio::Users::UserProfile*  ____user;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton, ____button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton, ____user) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertySeeMoreFromUserButton) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyEnableOnLogin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UserPropertyEnableOnLogin)
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Users {
class UserProfile;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyEnableOnLogin;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyEnableOnLogin");
// Dependencies System.Object, UnityEngine.GameObject
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyEnableOnLogin
class CORDL_TYPE UserPropertyEnableOnLogin : public ::System::Object {
public:
// Declarations
/// @brief Field _activeWhenLoggedIn, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeWhenLoggedIn, put=__cordl_internal_set__activeWhenLoggedIn)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _activeWhenLoggedIn;

/// @brief Field _activeWhenLoggedOut, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeWhenLoggedOut, put=__cordl_internal_set__activeWhenLoggedOut)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _activeWhenLoggedOut;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin* New_ctor() ;

/// @brief Method OnUserUpdate, addr 0x9fc061c, size 0x114, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__activeWhenLoggedIn() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__activeWhenLoggedIn() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__activeWhenLoggedOut() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__activeWhenLoggedOut() ;

constexpr void __cordl_internal_set__activeWhenLoggedIn(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__activeWhenLoggedOut(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9fc0730, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyEnableOnLogin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyEnableOnLogin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyEnableOnLogin(UserPropertyEnableOnLogin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyEnableOnLogin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyEnableOnLogin(UserPropertyEnableOnLogin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27174};

/// [SerializeField]
/// @brief Field _activeWhenLoggedOut, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____activeWhenLoggedOut;

/// [SerializeField]
/// @brief Field _activeWhenLoggedIn, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____activeWhenLoggedIn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin, ____activeWhenLoggedOut) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin, ____activeWhenLoggedIn) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyEnableOnLogin) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

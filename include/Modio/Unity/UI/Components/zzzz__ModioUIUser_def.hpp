#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIUser)
namespace Modio::Unity::UI::Components {
class IModioUIPropertiesOwner;
}
namespace Modio::Users {
class UserProfile;
}
namespace Modio::Users {
class User;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIUser;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIUser*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIUser*, "Modio.Unity.UI.Components", "ModioUIUser");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIUser
class CORDL_TYPE ModioUIUser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_User, put=set_User)) ::Modio::Users::UserProfile*  User;

/// @brief Field <User>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__User_k__BackingField, put=__cordl_internal_set__User_k__BackingField)) ::Modio::Users::UserProfile*  _User_k__BackingField;

/// @brief Field _useLoggedInUser, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__useLoggedInUser, put=__cordl_internal_set__useLoggedInUser)) bool  _useLoggedInUser;

/// @brief Field onUserUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUserUpdate, put=__cordl_internal_set_onUserUpdate)) ::UnityEngine::Events::UnityEvent*  onUserUpdate;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr operator  ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept;

/// @brief Method AddUpdatePropertiesListener, addr 0x9fbe8d0, size 0x18, virtual true, abstract: false, final true
inline void AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method GetCurrentUser, addr 0x9fbe754, size 0x68, virtual false, abstract: false, final false
inline void GetCurrentUser() ;

static inline ::Modio::Unity::UI::Components::ModioUIUser* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fbe7bc, size 0x114, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnUserChanged, addr 0x9fbea5c, size 0x14, virtual false, abstract: false, final false
inline void OnUserChanged(::Modio::Users::User*  user) ;

/// @brief Method ProfileUpdated, addr 0x9fbea70, size 0x18, virtual false, abstract: false, final false
inline void ProfileUpdated() ;

/// @brief Method RemoveUpdatePropertiesListener, addr 0x9fbe8e8, size 0x18, virtual true, abstract: false, final true
inline void RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method SetUser, addr 0x9fbe900, size 0x15c, virtual false, abstract: false, final false
inline void SetUser(::Modio::Users::UserProfile*  profile) ;

/// @brief Method Start, addr 0x9fbe6c0, size 0x94, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Modio::Users::UserProfile* const& __cordl_internal_get__User_k__BackingField() const;

constexpr ::Modio::Users::UserProfile*& __cordl_internal_get__User_k__BackingField() ;

constexpr bool const& __cordl_internal_get__useLoggedInUser() const;

constexpr bool& __cordl_internal_get__useLoggedInUser() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onUserUpdate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onUserUpdate() ;

constexpr void __cordl_internal_set__User_k__BackingField(::Modio::Users::UserProfile*  value) ;

constexpr void __cordl_internal_set__useLoggedInUser(bool  value) ;

constexpr void __cordl_internal_set_onUserUpdate(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9fbea88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_User, addr 0x9fbe6b0, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Users::UserProfile* get_User() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept;

/// [CompilerGenerated]
/// @brief Method set_User, addr 0x9fbe6b8, size 0x8, virtual false, abstract: false, final false
inline void set_User(::Modio::Users::UserProfile*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIUser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIUser(ModioUIUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIUser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIUser(ModioUIUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27165};

/// @brief Field onUserUpdate, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onUserUpdate;

/// [SerializeField]
/// @brief Field _useLoggedInUser, offset: 0x28, size: 0x1, def value: None
 bool  ____useLoggedInUser;

/// [CompilerGenerated]
/// @brief Field <User>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Modio::Users::UserProfile*  ____User_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIUser, ___onUserUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIUser, ____useLoggedInUser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIUser, ____User_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIUser) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components

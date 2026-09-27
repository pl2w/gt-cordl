#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyWalletAmount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserPropertyWalletAmount)
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Users {
class UserProfile;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyWalletAmount;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyWalletAmount");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyWalletAmount
class CORDL_TYPE UserPropertyWalletAmount : public ::System::Object {
public:
// Declarations
/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Field hasSetText, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSetText, put=__cordl_internal_set_hasSetText)) bool  hasSetText;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc0f58, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc0fcc, size 0x4, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc0f5c, size 0x70, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnUserUpdate, addr 0x9fc0e84, size 0xd0, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

/// @brief Method Start, addr 0x9fc0f54, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr bool const& __cordl_internal_get_hasSetText() const;

constexpr bool& __cordl_internal_get_hasSetText() ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_hasSetText(bool  value) ;

/// @brief Method .ctor, addr 0x9fc0fd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyWalletAmount() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyWalletAmount", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyWalletAmount(UserPropertyWalletAmount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyWalletAmount", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyWalletAmount(UserPropertyWalletAmount const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27179};

/// [SerializeField]
/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// @brief Field hasSetText, offset: 0x18, size: 0x1, def value: None
 bool  ___hasSetText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount, ___hasSetText) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyWalletAmount) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

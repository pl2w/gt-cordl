#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserPropertyName)
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Users {
class UserProfile;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyName;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyName*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyName*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyName");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyName
class CORDL_TYPE UserPropertyName : public ::System::Object {
public:
// Declarations
/// @brief Field _localisedText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__localisedText, put=__cordl_internal_set__localisedText)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _localisedText;

/// @brief Field _noUserLoggedIn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noUserLoggedIn, put=__cordl_internal_set__noUserLoggedIn)) ::StringW  _noUserLoggedIn;

/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Field _userLoggedInFormat, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__userLoggedInFormat, put=__cordl_internal_set__userLoggedInFormat)) ::StringW  _userLoggedInFormat;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyName* New_ctor() ;

/// @brief Method OnUserUpdate, addr 0x9fc0738, size 0x238, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__localisedText() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__localisedText() ;

constexpr ::StringW const& __cordl_internal_get__noUserLoggedIn() const;

constexpr ::StringW& __cordl_internal_get__noUserLoggedIn() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr ::StringW const& __cordl_internal_get__userLoggedInFormat() const;

constexpr ::StringW& __cordl_internal_get__userLoggedInFormat() ;

constexpr void __cordl_internal_set__localisedText(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__noUserLoggedIn(::StringW  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__userLoggedInFormat(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fc098c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyName", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyName(UserPropertyName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyName", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyName(UserPropertyName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27175};

/// [SerializeField]
/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// @brief Field _localisedText, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____localisedText;

/// [SerializeField]
/// @brief Field _userLoggedInFormat, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____userLoggedInFormat;

/// [SerializeField]
/// @brief Field _noUserLoggedIn, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____noUserLoggedIn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyName, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyName, ____localisedText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyName, ____userLoggedInFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyName, ____noUserLoggedIn) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyName) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties

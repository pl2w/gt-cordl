#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/IUserProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUserProperty)
namespace Modio::Users {
class UserProfile;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::IUserProperty*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::IUserProperty*, "Modio.Unity.UI.Components.UserProperties", "IUserProperty");
// Dependencies 
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.IUserProperty
class CORDL_TYPE IUserProperty {
public:
// Declarations
/// @brief Method OnUserUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

// Ctor Parameters [CppParam { name: "", ty: "IUserProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUserProperty(IUserProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::UserProperties

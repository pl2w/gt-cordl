#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/IModioUIPropertiesOwner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModioUIPropertiesOwner)
namespace UnityEngine::Events {
class UnityAction;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class IModioUIPropertiesOwner;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::IModioUIPropertiesOwner*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::IModioUIPropertiesOwner*, "Modio.Unity.UI.Components", "IModioUIPropertiesOwner");
// Dependencies 
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.IModioUIPropertiesOwner
class CORDL_TYPE IModioUIPropertiesOwner {
public:
// Declarations
/// @brief Method AddUpdatePropertiesListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method RemoveUpdatePropertiesListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

// Ctor Parameters [CppParam { name: "", ty: "IModioUIPropertiesOwner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioUIPropertiesOwner(IModioUIPropertiesOwner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components

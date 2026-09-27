#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/IPropertyMonoBehaviourEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyMonoBehaviourEvents)
// Forward declare root types
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*, "Modio.Unity.UI.Components", "IPropertyMonoBehaviourEvents");
// Dependencies 
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.IPropertyMonoBehaviourEvents
class CORDL_TYPE IPropertyMonoBehaviourEvents {
public:
// Declarations
/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Start() ;

// Ctor Parameters [CppParam { name: "", ty: "IPropertyMonoBehaviourEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPropertyMonoBehaviourEvents(IPropertyMonoBehaviourEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components

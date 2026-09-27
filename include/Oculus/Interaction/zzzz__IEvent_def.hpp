#pragma once
// IWYU pragma private; include "Oculus/Interaction/IEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEvent)
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class IEvent;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IEvent*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IEvent*, "Oculus.Interaction", "IEvent");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IEvent
class CORDL_TYPE IEvent {
public:
// Declarations
 __declspec(property(get=get_Data)) ::System::Object*  Data;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Data() ;

// Ctor Parameters [CppParam { name: "", ty: "IEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEvent(IEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

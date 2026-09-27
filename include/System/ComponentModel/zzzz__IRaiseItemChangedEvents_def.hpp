#pragma once
// IWYU pragma private; include "System/ComponentModel/IRaiseItemChangedEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRaiseItemChangedEvents)
// Forward declare root types
namespace System::ComponentModel {
class IRaiseItemChangedEvents;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IRaiseItemChangedEvents*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IRaiseItemChangedEvents*, "System.ComponentModel", "IRaiseItemChangedEvents");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IRaiseItemChangedEvents
class CORDL_TYPE IRaiseItemChangedEvents {
public:
// Declarations
 __declspec(property(get=get_RaisesItemChangedEvents)) bool  RaisesItemChangedEvents;

/// @brief Method get_RaisesItemChangedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_RaisesItemChangedEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "IRaiseItemChangedEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRaiseItemChangedEvents(IRaiseItemChangedEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel

#pragma once
// IWYU pragma private; include "Pathfinding/AstarWorkItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AstarWorkItem)
namespace Pathfinding {
class IWorkItemContext;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Pathfinding {
struct AstarWorkItem;
}
// Write type traits
MARK_VAL_T(::Pathfinding::AstarWorkItem);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarWorkItem, "Pathfinding", "AstarWorkItem");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.AstarWorkItem
struct CORDL_TYPE AstarWorkItem {
public:
// Declarations
/// @brief Method .ctor, addr 0x5e58310, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  init, ::System::Func_2<bool,bool>*  update) ;

/// @brief Method .ctor, addr 0x5e670cc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::Pathfinding::IWorkItemContext*>*  init, ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  update) ;

/// @brief Method .ctor, addr 0x5e5dfac, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<bool,bool>*  update) ;

/// @brief Method .ctor, addr 0x5e67078, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  update) ;

// Ctor Parameters []
// @brief default ctor
constexpr AstarWorkItem() ;

// Ctor Parameters [CppParam { name: "init", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "initWithContext", ty: "::System::Action_1<::Pathfinding::IWorkItemContext*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "update", ty: "::System::Func_2<bool,bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "updateWithContext", ty: "::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*", modifiers: "", def_value: None, comment: None }]
constexpr AstarWorkItem(::System::Action*  init, ::System::Action_1<::Pathfinding::IWorkItemContext*>*  initWithContext, ::System::Func_2<bool,bool>*  update, ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  updateWithContext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field init, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  init;

/// @brief Field initWithContext, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::IWorkItemContext*>*  initWithContext;

/// @brief Field update, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<bool,bool>*  update;

/// @brief Field updateWithContext, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<::Pathfinding::IWorkItemContext*,bool,bool>*  updateWithContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarWorkItem, init) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarWorkItem, initWithContext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarWorkItem, update) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarWorkItem, updateWithContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarWorkItem) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding

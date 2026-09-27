#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioWaitingPanelBase)
namespace GlobalNamespace {
template<typename T>
struct ModioWaitingPanelBase__OpenAndWaitForAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename T>
struct ModioWaitingPanelBase__OpenAndWaitFor_d__0_1;
}
namespace GlobalNamespace {
struct ModioWaitingPanelBase__OpenAndWaitFor_d__2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioWaitingPanelBase;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioWaitingPanelBase*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioWaitingPanelBase*, "Modio.Unity.UI.Panels", "ModioWaitingPanelBase");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioWaitingPanelBase
class CORDL_TYPE ModioWaitingPanelBase : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
template<typename T>
using _OpenAndWaitForAsync_d__1_1 = ::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitForAsync_d__1_1<T>;

template<typename T>
using _OpenAndWaitFor_d__0_1 = ::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1<T>;

using _OpenAndWaitFor_d__2 = ::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2;

/// @brief Method CancelPressed, addr 0x9fabff4, size 0x4, virtual true, abstract: false, final false
inline void CancelPressed() ;

/// @brief Method DoDefaultSelection, addr 0x9fabfe4, size 0x10, virtual true, abstract: false, final false
inline void DoDefaultSelection() ;

static inline ::Modio::Unity::UI::Panels::ModioWaitingPanelBase* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModioWaitingPanelBase::<OpenAndWaitFor>d__2))]
/// @brief Method OpenAndWaitFor, addr 0x9fabedc, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* OpenAndWaitFor(::System::Threading::Tasks::Task*  task, ::System::Action*  action) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModioWaitingPanelBase::<OpenAndWaitFor>d__0`1<T>))]
/// @brief Method OpenAndWaitFor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void OpenAndWaitFor(::System::Threading::Tasks::Task_1<T>*  task, ::System::Action_1<T>*  action) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModioWaitingPanelBase::<OpenAndWaitForAsync>d__1`1<T>))]
/// @brief Method OpenAndWaitForAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* OpenAndWaitForAsync(::System::Threading::Tasks::Task_1<T>*  task) ;

/// @brief Method .ctor, addr 0x9fabff8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioWaitingPanelBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioWaitingPanelBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioWaitingPanelBase(ModioWaitingPanelBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioWaitingPanelBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioWaitingPanelBase(ModioWaitingPanelBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27083};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioWaitingPanelBase) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels

#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/IModioUISelectable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(IModioUISelectable)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable_SelectableStateChangeDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable;
}
namespace Modio::Unity::UI::Components::Selectables {
class IModioUISelectable_SelectableStateChangeDelegate;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::IModioUISelectable*);
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::IModioUISelectable*, "Modio.Unity.UI.Components.Selectables", "IModioUISelectable");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*, "Modio.Unity.UI.Components.Selectables", "IModioUISelectable/SelectableStateChangeDelegate");
// Dependencies 
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.IModioUISelectable
class CORDL_TYPE IModioUISelectable {
public:
// Declarations
using SelectionState = ::GlobalNamespace::IModioUISelectable_SelectionState;

using SelectableStateChangeDelegate = ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate;

 __declspec(property(get=get_State)) ::GlobalNamespace::IModioUISelectable_SelectionState  State;

/// [CompilerGenerated]
/// @brief Method add_StateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::IModioUISelectable_SelectionState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_StateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_StateChanged(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IModioUISelectable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioUISelectable(IModioUISelectable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::Selectables
// Dependencies System.MulticastDelegate
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.IModioUISelectable/SelectableStateChangeDelegate
class CORDL_TYPE IModioUISelectable_SelectableStateChangeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9fc108c, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9fc1134, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9fc1078, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

static inline ::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9fc0fd8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IModioUISelectable_SelectableStateChangeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IModioUISelectable_SelectableStateChangeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IModioUISelectable_SelectableStateChangeDelegate(IModioUISelectable_SelectableStateChangeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IModioUISelectable_SelectableStateChangeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioUISelectable_SelectableStateChangeDelegate(IModioUISelectable_SelectableStateChangeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::IModioUISelectable_SelectableStateChangeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables

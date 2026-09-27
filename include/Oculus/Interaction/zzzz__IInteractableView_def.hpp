#pragma once
// IWYU pragma private; include "Oculus/Interaction/IInteractableView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInteractableView)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractableState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class IInteractableView;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IInteractableView*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IInteractableView*, "Oculus.Interaction", "IInteractableView");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IInteractableView
class CORDL_TYPE IInteractableView {
public:
// Declarations
 __declspec(property(get=get_Data)) ::System::Object*  Data;

 __declspec(property(get=get_InteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  InteractorViews;

 __declspec(property(get=get_MaxInteractors)) int32_t  MaxInteractors;

 __declspec(property(get=get_MaxSelectingInteractors)) int32_t  MaxSelectingInteractors;

 __declspec(property(get=get_SelectingInteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  SelectingInteractorViews;

 __declspec(property(get=get_State)) ::Oculus::Interaction::InteractableState  State;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_InteractorViews, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_InteractorViews() ;

/// @brief Method get_MaxInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MaxInteractors() ;

/// @brief Method get_MaxSelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MaxSelectingInteractors() ;

/// @brief Method get_SelectingInteractorViews, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_SelectingInteractorViews() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::InteractableState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractableView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractableView(IInteractableView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

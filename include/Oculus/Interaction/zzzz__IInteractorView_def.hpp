#pragma once
// IWYU pragma private; include "Oculus/Interaction/IInteractorView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInteractorView)
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractorState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class IInteractorView;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IInteractorView*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IInteractorView*, "Oculus.Interaction", "IInteractorView");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IInteractorView
class CORDL_TYPE IInteractorView {
public:
// Declarations
 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

 __declspec(property(get=get_Data)) ::System::Object*  Data;

 __declspec(property(get=get_HasCandidate)) bool  HasCandidate;

 __declspec(property(get=get_HasInteractable)) bool  HasInteractable;

 __declspec(property(get=get_HasSelectedInteractable)) bool  HasSelectedInteractable;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_State)) ::Oculus::Interaction::InteractorState  State;

/// [CompilerGenerated]
/// @brief Method add_WhenPostprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenPreprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenProcessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

/// @brief Method get_CandidateProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_CandidateProperties() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_HasCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_Identifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Identifier() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::InteractorState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPostprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPreprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenProcessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractorView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractorView(IInteractorView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

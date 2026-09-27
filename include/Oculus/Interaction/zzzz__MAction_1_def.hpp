#pragma once
// IWYU pragma private; include "Oculus/Interaction/MAction_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(MAction_1)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename T>
class MAction_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::MAction_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::MAction_1, "Oculus.Interaction", "MAction`1");
// Dependencies 
namespace Oculus::Interaction {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.MAction`1<T>
class CORDL_TYPE MAction_1 {
public:
// Declarations
/// [CompilerGenerated]
/// @brief Method add_Action, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_Action(::System::Action_1<T>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_Action, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_Action(::System::Action_1<T>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "MAction_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MAction_1(MAction_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

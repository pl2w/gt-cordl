#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointable)
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction {
class IPointable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IPointable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IPointable*, "Oculus.Interaction", "IPointable");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IPointable
class CORDL_TYPE IPointable {
public:
// Declarations
/// [CompilerGenerated]
/// @brief Method add_WhenPointerEventRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPointerEventRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPointable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPointable(IPointable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

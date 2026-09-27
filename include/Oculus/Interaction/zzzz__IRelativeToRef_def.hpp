#pragma once
// IWYU pragma private; include "Oculus/Interaction/IRelativeToRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRelativeToRef)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class IRelativeToRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IRelativeToRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IRelativeToRef*, "Oculus.Interaction", "IRelativeToRef");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IRelativeToRef
class CORDL_TYPE IRelativeToRef {
public:
// Declarations
 __declspec(property(get=get_RelativeTo)) ::UnityW<::UnityEngine::Transform>  RelativeTo;

/// @brief Method get_RelativeTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_RelativeTo() ;

// Ctor Parameters [CppParam { name: "", ty: "IRelativeToRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRelativeToRef(IRelativeToRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

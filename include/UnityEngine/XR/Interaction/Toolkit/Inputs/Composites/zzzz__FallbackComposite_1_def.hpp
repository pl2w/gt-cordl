#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/FallbackComposite_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
CORDL_MODULE_EXPORT(FallbackComposite_1)
namespace GlobalNamespace {
template<typename TValue>
struct FallbackComposite_1_QuaternionCompositeComparer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
template<typename TValue>
class FallbackComposite_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "FallbackComposite`1");
// [Preserve]
// Dependencies UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.FallbackComposite`1<TValue>
class CORDL_TYPE FallbackComposite_1 : public ::UnityEngine::InputSystem::InputBindingComposite_1<TValue> {
public:
// Declarations
using QuaternionCompositeComparer = ::GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer<TValue>;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FallbackComposite_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FallbackComposite_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FallbackComposite_1(FallbackComposite_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FallbackComposite_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FallbackComposite_1(FallbackComposite_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Composites

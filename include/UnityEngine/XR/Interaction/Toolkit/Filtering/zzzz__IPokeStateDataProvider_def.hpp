#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IPokeStateDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPokeStateDataProvider)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IPokeStateDataProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IPokeStateDataProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider
class CORDL_TYPE IPokeStateDataProvider {
public:
// Declarations
 __declspec(property(get=get_pokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  pokeStateData;

/// @brief Method get_pokeStateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData() ;

// Ctor Parameters [CppParam { name: "", ty: "IPokeStateDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPokeStateDataProvider(IPokeStateDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering

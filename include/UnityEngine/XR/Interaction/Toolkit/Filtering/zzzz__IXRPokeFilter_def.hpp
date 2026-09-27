#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRPokeFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRPokeFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRPokeFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRPokeFilter");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRPokeFilter
class CORDL_TYPE IXRPokeFilter {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRInteractionStrengthFilter() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRSelectFilter() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRPokeFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRPokeFilter(IXRPokeFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering

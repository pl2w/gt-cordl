#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SamplesInfoPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SamplesInfoPanel)
// Forward declare root types
namespace Oculus::Interaction::Samples {
class SamplesInfoPanel;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::SamplesInfoPanel*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SamplesInfoPanel*, "Oculus.Interaction.Samples", "SamplesInfoPanel");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SamplesInfoPanel
class CORDL_TYPE SamplesInfoPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method HandleUrlButton, addr 0xa43ead0, size 0x58, virtual false, abstract: false, final false
inline void HandleUrlButton(::StringW  url) ;

static inline ::Oculus::Interaction::Samples::SamplesInfoPanel* New_ctor() ;

/// @brief Method .ctor, addr 0xa43eb28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SamplesInfoPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SamplesInfoPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SamplesInfoPanel(SamplesInfoPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SamplesInfoPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SamplesInfoPanel(SamplesInfoPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::SamplesInfoPanel) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples

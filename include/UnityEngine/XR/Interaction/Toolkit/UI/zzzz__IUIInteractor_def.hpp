#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/IUIInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUIInteractor)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, "UnityEngine.XR.Interaction.Toolkit.UI", "IUIInteractor");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor
class CORDL_TYPE IUIInteractor {
public:
// Declarations
/// @brief Method TryGetUIModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UpdateUIModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

// Ctor Parameters [CppParam { name: "", ty: "IUIInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUIInteractor(IUIInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI

#pragma once
// IWYU pragma private; include "Oculus/Interaction/ISnapPoseDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISnapPoseDelegate)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class ISnapPoseDelegate;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ISnapPoseDelegate*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ISnapPoseDelegate*, "Oculus.Interaction", "ISnapPoseDelegate");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ISnapPoseDelegate
class CORDL_TYPE ISnapPoseDelegate {
public:
// Declarations
/// @brief Method MoveTrackedElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p) ;

/// @brief Method SnapElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SnapElement(int32_t  id, ::UnityEngine::Pose  pose) ;

/// @brief Method SnapPoseForElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method TrackElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TrackElement(int32_t  id, ::UnityEngine::Pose  p) ;

/// @brief Method UnsnapElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnsnapElement(int32_t  id) ;

/// @brief Method UntrackElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UntrackElement(int32_t  id) ;

// Ctor Parameters [CppParam { name: "", ty: "ISnapPoseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISnapPoseDelegate(ISnapPoseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15870};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

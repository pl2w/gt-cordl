#pragma once
// IWYU pragma private; include "Oculus/Interaction/IHandSphereMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IHandSphereMap)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction {
struct HandSphere;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class IHandSphereMap;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IHandSphereMap*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IHandSphereMap*, "Oculus.Interaction", "IHandSphereMap");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IHandSphereMap
class CORDL_TYPE IHandSphereMap {
public:
// Declarations
/// @brief Method GetSpheres, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetSpheres(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::HandJointId  joint, ::UnityEngine::Pose  pose, float_t  scale, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  spheres) ;

// Ctor Parameters [CppParam { name: "", ty: "IHandSphereMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandSphereMap(IHandSphereMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction

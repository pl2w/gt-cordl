#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointsRadiusFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JointsRadiusFeature)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class Hand;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class JointsRadiusFeature;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::JointsRadiusFeature*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::JointsRadiusFeature*, "Oculus.Interaction.Input", "JointsRadiusFeature");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.JointsRadiusFeature
class CORDL_TYPE JointsRadiusFeature : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::Oculus::Interaction::Input::Hand>  _hand;

/// @brief Method GetJointRadius, addr 0xa51089c, size 0x7c, virtual false, abstract: false, final false
inline float_t GetJointRadius(::Oculus::Interaction::Input::HandJointId  id) ;

static inline ::Oculus::Interaction::Input::JointsRadiusFeature* New_ctor() ;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::Hand>& __cordl_internal_get__hand() ;

constexpr void __cordl_internal_set__hand(::UnityW<::Oculus::Interaction::Input::Hand>  value) ;

/// @brief Method .ctor, addr 0xa51272c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointsRadiusFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointsRadiusFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointsRadiusFeature(JointsRadiusFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointsRadiusFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointsRadiusFeature(JointsRadiusFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16502};

/// [SerializeField]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::Hand>  ____hand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::JointsRadiusFeature, ____hand) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::JointsRadiusFeature) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

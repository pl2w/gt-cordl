#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveTowardsTargetProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MoveTowardsTargetProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
struct PoseTravelData;
}
// Forward declare root types
namespace Oculus::Interaction {
class MoveTowardsTargetProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MoveTowardsTargetProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MoveTowardsTargetProvider*, "Oculus.Interaction", "MoveTowardsTargetProvider");
// Dependencies Oculus.Interaction.PoseTravelData, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MoveTowardsTargetProvider
class CORDL_TYPE MoveTowardsTargetProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _travellingData, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__travellingData, put=__cordl_internal_set__travellingData)) ::Oculus::Interaction::PoseTravelData  _travellingData;

/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method CreateMovement, addr 0xa474f78, size 0x78, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

/// @brief Method InjectAllMoveTowardsTargetProvider, addr 0xa475028, size 0x14, virtual false, abstract: false, final false
inline void InjectAllMoveTowardsTargetProvider(::Oculus::Interaction::PoseTravelData  travellingData) ;

/// @brief Method InjectTravellingData, addr 0xa47503c, size 0x14, virtual false, abstract: false, final false
inline void InjectTravellingData(::Oculus::Interaction::PoseTravelData  travellingData) ;

static inline ::Oculus::Interaction::MoveTowardsTargetProvider* New_ctor() ;

constexpr ::Oculus::Interaction::PoseTravelData const& __cordl_internal_get__travellingData() const;

constexpr ::Oculus::Interaction::PoseTravelData& __cordl_internal_get__travellingData() ;

constexpr void __cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value) ;

/// @brief Method .ctor, addr 0xa475050, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveTowardsTargetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveTowardsTargetProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveTowardsTargetProvider(MoveTowardsTargetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveTowardsTargetProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveTowardsTargetProvider(MoveTowardsTargetProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15951};

/// [SerializeField]
/// @brief Field _travellingData, offset: 0x20, size: 0x10, def value: None
 ::Oculus::Interaction::PoseTravelData  ____travellingData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MoveTowardsTargetProvider, ____travellingData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MoveTowardsTargetProvider) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

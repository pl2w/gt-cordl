#pragma once
// IWYU pragma private; include "Oculus/Interaction/FollowTargetProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FollowTargetProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class FollowTargetProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FollowTargetProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FollowTargetProvider*, "Oculus.Interaction", "FollowTargetProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FollowTargetProvider
class CORDL_TYPE FollowTargetProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _space, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__space, put=__cordl_internal_set__space)) ::UnityW<::UnityEngine::Transform>  _space;

/// @brief Field _speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method Awake, addr 0xa473948, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateMovement, addr 0xa47396c, size 0x7c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::Oculus::Interaction::FollowTargetProvider* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__space() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__space() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr void __cordl_internal_set__space(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

/// @brief Method .ctor, addr 0xa473a28, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowTargetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowTargetProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowTargetProvider(FollowTargetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowTargetProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowTargetProvider(FollowTargetProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15941};

/// [SerializeField]
/// @brief Field _speed, offset: 0x20, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _space, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____space;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FollowTargetProvider, ____speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FollowTargetProvider, ____space) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FollowTargetProvider) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

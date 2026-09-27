#pragma once
// IWYU pragma private; include "Oculus/Interaction/ObjectPullProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObjectPullProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
// Forward declare root types
namespace Oculus::Interaction {
class ObjectPullProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ObjectPullProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ObjectPullProvider*, "Oculus.Interaction", "ObjectPullProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ObjectPullProvider
class CORDL_TYPE ObjectPullProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DeadZone, put=set_DeadZone)) float_t  DeadZone;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field _deadZone, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method CreateMovement, addr 0xa4752e4, size 0x68, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::Oculus::Interaction::ObjectPullProvider* New_ctor() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

/// @brief Method .ctor, addr 0xa475428, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DeadZone, addr 0xa4752d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_DeadZone() ;

/// @brief Method get_Speed, addr 0xa4752c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

/// @brief Method set_DeadZone, addr 0xa4752dc, size 0x8, virtual false, abstract: false, final false
inline void set_DeadZone(float_t  value) ;

/// @brief Method set_Speed, addr 0xa4752cc, size 0x8, virtual false, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPullProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPullProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPullProvider(ObjectPullProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPullProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPullProvider(ObjectPullProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15953};

/// [SerializeField]
/// [Min(0)]
/// @brief Field _speed, offset: 0x20, size: 0x4, def value: None
 float_t  ____speed;

/// [SerializeField]
/// [Min(0)]
/// @brief Field _deadZone, offset: 0x24, size: 0x4, def value: None
 float_t  ____deadZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ObjectPullProvider, ____speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPullProvider, ____deadZone) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ObjectPullProvider) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction

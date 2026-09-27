#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/VirtualActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualActiveState)
namespace Oculus::Interaction {
class IActiveState;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class VirtualActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::VirtualActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::VirtualActiveState*, "Oculus.Interaction.Locomotion", "VirtualActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.VirtualActiveState
class CORDL_TYPE VirtualActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

/// @brief Field _active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

static inline ::Oculus::Interaction::Locomotion::VirtualActiveState* New_ctor() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr void __cordl_internal_set__active(bool  value) ;

/// @brief Method .ctor, addr 0xa4b87c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4b87b8, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_Active, addr 0xa4b87c0, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualActiveState(VirtualActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualActiveState(VirtualActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16241};

/// [SerializeField]
/// @brief Field _active, offset: 0x20, size: 0x1, def value: None
 bool  ____active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::VirtualActiveState, ____active) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::VirtualActiveState) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion

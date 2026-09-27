#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianEjectWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaGuardianEjectWatch)
namespace GlobalNamespace {
class HeldButton;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGuardianEjectWatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGuardianEjectWatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGuardianEjectWatch*, "", "GorillaGuardianEjectWatch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGuardianEjectWatch
class CORDL_TYPE GorillaGuardianEjectWatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ejectButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ejectButton, put=__cordl_internal_set_ejectButton)) ::UnityW<::GlobalNamespace::HeldButton>  ejectButton;

static inline ::GlobalNamespace::GorillaGuardianEjectWatch* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59080a4, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEjectButtonPressed, addr 0x590817c, size 0x104, virtual false, abstract: false, final false
inline void OnEjectButtonPressed() ;

/// @brief Method Start, addr 0x5907fcc, size 0xd8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::HeldButton> const& __cordl_internal_get_ejectButton() const;

constexpr ::UnityW<::GlobalNamespace::HeldButton>& __cordl_internal_get_ejectButton() ;

constexpr void __cordl_internal_set_ejectButton(::UnityW<::GlobalNamespace::HeldButton>  value) ;

/// @brief Method .ctor, addr 0x59083e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGuardianEjectWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianEjectWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGuardianEjectWatch(GorillaGuardianEjectWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianEjectWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGuardianEjectWatch(GorillaGuardianEjectWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2165};

/// [SerializeField]
/// @brief Field ejectButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeldButton>  ___ejectButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGuardianEjectWatch, ___ejectButton) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGuardianEjectWatch) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

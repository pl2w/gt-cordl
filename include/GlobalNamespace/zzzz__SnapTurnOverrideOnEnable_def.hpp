#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapTurnOverrideOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SnapTurnOverrideOnEnable)
namespace GlobalNamespace {
class ISnapTurnOverride;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
// Forward declare root types
namespace GlobalNamespace {
class SnapTurnOverrideOnEnable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnapTurnOverrideOnEnable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapTurnOverrideOnEnable*, "", "SnapTurnOverrideOnEnable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnapTurnOverrideOnEnable
class CORDL_TYPE SnapTurnOverrideOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field snapTurn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapTurn, put=__cordl_internal_set_snapTurn)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  snapTurn;

/// @brief Field snapTurnOverride, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapTurnOverride, put=__cordl_internal_set_snapTurnOverride)) bool  snapTurnOverride;

/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr operator  ::GlobalNamespace::ISnapTurnOverride*() noexcept;

/// @brief Method ISnapTurnOverride.TurnOverrideActive, addr 0x5b20630, size 0x8, virtual true, abstract: false, final true
inline bool ISnapTurnOverride_TurnOverrideActive() ;

static inline ::GlobalNamespace::SnapTurnOverrideOnEnable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b20604, size 0x2c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b20430, size 0x1d4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& __cordl_internal_get_snapTurn() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& __cordl_internal_get_snapTurn() ;

constexpr bool const& __cordl_internal_get_snapTurnOverride() const;

constexpr bool& __cordl_internal_get_snapTurnOverride() ;

constexpr void __cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

constexpr void __cordl_internal_set_snapTurnOverride(bool  value) ;

/// @brief Method .ctor, addr 0x5b20638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* i___GlobalNamespace__ISnapTurnOverride() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapTurnOverrideOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnOverrideOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapTurnOverrideOnEnable(SnapTurnOverrideOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnOverrideOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapTurnOverrideOnEnable(SnapTurnOverrideOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3599};

/// @brief Field snapTurn, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  ___snapTurn;

/// @brief Field snapTurnOverride, offset: 0x28, size: 0x1, def value: None
 bool  ___snapTurnOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapTurnOverrideOnEnable, ___snapTurn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapTurnOverrideOnEnable, ___snapTurnOverride) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapTurnOverrideOnEnable) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

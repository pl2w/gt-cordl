#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeamSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallTeamSelector)
namespace GlobalNamespace {
class GorillaPressableButton;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallTeamSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallTeamSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallTeamSelector*, "", "MonkeBallTeamSelector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallTeamSelector
class CORDL_TYPE MonkeBallTeamSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _setTeamButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__setTeamButton, put=__cordl_internal_set__setTeamButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _setTeamButton;

/// @brief Field teamId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_teamId, put=__cordl_internal_set_teamId)) int32_t  teamId;

/// @brief Method Awake, addr 0x57b0d70, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MonkeBallTeamSelector* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57b0e00, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSelect, addr 0x57b0e90, size 0x58, virtual false, abstract: false, final false
inline void OnSelect() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__setTeamButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__setTeamButton() ;

constexpr int32_t const& __cordl_internal_get_teamId() const;

constexpr int32_t& __cordl_internal_get_teamId() ;

constexpr void __cordl_internal_set__setTeamButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_teamId(int32_t  value) ;

/// @brief Method .ctor, addr 0x57b0ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallTeamSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeamSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallTeamSelector(MonkeBallTeamSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeamSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallTeamSelector(MonkeBallTeamSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1559};

/// @brief Field teamId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___teamId;

/// [SerializeField]
/// @brief Field _setTeamButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____setTeamButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallTeamSelector, ___teamId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeamSelector, ____setTeamButton) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallTeamSelector) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

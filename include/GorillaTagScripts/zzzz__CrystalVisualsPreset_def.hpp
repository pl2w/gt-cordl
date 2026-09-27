#pragma once
// IWYU pragma private; include "GorillaTagScripts/CrystalVisualsPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_VisualState_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrystalVisualsPreset)
namespace GlobalNamespace {
struct CrystalVisualsPreset_VisualState;
}
// Forward declare root types
namespace GorillaTagScripts {
class CrystalVisualsPreset;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CrystalVisualsPreset*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CrystalVisualsPreset*, "GorillaTagScripts", "CrystalVisualsPreset");
// [CreateAssetMenu(fileName = "CrystalVisualsPreset", menuName = "ScriptableObjects/CrystalVisualsPreset", order = 0)]
// Dependencies GorillaTagScripts.CrystalVisualsPreset::VisualState, UnityEngine.ScriptableObject
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.CrystalVisualsPreset
class CORDL_TYPE CrystalVisualsPreset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using VisualState = ::GlobalNamespace::CrystalVisualsPreset_VisualState;

/// @brief Field stateA, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_stateA, put=__cordl_internal_set_stateA)) ::GlobalNamespace::CrystalVisualsPreset_VisualState  stateA;

/// @brief Field stateB, offset 0x38, size 0x20 
 __declspec(property(get=__cordl_internal_get_stateB, put=__cordl_internal_set_stateB)) ::GlobalNamespace::CrystalVisualsPreset_VisualState  stateB;

/// @brief Method GetHashCode, addr 0x5bb6418, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::GorillaTagScripts::CrystalVisualsPreset* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Save, addr 0x5bb64d8, size 0x4, virtual false, abstract: false, final false
inline void Save() ;

constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState const& __cordl_internal_get_stateA() const;

constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState& __cordl_internal_get_stateA() ;

constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState const& __cordl_internal_get_stateB() const;

constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState& __cordl_internal_get_stateB() ;

constexpr void __cordl_internal_set_stateA(::GlobalNamespace::CrystalVisualsPreset_VisualState  value) ;

constexpr void __cordl_internal_set_stateB(::GlobalNamespace::CrystalVisualsPreset_VisualState  value) ;

/// @brief Method .ctor, addr 0x5bb64dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrystalVisualsPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrystalVisualsPreset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrystalVisualsPreset(CrystalVisualsPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrystalVisualsPreset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrystalVisualsPreset(CrystalVisualsPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3966};

/// @brief Field stateA, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::CrystalVisualsPreset_VisualState  ___stateA;

/// @brief Field stateB, offset: 0x38, size: 0x20, def value: None
 ::GlobalNamespace::CrystalVisualsPreset_VisualState  ___stateB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CrystalVisualsPreset, ___stateA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CrystalVisualsPreset, ___stateB) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CrystalVisualsPreset) == 0x58, "Size mismatch!");

} // namespace end def GorillaTagScripts

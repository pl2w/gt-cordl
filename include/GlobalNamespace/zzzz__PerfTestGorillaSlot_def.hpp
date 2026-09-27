#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaSlot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PerfTestGorillaSlot_SlotType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PerfTestGorillaSlot)
namespace GlobalNamespace {
struct PerfTestGorillaSlot_SlotType;
}
// Forward declare root types
namespace GlobalNamespace {
class PerfTestGorillaSlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerfTestGorillaSlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestGorillaSlot*, "", "PerfTestGorillaSlot");
// [GTStripGameObjectFromBuild("!GT_AUTOMATED_PERF_TEST && !BETA")]
// Dependencies PerfTestGorillaSlot::SlotType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerfTestGorillaSlot
class CORDL_TYPE PerfTestGorillaSlot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SlotType = ::GlobalNamespace::PerfTestGorillaSlot_SlotType;

/// @brief Field localStartPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_localStartPosition, put=__cordl_internal_set_localStartPosition)) ::UnityEngine::Vector3  localStartPosition;

/// @brief Field slotType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_slotType, put=__cordl_internal_set_slotType)) ::GlobalNamespace::PerfTestGorillaSlot_SlotType  slotType;

static inline ::GlobalNamespace::PerfTestGorillaSlot* New_ctor() ;

/// @brief Method Start, addr 0x56bce80, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localStartPosition() ;

constexpr ::GlobalNamespace::PerfTestGorillaSlot_SlotType const& __cordl_internal_get_slotType() const;

constexpr ::GlobalNamespace::PerfTestGorillaSlot_SlotType& __cordl_internal_get_slotType() ;

constexpr void __cordl_internal_set_localStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_slotType(::GlobalNamespace::PerfTestGorillaSlot_SlotType  value) ;

/// @brief Method .ctor, addr 0x56bceb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerfTestGorillaSlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaSlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerfTestGorillaSlot(PerfTestGorillaSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaSlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerfTestGorillaSlot(PerfTestGorillaSlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{980};

/// @brief Field slotType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::PerfTestGorillaSlot_SlotType  ___slotType;

/// @brief Field localStartPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localStartPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerfTestGorillaSlot, ___slotType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaSlot, ___localStartPosition) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerfTestGorillaSlot) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

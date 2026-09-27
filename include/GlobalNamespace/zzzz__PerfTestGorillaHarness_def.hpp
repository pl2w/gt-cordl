#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaHarness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerfTestGorillaHarness)
namespace GlobalNamespace {
class PerfTestGorillaSlot;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PerfTestGorillaHarness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerfTestGorillaHarness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestGorillaHarness*, "", "PerfTestGorillaHarness");
// [GTStripGameObjectFromBuild("!GT_AUTOMATED_PERF_TEST && !BETA")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerfTestGorillaHarness
class CORDL_TYPE PerfTestGorillaHarness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isRecording, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecording, put=__cordl_internal_set__isRecording)) bool  _isRecording;

/// @brief Field _nextRandomMoveTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextRandomMoveTime, put=__cordl_internal_set__nextRandomMoveTime)) float_t  _nextRandomMoveTime;

/// @brief Field _vrSlot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrSlot, put=__cordl_internal_set__vrSlot)) ::UnityW<::GlobalNamespace::PerfTestGorillaSlot>  _vrSlot;

/// @brief Field bounceAmplitude, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceAmplitude, put=__cordl_internal_set_bounceAmplitude)) float_t  bounceAmplitude;

/// @brief Field bounceSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceSpeed, put=__cordl_internal_set_bounceSpeed)) float_t  bounceSpeed;

/// @brief Field dummySlots, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummySlots, put=__cordl_internal_set_dummySlots)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*  dummySlots;

/// @brief Method Awake, addr 0x56bc9c8, size 0x11c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PerfTestGorillaHarness* New_ctor() ;

/// @brief Method StartRecording, addr 0x56bcc84, size 0xc, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StopRecording, addr 0x56bcc90, size 0x158, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method Update, addr 0x56bcae4, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__isRecording() const;

constexpr bool& __cordl_internal_get__isRecording() ;

constexpr float_t const& __cordl_internal_get__nextRandomMoveTime() const;

constexpr float_t& __cordl_internal_get__nextRandomMoveTime() ;

constexpr ::UnityW<::GlobalNamespace::PerfTestGorillaSlot> const& __cordl_internal_get__vrSlot() const;

constexpr ::UnityW<::GlobalNamespace::PerfTestGorillaSlot>& __cordl_internal_get__vrSlot() ;

constexpr float_t const& __cordl_internal_get_bounceAmplitude() const;

constexpr float_t& __cordl_internal_get_bounceAmplitude() ;

constexpr float_t const& __cordl_internal_get_bounceSpeed() const;

constexpr float_t& __cordl_internal_get_bounceSpeed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>* const& __cordl_internal_get_dummySlots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*& __cordl_internal_get_dummySlots() ;

constexpr void __cordl_internal_set__isRecording(bool  value) ;

constexpr void __cordl_internal_set__nextRandomMoveTime(float_t  value) ;

constexpr void __cordl_internal_set__vrSlot(::UnityW<::GlobalNamespace::PerfTestGorillaSlot>  value) ;

constexpr void __cordl_internal_set_bounceAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_bounceSpeed(float_t  value) ;

constexpr void __cordl_internal_set_dummySlots(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*  value) ;

/// @brief Method .ctor, addr 0x56bcde8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerfTestGorillaHarness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaHarness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerfTestGorillaHarness(PerfTestGorillaHarness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaHarness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerfTestGorillaHarness(PerfTestGorillaHarness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{978};

/// @brief Field _vrSlot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PerfTestGorillaSlot>  ____vrSlot;

/// @brief Field dummySlots, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerfTestGorillaSlot>>*  ___dummySlots;

/// @brief Field _isRecording, offset: 0x30, size: 0x1, def value: None
 bool  ____isRecording;

/// @brief Field _nextRandomMoveTime, offset: 0x34, size: 0x4, def value: None
 float_t  ____nextRandomMoveTime;

/// @brief Field bounceSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___bounceSpeed;

/// @brief Field bounceAmplitude, offset: 0x3c, size: 0x4, def value: None
 float_t  ___bounceAmplitude;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ____vrSlot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ___dummySlots) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ____isRecording) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ____nextRandomMoveTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ___bounceSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerfTestGorillaHarness, ___bounceAmplitude) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerfTestGorillaHarness) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

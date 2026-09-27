#pragma once
// IWYU pragma private; include "GlobalNamespace/RadialBoundsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Id32_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RadialBoundsTrigger)
namespace GlobalNamespace {
class RadialBounds;
}
// Forward declare root types
namespace GlobalNamespace {
class RadialBoundsTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadialBoundsTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadialBoundsTrigger*, "", "RadialBoundsTrigger");
// Dependencies Id32, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadialBoundsTrigger
class CORDL_TYPE RadialBoundsTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _overlapping, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__overlapping, put=__cordl_internal_set__overlapping)) bool  _overlapping;

/// @brief Field _raiseEvents, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__raiseEvents, put=__cordl_internal_set__raiseEvents)) bool  _raiseEvents;

/// @brief Field _timeOverlapStarted, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOverlapStarted, put=__cordl_internal_set__timeOverlapStarted)) float_t  _timeOverlapStarted;

/// @brief Field _timeOverlapStopped, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOverlapStopped, put=__cordl_internal_set__timeOverlapStopped)) float_t  _timeOverlapStopped;

/// @brief Field _timeSpentInOverlap, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeSpentInOverlap, put=__cordl_internal_set__timeSpentInOverlap)) float_t  _timeSpentInOverlap;

/// @brief Field _triggerID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__triggerID, put=__cordl_internal_set__triggerID)) ::GlobalNamespace::Id32  _triggerID;

/// @brief Field hysteresis, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_hysteresis, put=__cordl_internal_set_hysteresis)) float_t  hysteresis;

/// @brief Field object1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_object1, put=__cordl_internal_set_object1)) ::UnityW<::GlobalNamespace::RadialBounds>  object1;

/// @brief Field object2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_object2, put=__cordl_internal_set_object2)) ::UnityW<::GlobalNamespace::RadialBounds>  object2;

/// @brief Method FixedUpdate, addr 0x597e174, size 0x8, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::RadialBoundsTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x597e17c, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method TestOverlap, addr 0x597de8c, size 0x8, virtual false, abstract: false, final false
inline void TestOverlap() ;

/// @brief Method TestOverlap, addr 0x597de94, size 0x2e0, virtual false, abstract: false, final false
inline void TestOverlap(bool  raiseEvents) ;

constexpr bool const& __cordl_internal_get__overlapping() const;

constexpr bool& __cordl_internal_get__overlapping() ;

constexpr bool const& __cordl_internal_get__raiseEvents() const;

constexpr bool& __cordl_internal_get__raiseEvents() ;

constexpr float_t const& __cordl_internal_get__timeOverlapStarted() const;

constexpr float_t& __cordl_internal_get__timeOverlapStarted() ;

constexpr float_t const& __cordl_internal_get__timeOverlapStopped() const;

constexpr float_t& __cordl_internal_get__timeOverlapStopped() ;

constexpr float_t const& __cordl_internal_get__timeSpentInOverlap() const;

constexpr float_t& __cordl_internal_get__timeSpentInOverlap() ;

constexpr ::GlobalNamespace::Id32 const& __cordl_internal_get__triggerID() const;

constexpr ::GlobalNamespace::Id32& __cordl_internal_get__triggerID() ;

constexpr float_t const& __cordl_internal_get_hysteresis() const;

constexpr float_t& __cordl_internal_get_hysteresis() ;

constexpr ::UnityW<::GlobalNamespace::RadialBounds> const& __cordl_internal_get_object1() const;

constexpr ::UnityW<::GlobalNamespace::RadialBounds>& __cordl_internal_get_object1() ;

constexpr ::UnityW<::GlobalNamespace::RadialBounds> const& __cordl_internal_get_object2() const;

constexpr ::UnityW<::GlobalNamespace::RadialBounds>& __cordl_internal_get_object2() ;

constexpr void __cordl_internal_set__overlapping(bool  value) ;

constexpr void __cordl_internal_set__raiseEvents(bool  value) ;

constexpr void __cordl_internal_set__timeOverlapStarted(float_t  value) ;

constexpr void __cordl_internal_set__timeOverlapStopped(float_t  value) ;

constexpr void __cordl_internal_set__timeSpentInOverlap(float_t  value) ;

constexpr void __cordl_internal_set__triggerID(::GlobalNamespace::Id32  value) ;

constexpr void __cordl_internal_set_hysteresis(float_t  value) ;

constexpr void __cordl_internal_set_object1(::UnityW<::GlobalNamespace::RadialBounds>  value) ;

constexpr void __cordl_internal_set_object2(::UnityW<::GlobalNamespace::RadialBounds>  value) ;

/// @brief Method .ctor, addr 0x597e27c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadialBoundsTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadialBoundsTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadialBoundsTrigger(RadialBoundsTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadialBoundsTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadialBoundsTrigger(RadialBoundsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2523};

/// [SerializeField]
/// @brief Field _triggerID, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::Id32  ____triggerID;

/// [Space]
/// @brief Field object1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadialBounds>  ___object1;

/// [Space]
/// @brief Field object2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadialBounds>  ___object2;

/// [Space]
/// @brief Field hysteresis, offset: 0x38, size: 0x4, def value: None
 float_t  ___hysteresis;

/// [SerializeField]
/// @brief Field _raiseEvents, offset: 0x3c, size: 0x1, def value: None
 bool  ____raiseEvents;

/// [Space]
/// @brief Field _overlapping, offset: 0x3d, size: 0x1, def value: None
 bool  ____overlapping;

/// @brief Field _timeSpentInOverlap, offset: 0x40, size: 0x4, def value: None
 float_t  ____timeSpentInOverlap;

/// [Space]
/// @brief Field _timeOverlapStarted, offset: 0x44, size: 0x4, def value: None
 float_t  ____timeOverlapStarted;

/// @brief Field _timeOverlapStopped, offset: 0x48, size: 0x4, def value: None
 float_t  ____timeOverlapStopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____triggerID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ___object1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ___object2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ___hysteresis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____raiseEvents) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____overlapping) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____timeSpentInOverlap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____timeOverlapStarted) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadialBoundsTrigger, ____timeOverlapStopped) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadialBoundsTrigger) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RigEventGate_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RigEventGate)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
struct RigEventGate_Mode;
}
namespace GlobalNamespace {
class RigEventVolumeTrigger;
}
namespace GlobalNamespace {
class VRRigCollection;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class RigEventGate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigEventGate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventGate*, "", "RigEventGate");
// Dependencies RigEventGate::Mode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventGate
class CORDL_TYPE RigEventGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::RigEventGate_Mode;

/// @brief Field GoesOverThreshold, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoesOverThreshold, put=__cordl_internal_set_GoesOverThreshold)) ::UnityEngine::Events::UnityEvent*  GoesOverThreshold;

/// @brief Field RigExits, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RigExits, put=__cordl_internal_set_RigExits)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  RigExits;

/// @brief Field absThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_absThreshold, put=__cordl_internal_set_absThreshold)) int32_t  absThreshold;

/// @brief Field gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*  gameObjects;

/// @brief Field mode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::RigEventGate_Mode  mode;

/// @brief Field relThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_relThreshold, put=__cordl_internal_set_relThreshold)) float_t  relThreshold;

/// @brief Field rigCollection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigCollection, put=__cordl_internal_set_rigCollection)) ::UnityW<::GlobalNamespace::VRRigCollection>  rigCollection;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x574234c, size 0x100, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::RigEventGate* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5741a18, size 0x1cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x574184c, size 0x1cc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5741680, size 0x1cc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoined, addr 0x5741be4, size 0xbc, virtual false, abstract: false, final false
inline void OnJoined(::GlobalNamespace::RigContainer*  rc) ;

/// @brief Method OnLeft, addr 0x5741dd0, size 0x1dc, virtual false, abstract: false, final false
inline void OnLeft(::GlobalNamespace::RigContainer*  rc) ;

/// @brief Method OnTriggerEnter, addr 0x5741fac, size 0x1ac, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5742158, size 0x1f4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_GoesOverThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_GoesOverThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_RigExits() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_RigExits() ;

constexpr int32_t const& __cordl_internal_get_absThreshold() const;

constexpr int32_t& __cordl_internal_get_absThreshold() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>* const& __cordl_internal_get_gameObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*& __cordl_internal_get_gameObjects() ;

constexpr ::GlobalNamespace::RigEventGate_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::RigEventGate_Mode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_relThreshold() const;

constexpr float_t& __cordl_internal_get_relThreshold() ;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& __cordl_internal_get_rigCollection() const;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& __cordl_internal_get_rigCollection() ;

constexpr void __cordl_internal_set_GoesOverThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_RigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_absThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_gameObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::RigEventGate_Mode  value) ;

constexpr void __cordl_internal_set_relThreshold(float_t  value) ;

constexpr void __cordl_internal_set_rigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value) ;

/// @brief Method .ctor, addr 0x574244c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method countChanged, addr 0x5741ca0, size 0x130, virtual false, abstract: false, final false
inline void countChanged(int32_t  oldValue, int32_t  newValue, int32_t  oldPlayerCount, int32_t  newPlayerCount, ::GlobalNamespace::RigEventVolumeTrigger*  rig) ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventGate(RigEventGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventGate(RigEventGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1251};

/// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*  ___gameObjects;

/// [SerializeField]
/// @brief Field mode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::RigEventGate_Mode  ___mode;

/// [Range(0.05, 1)]
/// [SerializeField]
/// @brief Field relThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___relThreshold;

/// [SerializeField]
/// @brief Field rigCollection, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigCollection>  ___rigCollection;

/// [Range(1, 20)]
/// [SerializeField]
/// @brief Field absThreshold, offset: 0x38, size: 0x4, def value: None
 int32_t  ___absThreshold;

/// [SerializeField]
/// @brief Field RigExits, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___RigExits;

/// [SerializeField]
/// @brief Field GoesOverThreshold, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___GoesOverThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventGate, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___relThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___rigCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___absThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___RigExits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventGate, ___GoesOverThreshold) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventGate) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

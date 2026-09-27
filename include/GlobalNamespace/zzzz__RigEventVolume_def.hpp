#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RigEventVolume_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RigEventVolume)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class RigEventVolumeTrigger;
}
namespace GlobalNamespace {
struct RigEventVolume_Mode;
}
namespace GlobalNamespace {
class VRRigCollection;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class RigEventVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigEventVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolume*, "", "RigEventVolume");
// Dependencies RigEventVolume::Mode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventVolume
class CORDL_TYPE RigEventVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::RigEventVolume_Mode;

/// @brief Field CountChangedAbsolute, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_CountChangedAbsolute, put=__cordl_internal_set_CountChangedAbsolute)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  CountChangedAbsolute;

/// @brief Field CountChangedRelative, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_CountChangedRelative, put=__cordl_internal_set_CountChangedRelative)) ::UnityEngine::Events::UnityEvent_1<float_t>*  CountChangedRelative;

/// @brief Field GoesOverThreshold, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoesOverThreshold, put=__cordl_internal_set_GoesOverThreshold)) ::UnityEngine::Events::UnityEvent*  GoesOverThreshold;

/// @brief Field GoesUnderThreshold, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoesUnderThreshold, put=__cordl_internal_set_GoesUnderThreshold)) ::UnityEngine::Events::UnityEvent*  GoesUnderThreshold;

/// @brief Field LocalRigEnters, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalRigEnters, put=__cordl_internal_set_LocalRigEnters)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  LocalRigEnters;

/// @brief Field LocalRigExits, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalRigExits, put=__cordl_internal_set_LocalRigExits)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  LocalRigExits;

 __declspec(property(get=get_LocalRigPresent)) bool  LocalRigPresent;

/// @brief Field MulitplierAbsolute, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_MulitplierAbsolute, put=__cordl_internal_set_MulitplierAbsolute)) ::UnityEngine::AnimationCurve*  MulitplierAbsolute;

/// @brief Field MulitplierRelative, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_MulitplierRelative, put=__cordl_internal_set_MulitplierRelative)) ::UnityEngine::AnimationCurve*  MulitplierRelative;

/// @brief Field OnCountChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCountChanged, put=__cordl_internal_set_OnCountChanged)) ::System::Action*  OnCountChanged;

 __declspec(property(get=get_RigCount)) int32_t  RigCount;

/// @brief Field RigEnters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RigEnters, put=__cordl_internal_set_RigEnters)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  RigEnters;

/// @brief Field RigExits, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RigExits, put=__cordl_internal_set_RigExits)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  RigExits;

 __declspec(property(get=get_Rigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  Rigs;

/// @brief Field absThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_absThreshold, put=__cordl_internal_set_absThreshold)) int32_t  absThreshold;

/// @brief Field applyMultipliers, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyMultipliers, put=__cordl_internal_set_applyMultipliers)) bool  applyMultipliers;

/// @brief Field gameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*  gameObjects;

/// @brief Field localRigPresent, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_localRigPresent, put=__cordl_internal_set_localRigPresent)) bool  localRigPresent;

/// @brief Field mode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::RigEventVolume_Mode  mode;

/// @brief Field relThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_relThreshold, put=__cordl_internal_set_relThreshold)) float_t  relThreshold;

/// @brief Field rigCollection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigCollection, put=__cordl_internal_set_rigCollection)) ::UnityW<::GlobalNamespace::VRRigCollection>  rigCollection;

/// @brief Field rigs, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs;

/// @brief Method HandleRigExit, addr 0x5743680, size 0x2b0, virtual false, abstract: false, final false
inline void HandleRigExit(::GlobalNamespace::RigEventVolumeTrigger*  trigger, ::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::RigEventVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x57429f0, size 0x304, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57426ec, size 0x304, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoined, addr 0x5743930, size 0xec, virtual false, abstract: false, final false
inline void OnJoined(::GlobalNamespace::RigContainer*  rc) ;

/// @brief Method OnLeft, addr 0x5743a1c, size 0xec, virtual false, abstract: false, final false
inline void OnLeft(::GlobalNamespace::RigContainer*  rc) ;

/// @brief Method OnNetJoined, addr 0x5742cf4, size 0xe8, virtual false, abstract: false, final false
inline void OnNetJoined(::GlobalNamespace::NetPlayer*  np) ;

/// @brief Method OnNetLeft, addr 0x57430a4, size 0x5dc, virtual false, abstract: false, final false
inline void OnNetLeft(::GlobalNamespace::NetPlayer*  np) ;

/// @brief Method OnTriggerEnter, addr 0x5743b08, size 0x3b8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5743ec0, size 0x128, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_CountChangedAbsolute() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_CountChangedAbsolute() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_CountChangedRelative() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_CountChangedRelative() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_GoesOverThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_GoesOverThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_GoesUnderThreshold() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_GoesUnderThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_LocalRigEnters() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_LocalRigEnters() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_LocalRigExits() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_LocalRigExits() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_MulitplierAbsolute() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_MulitplierAbsolute() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_MulitplierRelative() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_MulitplierRelative() ;

constexpr ::System::Action* const& __cordl_internal_get_OnCountChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnCountChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_RigEnters() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_RigEnters() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_RigExits() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_RigExits() ;

constexpr int32_t const& __cordl_internal_get_absThreshold() const;

constexpr int32_t& __cordl_internal_get_absThreshold() ;

constexpr bool const& __cordl_internal_get_applyMultipliers() const;

constexpr bool& __cordl_internal_get_applyMultipliers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>* const& __cordl_internal_get_gameObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*& __cordl_internal_get_gameObjects() ;

constexpr bool const& __cordl_internal_get_localRigPresent() const;

constexpr bool& __cordl_internal_get_localRigPresent() ;

constexpr ::GlobalNamespace::RigEventVolume_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::RigEventVolume_Mode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_relThreshold() const;

constexpr float_t& __cordl_internal_get_relThreshold() ;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& __cordl_internal_get_rigCollection() const;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& __cordl_internal_get_rigCollection() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigs() ;

constexpr void __cordl_internal_set_CountChangedAbsolute(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_CountChangedRelative(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_GoesOverThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_GoesUnderThreshold(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_LocalRigEnters(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_LocalRigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_MulitplierAbsolute(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_MulitplierRelative(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_OnCountChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_RigEnters(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_RigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_absThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_applyMultipliers(bool  value) ;

constexpr void __cordl_internal_set_gameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*  value) ;

constexpr void __cordl_internal_set_localRigPresent(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::RigEventVolume_Mode  value) ;

constexpr void __cordl_internal_set_relThreshold(float_t  value) ;

constexpr void __cordl_internal_set_rigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value) ;

constexpr void __cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// @brief Method .ctor, addr 0x5743fe8, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCountChanged, addr 0x57425b4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnCountChanged(::System::Action*  value) ;

/// @brief Method countChanged, addr 0x5742ddc, size 0x2c8, virtual false, abstract: false, final false
inline void countChanged(int32_t  oldValue, int32_t  newValue, int32_t  oldPlayerCount, int32_t  newPlayerCount) ;

/// @brief Method get_LocalRigPresent, addr 0x57425ac, size 0x8, virtual false, abstract: false, final false
inline bool get_LocalRigPresent() ;

/// @brief Method get_RigCount, addr 0x574253c, size 0x70, virtual false, abstract: false, final false
inline int32_t get_RigCount() ;

/// @brief Method get_Rigs, addr 0x57424ec, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> get_Rigs() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCountChanged, addr 0x5742650, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnCountChanged(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventVolume(RigEventVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventVolume(RigEventVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1253};

/// @brief Field gameObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*  ___gameObjects;

/// [SerializeField]
/// @brief Field mode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::RigEventVolume_Mode  ___mode;

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
/// @brief Field RigEnters, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___RigEnters;

/// [SerializeField]
/// @brief Field RigExits, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___RigExits;

/// [SerializeField]
/// @brief Field GoesOverThreshold, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___GoesOverThreshold;

/// [SerializeField]
/// @brief Field GoesUnderThreshold, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___GoesUnderThreshold;

/// [SerializeField]
/// @brief Field LocalRigEnters, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___LocalRigEnters;

/// [SerializeField]
/// @brief Field LocalRigExits, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___LocalRigExits;

/// @brief Field rigs, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigs;

/// @brief Field localRigPresent, offset: 0x78, size: 0x1, def value: None
 bool  ___localRigPresent;

/// [CompilerGenerated]
/// @brief Field OnCountChanged, offset: 0x80, size: 0x8, def value: None
 ::System::Action*  ___OnCountChanged;

/// [SerializeField]
/// @brief Field CountChangedAbsolute, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___CountChangedAbsolute;

/// [SerializeField]
/// @brief Field CountChangedRelative, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___CountChangedRelative;

/// [SerializeField]
/// @brief Field applyMultipliers, offset: 0x98, size: 0x1, def value: None
 bool  ___applyMultipliers;

/// [SerializeField]
/// @brief Field MulitplierAbsolute, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___MulitplierAbsolute;

/// [SerializeField]
/// @brief Field MulitplierRelative, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___MulitplierRelative;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___gameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___relThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___rigCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___absThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___RigEnters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___RigExits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___GoesOverThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___GoesUnderThreshold) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___LocalRigEnters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___LocalRigExits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___rigs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___localRigPresent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___OnCountChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___CountChangedAbsolute) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___CountChangedRelative) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___applyMultipliers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___MulitplierAbsolute) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolume, ___MulitplierRelative) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolume) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace

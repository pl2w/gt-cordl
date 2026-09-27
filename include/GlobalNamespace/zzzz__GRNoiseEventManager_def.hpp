#pragma once
// IWYU pragma private; include "GlobalNamespace/GRNoiseEventManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRNoiseEventManager)
namespace GlobalNamespace {
struct GameNoiseEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRNoiseEventManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRNoiseEventManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRNoiseEventManager*, "", "GRNoiseEventManager");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRNoiseEventManager
class CORDL_TYPE GRNoiseEventManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field debugMeshScale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugMeshScale, put=__cordl_internal_set_debugMeshScale)) float_t  debugMeshScale;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GRNoiseEventManager>  instance;

/// @brief Field noiseEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseEvents, put=__cordl_internal_set_noiseEvents)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*  noiseEvents;

/// @brief Method AddNoiseEvent, addr 0x589f45c, size 0x108, virtual false, abstract: false, final false
inline void AddNoiseEvent(::UnityEngine::Vector3  position, float_t  magnitude, float_t  duration) ;

/// @brief Method Awake, addr 0x589f158, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindUnusedEventEntry, addr 0x589f454, size 0x8, virtual false, abstract: false, final false
inline int32_t FindUnusedEventEntry() ;

/// @brief Method GetMostRecentNoiseEventInRadius, addr 0x589f7f4, size 0x18c, virtual false, abstract: false, final false
inline bool GetMostRecentNoiseEventInRadius(::UnityEngine::Vector3  origin, float_t  radius, ::by_ref<::GlobalNamespace::GameNoiseEvent>  outEvent) ;

/// @brief Method GetNoiseEventsInRadius, addr 0x589f564, size 0x290, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>* GetNoiseEventsInRadius(::UnityEngine::Vector3  origin, float_t  radius) ;

static inline ::GlobalNamespace::GRNoiseEventManager* New_ctor() ;

/// @brief Method RemoveExpiredEvents, addr 0x589f22c, size 0xe4, virtual false, abstract: false, final false
inline void RemoveExpiredEvents() ;

/// @brief Method RenderDebug, addr 0x589f310, size 0x144, virtual false, abstract: false, final false
inline void RenderDebug() ;

/// @brief Method Start, addr 0x589f1b0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x589f1b4, size 0x78, virtual true, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_debugMeshScale() const;

constexpr float_t& __cordl_internal_get_debugMeshScale() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>* const& __cordl_internal_get_noiseEvents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*& __cordl_internal_get_noiseEvents() ;

constexpr void __cordl_internal_set_debugMeshScale(float_t  value) ;

constexpr void __cordl_internal_set_noiseEvents(::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*  value) ;

/// @brief Method .ctor, addr 0x589f980, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GRNoiseEventManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GRNoiseEventManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRNoiseEventManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRNoiseEventManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRNoiseEventManager(GRNoiseEventManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRNoiseEventManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRNoiseEventManager(GRNoiseEventManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1995};

/// @brief Field noiseEvents, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameNoiseEvent>*  ___noiseEvents;

/// @brief Field debugMeshScale, offset: 0x30, size: 0x4, def value: None
 float_t  ___debugMeshScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRNoiseEventManager, ___noiseEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRNoiseEventManager, ___debugMeshScale) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRNoiseEventManager) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

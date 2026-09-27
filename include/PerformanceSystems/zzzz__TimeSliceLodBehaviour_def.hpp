#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceLodBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PerformanceSystems/zzzz__ATimeSliceBehaviour_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSliceLodBehaviour)
namespace PerformanceSystems {
class ILod;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace PerformanceSystems {
class TimeSliceLodBehaviour;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::TimeSliceLodBehaviour*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::TimeSliceLodBehaviour*, "PerformanceSystems", "TimeSliceLodBehaviour");
// Dependencies PerformanceSystems.ATimeSliceBehaviour, UnityEngine.Events.UnityEvent
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.TimeSliceLodBehaviour
class CORDL_TYPE TimeSliceLodBehaviour : public ::PerformanceSystems::ATimeSliceBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentLod)) int32_t  CurrentLod;

 __declspec(property(get=get_LodRanges)) ::ArrayW<float_t>  LodRanges;

 __declspec(property(get=get_OnCulledEvent)) ::UnityEngine::Events::UnityEvent*  OnCulledEvent;

 __declspec(property(get=get_OnLodRangeEvents)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  OnLodRangeEvents;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field _currentLod, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentLod, put=__cordl_internal_set__currentLod)) int32_t  _currentLod;

/// @brief Field _lodRanges, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lodRanges, put=__cordl_internal_set__lodRanges)) ::ArrayW<float_t>  _lodRanges;

/// @brief Field _onCulledEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onCulledEvent, put=__cordl_internal_set__onCulledEvent)) ::UnityEngine::Events::UnityEvent*  _onCulledEvent;

/// @brief Field _onLodRangeEvents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLodRangeEvents, put=__cordl_internal_set__onLodRangeEvents)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  _onLodRangeEvents;

/// @brief Field _transform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Convert operator to "::PerformanceSystems::ILod"
constexpr operator  ::PerformanceSystems::ILod*() noexcept;

static inline ::PerformanceSystems::TimeSliceLodBehaviour* New_ctor() ;

/// @brief Method SetLod, addr 0x5b71d08, size 0x114, virtual false, abstract: false, final false
inline void SetLod(int32_t  newLod) ;

/// @brief Method SliceUpdate, addr 0x5b71f28, size 0x4, virtual true, abstract: false, final false
inline void SliceUpdate(float_t  deltaTime) ;

/// @brief Method SliceUpdateAlways, addr 0x5b71f2c, size 0x30, virtual true, abstract: false, final false
inline void SliceUpdateAlways(float_t  deltaTime) ;

/// @brief Method Start, addr 0x5b71cdc, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateLod, addr 0x5b71e1c, size 0x10c, virtual true, abstract: false, final true
inline void UpdateLod(::UnityEngine::Vector3  refPos) ;

constexpr int32_t const& __cordl_internal_get__currentLod() const;

constexpr int32_t& __cordl_internal_get__currentLod() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__lodRanges() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__lodRanges() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onCulledEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onCulledEvent() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get__onLodRangeEvents() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get__onLodRangeEvents() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__currentLod(int32_t  value) ;

constexpr void __cordl_internal_set__lodRanges(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__onCulledEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onLodRangeEvents(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b71f5c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentLod, addr 0x5b71cd4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_CurrentLod() ;

/// @brief Method get_LodRanges, addr 0x5b71cbc, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<float_t> get_LodRanges() ;

/// @brief Method get_OnCulledEvent, addr 0x5b71ccc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnCulledEvent() ;

/// @brief Method get_OnLodRangeEvents, addr 0x5b71cc4, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Events::UnityEvent*> get_OnLodRangeEvents() ;

/// @brief Method get_Position, addr 0x5b71ca4, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Convert to "::PerformanceSystems::ILod"
constexpr ::PerformanceSystems::ILod* i___PerformanceSystems__ILod() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSliceLodBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceLodBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSliceLodBehaviour(TimeSliceLodBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceLodBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSliceLodBehaviour(TimeSliceLodBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3884};

/// [Space]
/// [SerializeField]
/// @brief Field _currentLod, offset: 0x30, size: 0x4, def value: None
 int32_t  ____currentLod;

/// [SerializeField]
/// @brief Field _lodRanges, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____lodRanges;

/// [Space]
/// [SerializeField]
/// @brief Field _onLodRangeEvents, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ____onLodRangeEvents;

/// [Space]
/// [SerializeField]
/// @brief Field _onCulledEvent, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onCulledEvent;

/// @brief Field _transform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PerformanceSystems::TimeSliceLodBehaviour, ____currentLod) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceLodBehaviour, ____lodRanges) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceLodBehaviour, ____onLodRangeEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceLodBehaviour, ____onCulledEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceLodBehaviour, ____transform) == 0x50, "Offset mismatch!");

static_assert(sizeof(::PerformanceSystems::TimeSliceLodBehaviour) == 0x58, "Size mismatch!");

} // namespace end def PerformanceSystems

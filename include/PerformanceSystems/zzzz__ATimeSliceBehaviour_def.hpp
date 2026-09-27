#pragma once
// IWYU pragma private; include "PerformanceSystems/ATimeSliceBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ATimeSliceBehaviour)
namespace PerformanceSystems {
class ITimeSlice;
}
namespace PerformanceSystems {
class TimeSliceControllerAsset;
}
// Forward declare root types
namespace PerformanceSystems {
class ATimeSliceBehaviour;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::ATimeSliceBehaviour*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::ATimeSliceBehaviour*, "PerformanceSystems", "ATimeSliceBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.ATimeSliceBehaviour
class CORDL_TYPE ATimeSliceBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastUpdateTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _timeSliceControllerAsset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSliceControllerAsset, put=__cordl_internal_set__timeSliceControllerAsset)) ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  _timeSliceControllerAsset;

/// @brief Field _updateIfDisabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateIfDisabled, put=__cordl_internal_set__updateIfDisabled)) bool  _updateIfDisabled;

/// @brief Convert operator to "::PerformanceSystems::ITimeSlice"
constexpr operator  ::PerformanceSystems::ITimeSlice*() noexcept;

/// @brief Method Awake, addr 0x5b712ac, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::PerformanceSystems::ATimeSliceBehaviour* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b71354, size 0x18, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SliceUpdate, addr 0x5b71420, size 0x8c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method SliceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdate(float_t  deltaTime) ;

/// @brief Method SliceUpdateAlways, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdateAlways(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset> const& __cordl_internal_get__timeSliceControllerAsset() const;

constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>& __cordl_internal_get__timeSliceControllerAsset() ;

constexpr bool const& __cordl_internal_get__updateIfDisabled() const;

constexpr bool& __cordl_internal_get__updateIfDisabled() ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__timeSliceControllerAsset(::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  value) ;

constexpr void __cordl_internal_set__updateIfDisabled(bool  value) ;

/// @brief Method .ctor, addr 0x5b714ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::PerformanceSystems::ITimeSlice"
constexpr ::PerformanceSystems::ITimeSlice* i___PerformanceSystems__ITimeSlice() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ATimeSliceBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ATimeSliceBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ATimeSliceBehaviour(ATimeSliceBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ATimeSliceBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ATimeSliceBehaviour(ATimeSliceBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3878};

/// [SerializeField]
/// @brief Field _timeSliceControllerAsset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  ____timeSliceControllerAsset;

/// [SerializeField]
/// @brief Field _updateIfDisabled, offset: 0x28, size: 0x1, def value: None
 bool  ____updateIfDisabled;

/// @brief Field _lastUpdateTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PerformanceSystems::ATimeSliceBehaviour, ____timeSliceControllerAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::ATimeSliceBehaviour, ____updateIfDisabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::ATimeSliceBehaviour, ____lastUpdateTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::PerformanceSystems::ATimeSliceBehaviour) == 0x30, "Size mismatch!");

} // namespace end def PerformanceSystems

#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceControllerBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimeSliceControllerBehaviour)
namespace PerformanceSystems {
class TimeSliceControllerAsset;
}
// Forward declare root types
namespace PerformanceSystems {
class TimeSliceControllerBehaviour;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::TimeSliceControllerBehaviour*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::TimeSliceControllerBehaviour*, "PerformanceSystems", "TimeSliceControllerBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.TimeSliceControllerBehaviour
class CORDL_TYPE TimeSliceControllerBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _timeSliceControllerAsset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSliceControllerAsset, put=__cordl_internal_set__timeSliceControllerAsset)) ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  _timeSliceControllerAsset;

/// @brief Method Awake, addr 0x5b71c74, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::PerformanceSystems::TimeSliceControllerBehaviour* New_ctor() ;

/// @brief Method Update, addr 0x5b71c88, size 0x14, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset> const& __cordl_internal_get__timeSliceControllerAsset() const;

constexpr ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>& __cordl_internal_get__timeSliceControllerAsset() ;

constexpr void __cordl_internal_set__timeSliceControllerAsset(::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  value) ;

/// @brief Method .ctor, addr 0x5b71c9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSliceControllerBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceControllerBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSliceControllerBehaviour(TimeSliceControllerBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceControllerBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSliceControllerBehaviour(TimeSliceControllerBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3883};

/// [SerializeField]
/// @brief Field _timeSliceControllerAsset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::PerformanceSystems::TimeSliceControllerAsset>  ____timeSliceControllerAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PerformanceSystems::TimeSliceControllerBehaviour, ____timeSliceControllerAsset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PerformanceSystems::TimeSliceControllerBehaviour) == 0x28, "Size mismatch!");

} // namespace end def PerformanceSystems

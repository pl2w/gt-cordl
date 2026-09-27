#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceControllerAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSliceControllerAsset)
namespace PerformanceSystems {
class ITimeSlice;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace PerformanceSystems {
class TimeSliceControllerAsset;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::TimeSliceControllerAsset*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::TimeSliceControllerAsset*, "PerformanceSystems", "TimeSliceControllerAsset");
// [CreateAssetMenu(menuName = "PerformanceTools/TimeSlicer/TimeSliceController", fileName = "TimeSliceController")]
// Dependencies UnityEngine.ScriptableObject
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.TimeSliceControllerAsset
class CORDL_TYPE TimeSliceControllerAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ReferenceTransform)) ::UnityW<::UnityEngine::Transform>  ReferenceTransform;

/// @brief Field _currentSlice, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSlice, put=__cordl_internal_set__currentSlice)) int32_t  _currentSlice;

/// @brief Field _currentTimeSliceBehaviours, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTimeSliceBehaviours, put=__cordl_internal_set__currentTimeSliceBehaviours)) ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*  _currentTimeSliceBehaviours;

/// @brief Field _isActive, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _referenceTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__referenceTransform, put=__cordl_internal_set__referenceTransform)) ::UnityW<::UnityEngine::Transform>  _referenceTransform;

/// @brief Field _sliceSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__sliceSize, put=__cordl_internal_set__sliceSize)) int32_t  _sliceSize;

/// @brief Field _timeSliceBehavioursToAdd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSliceBehavioursToAdd, put=__cordl_internal_set__timeSliceBehavioursToAdd)) ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  _timeSliceBehavioursToAdd;

/// @brief Field _timeSliceBehavioursToRemove, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSliceBehavioursToRemove, put=__cordl_internal_set__timeSliceBehavioursToRemove)) ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  _timeSliceBehavioursToRemove;

/// @brief Field _timeSlices, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeSlices, put=__cordl_internal_set__timeSlices)) int32_t  _timeSlices;

/// @brief Method AddPendingObjects, addr 0x5b71538, size 0x218, virtual false, abstract: false, final false
inline void AddPendingObjects() ;

/// @brief Method AddTimeSliceBehaviour, addr 0x5b712c4, size 0x90, virtual false, abstract: false, final false
inline void AddTimeSliceBehaviour(::PerformanceSystems::ITimeSlice*  timeSlice) ;

/// @brief Method ClearAsset, addr 0x5b71ac4, size 0xa8, virtual false, abstract: false, final false
inline void ClearAsset() ;

/// @brief Method InitializeReferenceTransformWithMainCam, addr 0x5b719fc, size 0xc4, virtual false, abstract: false, final false
inline void InitializeReferenceTransformWithMainCam() ;

static inline ::PerformanceSystems::TimeSliceControllerAsset* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b71ac0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RemovePendingObjects, addr 0x5b714c4, size 0x74, virtual false, abstract: false, final false
inline void RemovePendingObjects() ;

/// @brief Method RemoveTimeSliceBehaviour, addr 0x5b7136c, size 0xb4, virtual false, abstract: false, final false
inline void RemoveTimeSliceBehaviour(::PerformanceSystems::ITimeSlice*  timeSlice) ;

/// @brief Method SetRefTransform, addr 0x5b71918, size 0x8c, virtual false, abstract: false, final false
inline void SetRefTransform(::UnityEngine::Transform*  refTransform) ;

/// @brief Method Update, addr 0x5b719a4, size 0x58, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCurrentSliceObjects, addr 0x5b71750, size 0x1c8, virtual false, abstract: false, final false
inline void UpdateCurrentSliceObjects() ;

constexpr int32_t const& __cordl_internal_get__currentSlice() const;

constexpr int32_t& __cordl_internal_get__currentSlice() ;

constexpr ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>* const& __cordl_internal_get__currentTimeSliceBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*& __cordl_internal_get__currentTimeSliceBehaviours() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__referenceTransform() ;

constexpr int32_t const& __cordl_internal_get__sliceSize() const;

constexpr int32_t& __cordl_internal_get__sliceSize() ;

constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>* const& __cordl_internal_get__timeSliceBehavioursToAdd() const;

constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*& __cordl_internal_get__timeSliceBehavioursToAdd() ;

constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>* const& __cordl_internal_get__timeSliceBehavioursToRemove() const;

constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*& __cordl_internal_get__timeSliceBehavioursToRemove() ;

constexpr int32_t const& __cordl_internal_get__timeSlices() const;

constexpr int32_t& __cordl_internal_get__timeSlices() ;

constexpr void __cordl_internal_set__currentSlice(int32_t  value) ;

constexpr void __cordl_internal_set__currentTimeSliceBehaviours(::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sliceSize(int32_t  value) ;

constexpr void __cordl_internal_set__timeSliceBehavioursToAdd(::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  value) ;

constexpr void __cordl_internal_set__timeSliceBehavioursToRemove(::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  value) ;

constexpr void __cordl_internal_set__timeSlices(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b71b6c, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ReferenceTransform, addr 0x5b714bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_ReferenceTransform() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSliceControllerAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceControllerAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSliceControllerAsset(TimeSliceControllerAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSliceControllerAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSliceControllerAsset(TimeSliceControllerAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3882};

/// @brief Field _currentTimeSliceBehaviours, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*  ____currentTimeSliceBehaviours;

/// @brief Field _timeSliceBehavioursToAdd, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  ____timeSliceBehavioursToAdd;

/// @brief Field _timeSliceBehavioursToRemove, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  ____timeSliceBehavioursToRemove;

/// @brief Field _referenceTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____referenceTransform;

/// [Range(1, 150)]
/// [SerializeField]
/// @brief Field _timeSlices, offset: 0x38, size: 0x4, def value: None
 int32_t  ____timeSlices;

/// @brief Field _currentSlice, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____currentSlice;

/// @brief Field _isActive, offset: 0x40, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _sliceSize, offset: 0x44, size: 0x4, def value: None
 int32_t  ____sliceSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____currentTimeSliceBehaviours) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____timeSliceBehavioursToAdd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____timeSliceBehavioursToRemove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____referenceTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____timeSlices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____currentSlice) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____isActive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PerformanceSystems::TimeSliceControllerAsset, ____sliceSize) == 0x44, "Offset mismatch!");

static_assert(sizeof(::PerformanceSystems::TimeSliceControllerAsset) == 0x48, "Size mismatch!");

} // namespace end def PerformanceSystems

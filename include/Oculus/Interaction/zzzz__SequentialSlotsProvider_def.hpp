#pragma once
// IWYU pragma private; include "Oculus/Interaction/SequentialSlotsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequentialSlotsProvider)
namespace GlobalNamespace {
struct SequentialSlotsProvider___c__DisplayClass14_0;
}
namespace Oculus::Interaction {
class ISnapPoseDelegate;
}
namespace Oculus::Interaction {
class SequentialSlotsProvider___c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class SequentialSlotsProvider;
}
namespace Oculus::Interaction {
class SequentialSlotsProvider___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SequentialSlotsProvider*);
MARK_REF_T(::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SequentialSlotsProvider*, "Oculus.Interaction", "SequentialSlotsProvider");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*, "Oculus.Interaction", "SequentialSlotsProvider/<>c__DisplayClass9_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SequentialSlotsProvider
class CORDL_TYPE SequentialSlotsProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass14_0 = ::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0;

using __c__DisplayClass9_0 = ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0;

/// @brief Field _slotInteractors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__slotInteractors, put=__cordl_internal_set__slotInteractors)) ::ArrayW<int32_t>  _slotInteractors;

/// @brief Field _slots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__slots, put=__cordl_internal_set__slots)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _slots;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr operator  ::Oculus::Interaction::ISnapPoseDelegate*() noexcept;

/// @brief Method FindBestSlotIndex, addr 0xa4613f4, size 0x118, virtual false, abstract: false, final false
inline int32_t FindBestSlotIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, bool  freeOnly) ;

/// @brief Method InjectAllSequentialSlotsProvider, addr 0xa4619f4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllSequentialSlotsProvider(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  slots) ;

/// @brief Method InjectSlots, addr 0xa4619fc, size 0x8, virtual false, abstract: false, final false
inline void InjectSlots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  slots) ;

/// @brief Method IsSlotFree, addr 0xa46190c, size 0x38, virtual false, abstract: false, final false
inline bool IsSlotFree(int32_t  index) ;

/// @brief Method MoveTrackedElement, addr 0xa461740, size 0xa8, virtual true, abstract: false, final true
inline void MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  pose) ;

static inline ::Oculus::Interaction::SequentialSlotsProvider* New_ctor() ;

/// @brief Method PushSlots, addr 0xa461944, size 0x58, virtual false, abstract: false, final false
inline void PushSlots(int32_t  index, int32_t  freeSlot) ;

/// @brief Method SnapElement, addr 0xa461738, size 0x4, virtual true, abstract: false, final true
inline void SnapElement(int32_t  id, ::UnityEngine::Pose  pose) ;

/// @brief Method SnapPoseForElement, addr 0xa4617f0, size 0x11c, virtual true, abstract: false, final true
inline bool SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method Start, addr 0xa461300, size 0x94, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SwapSlot, addr 0xa4619b0, size 0x44, virtual false, abstract: false, final false
inline void SwapSlot(int32_t  index, int32_t  freeSlot) ;

/// @brief Method TrackElement, addr 0xa461394, size 0x60, virtual true, abstract: false, final true
inline void TrackElement(int32_t  id, ::UnityEngine::Pose  pose) ;

/// @brief Method TryFindIndexForInteractor, addr 0xa461644, size 0xf4, virtual false, abstract: false, final false
inline bool TryFindIndexForInteractor(int32_t  id, ::by_ref<int32_t>  index) ;

/// @brief Method TryOccupySlot, addr 0xa46150c, size 0xe8, virtual false, abstract: false, final false
inline bool TryOccupySlot(int32_t  index) ;

/// @brief Method UnsnapElement, addr 0xa46173c, size 0x4, virtual true, abstract: false, final true
inline void UnsnapElement(int32_t  id) ;

/// @brief Method UntrackElement, addr 0xa4615f4, size 0x50, virtual true, abstract: false, final true
inline void UntrackElement(int32_t  id) ;

/// [CompilerGenerated]
/// @brief Method <PushSlots>g__Next|14_0, addr 0xa46199c, size 0x14, virtual false, abstract: false, final false
static inline int32_t _PushSlots_g__Next_14_0(int32_t  value, ::by_ref<::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__slotInteractors() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__slotInteractors() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__slots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__slots() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__slotInteractors(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__slots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa461a04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* i___Oculus__Interaction__ISnapPoseDelegate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequentialSlotsProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequentialSlotsProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequentialSlotsProvider(SequentialSlotsProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSlotsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequentialSlotsProvider(SequentialSlotsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15879};

/// [SerializeField]
/// @brief Field _slots, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____slots;

/// @brief Field _slotInteractors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____slotInteractors;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SequentialSlotsProvider, ____slots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SequentialSlotsProvider, ____slotInteractors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SequentialSlotsProvider, ____started) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SequentialSlotsProvider) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0
class CORDL_TYPE SequentialSlotsProvider___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

static inline ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <TryFindIndexForInteractor>b__0, addr 0xa461a0c, size 0x10, virtual false, abstract: false, final false
inline bool _TryFindIndexForInteractor_b__0(int32_t  i) ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4617e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequentialSlotsProvider___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequentialSlotsProvider___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequentialSlotsProvider___c__DisplayClass9_0(SequentialSlotsProvider___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSlotsProvider___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequentialSlotsProvider___c__DisplayClass9_0(SequentialSlotsProvider___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15878};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0, ___id) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction

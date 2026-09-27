#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCameraModeComparator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtCameraModeComparator)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GtSelectorsGroup;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtCameraModeComparator;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtCameraModeComparator*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtCameraModeComparator*, "Liv.Lck.GorillaTag", "GtCameraModeComparator");
// Dependencies Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtCameraModeComparator
class CORDL_TYPE GtCameraModeComparator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _gtSelectorsGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtSelectorsGroup, put=__cordl_internal_set__gtSelectorsGroup)) ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  _gtSelectorsGroup;

/// @brief Field _targetMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetMode, put=__cordl_internal_set__targetMode)) ::Liv::Lck::GorillaTag::CameraMode  _targetMode;

/// @brief Field onTargetModeSelected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTargetModeSelected, put=__cordl_internal_set_onTargetModeSelected)) ::UnityEngine::Events::UnityEvent_1<bool>*  onTargetModeSelected;

/// @brief Method EvaluateTargetModeSelection, addr 0x9d218d8, size 0x60, virtual false, abstract: false, final false
inline void EvaluateTargetModeSelection(::Liv::Lck::GorillaTag::CameraMode  mode) ;

static inline ::Liv::Lck::GorillaTag::GtCameraModeComparator* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d21834, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d21790, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> const& __cordl_internal_get__gtSelectorsGroup() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>& __cordl_internal_get__gtSelectorsGroup() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__targetMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__targetMode() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_onTargetModeSelected() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_onTargetModeSelected() ;

constexpr void __cordl_internal_set__gtSelectorsGroup(::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  value) ;

constexpr void __cordl_internal_set__targetMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set_onTargetModeSelected(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9d21938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtCameraModeComparator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtCameraModeComparator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtCameraModeComparator(GtCameraModeComparator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtCameraModeComparator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtCameraModeComparator(GtCameraModeComparator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29623};

/// [SerializeField]
/// @brief Field _gtSelectorsGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  ____gtSelectorsGroup;

/// [SerializeField]
/// [Tooltip("Compares the target mode with the current one")]
/// @brief Field _targetMode, offset: 0x28, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____targetMode;

/// @brief Field onTargetModeSelected, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___onTargetModeSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraModeComparator, ____gtSelectorsGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraModeComparator, ____targetMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraModeComparator, ___onTargetModeSelected) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtCameraModeComparator) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag

#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSelectorsGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtSelectorsGroup)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GtSelector;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtSelectorsGroup;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtSelectorsGroup*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtSelectorsGroup*, "Liv.Lck.GorillaTag", "GtSelectorsGroup");
// Dependencies Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtSelectorsGroup
class CORDL_TYPE GtSelectorsGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentMode, put=set_CurrentMode)) ::Liv::Lck::GorillaTag::CameraMode  CurrentMode;

/// @brief Field _currentMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentMode, put=__cordl_internal_set__currentMode)) ::Liv::Lck::GorillaTag::CameraMode  _currentMode;

/// @brief Field _selectors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectors, put=__cordl_internal_set__selectors)) ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::GtSelector>>*  _selectors;

/// @brief Field onCameraModeChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCameraModeChanged, put=__cordl_internal_set_onCameraModeChanged)) ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  onCameraModeChanged;

/// @brief Method Awake, addr 0x9d2c258, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::GorillaTag::GtSelectorsGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d2c5e4, size 0x1ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Select, addr 0x9d2c1fc, size 0x5c, virtual false, abstract: false, final false
inline void Select(::Liv::Lck::GorillaTag::CameraMode  mode) ;

/// @brief Method Start, addr 0x9d2c410, size 0x1d4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCurrentMode, addr 0x9d2c790, size 0x4, virtual false, abstract: false, final false
inline void UpdateCurrentMode(::Liv::Lck::GorillaTag::CameraMode  mode) ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__currentMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__currentMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::GtSelector>>* const& __cordl_internal_get__selectors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::GtSelector>>*& __cordl_internal_get__selectors() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>* const& __cordl_internal_get_onCameraModeChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*& __cordl_internal_get_onCameraModeChanged() ;

constexpr void __cordl_internal_set__currentMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__selectors(::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::GtSelector>>*  value) ;

constexpr void __cordl_internal_set_onCameraModeChanged(::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  value) ;

/// @brief Method .ctor, addr 0x9d2c794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentMode, addr 0x9d2c198, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraMode get_CurrentMode() ;

/// @brief Method set_CurrentMode, addr 0x9d2c1a0, size 0x5c, virtual false, abstract: false, final false
inline void set_CurrentMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtSelectorsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtSelectorsGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtSelectorsGroup(GtSelectorsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtSelectorsGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtSelectorsGroup(GtSelectorsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29653};

/// [SerializeField]
/// @brief Field _selectors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::GorillaTag::GtSelector>>*  ____selectors;

/// @brief Field onCameraModeChanged, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Liv::Lck::GorillaTag::CameraMode>*  ___onCameraModeChanged;

/// @brief Field _currentMode, offset: 0x30, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____currentMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelectorsGroup, ____selectors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelectorsGroup, ___onCameraModeChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtSelectorsGroup, ____currentMode) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtSelectorsGroup) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag

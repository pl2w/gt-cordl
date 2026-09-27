#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractorVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionTurnerInteractorVisual)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor;
}
namespace Oculus::Interaction::Locomotion {
class TurnArrowVisuals;
}
namespace Oculus::Interaction::Locomotion {
class TurnerEventBroadcaster;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractorVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractorVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnerInteractorVisual
class CORDL_TYPE LocomotionTurnerInteractorVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Progress, put=set_Progress)) ::Oculus::Interaction::Input::IAxis1D*  Progress;

 __declspec(property(get=get_VerticalOffset, put=set_VerticalOffset)) float_t  VerticalOffset;

/// @brief Field <Progress>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) ::Oculus::Interaction::Input::IAxis1D*  _Progress_k__BackingField;

/// @brief Field _broadcaster, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__broadcaster, put=__cordl_internal_set__broadcaster)) ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>  _broadcaster;

/// @brief Field _lookAt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookAt, put=__cordl_internal_set__lookAt)) ::UnityW<::UnityEngine::Transform>  _lookAt;

/// @brief Field _progress, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) ::UnityW<::UnityEngine::Object>  _progress;

/// @brief Field _root, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Transform>  _root;

/// @brief Field _started, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _turner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__turner, put=__cordl_internal_set__turner)) ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  _turner;

/// @brief Field _verticalOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__verticalOffset, put=__cordl_internal_set__verticalOffset)) float_t  _verticalOffset;

/// @brief Field _visuals, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  _visuals;

/// @brief Method Awake, addr 0xa4d45a0, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleTurnerPostprocessed, addr 0xa4d4a04, size 0x1d8, virtual false, abstract: false, final false
inline void HandleTurnerPostprocessed() ;

/// @brief Method HandleTurnerStateChanged, addr 0xa4d4958, size 0x24, virtual false, abstract: false, final false
inline void HandleTurnerStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateArgs) ;

/// @brief Method InjectAllLocomotionTurnerInteractorArrowsVisual, addr 0xa4d4f18, size 0x30, virtual false, abstract: false, final false
inline void InjectAllLocomotionTurnerInteractorArrowsVisual(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner, ::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals) ;

/// @brief Method InjectOptionalLookAt, addr 0xa4d4f60, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalLookAt(::UnityEngine::Transform*  lookAt) ;

/// @brief Method InjectOptionalProgress, addr 0xa4d4f68, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progress) ;

/// @brief Method InjectOptionalRoot, addr 0xa4d4f50, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRoot(::UnityEngine::Transform*  root) ;

/// @brief Method InjectTurner, addr 0xa4d4f48, size 0x8, virtual false, abstract: false, final false
inline void InjectTurner(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner) ;

/// @brief Method InjectVisuals, addr 0xa4d4f58, size 0x8, virtual false, abstract: false, final false
inline void InjectVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d47fc, size 0x15c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d46a0, size 0x15c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4d45f8, size 0xa8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePose, addr 0xa4d4bdc, size 0x33c, virtual false, abstract: false, final false
inline void UpdatePose(::UnityEngine::Pose  origin) ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get__Progress_k__BackingField() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster> const& __cordl_internal_get__broadcaster() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>& __cordl_internal_get__broadcaster() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__lookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__lookAt() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__progress() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__progress() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__root() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor> const& __cordl_internal_get__turner() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>& __cordl_internal_get__turner() ;

constexpr float_t const& __cordl_internal_get__verticalOffset() const;

constexpr float_t& __cordl_internal_get__verticalOffset() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__Progress_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__broadcaster(::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>  value) ;

constexpr void __cordl_internal_set__lookAt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__turner(::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  value) ;

constexpr void __cordl_internal_set__verticalOffset(float_t  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  value) ;

/// @brief Method .ctor, addr 0xa4d5038, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Progress, addr 0xa4d4580, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* get_Progress() ;

/// @brief Method get_VerticalOffset, addr 0xa4d4590, size 0x8, virtual false, abstract: false, final false
inline float_t get_VerticalOffset() ;

/// [CompilerGenerated]
/// @brief Method set_Progress, addr 0xa4d4588, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(::Oculus::Interaction::Input::IAxis1D*  value) ;

/// @brief Method set_VerticalOffset, addr 0xa4d4598, size 0x8, virtual false, abstract: false, final false
inline void set_VerticalOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnerInteractorVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractorVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnerInteractorVisual(LocomotionTurnerInteractorVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractorVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnerInteractorVisual(LocomotionTurnerInteractorVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16301};

/// [SerializeField]
/// @brief Field _turner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  ____turner;

/// [SerializeField]
/// [Optional]
/// @brief Field _broadcaster, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>  ____broadcaster;

/// [SerializeField]
/// [Optional]
/// @brief Field _lookAt, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____lookAt;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _root, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____root;

/// [SerializeField]
/// @brief Field _visuals, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  ____visuals;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// [Optional]
/// @brief Field _progress, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____progress;

/// [CompilerGenerated]
/// @brief Field <Progress>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ____Progress_k__BackingField;

/// [SerializeField]
/// @brief Field _verticalOffset, offset: 0x58, size: 0x4, def value: None
 float_t  ____verticalOffset;

/// @brief Field _started, offset: 0x5c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____turner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____broadcaster) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____lookAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____root) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____visuals) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____progress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____Progress_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____verticalOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual, ____started) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnSliderSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__TurnLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionTurnSliderSetting)
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnSliderSetting;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*, "Oculus.Interaction.Locomotion", "LocomotionTurnSliderSetting");
// Dependencies Oculus.Interaction.Locomotion.TurnLocomotionBroadcaster, Oculus.Interaction.Locomotion.TurnerEventBroadcaster, UnityEngine.AnimationCurve, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnSliderSetting
class CORDL_TYPE LocomotionTurnSliderSetting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controllerTurners, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerTurners, put=__cordl_internal_set__controllerTurners)) ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  _controllerTurners;

/// @brief Field _handTurners, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__handTurners, put=__cordl_internal_set__handTurners)) ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  _handTurners;

/// @brief Field _locomotionTurners, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotionTurners, put=__cordl_internal_set__locomotionTurners)) ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>  _locomotionTurners;

/// @brief Field _slider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__slider, put=__cordl_internal_set__slider)) ::UnityW<::UnityEngine::UI::Slider>  _slider;

/// @brief Field _smoothTurnSteps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothTurnSteps, put=__cordl_internal_set__smoothTurnSteps)) ::ArrayW<::UnityEngine::AnimationCurve*>  _smoothTurnSteps;

/// @brief Field _smoothTurnToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothTurnToggle, put=__cordl_internal_set__smoothTurnToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _smoothTurnToggle;

/// @brief Field _snapTurnSteps, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapTurnSteps, put=__cordl_internal_set__snapTurnSteps)) ::ArrayW<float_t>  _snapTurnSteps;

/// @brief Field _snapTurnToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapTurnToggle, put=__cordl_internal_set__snapTurnToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _snapTurnToggle;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleSmoothTurnChanged, addr 0xa42e984, size 0x5c, virtual false, abstract: false, final false
inline void HandleSmoothTurnChanged(bool  smoothTurn) ;

/// @brief Method HandleSnapTurnChanged, addr 0xa42e92c, size 0x58, virtual false, abstract: false, final false
inline void HandleSnapTurnChanged(bool  snapTurn) ;

/// @brief Method HandleValueChanged, addr 0xa42e714, size 0x218, virtual false, abstract: false, final false
inline void HandleValueChanged(float_t  arg0) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42e9e0, size 0x18c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42e540, size 0x1d4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa42e514, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>> const& __cordl_internal_get__controllerTurners() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>& __cordl_internal_get__controllerTurners() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>> const& __cordl_internal_get__handTurners() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>& __cordl_internal_get__handTurners() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>> const& __cordl_internal_get__locomotionTurners() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>& __cordl_internal_get__locomotionTurners() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get__slider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get__slider() ;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__smoothTurnSteps() const;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& __cordl_internal_get__smoothTurnSteps() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__smoothTurnToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__smoothTurnToggle() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__snapTurnSteps() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__snapTurnSteps() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__snapTurnToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__snapTurnToggle() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__controllerTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  value) ;

constexpr void __cordl_internal_set__handTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  value) ;

constexpr void __cordl_internal_set__locomotionTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>  value) ;

constexpr void __cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider>  value) ;

constexpr void __cordl_internal_set__smoothTurnSteps(::ArrayW<::UnityEngine::AnimationCurve*>  value) ;

constexpr void __cordl_internal_set__smoothTurnToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__snapTurnSteps(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__snapTurnToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa42eb6c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnSliderSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnSliderSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnSliderSetting(LocomotionTurnSliderSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnSliderSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnSliderSetting(LocomotionTurnSliderSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28270};

/// [SerializeField]
/// @brief Field _slider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ____slider;

/// [SerializeField]
/// @brief Field _snapTurnToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____snapTurnToggle;

/// [SerializeField]
/// @brief Field _smoothTurnToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____smoothTurnToggle;

/// [SerializeField]
/// @brief Field _snapTurnSteps, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____snapTurnSteps;

/// [SerializeField]
/// @brief Field _smoothTurnSteps, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimationCurve*>  ____smoothTurnSteps;

/// [SerializeField]
/// @brief Field _controllerTurners, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  ____controllerTurners;

/// [SerializeField]
/// @brief Field _handTurners, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  ____handTurners;

/// [SerializeField]
/// @brief Field _locomotionTurners, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>  ____locomotionTurners;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____slider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____snapTurnToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____smoothTurnToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____snapTurnSteps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____smoothTurnSteps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____controllerTurners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____handTurners) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____locomotionTurners) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion

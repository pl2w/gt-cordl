#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/GorillaSnapTurn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_InputAxes_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSnapTurn)
namespace GlobalNamespace {
struct GorillaSnapTurn_InputAxes;
}
namespace GlobalNamespace {
class ISnapTurnOverride;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*, "UnityEngine.XR.Interaction.Toolkit", "GorillaSnapTurn");
// Dependencies UnityEngine.Vector2, UnityEngine.XR.InputFeatureUsage`1<T>, UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn::InputAxes, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn
class CORDL_TYPE GorillaSnapTurn : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
using InputAxes = ::GlobalNamespace::GorillaSnapTurn_InputAxes;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _cachedReference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedReference, put=setStaticF__cachedReference)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  _cachedReference;

/// @brief Field _cachedTurnFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__cachedTurnFactor, put=setStaticF__cachedTurnFactor)) int32_t  _cachedTurnFactor;

/// @brief Field _cachedTurnType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedTurnType, put=setStaticF__cachedTurnType)) ::StringW  _cachedTurnType;

 __declspec(property(get=get_controllers, put=set_controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  controllers;

 __declspec(property(get=get_deadZone, put=set_deadZone)) float_t  deadZone;

 __declspec(property(get=get_debounceTime, put=set_debounceTime)) float_t  debounceTime;

/// @brief Field m_AxisReset, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AxisReset, put=__cordl_internal_set_m_AxisReset)) bool  m_AxisReset;

/// @brief Field m_Controllers, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controllers, put=__cordl_internal_set_m_Controllers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  m_Controllers;

/// @brief Field m_ControllersWereActive, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllersWereActive, put=__cordl_internal_set_m_ControllersWereActive)) ::System::Collections::Generic::List_1<bool>*  m_ControllersWereActive;

/// @brief Field m_CurrentTurnAmount, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentTurnAmount, put=__cordl_internal_set_m_CurrentTurnAmount)) float_t  m_CurrentTurnAmount;

/// @brief Field m_DeadZone, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeadZone, put=__cordl_internal_set_m_DeadZone)) float_t  m_DeadZone;

/// @brief Field m_DebounceTime, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DebounceTime, put=__cordl_internal_set_m_DebounceTime)) float_t  m_DebounceTime;

/// @brief Field m_TimeStarted, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeStarted, put=__cordl_internal_set_m_TimeStarted)) float_t  m_TimeStarted;

/// @brief Field m_TurnAmount, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnAmount, put=__cordl_internal_set_m_TurnAmount)) float_t  m_TurnAmount;

/// @brief Field m_TurnFactor, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnFactor, put=__cordl_internal_set_m_TurnFactor)) int32_t  m_TurnFactor;

/// @brief Field m_TurnType, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TurnType, put=__cordl_internal_set_m_TurnType)) ::StringW  m_TurnType;

/// @brief Field m_TurnUsage, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnUsage, put=__cordl_internal_set_m_TurnUsage)) ::GlobalNamespace::GorillaSnapTurn_InputAxes  m_TurnUsage;

/// @brief Field m_Vec2UsageList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Vec2UsageList, put=setStaticF_m_Vec2UsageList)) ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  m_Vec2UsageList;

 __declspec(property(get=get_turnAmount, put=set_turnAmount)) float_t  turnAmount;

 __declspec(property(get=get_turnFactor, put=set_turnFactor)) int32_t  turnFactor;

/// @brief Field turnSpeed, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

 __declspec(property(get=get_turnType, put=set_turnType)) ::StringW  turnType;

 __declspec(property(get=get_turnUsage, put=set_turnUsage)) ::GlobalNamespace::GorillaSnapTurn_InputAxes  turnUsage;

/// @brief Field turningOverriders, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_turningOverriders, put=__cordl_internal_set_turningOverriders)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*  turningOverriders;

/// @brief Field xrOrigin, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrOrigin, put=__cordl_internal_set_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  xrOrigin;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5b79d78, size 0x154, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeTurnMode, addr 0x5b7a524, size 0x130, virtual false, abstract: false, final false
inline void ChangeTurnMode(::StringW  turnMode, int32_t  turnSpeedFactor) ;

/// @brief Method ConvertedTurnFactor, addr 0x5b7a654, size 0x28, virtual false, abstract: false, final false
inline float_t ConvertedTurnFactor(float_t  newTurnSpeed) ;

/// @brief Method DisableSnapTurn, addr 0x5b7a79c, size 0x184, virtual false, abstract: false, final false
static inline void DisableSnapTurn() ;

/// @brief Method EnsureControllerDataListSize, addr 0x5b7a338, size 0x130, virtual false, abstract: false, final false
inline void EnsureControllerDataListSize() ;

/// @brief Method FakeStartTurn, addr 0x5b7a510, size 0x14, virtual false, abstract: false, final false
inline void FakeStartTurn(bool  isLeft) ;

/// @brief Method LoadSettingsFromCache, addr 0x5b7ad24, size 0x180, virtual false, abstract: false, final false
static inline void LoadSettingsFromCache() ;

/// @brief Method LoadSettingsFromPlayerPrefs, addr 0x5b7aba0, size 0x184, virtual false, abstract: false, final false
static inline void LoadSettingsFromPlayerPrefs() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn* New_ctor() ;

/// @brief Method SetTurningOverride, addr 0x5b7a67c, size 0x90, virtual false, abstract: false, final false
inline void SetTurningOverride(::GlobalNamespace::ISnapTurnOverride*  caller) ;

/// @brief Method StartTurn, addr 0x5b7a468, size 0xa8, virtual false, abstract: false, final false
inline void StartTurn(float_t  amount) ;

/// @brief Method Tick, addr 0x5b79ecc, size 0x298, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UnsetTurningOverride, addr 0x5b7a70c, size 0x90, virtual false, abstract: false, final false
inline void UnsetTurningOverride(::GlobalNamespace::ISnapTurnOverride*  caller) ;

/// @brief Method UpdateAndSaveTurnFactor, addr 0x5b7aa60, size 0x140, virtual false, abstract: false, final false
static inline void UpdateAndSaveTurnFactor(int32_t  factor) ;

/// @brief Method UpdateAndSaveTurnType, addr 0x5b7a920, size 0x140, virtual false, abstract: false, final false
static inline void UpdateAndSaveTurnType(::StringW  mode) ;

/// @brief Method ValidateTurningOverriders, addr 0x5b7a164, size 0x1d4, virtual false, abstract: false, final false
inline void ValidateTurningOverriders() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AxisReset() const;

constexpr bool& __cordl_internal_get_m_AxisReset() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& __cordl_internal_get_m_Controllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& __cordl_internal_get_m_Controllers() ;

constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_m_ControllersWereActive() const;

constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_m_ControllersWereActive() ;

constexpr float_t const& __cordl_internal_get_m_CurrentTurnAmount() const;

constexpr float_t& __cordl_internal_get_m_CurrentTurnAmount() ;

constexpr float_t const& __cordl_internal_get_m_DeadZone() const;

constexpr float_t& __cordl_internal_get_m_DeadZone() ;

constexpr float_t const& __cordl_internal_get_m_DebounceTime() const;

constexpr float_t& __cordl_internal_get_m_DebounceTime() ;

constexpr float_t const& __cordl_internal_get_m_TimeStarted() const;

constexpr float_t& __cordl_internal_get_m_TimeStarted() ;

constexpr float_t const& __cordl_internal_get_m_TurnAmount() const;

constexpr float_t& __cordl_internal_get_m_TurnAmount() ;

constexpr int32_t const& __cordl_internal_get_m_TurnFactor() const;

constexpr int32_t& __cordl_internal_get_m_TurnFactor() ;

constexpr ::StringW const& __cordl_internal_get_m_TurnType() const;

constexpr ::StringW& __cordl_internal_get_m_TurnType() ;

constexpr ::GlobalNamespace::GorillaSnapTurn_InputAxes const& __cordl_internal_get_m_TurnUsage() const;

constexpr ::GlobalNamespace::GorillaSnapTurn_InputAxes& __cordl_internal_get_m_TurnUsage() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>* const& __cordl_internal_get_turningOverriders() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*& __cordl_internal_get_turningOverriders() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_xrOrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_xrOrigin() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AxisReset(bool  value) ;

constexpr void __cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value) ;

constexpr void __cordl_internal_set_m_ControllersWereActive(::System::Collections::Generic::List_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_CurrentTurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_DeadZone(float_t  value) ;

constexpr void __cordl_internal_set_m_DebounceTime(float_t  value) ;

constexpr void __cordl_internal_set_m_TimeStarted(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnFactor(int32_t  value) ;

constexpr void __cordl_internal_set_m_TurnType(::StringW  value) ;

constexpr void __cordl_internal_set_m_TurnUsage(::GlobalNamespace::GorillaSnapTurn_InputAxes  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_turningOverriders(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*  value) ;

constexpr void __cordl_internal_set_xrOrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0x5b7aea4, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> getStaticF__cachedReference() ;

static inline int32_t getStaticF__cachedTurnFactor() ;

static inline ::StringW getStaticF__cachedTurnType() ;

static inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> getStaticF_m_Vec2UsageList() ;

/// @brief Method get_CachedSnapTurnRef, addr 0x5b79c24, size 0x154, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> get_CachedSnapTurnRef() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5b79ba4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Method get_controllers, addr 0x5b79bc4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* get_controllers() ;

/// @brief Method get_deadZone, addr 0x5b79bf4, size 0x8, virtual false, abstract: false, final false
inline float_t get_deadZone() ;

/// @brief Method get_debounceTime, addr 0x5b79be4, size 0x8, virtual false, abstract: false, final false
inline float_t get_debounceTime() ;

/// @brief Method get_turnAmount, addr 0x5b79bd4, size 0x8, virtual false, abstract: false, final false
inline float_t get_turnAmount() ;

/// @brief Method get_turnFactor, addr 0x5b79c14, size 0x8, virtual false, abstract: false, final false
inline int32_t get_turnFactor() ;

/// @brief Method get_turnType, addr 0x5b79c04, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_turnType() ;

/// @brief Method get_turnUsage, addr 0x5b79bb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaSnapTurn_InputAxes get_turnUsage() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__cachedReference(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

static inline void setStaticF__cachedTurnFactor(int32_t  value) ;

static inline void setStaticF__cachedTurnType(::StringW  value) ;

static inline void setStaticF_m_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5b79bac, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// @brief Method set_controllers, addr 0x5b79bcc, size 0x8, virtual false, abstract: false, final false
inline void set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value) ;

/// @brief Method set_deadZone, addr 0x5b79bfc, size 0x8, virtual false, abstract: false, final false
inline void set_deadZone(float_t  value) ;

/// @brief Method set_debounceTime, addr 0x5b79bec, size 0x8, virtual false, abstract: false, final false
inline void set_debounceTime(float_t  value) ;

/// @brief Method set_turnAmount, addr 0x5b79bdc, size 0x8, virtual false, abstract: false, final false
inline void set_turnAmount(float_t  value) ;

/// @brief Method set_turnFactor, addr 0x5b79c1c, size 0x8, virtual false, abstract: false, final false
inline void set_turnFactor(int32_t  value) ;

/// @brief Method set_turnType, addr 0x5b79c0c, size 0x8, virtual false, abstract: false, final false
inline void set_turnType(::StringW  value) ;

/// @brief Method set_turnUsage, addr 0x5b79bbc, size 0x8, virtual false, abstract: false, final false
inline void set_turnUsage(::GlobalNamespace::GorillaSnapTurn_InputAxes  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSnapTurn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSnapTurn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSnapTurn(GorillaSnapTurn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSnapTurn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSnapTurn(GorillaSnapTurn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3899};

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [Header("References")]
/// [SerializeField]
/// @brief Field xrOrigin, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___xrOrigin;

/// [SerializeField]
/// [Tooltip("The 2D Input Axis on the primary devices that will be used to trigger a snap turn.")]
/// @brief Field m_TurnUsage, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::GorillaSnapTurn_InputAxes  ___m_TurnUsage;

/// [SerializeField]
/// [Tooltip("A list of controllers that allow Snap Turn.  If an XRController is not enabled, or does not have input actions enabled.  Snap Turn will not work.")]
/// @brief Field m_Controllers, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  ___m_Controllers;

/// [SerializeField]
/// [Tooltip("The number of degrees clockwise to rotate when snap turning clockwise.")]
/// @brief Field m_TurnAmount, offset: 0xb8, size: 0x4, def value: None
 float_t  ___m_TurnAmount;

/// [SerializeField]
/// [Tooltip("The amount of time that the system will wait before starting another snap turn.")]
/// @brief Field m_DebounceTime, offset: 0xbc, size: 0x4, def value: None
 float_t  ___m_DebounceTime;

/// [SerializeField]
/// [Tooltip("The deadzone that the controller movement will have to be above to trigger a snap turn.")]
/// @brief Field m_DeadZone, offset: 0xc0, size: 0x4, def value: None
 float_t  ___m_DeadZone;

/// @brief Field m_CurrentTurnAmount, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_CurrentTurnAmount;

/// @brief Field m_TimeStarted, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_TimeStarted;

/// @brief Field m_AxisReset, offset: 0xcc, size: 0x1, def value: None
 bool  ___m_AxisReset;

/// @brief Field turnSpeed, offset: 0xd0, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// @brief Field turningOverriders, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*  ___turningOverriders;

/// @brief Field m_ControllersWereActive, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<bool>*  ___m_ControllersWereActive;

/// @brief Field m_TurnType, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___m_TurnType;

/// @brief Field m_TurnFactor, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___m_TurnFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ____TickRunning_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___xrOrigin) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_TurnUsage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_Controllers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_TurnAmount) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_DebounceTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_DeadZone) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_CurrentTurnAmount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_TimeStarted) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_AxisReset) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___turnSpeed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___turningOverriders) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_ControllersWereActive) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_TurnType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn, ___m_TurnFactor) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn) == 0xf8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_SignalCombinationModes_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseListener)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineImpulseListener_ImpulseReaction;
}
namespace GlobalNamespace {
struct CinemachineImpulseListener_SignalCombinationModes;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineImpulseListener;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseListener*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseListener*, "Unity.Cinemachine", "CinemachineImpulseListener");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Impulse Listener")]
// [ExecuteAlways]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineImpulseListener.html")]
// Dependencies Unity.Cinemachine.CinemachineCore::Stage, Unity.Cinemachine.CinemachineExtension, Unity.Cinemachine.CinemachineImpulseListener::ImpulseReaction, Unity.Cinemachine.CinemachineImpulseListener::SignalCombinationModes
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseListener
class CORDL_TYPE CinemachineImpulseListener : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using ImpulseReaction = ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction;

using SignalCombinationModes = ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes;

/// @brief Field ApplyAfter, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ApplyAfter, put=__cordl_internal_set_ApplyAfter)) ::GlobalNamespace::CinemachineCore_Stage  ApplyAfter;

/// @brief Field ChannelMask, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChannelMask, put=__cordl_internal_set_ChannelMask)) int32_t  ChannelMask;

/// @brief Field Gain, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Gain, put=__cordl_internal_set_Gain)) float_t  Gain;

/// @brief Field ReactionSettings, offset 0x48, size 0x30 
 __declspec(property(get=__cordl_internal_get_ReactionSettings, put=__cordl_internal_set_ReactionSettings)) ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  ReactionSettings;

/// @brief Field SignalCombinationMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SignalCombinationMode, put=__cordl_internal_set_SignalCombinationMode)) ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes  SignalCombinationMode;

/// @brief Field Use2DDistance, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_Use2DDistance, put=__cordl_internal_set_Use2DDistance)) bool  Use2DDistance;

/// @brief Field UseCameraSpace, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseCameraSpace, put=__cordl_internal_set_UseCameraSpace)) bool  UseCameraSpace;

static inline ::Unity::Cinemachine::CinemachineImpulseListener* New_ctor() ;

/// @brief Method PostPipelineStageCallback, addr 0xaee3950, size 0x3c8, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaee3908, size 0x48, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::GlobalNamespace::CinemachineCore_Stage const& __cordl_internal_get_ApplyAfter() const;

constexpr ::GlobalNamespace::CinemachineCore_Stage& __cordl_internal_get_ApplyAfter() ;

constexpr int32_t const& __cordl_internal_get_ChannelMask() const;

constexpr int32_t& __cordl_internal_get_ChannelMask() ;

constexpr float_t const& __cordl_internal_get_Gain() const;

constexpr float_t& __cordl_internal_get_Gain() ;

constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction const& __cordl_internal_get_ReactionSettings() const;

constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction& __cordl_internal_get_ReactionSettings() ;

constexpr ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes const& __cordl_internal_get_SignalCombinationMode() const;

constexpr ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes& __cordl_internal_get_SignalCombinationMode() ;

constexpr bool const& __cordl_internal_get_Use2DDistance() const;

constexpr bool& __cordl_internal_get_Use2DDistance() ;

constexpr bool const& __cordl_internal_get_UseCameraSpace() const;

constexpr bool& __cordl_internal_get_UseCameraSpace() ;

constexpr void __cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value) ;

constexpr void __cordl_internal_set_ChannelMask(int32_t  value) ;

constexpr void __cordl_internal_set_Gain(float_t  value) ;

constexpr void __cordl_internal_set_ReactionSettings(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  value) ;

constexpr void __cordl_internal_set_SignalCombinationMode(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes  value) ;

constexpr void __cordl_internal_set_Use2DDistance(bool  value) ;

constexpr void __cordl_internal_set_UseCameraSpace(bool  value) ;

/// @brief Method .ctor, addr 0xaee40a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseListener(CinemachineImpulseListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseListener(CinemachineImpulseListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22477};

/// [Tooltip("When to apply the impulse reaction.  Default is after the Noise stage.  Modify this if necessary to influence the ordering of extension effects")]
/// [FormerlySerializedAs("m_ApplyAfter")]
/// @brief Field ApplyAfter, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_Stage  ___ApplyAfter;

/// [Tooltip("Impulse events on channels not included in the mask will be ignored.")]
/// [CinemachineImpulseChannelProperty]
/// [FormerlySerializedAs("m_ChannelMask")]
/// @brief Field ChannelMask, offset: 0x34, size: 0x4, def value: None
 int32_t  ___ChannelMask;

/// [Tooltip("Gain to apply to the Impulse signal.  1 is normal strength.  Setting this to 0 completely mutes the signal.")]
/// [FormerlySerializedAs("m_Gain")]
/// @brief Field Gain, offset: 0x38, size: 0x4, def value: None
 float_t  ___Gain;

/// [Tooltip("Enable this to perform distance calculation in 2D (ignore Z)")]
/// [FormerlySerializedAs("m_Use2DDistance")]
/// @brief Field Use2DDistance, offset: 0x3c, size: 0x1, def value: None
 bool  ___Use2DDistance;

/// [Tooltip("Enable this to process all impulse signals in camera space")]
/// [FormerlySerializedAs("m_UseCameraSpace")]
/// @brief Field UseCameraSpace, offset: 0x3d, size: 0x1, def value: None
 bool  ___UseCameraSpace;

/// [Tooltip("Controls how the Impulse Listener combines multiple impulses active at the current point in space.\n\n<b>Additive</b>: Combines all the active signals together, like sound waves.  This is the default.\n\n<b>Use Largest</b>: Considers only the signal with the largest amplitude; ignores any others.")]
/// @brief Field SignalCombinationMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes  ___SignalCombinationMode;

/// [Tooltip("This controls the secondary reaction of the listener to the incoming impulse.  The impulse might be for example a sharp shock, and the secondary reaction could be a vibration whose amplitude and duration is controlled by the size of the original impulse.  This allows different listeners to respond in different ways to the same impulse signal.")]
/// [FormerlySerializedAs("m_ReactionSettings")]
/// @brief Field ReactionSettings, offset: 0x48, size: 0x30, def value: None
 ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  ___ReactionSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___ApplyAfter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___ChannelMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___Gain) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___Use2DDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___UseCameraSpace) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___SignalCombinationMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseListener, ___ReactionSettings) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseListener) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine

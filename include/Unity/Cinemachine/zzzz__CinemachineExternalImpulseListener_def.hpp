#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExternalImpulseListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineExternalImpulseListener)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineExternalImpulseListener;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineExternalImpulseListener*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineExternalImpulseListener*, "Unity.Cinemachine", "CinemachineExternalImpulseListener");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine External Impulse Listener")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineExternalImpulseListener.html")]
// Dependencies Unity.Cinemachine.CinemachineImpulseListener::ImpulseReaction, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineExternalImpulseListener
class CORDL_TYPE CinemachineExternalImpulseListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ChannelMask, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChannelMask, put=__cordl_internal_set_ChannelMask)) int32_t  ChannelMask;

/// @brief Field Gain, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Gain, put=__cordl_internal_set_Gain)) float_t  Gain;

/// @brief Field ReactionSettings, offset 0x48, size 0x30 
 __declspec(property(get=__cordl_internal_get_ReactionSettings, put=__cordl_internal_set_ReactionSettings)) ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  ReactionSettings;

/// @brief Field Use2DDistance, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_Use2DDistance, put=__cordl_internal_set_Use2DDistance)) bool  Use2DDistance;

/// @brief Field UseLocalSpace, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseLocalSpace, put=__cordl_internal_set_UseLocalSpace)) bool  UseLocalSpace;

/// @brief Field m_ImpulsePosLastFrame, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ImpulsePosLastFrame, put=__cordl_internal_set_m_ImpulsePosLastFrame)) ::UnityEngine::Vector3  m_ImpulsePosLastFrame;

/// @brief Field m_ImpulseRotLastFrame, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ImpulseRotLastFrame, put=__cordl_internal_set_m_ImpulseRotLastFrame)) ::UnityEngine::Quaternion  m_ImpulseRotLastFrame;

/// @brief Method LateUpdate, addr 0xaee5a28, size 0x2f0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Unity::Cinemachine::CinemachineExternalImpulseListener* New_ctor() ;

/// @brief Method OnEnable, addr 0xaee586c, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xaee582c, size 0x40, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0xaee58fc, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_ChannelMask() const;

constexpr int32_t& __cordl_internal_get_ChannelMask() ;

constexpr float_t const& __cordl_internal_get_Gain() const;

constexpr float_t& __cordl_internal_get_Gain() ;

constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction const& __cordl_internal_get_ReactionSettings() const;

constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction& __cordl_internal_get_ReactionSettings() ;

constexpr bool const& __cordl_internal_get_Use2DDistance() const;

constexpr bool& __cordl_internal_get_Use2DDistance() ;

constexpr bool const& __cordl_internal_get_UseLocalSpace() const;

constexpr bool& __cordl_internal_get_UseLocalSpace() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ImpulsePosLastFrame() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ImpulsePosLastFrame() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_ImpulseRotLastFrame() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_ImpulseRotLastFrame() ;

constexpr void __cordl_internal_set_ChannelMask(int32_t  value) ;

constexpr void __cordl_internal_set_Gain(float_t  value) ;

constexpr void __cordl_internal_set_ReactionSettings(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  value) ;

constexpr void __cordl_internal_set_Use2DDistance(bool  value) ;

constexpr void __cordl_internal_set_UseLocalSpace(bool  value) ;

constexpr void __cordl_internal_set_m_ImpulsePosLastFrame(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ImpulseRotLastFrame(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xaee5d18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineExternalImpulseListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExternalImpulseListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineExternalImpulseListener(CinemachineExternalImpulseListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExternalImpulseListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineExternalImpulseListener(CinemachineExternalImpulseListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22485};

/// @brief Field m_ImpulsePosLastFrame, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ImpulsePosLastFrame;

/// @brief Field m_ImpulseRotLastFrame, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_ImpulseRotLastFrame;

/// [Tooltip("Impulse events on channels not included in the mask will be ignored.")]
/// [CinemachineImpulseChannelProperty]
/// [FormerlySerializedAs("m_ChannelMask")]
/// @brief Field ChannelMask, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___ChannelMask;

/// [Tooltip("Gain to apply to the Impulse signal.  1 is normal strength.  Setting this to 0 completely mutes the signal.")]
/// [FormerlySerializedAs("m_Gain")]
/// @brief Field Gain, offset: 0x40, size: 0x4, def value: None
 float_t  ___Gain;

/// [Tooltip("Enable this to perform distance calculation in 2D (ignore Z)")]
/// [FormerlySerializedAs("m_Use2DDistance")]
/// @brief Field Use2DDistance, offset: 0x44, size: 0x1, def value: None
 bool  ___Use2DDistance;

/// [Tooltip("Enable this to process all impulse signals in camera space")]
/// [FormerlySerializedAs("m_UseLocalSpace")]
/// @brief Field UseLocalSpace, offset: 0x45, size: 0x1, def value: None
 bool  ___UseLocalSpace;

/// [Tooltip("This controls the secondary reaction of the listener to the incoming impulse.  The impulse might be for example a sharp shock, and the secondary reaction could be a vibration whose amplitude and duration is controlled by the size of the original impulse.  This allows different listeners to respond in different ways to the same impulse signal.")]
/// [FormerlySerializedAs("m_ReactionSettings")]
/// @brief Field ReactionSettings, offset: 0x48, size: 0x30, def value: None
 ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  ___ReactionSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___m_ImpulsePosLastFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___m_ImpulseRotLastFrame) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___ChannelMask) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___Gain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___Use2DDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___UseLocalSpace) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalImpulseListener, ___ReactionSettings) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineExternalImpulseListener) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine

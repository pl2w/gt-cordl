#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/LocomotionSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionSystem)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct RequestResult;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRig;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, "UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem");
// [AddComponentMenu("XR/Locomotion/Legacy/Locomotion System", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.LocomotionSystem.html")]
// [Obsolete("LocomotionSystem is deprecated and will be removed in a future release. Use LocomotionMediator instead.", false)]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
class CORDL_TYPE LocomotionSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief [Obsolete("Busy has been deprecated. Use busy instead. (UnityUpgradable) -> busy", true)]
 __declspec(property(get=get_Busy)) bool  Busy;

 __declspec(property(get=get_busy)) bool  busy;

/// @brief Field m_CurrentExclusiveProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentExclusiveProvider, put=__cordl_internal_set_m_CurrentExclusiveProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  m_CurrentExclusiveProvider;

/// @brief Field m_TimeMadeExclusive, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeMadeExclusive, put=__cordl_internal_set_m_TimeMadeExclusive)) float_t  m_TimeMadeExclusive;

/// @brief Field m_Timeout, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Timeout, put=__cordl_internal_set_m_Timeout)) float_t  m_Timeout;

/// @brief Field m_XROrigin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROrigin, put=__cordl_internal_set_m_XROrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_XROrigin;

 __declspec(property(get=get_timeout, put=set_timeout)) float_t  timeout;

 __declspec(property(get=get_xrOrigin, put=set_xrOrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  xrOrigin;

/// @brief [Obsolete("xrRig is marked for deprecation and will be removed in a future version. Please use xrOrigin instead.", true)]
 __declspec(property(get=get_xrRig, put=set_xrRig)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig>  xrRig;

/// @brief Method Awake, addr 0xb4198d8, size 0x1ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FinishExclusiveOperation, addr 0xb419c38, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::RequestResult FinishExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* New_ctor() ;

/// @brief Method RequestExclusiveOperation, addr 0xb419b40, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::RequestResult RequestExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method ResetExclusivity, addr 0xb419b1c, size 0x24, virtual false, abstract: false, final false
inline void ResetExclusivity() ;

/// @brief Method Update, addr 0xb419a84, size 0x98, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> const& __cordl_internal_get_m_CurrentExclusiveProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>& __cordl_internal_get_m_CurrentExclusiveProvider() ;

constexpr float_t const& __cordl_internal_get_m_TimeMadeExclusive() const;

constexpr float_t& __cordl_internal_get_m_TimeMadeExclusive() ;

constexpr float_t const& __cordl_internal_get_m_Timeout() const;

constexpr float_t& __cordl_internal_get_m_Timeout() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin() ;

constexpr void __cordl_internal_set_m_CurrentExclusiveProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  value) ;

constexpr void __cordl_internal_set_m_TimeMadeExclusive(float_t  value) ;

constexpr void __cordl_internal_set_m_Timeout(float_t  value) ;

constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0xb419d1c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Busy, addr 0xb4198d0, size 0x8, virtual false, abstract: false, final false
inline bool get_Busy() ;

/// @brief Method get_busy, addr 0xb419864, size 0x60, virtual false, abstract: false, final false
inline bool get_busy() ;

/// @brief Method get_timeout, addr 0xb419844, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeout() ;

/// @brief Method get_xrOrigin, addr 0xb419854, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_xrOrigin() ;

/// @brief Method get_xrRig, addr 0xb4198c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> get_xrRig() ;

/// @brief Method set_timeout, addr 0xb41984c, size 0x8, virtual false, abstract: false, final false
inline void set_timeout(float_t  value) ;

/// @brief Method set_xrOrigin, addr 0xb41985c, size 0x8, virtual false, abstract: false, final false
inline void set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value) ;

/// @brief Method set_xrRig, addr 0xb4198cc, size 0x4, virtual false, abstract: false, final false
inline void set_xrRig(::UnityEngine::XR::Interaction::Toolkit::XRRig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionSystem(LocomotionSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionSystem(LocomotionSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11126};

/// @brief Field m_CurrentExclusiveProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  ___m_CurrentExclusiveProvider;

/// @brief Field m_TimeMadeExclusive, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_TimeMadeExclusive;

/// [SerializeField]
/// [Tooltip("The timeout (in seconds) for exclusive access to the XR Origin.")]
/// @brief Field m_Timeout, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_Timeout;

/// [SerializeField]
/// [FormerlySerializedAs("m_XRRig")]
/// [Tooltip("The XR Origin object to provide access control to.")]
/// @brief Field m_XROrigin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_XROrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem, ___m_CurrentExclusiveProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem, ___m_TimeMadeExclusive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem, ___m_Timeout) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem, ___m_XROrigin) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

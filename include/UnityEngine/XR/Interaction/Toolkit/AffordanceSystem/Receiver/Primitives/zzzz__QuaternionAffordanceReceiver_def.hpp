#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/QuaternionAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector4AffordanceReceiver_def.hpp"
CORDL_MODULE_EXPORT(QuaternionAffordanceReceiver)
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::XR::CoreUtils {
class QuaternionUnityEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class QuaternionAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "QuaternionAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Primitives/Quaternion Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver
class CORDL_TYPE QuaternionAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver {
public:
// Declarations
/// @brief Field m_QuaternionValueUpdated, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_QuaternionValueUpdated, put=__cordl_internal_set_m_QuaternionValueUpdated)) ::Unity::XR::CoreUtils::QuaternionUnityEvent*  m_QuaternionValueUpdated;

 __declspec(property(get=get_quaternionValueUpdated, put=set_quaternionValueUpdated)) ::Unity::XR::CoreUtils::QuaternionUnityEvent*  quaternionValueUpdated;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4dc380, size 0xa8, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::Unity::Mathematics::float4  newValue) ;

constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent* const& __cordl_internal_get_m_QuaternionValueUpdated() const;

constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent*& __cordl_internal_get_m_QuaternionValueUpdated() ;

constexpr void __cordl_internal_set_m_QuaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb4dc428, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_quaternionValueUpdated, addr 0xb4dc370, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* get_quaternionValueUpdated() ;

/// @brief Method set_quaternionValueUpdated, addr 0xb4dc378, size 0x8, virtual false, abstract: false, final false
inline void set_quaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionAffordanceReceiver(QuaternionAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionAffordanceReceiver(QuaternionAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11764};

/// [SerializeField]
/// [Tooltip("The event that is called when the current affordance value is updated, expressed as a quaternion.")]
/// @brief Field m_QuaternionValueUpdated, offset: 0xb0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::QuaternionUnityEvent*  ___m_QuaternionValueUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver, ___m_QuaternionValueUpdated) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives

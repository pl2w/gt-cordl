#pragma once
// IWYU pragma private; include "Oculus/Interaction/JointDeltaProviderRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JointDeltaProviderRef)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::PoseDetection {
class IJointDeltaProvider;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class JointDeltaProviderRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::JointDeltaProviderRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::JointDeltaProviderRef*, "Oculus.Interaction", "JointDeltaProviderRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.JointDeltaProviderRef
class CORDL_TYPE JointDeltaProviderRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_JointDeltaProvider, put=set_JointDeltaProvider)) ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  JointDeltaProvider;

/// @brief Field <JointDeltaProvider>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__JointDeltaProvider_k__BackingField, put=__cordl_internal_set__JointDeltaProvider_k__BackingField)) ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  _JointDeltaProvider_k__BackingField;

/// @brief Field _jointDeltaProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointDeltaProvider, put=__cordl_internal_set__jointDeltaProvider)) ::UnityW<::UnityEngine::Object>  _jointDeltaProvider;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*() noexcept;

/// @brief Method Awake, addr 0xa4798b8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPositionDelta, addr 0xa479914, size 0xb8, virtual true, abstract: false, final true
inline bool GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta) ;

/// @brief Method GetRotationDelta, addr 0xa4799cc, size 0xbc, virtual true, abstract: false, final true
inline bool GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta) ;

/// @brief Method InjectAllJointDeltaProviderRef, addr 0xa479be0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllJointDeltaProviderRef(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

/// @brief Method InjectJointDeltaProvider, addr 0xa479be4, size 0xd0, virtual false, abstract: false, final false
inline void InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

static inline ::Oculus::Interaction::JointDeltaProviderRef* New_ctor() ;

/// @brief Method RegisterConfig, addr 0xa479a88, size 0xac, virtual true, abstract: false, final true
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

/// @brief Method Start, addr 0xa479910, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnRegisterConfig, addr 0xa479b34, size 0xac, virtual true, abstract: false, final true
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& __cordl_internal_get__JointDeltaProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& __cordl_internal_get__JointDeltaProvider_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__jointDeltaProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__jointDeltaProvider() ;

constexpr void __cordl_internal_set__JointDeltaProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value) ;

constexpr void __cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa479cb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_JointDeltaProvider, addr 0xa4798a8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* get_JointDeltaProvider() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* i___Oculus__Interaction__PoseDetection__IJointDeltaProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_JointDeltaProvider, addr 0xa4798b0, size 0x8, virtual false, abstract: false, final false
inline void set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointDeltaProviderRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProviderRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointDeltaProviderRef(JointDeltaProviderRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointDeltaProviderRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointDeltaProviderRef(JointDeltaProviderRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15960};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.IJointDeltaProvider), new[] {  })]
/// @brief Field _jointDeltaProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____jointDeltaProvider;

/// [CompilerGenerated]
/// @brief Field <JointDeltaProvider>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  ____JointDeltaProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::JointDeltaProviderRef, ____jointDeltaProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JointDeltaProviderRef, ____JointDeltaProvider_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::JointDeltaProviderRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

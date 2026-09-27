#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformFeatureStateProviderRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TransformFeatureStateProviderRef)
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
class ITransformFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TransformFeatureStateProviderRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TransformFeatureStateProviderRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformFeatureStateProviderRef*, "Oculus.Interaction", "TransformFeatureStateProviderRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformFeatureStateProviderRef
class CORDL_TYPE TransformFeatureStateProviderRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TransformFeatureStateProvider, put=set_TransformFeatureStateProvider)) ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  TransformFeatureStateProvider;

/// @brief Field <TransformFeatureStateProvider>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TransformFeatureStateProvider_k__BackingField, put=__cordl_internal_set__TransformFeatureStateProvider_k__BackingField)) ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  _TransformFeatureStateProvider_k__BackingField;

/// @brief Field _transformFeatureStateProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureStateProvider, put=__cordl_internal_set__transformFeatureStateProvider)) ::UnityW<::UnityEngine::Object>  _transformFeatureStateProvider;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*() noexcept;

/// @brief Method Awake, addr 0xa479ccc, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentState, addr 0xa479df8, size 0xc4, virtual true, abstract: false, final true
inline bool GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureVectorAndWristPos, addr 0xa47a014, size 0xdc, virtual true, abstract: false, final true
inline void GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos) ;

/// @brief Method InjectAllTransformFeatureStateProviderRef, addr 0xa47a0f0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllTransformFeatureStateProviderRef(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider) ;

/// @brief Method InjectTransformFeatureStateProvider, addr 0xa47a0f4, size 0xd0, virtual false, abstract: false, final false
inline void InjectTransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider) ;

/// @brief Method IsStateActive, addr 0xa479d28, size 0xd0, virtual true, abstract: false, final true
inline bool IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

static inline ::Oculus::Interaction::TransformFeatureStateProviderRef* New_ctor() ;

/// @brief Method RegisterConfig, addr 0xa479ebc, size 0xac, virtual true, abstract: false, final true
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method Start, addr 0xa479d24, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnRegisterConfig, addr 0xa479f68, size 0xac, virtual true, abstract: false, final true
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* const& __cordl_internal_get__TransformFeatureStateProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*& __cordl_internal_get__TransformFeatureStateProvider_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__transformFeatureStateProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__transformFeatureStateProvider() ;

constexpr void __cordl_internal_set__TransformFeatureStateProvider_k__BackingField(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__transformFeatureStateProvider(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa47a1c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TransformFeatureStateProvider, addr 0xa479cbc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* get_TransformFeatureStateProvider() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* i___Oculus__Interaction__PoseDetection__ITransformFeatureStateProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TransformFeatureStateProvider, addr 0xa479cc4, size 0x8, virtual false, abstract: false, final false
inline void set_TransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateProviderRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProviderRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateProviderRef(TransformFeatureStateProviderRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProviderRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateProviderRef(TransformFeatureStateProviderRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15961};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.ITransformFeatureStateProvider), new[] {  })]
/// @brief Field _transformFeatureStateProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____transformFeatureStateProvider;

/// [CompilerGenerated]
/// @brief Field <TransformFeatureStateProvider>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  ____TransformFeatureStateProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformFeatureStateProviderRef, ____transformFeatureStateProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TransformFeatureStateProviderRef, ____TransformFeatureStateProvider_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformFeatureStateProviderRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformRecognizerActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformRecognizerActiveState)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class ITransformFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
namespace Oculus::Interaction::PoseDetection {
class TransformRecognizerActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState*, "Oculus.Interaction.PoseDetection", "TransformRecognizerActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformRecognizerActiveState
class CORDL_TYPE TransformRecognizerActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_FeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*  FeatureConfigs;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_TransformConfig)) ::Oculus::Interaction::PoseDetection::TransformConfig*  TransformConfig;

/// @brief Field TransformFeatureStateProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformFeatureStateProvider, put=__cordl_internal_set_TransformFeatureStateProvider)) ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  TransformFeatureStateProvider;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _transformConfig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformConfig, put=__cordl_internal_set__transformConfig)) ::Oculus::Interaction::PoseDetection::TransformConfig*  _transformConfig;

/// @brief Field _transformFeatureConfigs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureConfigs, put=__cordl_internal_set__transformFeatureConfigs)) ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  _transformFeatureConfigs;

/// @brief Field _transformFeatureStateProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureStateProvider, put=__cordl_internal_set__transformFeatureStateProvider)) ::UnityW<::UnityEngine::Object>  _transformFeatureStateProvider;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa4a97ec, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFeatureVectorAndWristPos, addr 0xa4a9dc4, size 0xdc, virtual false, abstract: false, final false
inline void GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformFeature  feature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos) ;

/// @brief Method InitStateProvider, addr 0xa4a99a8, size 0x35c, virtual false, abstract: false, final false
inline void InitStateProvider() ;

/// @brief Method InjectAllTransformRecognizerActiveState, addr 0xa4aa244, size 0x58, virtual false, abstract: false, final false
inline void InjectAllTransformRecognizerActiveState(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider, ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  transformFeatureList, ::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method InjectHand, addr 0xa4aa29c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectTransformConfig, addr 0xa4aa440, size 0x8, virtual false, abstract: false, final false
inline void InjectTransformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method InjectTransformFeatureList, addr 0xa4aa438, size 0x8, virtual false, abstract: false, final false
inline void InjectTransformFeatureList(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  transformFeatureList) ;

/// @brief Method InjectTransformFeatureStateProvider, addr 0xa4aa36c, size 0xcc, virtual false, abstract: false, final false
inline void InjectTransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  transformFeatureStateProvider) ;

static inline ::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4a9d04, size 0xc0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4a98e0, size 0xc8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4a988c, size 0x54, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* const& __cordl_internal_get_TransformFeatureStateProvider() const;

constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*& __cordl_internal_get_TransformFeatureStateProvider() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig* const& __cordl_internal_get__transformConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformConfig*& __cordl_internal_get__transformConfig() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList* const& __cordl_internal_get__transformFeatureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*& __cordl_internal_get__transformFeatureConfigs() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__transformFeatureStateProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__transformFeatureStateProvider() ;

constexpr void __cordl_internal_set_TransformFeatureStateProvider(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__transformConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  value) ;

constexpr void __cordl_internal_set__transformFeatureConfigs(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__transformFeatureStateProvider(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4aa448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4a9ea0, size 0x3a4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_FeatureConfigs, addr 0xa4a97cc, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* get_FeatureConfigs() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4a97bc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_TransformConfig, addr 0xa4a97e4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::TransformConfig* get_TransformConfig() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4a97c4, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformRecognizerActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformRecognizerActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformRecognizerActiveState(TransformRecognizerActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformRecognizerActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformRecognizerActiveState(TransformRecognizerActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16176};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.ITransformFeatureStateProvider), new[] {  })]
/// @brief Field _transformFeatureStateProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____transformFeatureStateProvider;

/// @brief Field TransformFeatureStateProvider, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*  ___TransformFeatureStateProvider;

/// [SerializeField]
/// @brief Field _transformFeatureConfigs, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*  ____transformFeatureConfigs;

/// [SerializeField]
/// [Tooltip("State provider uses this to determine the state of features during real time, so edit at runtime at your own risk.")]
/// @brief Field _transformConfig, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformConfig*  ____transformConfig;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____transformFeatureStateProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ___TransformFeatureStateProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____transformFeatureConfigs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____transformConfig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformRecognizerActiveState) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

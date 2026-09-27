#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformFeatureStateProvider)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
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
class TransformFeatureStateCollection;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateProvider___c;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace Oculus::Interaction::PoseDetection {
class TransformJointData;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System {
template<typename TResult>
class Func_1;
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
class TransformFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateProvider___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateProvider");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateProvider/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateProvider
class CORDL_TYPE TransformFeatureStateProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

 __declspec(property(get=get_TrackingToWorldTransformer, put=set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <Hmd>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackingToWorldTransformer_k__BackingField, put=__cordl_internal_set__TrackingToWorldTransformer_k__BackingField)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  _TrackingToWorldTransformer_k__BackingField;

/// @brief Field _disableProactiveEvaluation, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableProactiveEvaluation, put=__cordl_internal_set__disableProactiveEvaluation)) bool  _disableProactiveEvaluation;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _hmd, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _jointData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointData, put=__cordl_internal_set__jointData)) ::Oculus::Interaction::PoseDetection::TransformJointData*  _jointData;

/// @brief Field _started, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _trackingToWorldTransformer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingToWorldTransformer, put=__cordl_internal_set__trackingToWorldTransformer)) ::UnityW<::UnityEngine::Object>  _trackingToWorldTransformer;

/// @brief Field _transformFeatureStateCollection, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformFeatureStateCollection, put=__cordl_internal_set__transformFeatureStateCollection)) ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*  _transformFeatureStateCollection;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*() noexcept;

/// @brief Method Awake, addr 0xa4a744c, size 0xfc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentFeatureState, addr 0xa4a7c44, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetCurrentFeatureState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature) ;

/// @brief Method GetCurrentState, addr 0xa4a7cb4, size 0x5c, virtual true, abstract: false, final true
inline bool GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureValue, addr 0xa4a7d10, size 0x90, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> GetFeatureValue(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature) ;

/// @brief Method GetFeatureVectorAndWristPos, addr 0xa4a7da0, size 0xe8, virtual true, abstract: false, final true
inline void GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos) ;

/// @brief Method HandDataAvailable, addr 0xa4a781c, size 0x18, virtual false, abstract: false, final false
inline void HandDataAvailable() ;

/// @brief Method InjectAllTransformFeatureStateProvider, addr 0xa4a7f68, size 0x34, virtual false, abstract: false, final false
inline void InjectAllTransformFeatureStateProvider(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IHmd*  hmd, bool  disableProactiveEvaluation) ;

/// @brief Method InjectDisableProactiveEvaluation, addr 0xa4a813c, size 0x8, virtual false, abstract: false, final false
inline void InjectDisableProactiveEvaluation(bool  disabled) ;

/// @brief Method InjectHand, addr 0xa4a7f9c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHmd, addr 0xa4a806c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHmd(::Oculus::Interaction::Input::IHmd*  hand) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4a8144, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method IsHandDataValid, addr 0xa4a7bd4, size 0x18, virtual false, abstract: false, final false
inline bool IsHandDataValid() ;

/// @brief Method IsStateActive, addr 0xa4a7bec, size 0x58, virtual true, abstract: false, final true
inline bool IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4a771c, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4a761c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterConfig, addr 0xa4a7548, size 0x94, virtual true, abstract: false, final true
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method SetTimeProvider, addr 0xa4a7444, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4a75f0, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnRegisterConfig, addr 0xa4a75dc, size 0x14, virtual true, abstract: false, final true
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method UpdateJointData, addr 0xa4a7834, size 0x2e4, virtual false, abstract: false, final false
inline void UpdateJointData() ;

/// @brief Method UpdateStateForHand, addr 0xa4a7b18, size 0xbc, virtual false, abstract: false, final false
inline void UpdateStateForHand() ;

/// [CompilerGenerated]
/// @brief Method <RegisterConfig>b__22_0, addr 0xa4a827c, size 0x20, virtual false, abstract: false, final false
inline float_t _RegisterConfig_b__22_0() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disableProactiveEvaluation() const;

constexpr bool& __cordl_internal_get__disableProactiveEvaluation() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformJointData* const& __cordl_internal_get__jointData() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformJointData*& __cordl_internal_get__jointData() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__trackingToWorldTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__trackingToWorldTransformer() ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection* const& __cordl_internal_get__transformFeatureStateCollection() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*& __cordl_internal_get__transformFeatureStateCollection() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__disableProactiveEvaluation(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__jointData(::Oculus::Interaction::PoseDetection::TransformJointData*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__transformFeatureStateCollection(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*  value) ;

/// @brief Method .ctor, addr 0xa4a814c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4a7414, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa4a7424, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method get_TrackingToWorldTransformer, addr 0xa4a7434, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* i___Oculus__Interaction__PoseDetection__ITransformFeatureStateProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4a741c, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa4a742c, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackingToWorldTransformer, addr 0xa4a743c, size 0x8, virtual false, abstract: false, final false
inline void set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateProvider(TransformFeatureStateProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateProvider(TransformFeatureStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16167};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// @brief Field _trackingToWorldTransformer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____trackingToWorldTransformer;

/// [CompilerGenerated]
/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ____TrackingToWorldTransformer_k__BackingField;

/// [Header("Advanced Settings")]
/// [SerializeField]
/// [Tooltip("If true, disables proactive evaluation of any TransformFeature that has been queried at least once. This will force lazy-evaluation of state within calls to IsStateActive, which means you must do so each frame to avoid missing transitions between states.")]
/// @brief Field _disableProactiveEvaluation, offset: 0x50, size: 0x1, def value: None
 bool  ____disableProactiveEvaluation;

/// @brief Field _timeProvider, offset: 0x58, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _jointData, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformJointData*  ____jointData;

/// @brief Field _transformFeatureStateCollection, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*  ____transformFeatureStateCollection;

/// @brief Field _started, offset: 0x70, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____hmd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____Hmd_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____trackingToWorldTransformer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____TrackingToWorldTransformer_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____disableProactiveEvaluation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____timeProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____jointData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____transformFeatureStateCollection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider, ____started) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c
class CORDL_TYPE TransformFeatureStateProvider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*  __9;

/// @brief Field <>9__41_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__41_0, put=setStaticF___9__41_0)) ::System::Func_1<float_t>*  __9__41_0;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c* New_ctor() ;

/// @brief Method <.ctor>b__41_0, addr 0xa4a830c, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__41_0() ;

/// @brief Method .ctor, addr 0xa4a8304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__41_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*  value) ;

static inline void setStaticF___9__41_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateProvider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProvider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateProvider___c(TransformFeatureStateProvider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateProvider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateProvider___c(TransformFeatureStateProvider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

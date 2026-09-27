#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFeatureStateProvider)
namespace GlobalNamespace {
struct FingerFeatureStateProvider_FingerStateThresholds;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateDictionary;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider___c;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider___c__DisplayClass21_0;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace Oculus::Interaction::PoseDetection {
class FingerShapes;
}
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider___c;
}
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateProvider___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateProvider/<>c__DisplayClass21_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider
class CORDL_TYPE FingerFeatureStateProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FingerStateThresholds = ::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds;

using __c = ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c;

using __c__DisplayClass21_0 = ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <DefaultFingerShapes>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DefaultFingerShapes_k__BackingField, put=setStaticF__DefaultFingerShapes_k__BackingField)) ::Oculus::Interaction::PoseDetection::FingerShapes*  _DefaultFingerShapes_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _disableProactiveEvaluation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableProactiveEvaluation, put=__cordl_internal_set__disableProactiveEvaluation)) bool  _disableProactiveEvaluation;

/// @brief Field _fingerShapes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerShapes, put=__cordl_internal_set__fingerShapes)) ::Oculus::Interaction::PoseDetection::FingerShapes*  _fingerShapes;

/// @brief Field _fingerStateThresholds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerStateThresholds, put=__cordl_internal_set__fingerStateThresholds)) ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  _fingerStateThresholds;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handJointPoses, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__handJointPoses, put=__cordl_internal_set__handJointPoses)) ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  _handJointPoses;

/// @brief Field _started, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*  _state;

/// @brief Field _timeProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*() noexcept;

/// @brief Method Awake, addr 0xa49b9ac, size 0x100, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentFingerFeatureState, addr 0xa49c354, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetCurrentFingerFeatureState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

/// @brief Method GetCurrentState, addr 0xa49c2b4, size 0x78, virtual true, abstract: false, final true
inline bool GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureValue, addr 0xa49c3c4, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<float_t> GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

/// @brief Method GetValueProvider, addr 0xa49c464, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FingerShapes* GetValueProvider(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method HandDataAvailable, addr 0xa49c110, size 0x1a4, virtual false, abstract: false, final false
inline void HandDataAvailable() ;

/// @brief Method InjectAllFingerFeatureStateProvider, addr 0xa49c4c4, size 0x54, virtual false, abstract: false, final false
inline void InjectAllFingerFeatureStateProvider(::Oculus::Interaction::Input::IHand*  hand, ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  fingerStateThresholds, ::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes, bool  disableProactiveEvaluation) ;

/// @brief Method InjectDisableProactiveEvaluation, addr 0xa49c5f8, size 0x8, virtual false, abstract: false, final false
inline void InjectDisableProactiveEvaluation(bool  disableProactiveEvaluation) ;

/// @brief Method InjectFingerShapes, addr 0xa49c5f0, size 0x8, virtual false, abstract: false, final false
inline void InjectFingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes) ;

/// @brief Method InjectFingerStateThresholds, addr 0xa49c5e8, size 0x8, virtual false, abstract: false, final false
inline void InjectFingerStateThresholds(::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  fingerStateThresholds) ;

/// @brief Method InjectHand, addr 0xa49c518, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa49c600, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method IsDataValid, addr 0xa49c32c, size 0x28, virtual false, abstract: false, final false
inline bool IsDataValid() ;

/// @brief Method IsStateActive, addr 0xa49c46c, size 0x58, virtual true, abstract: false, final true
inline bool IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa49bf90, size 0x178, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa49bad8, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadStateThresholds, addr 0xa49bbe0, size 0x3b0, virtual false, abstract: false, final false
inline void ReadStateThresholds() ;

/// @brief Method SetTimeProvider, addr 0xa49b94c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa49baac, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <ReadStateThresholds>b__21_0, addr 0xa49c7f0, size 0x20, virtual false, abstract: false, final false
inline float_t _ReadStateThresholds_b__21_0() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__disableProactiveEvaluation() const;

constexpr bool& __cordl_internal_get__disableProactiveEvaluation() ;

constexpr ::Oculus::Interaction::PoseDetection::FingerShapes* const& __cordl_internal_get__fingerShapes() const;

constexpr ::Oculus::Interaction::PoseDetection::FingerShapes*& __cordl_internal_get__fingerShapes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>* const& __cordl_internal_get__fingerStateThresholds() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*& __cordl_internal_get__fingerStateThresholds() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& __cordl_internal_get__handJointPoses() const;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& __cordl_internal_get__handJointPoses() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary* const& __cordl_internal_get__state() const;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*& __cordl_internal_get__state() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__disableProactiveEvaluation(bool  value) ;

constexpr void __cordl_internal_set__fingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  value) ;

constexpr void __cordl_internal_set__fingerStateThresholds(::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handJointPoses(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa49c608, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FingerShapes* getStaticF__DefaultFingerShapes_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultFingerShapes, addr 0xa49b954, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FingerShapes* get_DefaultFingerShapes() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa49b93c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* i___Oculus__Interaction__PoseDetection__IFingerFeatureStateProvider() noexcept;

static inline void setStaticF__DefaultFingerShapes_k__BackingField(::Oculus::Interaction::PoseDetection::FingerShapes*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa49b944, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateProvider(FingerFeatureStateProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateProvider(FingerFeatureStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16110};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// [Tooltip("Data source used to retrieve finger bone rotations.")]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Tooltip("Contains state transition threasholds for each finger. Must contain 5 entries (one for each finger). Each finger must exist in the list exactly once.")]
/// @brief Field _fingerStateThresholds, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  ____fingerStateThresholds;

/// [Header("Advanced Settings")]
/// [SerializeField]
/// [Tooltip("If true, disables proactive evaluation of any FingerFeature that has been queried at least once. This will force lazy-evaluation of state within calls to IsStateActive, which means you must call IsStateActive for each feature manually each frame to avoid missing transitions between states.")]
/// @brief Field _disableProactiveEvaluation, offset: 0x38, size: 0x1, def value: None
 bool  ____disableProactiveEvaluation;

/// @brief Field _started, offset: 0x39, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _state, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*  ____state;

/// @brief Field _timeProvider, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _fingerShapes, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::FingerShapes*  ____fingerShapes;

/// @brief Field _handJointPoses, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  ____handJointPoses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____fingerStateThresholds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____disableProactiveEvaluation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____started) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____state) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____timeProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____fingerShapes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider, ____handJointPoses) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandFinger, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/<>c__DisplayClass21_0
class CORDL_TYPE FingerFeatureStateProvider___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  __4__this;

/// @brief Field finger, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_finger, put=__cordl_internal_set_finger)) ::Oculus::Interaction::Input::HandFinger  finger;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <ReadStateThresholds>b__1, addr 0xa49c890, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> _ReadStateThresholds_b__1(::Oculus::Interaction::PoseDetection::FingerFeature  feature) ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>& __cordl_internal_get___4__this() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get_finger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get_finger() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  value) ;

constexpr void __cordl_internal_set_finger(::Oculus::Interaction::Input::HandFinger  value) ;

/// @brief Method .ctor, addr 0xa49c108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateProvider___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateProvider___c__DisplayClass21_0(FingerFeatureStateProvider___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateProvider___c__DisplayClass21_0(FingerFeatureStateProvider___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16109};

/// @brief Field finger, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ___finger;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0, ___finger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateProvider/<>c
class CORDL_TYPE FingerFeatureStateProvider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*  __9;

/// @brief Field <>9__21_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_2, put=setStaticF___9__21_2)) ::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*  __9__21_2;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::System::Func_1<float_t>*  __9__35_0;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c* New_ctor() ;

/// @brief Method <ReadStateThresholds>b__21_2, addr 0xa49c880, size 0x8, virtual false, abstract: false, final false
inline int32_t _ReadStateThresholds_b__21_2(::Oculus::Interaction::PoseDetection::FingerFeature  feature) ;

/// @brief Method <.ctor>b__35_0, addr 0xa49c888, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__35_0() ;

/// @brief Method .ctor, addr 0xa49c878, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c* getStaticF___9() ;

static inline ::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>* getStaticF___9__21_2() ;

static inline ::System::Func_1<float_t>* getStaticF___9__35_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*  value) ;

static inline void setStaticF___9__21_2(::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*  value) ;

static inline void setStaticF___9__35_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateProvider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateProvider___c(FingerFeatureStateProvider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProvider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateProvider___c(FingerFeatureStateProvider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

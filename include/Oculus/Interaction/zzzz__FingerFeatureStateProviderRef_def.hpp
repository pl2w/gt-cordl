#pragma once
// IWYU pragma private; include "Oculus/Interaction/FingerFeatureStateProviderRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerFeatureStateProviderRef)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class FingerFeatureStateProviderRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FingerFeatureStateProviderRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FingerFeatureStateProviderRef*, "Oculus.Interaction", "FingerFeatureStateProviderRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FingerFeatureStateProviderRef
class CORDL_TYPE FingerFeatureStateProviderRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FingerFeatureStateProvider, put=set_FingerFeatureStateProvider)) ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  FingerFeatureStateProvider;

/// @brief Field <FingerFeatureStateProvider>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FingerFeatureStateProvider_k__BackingField, put=__cordl_internal_set__FingerFeatureStateProvider_k__BackingField)) ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  _FingerFeatureStateProvider_k__BackingField;

/// @brief Field _fingerFeatureStateProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerFeatureStateProvider, put=__cordl_internal_set__fingerFeatureStateProvider)) ::UnityW<::UnityEngine::Object>  _fingerFeatureStateProvider;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*() noexcept;

/// @brief Method Awake, addr 0xa479520, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentState, addr 0xa47957c, size 0xc0, virtual true, abstract: false, final true
inline bool GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureValue, addr 0xa479710, size 0xbc, virtual true, abstract: false, final true
inline ::System::Nullable_1<float_t> GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

/// @brief Method InjectAllFingerFeatureStateProviderRef, addr 0xa4797cc, size 0x4, virtual false, abstract: false, final false
inline void InjectAllFingerFeatureStateProviderRef(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider) ;

/// @brief Method InjectFingerFeatureStateProvider, addr 0xa4797d0, size 0xd0, virtual false, abstract: false, final false
inline void InjectFingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  fingerFeatureStateProvider) ;

/// @brief Method IsStateActive, addr 0xa47963c, size 0xd4, virtual true, abstract: false, final true
inline bool IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

static inline ::Oculus::Interaction::FingerFeatureStateProviderRef* New_ctor() ;

/// @brief Method Start, addr 0xa479578, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* const& __cordl_internal_get__FingerFeatureStateProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*& __cordl_internal_get__FingerFeatureStateProvider_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__fingerFeatureStateProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__fingerFeatureStateProvider() ;

constexpr void __cordl_internal_set__FingerFeatureStateProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value) ;

constexpr void __cordl_internal_set__fingerFeatureStateProvider(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4798a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FingerFeatureStateProvider, addr 0xa479510, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* get_FingerFeatureStateProvider() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* i___Oculus__Interaction__PoseDetection__IFingerFeatureStateProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_FingerFeatureStateProvider, addr 0xa479518, size 0x8, virtual false, abstract: false, final false
inline void set_FingerFeatureStateProvider(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateProviderRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProviderRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateProviderRef(FingerFeatureStateProviderRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateProviderRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateProviderRef(FingerFeatureStateProviderRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15959};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.IFingerFeatureStateProvider), new[] {  })]
/// @brief Field _fingerFeatureStateProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____fingerFeatureStateProvider;

/// [CompilerGenerated]
/// @brief Field <FingerFeatureStateProvider>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*  ____FingerFeatureStateProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FingerFeatureStateProviderRef, ____fingerFeatureStateProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FingerFeatureStateProviderRef, ____FingerFeatureStateProvider_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FingerFeatureStateProviderRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

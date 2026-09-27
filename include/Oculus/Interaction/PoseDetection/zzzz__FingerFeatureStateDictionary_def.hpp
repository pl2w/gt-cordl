#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateDictionary_HandFingerState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FingerFeatureStateDictionary)
namespace GlobalNamespace {
struct FingerFeatureStateDictionary_HandFingerState;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class FeatureStateProvider_2;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateDictionary;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateDictionary");
// Dependencies Oculus.Interaction.PoseDetection.FingerFeatureStateDictionary::HandFingerState, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateDictionary
class CORDL_TYPE FingerFeatureStateDictionary : public ::System::Object {
public:
// Declarations
using HandFingerState = ::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState;

/// @brief Field _fingerState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerState, put=__cordl_internal_set__fingerState)) ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>  _fingerState;

/// @brief Method GetStateProvider, addr 0xa49b8a8, size 0x30, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* GetStateProvider(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InitializeFinger, addr 0xa49b850, size 0x58, virtual false, abstract: false, final false
inline void InitializeFinger(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*  stateProvider) ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState> const& __cordl_internal_get__fingerState() const;

constexpr ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>& __cordl_internal_get__fingerState() ;

constexpr void __cordl_internal_set__fingerState(::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>  value) ;

/// @brief Method .ctor, addr 0xa49b8d8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateDictionary(FingerFeatureStateDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateDictionary(FingerFeatureStateDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16105};

/// @brief Field _fingerState, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState>  ____fingerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary, ____fingerState) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

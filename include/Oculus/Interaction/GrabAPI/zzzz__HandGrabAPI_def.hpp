#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/HandGrabAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabAPI)
namespace Oculus::Interaction::GrabAPI {
struct GrabbingRule;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Input {
struct PinchGrabParam;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::HandGrabAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::HandGrabAPI*, "Oculus.Interaction.GrabAPI", "HandGrabAPI");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.HandGrabAPI
class CORDL_TYPE HandGrabAPI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <Hmd>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field _fingerPalmGrabAPI, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerPalmGrabAPI, put=__cordl_internal_set__fingerPalmGrabAPI)) ::Oculus::Interaction::IFingerAPI*  _fingerPalmGrabAPI;

/// @brief Field _fingerPinchGrabAPI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerPinchGrabAPI, put=__cordl_internal_set__fingerPinchGrabAPI)) ::Oculus::Interaction::IFingerAPI*  _fingerPinchGrabAPI;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _hmd, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4fe860, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerIsGrabbing, addr 0xa50026c, size 0xa8, virtual false, abstract: false, final false
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsPalmGrabbing, addr 0xa500314, size 0xa8, virtual false, abstract: false, final false
inline bool GetFingerIsPalmGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPalmStrength, addr 0xa500098, size 0xac, virtual false, abstract: false, final false
inline float_t GetFingerPalmStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchDistance, addr 0xa4fffc8, size 0xd0, virtual false, abstract: false, final false
inline float_t GetFingerPinchDistance(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchPercent, addr 0xa4ffef8, size 0xd0, virtual false, abstract: false, final false
inline float_t GetFingerPinchPercent(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0xa4ffe4c, size 0xac, virtual false, abstract: false, final false
inline float_t GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetHandGrabScore, addr 0xa4ffaac, size 0x398, virtual false, abstract: false, final false
inline float_t GetHandGrabScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includeGrabbing, ::Oculus::Interaction::IFingerAPI*  fingerAPI) ;

/// @brief Method GetHandPalmScore, addr 0xa4ffe44, size 0x8, virtual false, abstract: false, final false
inline float_t GetHandPalmScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includeGrabbing) ;

/// @brief Method GetHandPinchScore, addr 0xa4ffaa4, size 0x8, virtual false, abstract: false, final false
inline float_t GetHandPinchScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includePinching) ;

/// @brief Method GetPalmCenter, addr 0xa4ff9c0, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPalmCenter() ;

/// @brief Method GetPinchCenter, addr 0xa4ff6cc, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPinchCenter() ;

/// @brief Method GetPinchGrabParam, addr 0xa5001e0, size 0x8c, virtual false, abstract: false, final false
inline float_t GetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId) ;

/// @brief Method HandGrabbingFingers, addr 0xa4fecf4, size 0xd8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFingerFlags HandGrabbingFingers(::Oculus::Interaction::IFingerAPI*  fingerAPI) ;

/// @brief Method HandPalmGrabbingFingers, addr 0xa4fedcc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFingerFlags HandPalmGrabbingFingers() ;

/// @brief Method HandPinchGrabbingFingers, addr 0xa4fecec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFingerFlags HandPinchGrabbingFingers() ;

/// @brief Method InjectAllHandGrabAPI, addr 0xa5003bc, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandGrabAPI(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa5003c0, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectOptionalFingerGrabAPI, addr 0xa500564, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalFingerGrabAPI(::Oculus::Interaction::IFingerAPI*  fingerGrabAPI) ;

/// @brief Method InjectOptionalFingerPinchAPI, addr 0xa50055c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalFingerPinchAPI(::Oculus::Interaction::IFingerAPI*  fingerPinchAPI) ;

/// @brief Method InjectOptionalHmd, addr 0xa500490, size 0xcc, virtual false, abstract: false, final false
inline void InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method IsHandPalmGrabbing, addr 0xa4fefbc, size 0x24, virtual false, abstract: false, final false
inline bool IsHandPalmGrabbing(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsHandPinchGrabbing, addr 0xa4fedd4, size 0x24, virtual false, abstract: false, final false
inline bool IsHandPinchGrabbing(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsHandSelectFingersChanged, addr 0xa4fefe8, size 0x300, virtual false, abstract: false, final false
inline bool IsHandSelectFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::IFingerAPI*  fingerAPI) ;

/// @brief Method IsHandSelectPalmFingersChanged, addr 0xa4ff2e8, size 0x8, virtual false, abstract: false, final false
inline bool IsHandSelectPalmFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsHandSelectPinchFingersChanged, addr 0xa4fefe0, size 0x8, virtual false, abstract: false, final false
inline bool IsHandSelectPinchFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsHandUnselectFingersChanged, addr 0xa4ff2f8, size 0x3cc, virtual false, abstract: false, final false
inline bool IsHandUnselectFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::IFingerAPI*  fingerAPI) ;

/// @brief Method IsHandUnselectPalmFingersChanged, addr 0xa4ff6c4, size 0x8, virtual false, abstract: false, final false
inline bool IsHandUnselectPalmFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsHandUnselectPinchFingersChanged, addr 0xa4ff2f0, size 0x8, virtual false, abstract: false, final false
inline bool IsHandUnselectPinchFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers) ;

/// @brief Method IsSustainingGrab, addr 0xa4fedf8, size 0x1c4, virtual false, abstract: false, final false
inline bool IsSustainingGrab(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers) ;

static inline ::Oculus::Interaction::GrabAPI::HandGrabAPI* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4feacc, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4fe9cc, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHandUpdated, addr 0xa4febcc, size 0x120, virtual false, abstract: false, final false
inline void OnHandUpdated() ;

/// @brief Method SetPinchGrabParam, addr 0xa500144, size 0x9c, virtual false, abstract: false, final false
inline void SetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  paramVal) ;

/// @brief Method Start, addr 0xa4fe8f0, size 0xdc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method WristOffsetToWorldPoint, addr 0xa4ff7b0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WristOffsetToWorldPoint(::UnityEngine::Vector3  localOffset) ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::Oculus::Interaction::IFingerAPI* const& __cordl_internal_get__fingerPalmGrabAPI() const;

constexpr ::Oculus::Interaction::IFingerAPI*& __cordl_internal_get__fingerPalmGrabAPI() ;

constexpr ::Oculus::Interaction::IFingerAPI* const& __cordl_internal_get__fingerPinchGrabAPI() const;

constexpr ::Oculus::Interaction::IFingerAPI*& __cordl_internal_get__fingerPinchGrabAPI() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__fingerPalmGrabAPI(::Oculus::Interaction::IFingerAPI*  value) ;

constexpr void __cordl_internal_set__fingerPinchGrabAPI(::Oculus::Interaction::IFingerAPI*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa50056c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4fe840, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa4fe850, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4fe848, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa4fe858, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabAPI(HandGrabAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabAPI(HandGrabAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16431};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// [Optional]
/// @brief Field _hmd, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// @brief Field _fingerPinchGrabAPI, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IFingerAPI*  ____fingerPinchGrabAPI;

/// @brief Field _fingerPalmGrabAPI, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::IFingerAPI*  ____fingerPalmGrabAPI;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____hmd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____Hmd_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____fingerPinchGrabAPI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____fingerPalmGrabAPI) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandGrabAPI, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::HandGrabAPI) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI

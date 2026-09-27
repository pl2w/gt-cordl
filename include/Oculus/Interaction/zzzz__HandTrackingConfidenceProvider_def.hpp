#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandTrackingConfidenceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandTrackingConfidenceProvider)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandTrackingConfidenceProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandTrackingConfidenceProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandTrackingConfidenceProvider*, "Oculus.Interaction", "HandTrackingConfidenceProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandTrackingConfidenceProvider
class CORDL_TYPE HandTrackingConfidenceProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field Interactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactor, put=__cordl_internal_set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

/// @brief Field <Hand>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::UnityEngine::Object>  _interactor;

/// @brief Field _interactorTrackingConfidence, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__interactorTrackingConfidence, put=setStaticF__interactorTrackingConfidence)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*  _interactorTrackingConfidence;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa482708, size 0x120, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHandTrackingConfidenceProvider, addr 0xa482cc4, size 0x28, virtual false, abstract: false, final false
inline void InjectAllHandTrackingConfidenceProvider(::Oculus::Interaction::IInteractor*  interactor, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa482dbc, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectInteractor, addr 0xa482cec, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::IInteractor*  interactor) ;

static inline ::Oculus::Interaction::HandTrackingConfidenceProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4829d8, size 0x1a0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa482854, size 0x184, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa482584, size 0x184, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa482828, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetTrackingConfidence, addr 0xa482b78, size 0x14c, virtual false, abstract: false, final false
static inline bool TryGetTrackingConfidence(int32_t  key, ::by_ref<bool>  isTrackingHighConfidence) ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get_Interactor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get_Interactor() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa482e8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>* getStaticF__interactorTrackingConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa482574, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

static inline void setStaticF__interactorTrackingConfidence(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::HandTrackingConfidenceProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa48257c, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTrackingConfidenceProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTrackingConfidenceProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTrackingConfidenceProvider(HandTrackingConfidenceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTrackingConfidenceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTrackingConfidenceProvider(HandTrackingConfidenceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15987};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactor;

/// @brief Field Interactor, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ___Interactor;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandTrackingConfidenceProvider, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTrackingConfidenceProvider, ___Interactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTrackingConfidenceProvider, ____hand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTrackingConfidenceProvider, ____Hand_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTrackingConfidenceProvider, ____started) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandTrackingConfidenceProvider) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction

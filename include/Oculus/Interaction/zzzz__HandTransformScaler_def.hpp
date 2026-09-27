#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandTransformScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HandTransformScaler)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandTransformScaler;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandTransformScaler*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandTransformScaler*, "Oculus.Interaction", "HandTransformScaler");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandTransformScaler
class CORDL_TYPE HandTransformScaler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _originalScale, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalScale, put=__cordl_internal_set__originalScale)) ::UnityEngine::Vector3  _originalScale;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa47fd50, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHandUpdated, addr 0xa47fff8, size 0x180, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

static inline ::Oculus::Interaction::HandTransformScaler* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47fef8, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47fdf8, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47fda8, size 0x50, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalScale() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__originalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa480178, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47fd40, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47fd48, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTransformScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTransformScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTransformScaler(HandTransformScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTransformScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTransformScaler(HandTransformScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15976};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _originalScale, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandTransformScaler, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTransformScaler, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTransformScaler, ____started) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandTransformScaler, ____originalScale) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandTransformScaler) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction

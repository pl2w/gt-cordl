#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPointerPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HandPointerPose)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandPointerPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandPointerPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandPointerPose*, "Oculus.Interaction", "HandPointerPose");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandPointerPose
class CORDL_TYPE HandPointerPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _started, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa47ecc4, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHandUpdated, addr 0xa47ef48, size 0x118, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandPointerPose, addr 0xa47f060, size 0x38, virtual false, abstract: false, final false
inline void InjectAllHandPointerPose(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Vector3  offset) ;

/// @brief Method InjectHand, addr 0xa47f098, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectOffset, addr 0xa47f168, size 0xc, virtual false, abstract: false, final false
inline void InjectOffset(::UnityEngine::Vector3  offset) ;

static inline ::Oculus::Interaction::HandPointerPose* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47ee48, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47ed48, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47ed1c, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47f174, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa47ec20, size 0xa4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47ec10, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47ec18, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPointerPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPointerPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPointerPose(HandPointerPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPointerPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPointerPose(HandPointerPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15974};

/// [Tooltip("The hand used for ray interaction")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("How much the ray origin is offset relative to the hand.")]
/// [SerializeField]
/// @brief Field _offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// @brief Field _started, offset: 0x3c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandPointerPose, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPointerPose, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPointerPose, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPointerPose, ____started) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandPointerPose) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction

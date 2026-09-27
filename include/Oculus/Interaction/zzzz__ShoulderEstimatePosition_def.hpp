#pragma once
// IWYU pragma private; include "Oculus/Interaction/ShoulderEstimatePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ShoulderEstimatePosition)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ShoulderEstimatePosition;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ShoulderEstimatePosition*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ShoulderEstimatePosition*, "Oculus.Interaction", "ShoulderEstimatePosition");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ShoulderEstimatePosition
class CORDL_TYPE ShoulderEstimatePosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field ShoulderOffset, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_ShoulderOffset, put=setStaticF_ShoulderOffset)) ::UnityEngine::Vector3  ShoulderOffset;

/// @brief Field <Hand>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <Hmd>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field _hand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4818e4, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHmdUpdated, addr 0xa481b80, size 0x2d0, virtual true, abstract: false, final false
inline void HandleHmdUpdated() ;

/// @brief Method InjectAllShoulderPosition, addr 0xa481e50, size 0x28, virtual false, abstract: false, final false
inline void InjectAllShoulderPosition(::Oculus::Interaction::Input::IHmd*  hmd, ::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa481f48, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHmd, addr 0xa481e78, size 0xd0, virtual false, abstract: false, final false
inline void InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

static inline ::Oculus::Interaction::ShoulderEstimatePosition* New_ctor() ;

/// @brief Method OnDisable, addr 0xa481a90, size 0xf0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4819a0, size 0xf0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa481974, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa482018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_ShoulderOffset() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4818d4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa4818c4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

static inline void setStaticF_ShoulderOffset(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4818dc, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa4818cc, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShoulderEstimatePosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShoulderEstimatePosition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShoulderEstimatePosition(ShoulderEstimatePosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShoulderEstimatePosition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShoulderEstimatePosition(ShoulderEstimatePosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15981};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

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
static_assert(offsetof(::Oculus::Interaction::ShoulderEstimatePosition, ____hmd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ShoulderEstimatePosition, ____Hmd_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ShoulderEstimatePosition, ____hand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ShoulderEstimatePosition, ____Hand_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ShoulderEstimatePosition, ____started) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ShoulderEstimatePosition) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction

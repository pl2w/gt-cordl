#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandConfidenceVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandConfidenceVisual)
namespace GlobalNamespace {
struct HandConfidenceVisual___c__DisplayClass18_0;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandConfidenceVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandConfidenceVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandConfidenceVisual*, "Oculus.Interaction", "HandConfidenceVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandConfidenceVisual
class CORDL_TYPE HandConfidenceVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass18_0 = ::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handConfidenceId, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__handConfidenceId, put=__cordl_internal_set__handConfidenceId)) int32_t  _handConfidenceId;

/// @brief Field _handMaterialPropertyBlockEditor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handMaterialPropertyBlockEditor, put=__cordl_internal_set__handMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _handMaterialPropertyBlockEditor;

/// @brief Field _jointsConfidence, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointsConfidence, put=__cordl_internal_set__jointsConfidence)) ::ArrayW<float_t>  _jointsConfidence;

/// @brief Field _lastTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTime, put=__cordl_internal_set__lastTime)) float_t  _lastTime;

/// @brief Field _speed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa46d9c4, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHandConfidenceVisual, addr 0xa46df84, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllHandConfidenceVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

/// @brief Method InjectHand, addr 0xa46dfb0, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandMaterialPropertyBlockEditor, addr 0xa46e080, size 0x8, virtual false, abstract: false, final false
inline void InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

static inline ::Oculus::Interaction::HandConfidenceVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa46db54, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46da54, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa46da1c, size 0x38, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa46dc54, size 0x1e4, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// [CompilerGenerated]
/// @brief Method <UpdateVisual>g__FillConfidence|18_0, addr 0xa46de38, size 0x14c, virtual false, abstract: false, final false
inline void _UpdateVisual_g__FillConfidence_18_0(::Oculus::Interaction::Input::HandFinger  finger, int32_t  offset, int32_t  lenght, ::by_ref<::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr int32_t const& __cordl_internal_get__handConfidenceId() const;

constexpr int32_t& __cordl_internal_get__handConfidenceId() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__handMaterialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__handMaterialPropertyBlockEditor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__jointsConfidence() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__jointsConfidence() ;

constexpr float_t const& __cordl_internal_get__lastTime() const;

constexpr float_t& __cordl_internal_get__lastTime() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handConfidenceId(int32_t  value) ;

constexpr void __cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__jointsConfidence(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__lastTime(float_t  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46e088, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa46d9a4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_Speed, addr 0xa46d9b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa46d9ac, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_Speed, addr 0xa46d9bc, size 0x8, virtual false, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandConfidenceVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandConfidenceVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandConfidenceVisual(HandConfidenceVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandConfidenceVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandConfidenceVisual(HandConfidenceVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15918};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// @brief Field _handMaterialPropertyBlockEditor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____handMaterialPropertyBlockEditor;

/// [SerializeField]
/// @brief Field _speed, offset: 0x38, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _handConfidenceId, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____handConfidenceId;

/// @brief Field _jointsConfidence, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____jointsConfidence;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _lastTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ____lastTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____handMaterialPropertyBlockEditor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____speed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____handConfidenceId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____jointsConfidence) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____started) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandConfidenceVisual, ____lastTime) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandConfidenceVisual) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction

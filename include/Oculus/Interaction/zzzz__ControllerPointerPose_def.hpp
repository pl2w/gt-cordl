#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerPointerPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ControllerPointerPose)
namespace Oculus::Interaction::Input {
class IController;
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
class ControllerPointerPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerPointerPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerPointerPose*, "Oculus.Interaction", "ControllerPointerPose");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerPointerPose
class CORDL_TYPE ControllerPointerPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field <Active>k__BackingField, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _started, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa47a9b0, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleUpdated, addr 0xa47ac34, size 0x1b8, virtual false, abstract: false, final false
inline void HandleUpdated() ;

/// @brief Method InjectAllControllerPointerPose, addr 0xa47aec8, size 0x38, virtual false, abstract: false, final false
inline void InjectAllControllerPointerPose(::Oculus::Interaction::Input::IController*  controller, ::UnityEngine::Vector3  offset) ;

/// @brief Method InjectController, addr 0xa47adec, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectOffset, addr 0xa47aebc, size 0xc, virtual false, abstract: false, final false
inline void InjectOffset(::UnityEngine::Vector3  offset) ;

static inline ::Oculus::Interaction::ControllerPointerPose* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47ab34, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47aa34, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47aa08, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47af00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa47a9a0, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa47a990, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa47a9a8, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa47a998, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerPointerPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerPointerPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerPointerPose(ControllerPointerPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerPointerPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerPointerPose(ControllerPointerPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15963};

/// [Tooltip("A controller ray interactor.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// [Tooltip("How much the ray origin is offset relative to the controller.")]
/// [SerializeField]
/// @brief Field _offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// @brief Field _started, offset: 0x3c, size: 0x1, def value: None
 bool  ____started;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x3d, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerPointerPose, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerPointerPose, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerPointerPose, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerPointerPose, ____started) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerPointerPose, ____Active_k__BackingField) == 0x3d, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerPointerPose) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction

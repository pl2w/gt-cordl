#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ControllerOffset)
namespace Oculus::Interaction::Input {
class IController;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class ControllerOffset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerOffset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerOffset*, "Oculus.Interaction", "ControllerOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerOffset
class CORDL_TYPE ControllerOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _rotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::UnityEngine::Quaternion  _rotation;

/// @brief Field _started, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa47a1dc, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOffset, addr 0xa47a6c8, size 0xcc, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetWorldPose, addr 0xa47a794, size 0x5c, virtual false, abstract: false, final false
inline void GetWorldPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method HandleUpdated, addr 0xa47a460, size 0x1e4, virtual false, abstract: false, final false
inline void HandleUpdated() ;

/// @brief Method InjectAllControllerOffset, addr 0xa47a8d8, size 0x60, virtual false, abstract: false, final false
inline void InjectAllControllerOffset(::Oculus::Interaction::Input::IController*  controller, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InjectController, addr 0xa47a7f0, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectOffset, addr 0xa47a8c0, size 0xc, virtual false, abstract: false, final false
inline void InjectOffset(::UnityEngine::Vector3  offset) ;

/// @brief Method InjectRotation, addr 0xa47a8cc, size 0xc, virtual false, abstract: false, final false
inline void InjectRotation(::UnityEngine::Quaternion  rotation) ;

static inline ::Oculus::Interaction::ControllerOffset* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47a360, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47a260, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47a234, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47a938, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa47a1cc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa47a1d4, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerOffset(ControllerOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerOffset(ControllerOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15962};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// [SerializeField]
/// @brief Field _offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// [SerializeField]
/// @brief Field _rotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotation;

/// @brief Field _started, offset: 0x4c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerOffset, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerOffset, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerOffset, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerOffset, ____rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerOffset, ____started) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerOffset) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction

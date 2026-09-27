#pragma once
// IWYU pragma private; include "Oculus/Interaction/CenterEyeOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CenterEyeOffset)
namespace Oculus::Interaction::Input {
class IHmd;
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
class CenterEyeOffset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::CenterEyeOffset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::CenterEyeOffset*, "Oculus.Interaction", "CenterEyeOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.CenterEyeOffset
class CORDL_TYPE CenterEyeOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field <Hmd>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field _cachedPose, offset 0x4c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__cachedPose, put=__cordl_internal_set__cachedPose)) ::UnityEngine::Pose  _cachedPose;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _rotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::UnityEngine::Quaternion  _rotation;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa47b640, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOffset, addr 0xa47b9c8, size 0x1c, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetWorldPose, addr 0xa47b9e4, size 0x5c, virtual false, abstract: false, final false
inline void GetWorldPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method HandleUpdated, addr 0xa47b8c4, size 0x104, virtual false, abstract: false, final false
inline void HandleUpdated() ;

/// @brief Method InjectAllCenterEyeOffset, addr 0xa47ba58, size 0x60, virtual false, abstract: false, final false
inline void InjectAllCenterEyeOffset(::Oculus::Interaction::Input::IHmd*  hmd, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InjectHmd, addr 0xa47bab8, size 0xcc, virtual false, abstract: false, final false
inline void InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method InjectOffset, addr 0xa47ba40, size 0xc, virtual false, abstract: false, final false
inline void InjectOffset(::UnityEngine::Vector3  offset) ;

/// @brief Method InjectRotation, addr 0xa47ba4c, size 0xc, virtual false, abstract: false, final false
inline void InjectRotation(::UnityEngine::Quaternion  rotation) ;

static inline ::Oculus::Interaction::CenterEyeOffset* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47b7c4, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47b6c4, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47b698, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__cachedPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__cachedPose() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__cachedPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47bb84, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa47b630, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa47b638, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CenterEyeOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CenterEyeOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CenterEyeOffset(CenterEyeOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CenterEyeOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CenterEyeOffset(CenterEyeOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15967};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// [SerializeField]
/// @brief Field _offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// [SerializeField]
/// @brief Field _rotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotation;

/// @brief Field _cachedPose, offset: 0x4c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____cachedPose;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____hmd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____Hmd_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____cachedPose) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::CenterEyeOffset, ____started) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::CenterEyeOffset) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction

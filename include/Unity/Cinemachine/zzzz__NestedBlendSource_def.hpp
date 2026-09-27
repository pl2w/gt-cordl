#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NestedBlendSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NestedBlendSource)
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class NestedBlendSource;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::NestedBlendSource*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::NestedBlendSource*, "Unity.Cinemachine", "NestedBlendSource");
// Dependencies System.Object, Unity.Cinemachine.CameraState
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.NestedBlendSource
class CORDL_TYPE NestedBlendSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Blend, put=set_Blend)) ::Unity::Cinemachine::CinemachineBlend*  Blend;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParentCamera)) ::Unity::Cinemachine::ICinemachineMixer*  ParentCamera;

 __declspec(property(get=get_State, put=set_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field <Blend>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blend_k__BackingField, put=__cordl_internal_set__Blend_k__BackingField)) ::Unity::Cinemachine::CinemachineBlend*  _Blend_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x20, size 0x110 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Unity::Cinemachine::CameraState  _State_k__BackingField;

/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

static inline ::Unity::Cinemachine::NestedBlendSource* New_ctor(::Unity::Cinemachine::CinemachineBlend*  blend) ;

/// @brief Method OnCameraActivated, addr 0xaeaf940, size 0x4, virtual true, abstract: false, final true
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method UpdateCameraState, addr 0xaeaf8d8, size 0x68, virtual true, abstract: false, final true
inline void UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

constexpr ::Unity::Cinemachine::CinemachineBlend* const& __cordl_internal_get__Blend_k__BackingField() const;

constexpr ::Unity::Cinemachine::CinemachineBlend*& __cordl_internal_get__Blend_k__BackingField() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr void __cordl_internal_set__Blend_k__BackingField(::Unity::Cinemachine::CinemachineBlend*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Unity::Cinemachine::CameraState  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xaeaabf8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::CinemachineBlend*  blend) ;

/// [CompilerGenerated]
/// @brief Method get_Blend, addr 0xaeaf710, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend* get_Blend() ;

/// @brief Method get_Description, addr 0xaeaf834, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsValid, addr 0xaeaf8c0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsValid() ;

/// @brief Method get_Name, addr 0xaeaf720, size 0x114, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_ParentCamera, addr 0xaeaf8d0, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ICinemachineMixer* get_ParentCamera() ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0xaeaf88c, size 0x10, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Blend, addr 0xaeaf718, size 0x8, virtual false, abstract: false, final false
inline void set_Blend(::Unity::Cinemachine::CinemachineBlend*  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0xaeaf89c, size 0x24, virtual false, abstract: false, final false
inline void set_State(::Unity::Cinemachine::CameraState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedBlendSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedBlendSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedBlendSource(NestedBlendSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedBlendSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedBlendSource(NestedBlendSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22269};

/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// [CompilerGenerated]
/// @brief Field <Blend>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineBlend*  ____Blend_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x20, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::NestedBlendSource, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::NestedBlendSource, ____Blend_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::NestedBlendSource, ____State_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::NestedBlendSource) == 0x130, "Size mismatch!");

} // namespace end def Unity::Cinemachine

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleportationProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyGroundPosition;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRCameraForwardXZAlignment;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XROriginUpAlignment;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportationProvider");
// [AddComponentMenu("XR/Locomotion/Teleportation Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider, UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportRequest
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider
class CORDL_TYPE TeleportationProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field <currentRequest>k__BackingField, offset 0x98, size 0x24 
 __declspec(property(get=__cordl_internal_get__currentRequest_k__BackingField, put=__cordl_internal_set__currentRequest_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  _currentRequest_k__BackingField;

/// @brief Field <forwardTransformation>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardTransformation_k__BackingField, put=__cordl_internal_set__forwardTransformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  _forwardTransformation_k__BackingField;

/// @brief Field <positionTransformation>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionTransformation_k__BackingField, put=__cordl_internal_set__positionTransformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  _positionTransformation_k__BackingField;

/// @brief Field <upTransformation>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__upTransformation_k__BackingField, put=__cordl_internal_set__upTransformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  _upTransformation_k__BackingField;

/// @brief Field <validRequest>k__BackingField, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__validRequest_k__BackingField, put=__cordl_internal_set__validRequest_k__BackingField)) bool  _validRequest_k__BackingField;

 __declspec(property(get=get_canStartMoving)) bool  canStartMoving;

 __declspec(property(get=get_currentRequest, put=set_currentRequest)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  currentRequest;

 __declspec(property(get=get_delayTime, put=set_delayTime)) float_t  delayTime;

 __declspec(property(get=get_forwardTransformation, put=set_forwardTransformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  forwardTransformation;

/// @brief Field m_DelayStartTime, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayStartTime, put=__cordl_internal_set_m_DelayStartTime)) float_t  m_DelayStartTime;

/// @brief Field m_DelayTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayTime, put=__cordl_internal_set_m_DelayTime)) float_t  m_DelayTime;

 __declspec(property(get=get_positionTransformation, put=set_positionTransformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  positionTransformation;

 __declspec(property(get=get_upTransformation, put=set_upTransformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  upTransformation;

 __declspec(property(get=get_validRequest, put=set_validRequest)) bool  validRequest;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider* New_ctor() ;

/// @brief Method QueueTeleportRequest, addr 0xb44f4c4, size 0x28, virtual true, abstract: false, final false
inline bool QueueTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  teleportRequest) ;

/// @brief Method Update, addr 0xb44f51c, size 0x288, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest const& __cordl_internal_get__currentRequest_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest& __cordl_internal_get__currentRequest_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment* const& __cordl_internal_get__forwardTransformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*& __cordl_internal_get__forwardTransformation_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* const& __cordl_internal_get__positionTransformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*& __cordl_internal_get__positionTransformation_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* const& __cordl_internal_get__upTransformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*& __cordl_internal_get__upTransformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get__validRequest_k__BackingField() const;

constexpr bool& __cordl_internal_get__validRequest_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_DelayStartTime() const;

constexpr float_t& __cordl_internal_get_m_DelayStartTime() ;

constexpr float_t const& __cordl_internal_get_m_DelayTime() const;

constexpr float_t& __cordl_internal_get_m_DelayTime() ;

constexpr void __cordl_internal_set__currentRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value) ;

constexpr void __cordl_internal_set__forwardTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  value) ;

constexpr void __cordl_internal_set__positionTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  value) ;

constexpr void __cordl_internal_set__upTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  value) ;

constexpr void __cordl_internal_set__validRequest_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_DelayStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayTime(float_t  value) ;

/// @brief Method .ctor, addr 0xb44f7a4, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canStartMoving, addr 0xb44f484, size 0x40, virtual true, abstract: false, final false
inline bool get_canStartMoving() ;

/// [CompilerGenerated]
/// @brief Method get_currentRequest, addr 0xb44f434, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest get_currentRequest() ;

/// @brief Method get_delayTime, addr 0xb44f474, size 0x8, virtual false, abstract: false, final false
inline float_t get_delayTime() ;

/// [CompilerGenerated]
/// @brief Method get_forwardTransformation, addr 0xb44f4fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment* get_forwardTransformation() ;

/// [CompilerGenerated]
/// @brief Method get_positionTransformation, addr 0xb44f50c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* get_positionTransformation() ;

/// [CompilerGenerated]
/// @brief Method get_upTransformation, addr 0xb44f4ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* get_upTransformation() ;

/// [CompilerGenerated]
/// @brief Method get_validRequest, addr 0xb44f464, size 0x8, virtual false, abstract: false, final false
inline bool get_validRequest() ;

/// [CompilerGenerated]
/// @brief Method set_currentRequest, addr 0xb44f44c, size 0x18, virtual false, abstract: false, final false
inline void set_currentRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value) ;

/// @brief Method set_delayTime, addr 0xb44f47c, size 0x8, virtual false, abstract: false, final false
inline void set_delayTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_forwardTransformation, addr 0xb44f504, size 0x8, virtual false, abstract: false, final false
inline void set_forwardTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  value) ;

/// [CompilerGenerated]
/// @brief Method set_positionTransformation, addr 0xb44f514, size 0x8, virtual false, abstract: false, final false
inline void set_positionTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  value) ;

/// [CompilerGenerated]
/// @brief Method set_upTransformation, addr 0xb44f4f4, size 0x8, virtual false, abstract: false, final false
inline void set_upTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  value) ;

/// [CompilerGenerated]
/// @brief Method set_validRequest, addr 0xb44f46c, size 0x8, virtual false, abstract: false, final false
inline void set_validRequest(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationProvider(TeleportationProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationProvider(TeleportationProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11364};

/// [CompilerGenerated]
/// @brief Field <currentRequest>k__BackingField, offset: 0x98, size: 0x24, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  ____currentRequest_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <validRequest>k__BackingField, offset: 0xbc, size: 0x1, def value: None
 bool  ____validRequest_k__BackingField;

/// [SerializeField]
/// [Tooltip("The time (in seconds) to delay the teleportation once it is activated.")]
/// @brief Field m_DelayTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___m_DelayTime;

/// [CompilerGenerated]
/// @brief Field <upTransformation>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  ____upTransformation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <forwardTransformation>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  ____forwardTransformation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <positionTransformation>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  ____positionTransformation_k__BackingField;

/// @brief Field m_DelayStartTime, offset: 0xe0, size: 0x4, def value: None
 float_t  ___m_DelayStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ____currentRequest_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ____validRequest_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ___m_DelayTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ____upTransformation_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ____forwardTransformation_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ____positionTransformation_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider, ___m_DelayStartTime) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider) == 0xe8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation

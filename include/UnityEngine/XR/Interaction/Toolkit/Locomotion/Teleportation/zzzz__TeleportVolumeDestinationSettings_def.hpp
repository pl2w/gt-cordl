#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportVolumeDestinationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleportVolumeDestinationSettings)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class ITeleportationVolumeAnchorFilter;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportVolumeDestinationSettings");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettings
class CORDL_TYPE TeleportVolumeDestinationSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_destinationEvaluationDelayTime, put=set_destinationEvaluationDelayTime)) float_t  destinationEvaluationDelayTime;

 __declspec(property(get=get_destinationEvaluationFilter, put=set_destinationEvaluationFilter)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  destinationEvaluationFilter;

 __declspec(property(get=get_destinationFilterObject, put=set_destinationFilterObject)) ::UnityW<::UnityEngine::Object>  destinationFilterObject;

 __declspec(property(get=get_destinationPollFrequency, put=set_destinationPollFrequency)) float_t  destinationPollFrequency;

 __declspec(property(get=get_enableDestinationEvaluationDelay, put=set_enableDestinationEvaluationDelay)) bool  enableDestinationEvaluationDelay;

/// @brief Field m_AssignedFilter, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AssignedFilter, put=__cordl_internal_set_m_AssignedFilter)) bool  m_AssignedFilter;

/// @brief Field m_DestinationEvaluationDelayTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DestinationEvaluationDelayTime, put=__cordl_internal_set_m_DestinationEvaluationDelayTime)) float_t  m_DestinationEvaluationDelayTime;

/// @brief Field m_DestinationEvaluationFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DestinationEvaluationFilter, put=__cordl_internal_set_m_DestinationEvaluationFilter)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  m_DestinationEvaluationFilter;

/// @brief Field m_DestinationFilterObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DestinationFilterObject, put=__cordl_internal_set_m_DestinationFilterObject)) ::UnityW<::UnityEngine::Object>  m_DestinationFilterObject;

/// @brief Field m_DestinationPollFrequency, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DestinationPollFrequency, put=__cordl_internal_set_m_DestinationPollFrequency)) float_t  m_DestinationPollFrequency;

/// @brief Field m_EnableDestinationEvaluationDelay, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableDestinationEvaluationDelay, put=__cordl_internal_set_m_EnableDestinationEvaluationDelay)) bool  m_EnableDestinationEvaluationDelay;

/// @brief Field m_PollForDestinationChange, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PollForDestinationChange, put=__cordl_internal_set_m_PollForDestinationChange)) bool  m_PollForDestinationChange;

 __declspec(property(get=get_pollForDestinationChange, put=set_pollForDestinationChange)) bool  pollForDestinationChange;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_AssignedFilter() const;

constexpr bool& __cordl_internal_get_m_AssignedFilter() ;

constexpr float_t const& __cordl_internal_get_m_DestinationEvaluationDelayTime() const;

constexpr float_t& __cordl_internal_get_m_DestinationEvaluationDelayTime() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* const& __cordl_internal_get_m_DestinationEvaluationFilter() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*& __cordl_internal_get_m_DestinationEvaluationFilter() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_DestinationFilterObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_DestinationFilterObject() ;

constexpr float_t const& __cordl_internal_get_m_DestinationPollFrequency() const;

constexpr float_t& __cordl_internal_get_m_DestinationPollFrequency() ;

constexpr bool const& __cordl_internal_get_m_EnableDestinationEvaluationDelay() const;

constexpr bool& __cordl_internal_get_m_EnableDestinationEvaluationDelay() ;

constexpr bool const& __cordl_internal_get_m_PollForDestinationChange() const;

constexpr bool& __cordl_internal_get_m_PollForDestinationChange() ;

constexpr void __cordl_internal_set_m_AssignedFilter(bool  value) ;

constexpr void __cordl_internal_set_m_DestinationEvaluationDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DestinationEvaluationFilter(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  value) ;

constexpr void __cordl_internal_set_m_DestinationFilterObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_DestinationPollFrequency(float_t  value) ;

constexpr void __cordl_internal_set_m_EnableDestinationEvaluationDelay(bool  value) ;

constexpr void __cordl_internal_set_m_PollForDestinationChange(bool  value) ;

/// @brief Method .ctor, addr 0xb44f338, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_destinationEvaluationDelayTime, addr 0xb44f8ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_destinationEvaluationDelayTime() ;

/// @brief Method get_destinationEvaluationFilter, addr 0xb44e494, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* get_destinationEvaluationFilter() ;

/// @brief Method get_destinationFilterObject, addr 0xb44f91c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_destinationFilterObject() ;

/// @brief Method get_destinationPollFrequency, addr 0xb44f90c, size 0x8, virtual false, abstract: false, final false
inline float_t get_destinationPollFrequency() ;

/// @brief Method get_enableDestinationEvaluationDelay, addr 0xb44f8dc, size 0x8, virtual false, abstract: false, final false
inline bool get_enableDestinationEvaluationDelay() ;

/// @brief Method get_pollForDestinationChange, addr 0xb44f8fc, size 0x8, virtual false, abstract: false, final false
inline bool get_pollForDestinationChange() ;

/// @brief Method set_destinationEvaluationDelayTime, addr 0xb44f8f4, size 0x8, virtual false, abstract: false, final false
inline void set_destinationEvaluationDelayTime(float_t  value) ;

/// @brief Method set_destinationEvaluationFilter, addr 0xb44f9b0, size 0x24, virtual false, abstract: false, final false
inline void set_destinationEvaluationFilter(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  value) ;

/// @brief Method set_destinationFilterObject, addr 0xb44f924, size 0x8c, virtual false, abstract: false, final false
inline void set_destinationFilterObject(::UnityEngine::Object*  value) ;

/// @brief Method set_destinationPollFrequency, addr 0xb44f914, size 0x8, virtual false, abstract: false, final false
inline void set_destinationPollFrequency(float_t  value) ;

/// @brief Method set_enableDestinationEvaluationDelay, addr 0xb44f8e4, size 0x8, virtual false, abstract: false, final false
inline void set_enableDestinationEvaluationDelay(bool  value) ;

/// @brief Method set_pollForDestinationChange, addr 0xb44f904, size 0x8, virtual false, abstract: false, final false
inline void set_pollForDestinationChange(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportVolumeDestinationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportVolumeDestinationSettings(TeleportVolumeDestinationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportVolumeDestinationSettings(TeleportVolumeDestinationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11367};

/// [SerializeField]
/// [Tooltip("Whether to delay evaluation of the destination anchor until the user has hovered over the volume for a certain amount of time.")]
/// @brief Field m_EnableDestinationEvaluationDelay, offset: 0x10, size: 0x1, def value: None
 bool  ___m_EnableDestinationEvaluationDelay;

/// [SerializeField]
/// [Tooltip("The amount of time, in seconds, for which the user must hover over the volume before it designates a destination anchor.")]
/// @brief Field m_DestinationEvaluationDelayTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_DestinationEvaluationDelayTime;

/// [SerializeField]
/// [Tooltip("Whether to periodically query the filter for its calculated destination. If the determined anchor is not the current destination, the volume will initiate re-evaluation of the destination anchor.")]
/// @brief Field m_PollForDestinationChange, offset: 0x18, size: 0x1, def value: None
 bool  ___m_PollForDestinationChange;

/// [SerializeField]
/// [Tooltip("The amount of time, in seconds, between queries to the filter for its calculated destination anchor.")]
/// @brief Field m_DestinationPollFrequency, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_DestinationPollFrequency;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter))]
/// [Tooltip("The anchor filter used to evaluate a teleportation destination. If set to None, the volume will use the anchor furthest from the user as the destination.")]
/// @brief Field m_DestinationFilterObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_DestinationFilterObject;

/// @brief Field m_DestinationEvaluationFilter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  ___m_DestinationEvaluationFilter;

/// @brief Field m_AssignedFilter, offset: 0x30, size: 0x1, def value: None
 bool  ___m_AssignedFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_EnableDestinationEvaluationDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_DestinationEvaluationDelayTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_PollForDestinationChange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_DestinationPollFrequency) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_DestinationFilterObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_DestinationEvaluationFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings, ___m_AssignedFilter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClimbSettings)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbSettings");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbSettings
class CORDL_TYPE ClimbSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_allowFreeXMovement, put=set_allowFreeXMovement)) bool  allowFreeXMovement;

 __declspec(property(get=get_allowFreeYMovement, put=set_allowFreeYMovement)) bool  allowFreeYMovement;

 __declspec(property(get=get_allowFreeZMovement, put=set_allowFreeZMovement)) bool  allowFreeZMovement;

/// @brief Field m_AllowFreeXMovement, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowFreeXMovement, put=__cordl_internal_set_m_AllowFreeXMovement)) bool  m_AllowFreeXMovement;

/// @brief Field m_AllowFreeYMovement, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowFreeYMovement, put=__cordl_internal_set_m_AllowFreeYMovement)) bool  m_AllowFreeYMovement;

/// @brief Field m_AllowFreeZMovement, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowFreeZMovement, put=__cordl_internal_set_m_AllowFreeZMovement)) bool  m_AllowFreeZMovement;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_AllowFreeXMovement() const;

constexpr bool& __cordl_internal_get_m_AllowFreeXMovement() ;

constexpr bool const& __cordl_internal_get_m_AllowFreeYMovement() const;

constexpr bool& __cordl_internal_get_m_AllowFreeYMovement() ;

constexpr bool const& __cordl_internal_get_m_AllowFreeZMovement() const;

constexpr bool& __cordl_internal_get_m_AllowFreeZMovement() ;

constexpr void __cordl_internal_set_m_AllowFreeXMovement(bool  value) ;

constexpr void __cordl_internal_set_m_AllowFreeYMovement(bool  value) ;

constexpr void __cordl_internal_set_m_AllowFreeZMovement(bool  value) ;

/// @brief Method .ctor, addr 0xb457920, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowFreeXMovement, addr 0xb4583e8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowFreeXMovement() ;

/// @brief Method get_allowFreeYMovement, addr 0xb4583f8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowFreeYMovement() ;

/// @brief Method get_allowFreeZMovement, addr 0xb458408, size 0x8, virtual false, abstract: false, final false
inline bool get_allowFreeZMovement() ;

/// @brief Method set_allowFreeXMovement, addr 0xb4583f0, size 0x8, virtual false, abstract: false, final false
inline void set_allowFreeXMovement(bool  value) ;

/// @brief Method set_allowFreeYMovement, addr 0xb458400, size 0x8, virtual false, abstract: false, final false
inline void set_allowFreeYMovement(bool  value) ;

/// @brief Method set_allowFreeZMovement, addr 0xb458410, size 0x8, virtual false, abstract: false, final false
inline void set_allowFreeZMovement(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbSettings(ClimbSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbSettings(ClimbSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11389};

/// [SerializeField]
/// [Tooltip("Controls whether to allow unconstrained movement along the climb interactable\'s x-axis.")]
/// @brief Field m_AllowFreeXMovement, offset: 0x10, size: 0x1, def value: None
 bool  ___m_AllowFreeXMovement;

/// [SerializeField]
/// [Tooltip("Controls whether to allow unconstrained movement along the climb interactable\'s y-axis.")]
/// @brief Field m_AllowFreeYMovement, offset: 0x11, size: 0x1, def value: None
 bool  ___m_AllowFreeYMovement;

/// [SerializeField]
/// [Tooltip("Controls whether to allow unconstrained movement along the climb interactable\'s z-axis.")]
/// @brief Field m_AllowFreeZMovement, offset: 0x12, size: 0x1, def value: None
 bool  ___m_AllowFreeZMovement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings, ___m_AllowFreeXMovement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings, ___m_AllowFreeYMovement) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings, ___m_AllowFreeZMovement) == 0x12, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing

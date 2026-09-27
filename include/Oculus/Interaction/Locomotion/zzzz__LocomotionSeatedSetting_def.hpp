#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionSeatedSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionSeatedSetting)
namespace Oculus::Interaction::Locomotion {
class FirstPersonLocomotor;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionSeatedSetting;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting*, "Oculus.Interaction.Locomotion", "LocomotionSeatedSetting");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionSeatedSetting
class CORDL_TYPE LocomotionSeatedSetting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SeatedHeightOffset, put=set_SeatedHeightOffset)) float_t  SeatedHeightOffset;

/// @brief Field _locomotor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotor, put=__cordl_internal_set__locomotor)) ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  _locomotor;

/// @brief Field _seated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__seated, put=__cordl_internal_set__seated)) ::UnityW<::UnityEngine::UI::Toggle>  _seated;

/// @brief Field _seatedHeightOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__seatedHeightOffset, put=__cordl_internal_set__seatedHeightOffset)) float_t  _seatedHeightOffset;

/// @brief Field _standing, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__standing, put=__cordl_internal_set__standing)) ::UnityW<::UnityEngine::UI::Toggle>  _standing;

/// @brief Field _started, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HandleSeatedChanged, addr 0xa42e374, size 0x20, virtual false, abstract: false, final false
inline void HandleSeatedChanged(bool  seated) ;

/// @brief Method HandleStandingChanged, addr 0xa42e358, size 0x1c, virtual false, abstract: false, final false
inline void HandleStandingChanged(bool  standing) ;

/// @brief Method InjectAllSeatedMode, addr 0xa42e4a8, size 0x44, virtual false, abstract: false, final false
inline void InjectAllSeatedMode(::UnityEngine::UI::Toggle*  seated, ::UnityEngine::UI::Toggle*  standing, ::Oculus::Interaction::Locomotion::FirstPersonLocomotor*  locomotor) ;

/// @brief Method InjectLocomotor, addr 0xa42e4fc, size 0x8, virtual false, abstract: false, final false
inline void InjectLocomotor(::Oculus::Interaction::Locomotion::FirstPersonLocomotor*  locomotor) ;

/// @brief Method InjectSeated, addr 0xa42e4ec, size 0x8, virtual false, abstract: false, final false
inline void InjectSeated(::UnityEngine::UI::Toggle*  seated) ;

/// @brief Method InjectStanding, addr 0xa42e4f4, size 0x8, virtual false, abstract: false, final false
inline void InjectStanding(::UnityEngine::UI::Toggle*  standing) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionSeatedSetting* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42e394, size 0x114, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42e224, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa42e1f8, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor> const& __cordl_internal_get__locomotor() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>& __cordl_internal_get__locomotor() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__seated() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__seated() ;

constexpr float_t const& __cordl_internal_get__seatedHeightOffset() const;

constexpr float_t& __cordl_internal_get__seatedHeightOffset() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__standing() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__standing() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__locomotor(::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  value) ;

constexpr void __cordl_internal_set__seated(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__seatedHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__standing(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa42e504, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SeatedHeightOffset, addr 0xa42e1e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_SeatedHeightOffset() ;

/// @brief Method set_SeatedHeightOffset, addr 0xa42e1f0, size 0x8, virtual false, abstract: false, final false
inline void set_SeatedHeightOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionSeatedSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionSeatedSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionSeatedSetting(LocomotionSeatedSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionSeatedSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionSeatedSetting(LocomotionSeatedSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28269};

/// [SerializeField]
/// @brief Field _seated, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____seated;

/// [SerializeField]
/// @brief Field _standing, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____standing;

/// [SerializeField]
/// @brief Field _locomotor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::FirstPersonLocomotor>  ____locomotor;

/// [SerializeField]
/// @brief Field _seatedHeightOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ____seatedHeightOffset;

/// @brief Field _started, offset: 0x3c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting, ____seated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting, ____standing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting, ____locomotor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting, ____seatedHeightOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting, ____started) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionSeatedSetting) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion

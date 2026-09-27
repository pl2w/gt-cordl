#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/ExclusionZoneStateEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExclusionZoneStateEvent)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class ExclusionZoneStateEvent;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent");
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.ExclusionZoneStateEvent
class CORDL_TYPE ExclusionZoneStateEvent : public ::System::Object {
public:
// Declarations
/// @brief Field OnNormal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNormal, put=__cordl_internal_set_OnNormal)) ::UnityEngine::Events::UnityEvent*  OnNormal;

/// @brief Field OnRestricted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRestricted, put=__cordl_internal_set_OnRestricted)) ::UnityEngine::Events::UnityEvent*  OnRestricted;

/// @brief Method Invoke, addr 0x5d4e79c, size 0x8c, virtual false, abstract: false, final false
inline void Invoke(::GlobalNamespace::VRRig*  vrRig) ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnNormal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnNormal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRestricted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRestricted() ;

constexpr void __cordl_internal_set_OnNormal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnRestricted(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5d4e828, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExclusionZoneStateEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExclusionZoneStateEvent(ExclusionZoneStateEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExclusionZoneStateEvent(ExclusionZoneStateEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4776};

/// @brief Field OnNormal, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnNormal;

/// @brief Field OnRestricted, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRestricted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent, ___OnNormal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent, ___OnRestricted) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions

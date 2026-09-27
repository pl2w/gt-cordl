#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/ExclusionZoneStateEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__ZoneStateEventBase_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(ExclusionZoneStateEvent_1)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
template<typename T>
class ExclusionZoneStateEvent_1_TypedEvent;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
template<typename T>
class ExclusionZoneStateEvent_1;
}
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
template<typename T>
class ExclusionZoneStateEvent_1_TypedEvent;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1);
MARK_GEN_REF_T_PTR(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent`1/TypedEvent");
// Dependencies GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.ZoneStateEventBase
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.ExclusionZoneStateEvent`1<T>
class CORDL_TYPE ExclusionZoneStateEvent_1 : public ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase {
public:
// Declarations
using TypedEvent = ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>;

/// @brief Field onNormal, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNormal, put=__cordl_internal_set_onNormal)) ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  onNormal;

/// @brief Field onRestricted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRestricted, put=__cordl_internal_set_onRestricted)) ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  onRestricted;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(::GlobalNamespace::VRRig*  vrRig, T  arg) ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1<T>* New_ctor() ;

constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>* const& __cordl_internal_get_onNormal() const;

constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*& __cordl_internal_get_onNormal() ;

constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>* const& __cordl_internal_get_onRestricted() const;

constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*& __cordl_internal_get_onRestricted() ;

constexpr void __cordl_internal_set_onNormal(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  value) ;

constexpr void __cordl_internal_set_onRestricted(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExclusionZoneStateEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExclusionZoneStateEvent_1(ExclusionZoneStateEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExclusionZoneStateEvent_1(ExclusionZoneStateEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4778};

/// @brief Field onNormal, offset: 0x10, size: 0x8, def value: None
 ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  ___onNormal;

/// @brief Field onRestricted, offset: 0x18, size: 0x8, def value: None
 ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>*  ___onRestricted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.ExclusionZoneStateEvent`1/TypedEvent<T>
class CORDL_TYPE ExclusionZoneStateEvent_1_TypedEvent : public ::UnityEngine::Events::UnityEvent_1<T> {
public:
// Declarations
static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ExclusionZoneStateEvent_1_TypedEvent<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExclusionZoneStateEvent_1_TypedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent_1_TypedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExclusionZoneStateEvent_1_TypedEvent(ExclusionZoneStateEvent_1_TypedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExclusionZoneStateEvent_1_TypedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExclusionZoneStateEvent_1_TypedEvent(ExclusionZoneStateEvent_1_TypedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions

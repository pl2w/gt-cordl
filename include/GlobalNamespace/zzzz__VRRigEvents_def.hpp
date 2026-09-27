#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRRigEvents)
namespace GlobalNamespace {
class IPreDisable;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GorillaTag {
template<typename T>
class DelegateListProcessor_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigEvents*, "", "VRRigEvents");
// [RequireComponent(typeof(RigContainer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigEvents
class CORDL_TYPE VRRigEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disableEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableEvent, put=__cordl_internal_set_disableEvent)) ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  disableEvent;

/// @brief Field enableEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableEvent, put=__cordl_internal_set_enableEvent)) ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  enableEvent;

/// @brief Field rigRef, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigRef, put=__cordl_internal_set_rigRef)) ::UnityW<::GlobalNamespace::RigContainer>  rigRef;

/// @brief Convert operator to "::GlobalNamespace::IPreDisable"
constexpr operator  ::GlobalNamespace::IPreDisable*() noexcept;

static inline ::GlobalNamespace::VRRigEvents* New_ctor() ;

/// @brief Method PreDisable, addr 0x57481a8, size 0x5c, virtual true, abstract: false, final true
inline void PreDisable() ;

/// @brief Method SendPostEnableEvent, addr 0x5748204, size 0x5c, virtual false, abstract: false, final false
inline void SendPostEnableEvent() ;

constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_disableEvent() const;

constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_disableEvent() ;

constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_enableEvent() const;

constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_enableEvent() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigRef() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigRef() ;

constexpr void __cordl_internal_set_disableEvent(::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

constexpr void __cordl_internal_set_enableEvent(::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

constexpr void __cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::RigContainer>  value) ;

/// @brief Method .ctor, addr 0x5748260, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IPreDisable"
constexpr ::GlobalNamespace::IPreDisable* i___GlobalNamespace__IPreDisable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigEvents(VRRigEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigEvents(VRRigEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1279};

/// [SerializeField]
/// @brief Field rigRef, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigRef;

/// @brief Field disableEvent, offset: 0x28, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___disableEvent;

/// @brief Field enableEvent, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___enableEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigEvents, ___rigRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigEvents, ___disableEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigEvents, ___enableEvent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigEvents) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

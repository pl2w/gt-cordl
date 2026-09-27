#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
CORDL_MODULE_EXPORT(HoldableHandle)
namespace GlobalNamespace {
class HoldableObject;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class HoldableHandle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableHandle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableHandle*, "", "HoldableHandle");
// Dependencies InteractionPoint
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableHandle
class CORDL_TYPE HoldableHandle : public ::GlobalNamespace::InteractionPoint {
public:
// Declarations
 __declspec(property(get=get_Capsule)) ::UnityW<::UnityEngine::CapsuleCollider>  Capsule;

 __declspec(property(get=get_Holdable)) ::UnityW<::GlobalNamespace::HoldableObject>  Holdable;

/// @brief Field handleCapsuleTrigger, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleCapsuleTrigger, put=__cordl_internal_set_handleCapsuleTrigger)) ::UnityW<::UnityEngine::CapsuleCollider>  handleCapsuleTrigger;

/// @brief Field holdable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdable, put=__cordl_internal_set_holdable)) ::UnityW<::GlobalNamespace::HoldableObject>  holdable;

static inline ::GlobalNamespace::HoldableHandle* New_ctor() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_handleCapsuleTrigger() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_handleCapsuleTrigger() ;

constexpr ::UnityW<::GlobalNamespace::HoldableObject> const& __cordl_internal_get_holdable() const;

constexpr ::UnityW<::GlobalNamespace::HoldableObject>& __cordl_internal_get_holdable() ;

constexpr void __cordl_internal_set_handleCapsuleTrigger(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_holdable(::UnityW<::GlobalNamespace::HoldableObject>  value) ;

/// @brief Method .ctor, addr 0x5759d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Capsule, addr 0x5759d40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CapsuleCollider> get_Capsule() ;

/// @brief Method get_Holdable, addr 0x5759d38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::HoldableObject> get_Holdable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableHandle(HoldableHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableHandle(HoldableHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1327};

/// [SerializeField]
/// @brief Field holdable, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoldableObject>  ___holdable;

/// [SerializeField]
/// @brief Field handleCapsuleTrigger, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___handleCapsuleTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoldableHandle, ___holdable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableHandle, ___handleCapsuleTrigger) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoldableHandle) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

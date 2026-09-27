#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritterHoldable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class TransferrableObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterHoldable*, "", "CosmeticCritterHoldable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterHoldable
class CORDL_TYPE CosmeticCritterHoldable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_OwnerID, put=set_OwnerID)) int32_t  OwnerID;

/// @brief Field <OwnerID>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__OwnerID_k__BackingField, put=__cordl_internal_set__OwnerID_k__BackingField)) int32_t  _OwnerID_k__BackingField;

/// @brief Field callLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field transferrableObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Method Awake, addr 0x57e84a4, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateCallLimiter, addr 0x57e82dc, size 0x60, virtual true, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* CreateCallLimiter() ;

static inline ::GlobalNamespace::CosmeticCritterHoldable* New_ctor() ;

/// @brief Method OnDisable, addr 0x57e81f8, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57e80f0, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OwningPlayerMatches, addr 0x57e82ac, size 0x30, virtual false, abstract: false, final false
inline bool OwningPlayerMatches(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ResetCallLimiter, addr 0x57e833c, size 0x1c, virtual false, abstract: false, final false
inline void ResetCallLimiter() ;

/// @brief Method TrySetID, addr 0x57e8358, size 0x14c, virtual false, abstract: false, final false
inline void TrySetID() ;

constexpr int32_t const& __cordl_internal_get__OwnerID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__OwnerID_k__BackingField() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set__OwnerID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x57e827c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocal, addr 0x57e8294, size 0x18, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// [CompilerGenerated]
/// @brief Method get_OwnerID, addr 0x57e8284, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OwnerID() ;

/// [CompilerGenerated]
/// @brief Method set_OwnerID, addr 0x57e828c, size 0x8, virtual false, abstract: false, final false
inline void set_OwnerID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterHoldable(CosmeticCritterHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterHoldable(CosmeticCritterHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1666};

/// @brief Field transferrableObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// [CompilerGenerated]
/// @brief Field <OwnerID>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____OwnerID_k__BackingField;

/// @brief Field callLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterHoldable, ___transferrableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterHoldable, ____OwnerID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterHoldable, ___callLimiter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterHoldable) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

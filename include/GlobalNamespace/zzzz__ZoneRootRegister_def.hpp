#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneRootRegister.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneRootRegister)
namespace GorillaTag {
class WatchableGameObjectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneRootRegister;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneRootRegister*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneRootRegister*, "", "ZoneRootRegister");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneRootRegister
class CORDL_TYPE ZoneRootRegister : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field watchableSlot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_watchableSlot, put=__cordl_internal_set_watchableSlot)) ::UnityW<::GorillaTag::WatchableGameObjectSO>  watchableSlot;

/// @brief Method Awake, addr 0x56b961c, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ZoneRootRegister* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56b9680, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::GorillaTag::WatchableGameObjectSO> const& __cordl_internal_get_watchableSlot() const;

constexpr ::UnityW<::GorillaTag::WatchableGameObjectSO>& __cordl_internal_get_watchableSlot() ;

constexpr void __cordl_internal_set_watchableSlot(::UnityW<::GorillaTag::WatchableGameObjectSO>  value) ;

/// @brief Method .ctor, addr 0x56b96d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneRootRegister() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneRootRegister", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneRootRegister(ZoneRootRegister && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneRootRegister", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneRootRegister(ZoneRootRegister const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{962};

/// [SerializeField]
/// @brief Field watchableSlot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::WatchableGameObjectSO>  ___watchableSlot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneRootRegister, ___watchableSlot) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneRootRegister) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

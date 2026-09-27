#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectSyncedBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
CORDL_MODULE_EXPORT(TransferrableObjectSyncedBool)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectSyncedBool;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectSyncedBool*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectSyncedBool*, "", "TransferrableObjectSyncedBool");
// Dependencies TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectSyncedBool
class CORDL_TYPE TransferrableObjectSyncedBool : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field OnItemStateSetFalse, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateSetFalse, put=__cordl_internal_set_OnItemStateSetFalse)) ::UnityEngine::Events::UnityEvent*  OnItemStateSetFalse;

/// @brief Field OnItemStateSetTrue, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemStateSetTrue, put=__cordl_internal_set_OnItemStateSetTrue)) ::UnityEngine::Events::UnityEvent*  OnItemStateSetTrue;

/// @brief Field deprecatedWarning, offset 0x331, size 0x1 
 __declspec(property(get=__cordl_internal_get_deprecatedWarning, put=__cordl_internal_set_deprecatedWarning)) bool  deprecatedWarning;

static inline ::GlobalNamespace::TransferrableObjectSyncedBool* New_ctor() ;

/// @brief Method OnDisable, addr 0x5773320, size 0xcc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5773254, size 0xcc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnItemStateChanged, addr 0x5773420, size 0x28, virtual false, abstract: false, final false
inline void OnItemStateChanged() ;

/// @brief Method SetItemState, addr 0x57733ec, size 0x1c, virtual false, abstract: false, final false
inline void SetItemState(bool  state) ;

/// @brief Method ToggleItemState, addr 0x5773408, size 0x18, virtual false, abstract: false, final false
inline void ToggleItemState() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateSetFalse() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateSetFalse() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnItemStateSetTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnItemStateSetTrue() ;

constexpr bool const& __cordl_internal_get_deprecatedWarning() const;

constexpr bool& __cordl_internal_get_deprecatedWarning() ;

constexpr void __cordl_internal_set_OnItemStateSetFalse(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnItemStateSetTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_deprecatedWarning(bool  value) ;

/// @brief Method .ctor, addr 0x5773448, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectSyncedBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectSyncedBool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectSyncedBool(TransferrableObjectSyncedBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectSyncedBool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectSyncedBool(TransferrableObjectSyncedBool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1370};

/// [SerializeField]
/// @brief Field deprecatedWarning, offset: 0x331, size: 0x1, def value: None
 bool  ___deprecatedWarning;

/// [SerializeField]
/// @brief Field OnItemStateSetTrue, offset: 0x338, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateSetTrue;

/// [SerializeField]
/// @brief Field OnItemStateSetFalse, offset: 0x340, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnItemStateSetFalse;

/// @brief Size padding 0x378 - 0x348 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectSyncedBool, ___deprecatedWarning) == 0x331, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectSyncedBool, ___OnItemStateSetTrue) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectSyncedBool, ___OnItemStateSetFalse) == 0x340, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectSyncedBool) == 0x378, "Size mismatch!");

} // namespace end def GlobalNamespace

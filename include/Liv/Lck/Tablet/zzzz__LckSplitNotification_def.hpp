#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckSplitNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckBaseNotification_def.hpp"
CORDL_MODULE_EXPORT(LckSplitNotification)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckSplitNotification;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckSplitNotification*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckSplitNotification*, "Liv.Lck.Tablet", "LckSplitNotification");
// Dependencies Liv.Lck.Tablet.LckBaseNotification
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckSplitNotification
class CORDL_TYPE LckSplitNotification : public ::Liv::Lck::Tablet::LckBaseNotification {
public:
// Declarations
 __declspec(property(get=get_AndroidUI, put=set_AndroidUI)) ::UnityW<::UnityEngine::GameObject>  AndroidUI;

 __declspec(property(get=get_DesktopUI, put=set_DesktopUI)) ::UnityW<::UnityEngine::GameObject>  DesktopUI;

/// @brief Field <AndroidUI>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__AndroidUI_k__BackingField, put=__cordl_internal_set__AndroidUI_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _AndroidUI_k__BackingField;

/// @brief Field <DesktopUI>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__DesktopUI_k__BackingField, put=__cordl_internal_set__DesktopUI_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _DesktopUI_k__BackingField;

static inline ::Liv::Lck::Tablet::LckSplitNotification* New_ctor() ;

/// @brief Method Start, addr 0x9d5fd58, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__AndroidUI_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__AndroidUI_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__DesktopUI_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__DesktopUI_k__BackingField() ;

constexpr void __cordl_internal_set__AndroidUI_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__DesktopUI_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d5fe00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AndroidUI, addr 0x9d5fd38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_AndroidUI() ;

/// [CompilerGenerated]
/// @brief Method get_DesktopUI, addr 0x9d5fd48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_DesktopUI() ;

/// [CompilerGenerated]
/// @brief Method set_AndroidUI, addr 0x9d5fd40, size 0x8, virtual false, abstract: false, final false
inline void set_AndroidUI(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DesktopUI, addr 0x9d5fd50, size 0x8, virtual false, abstract: false, final false
inline void set_DesktopUI(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSplitNotification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSplitNotification", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSplitNotification(LckSplitNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSplitNotification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSplitNotification(LckSplitNotification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24961};

/// [CompilerGenerated]
/// [SerializeField]
/// [Header("UI References")]
/// @brief Field <AndroidUI>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____AndroidUI_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <DesktopUI>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____DesktopUI_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckSplitNotification, ____AndroidUI_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckSplitNotification, ____DesktopUI_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckSplitNotification) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet

#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckNormalNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckBaseNotification_def.hpp"
CORDL_MODULE_EXPORT(LckNormalNotification)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckNormalNotification;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckNormalNotification*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckNormalNotification*, "Liv.Lck.Tablet", "LckNormalNotification");
// Dependencies Liv.Lck.Tablet.LckBaseNotification
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckNormalNotification
class CORDL_TYPE LckNormalNotification : public ::Liv::Lck::Tablet::LckBaseNotification {
public:
// Declarations
 __declspec(property(get=get_Text, put=set_Text)) ::UnityW<::TMPro::TMP_Text>  Text;

 __declspec(property(get=get_UI, put=set_UI)) ::UnityW<::UnityEngine::GameObject>  UI;

/// @brief Field <Text>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text_k__BackingField, put=__cordl_internal_set__Text_k__BackingField)) ::UnityW<::TMPro::TMP_Text>  _Text_k__BackingField;

/// @brief Field <UI>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UI_k__BackingField, put=__cordl_internal_set__UI_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _UI_k__BackingField;

static inline ::Liv::Lck::Tablet::LckNormalNotification* New_ctor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__Text_k__BackingField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__Text_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__UI_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__UI_k__BackingField() ;

constexpr void __cordl_internal_set__Text_k__BackingField(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__UI_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d5fd28, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Text, addr 0x9d5fd18, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TMP_Text> get_Text() ;

/// [CompilerGenerated]
/// @brief Method get_UI, addr 0x9d5fd08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_UI() ;

/// [CompilerGenerated]
/// @brief Method set_Text, addr 0x9d5fd20, size 0x8, virtual false, abstract: false, final false
inline void set_Text(::TMPro::TMP_Text*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UI, addr 0x9d5fd10, size 0x8, virtual false, abstract: false, final false
inline void set_UI(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNormalNotification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNormalNotification", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNormalNotification(LckNormalNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNormalNotification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNormalNotification(LckNormalNotification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24960};

/// [CompilerGenerated]
/// [SerializeField]
/// [Header("UI References")]
/// @brief Field <UI>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____UI_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <Text>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____Text_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckNormalNotification, ____UI_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNormalNotification, ____Text_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckNormalNotification) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet

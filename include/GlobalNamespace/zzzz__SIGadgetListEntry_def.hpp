#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetListEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetListEntry)
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetListEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetListEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetListEntry*, "", "SIGadgetListEntry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetListEntry
class CORDL_TYPE SIGadgetListEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ButtonContainer)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ButtonContainer;

 __declspec(property(get=get_Id, put=set_Id)) int32_t  Id;

/// @brief Field <Id>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) int32_t  _Id_k__BackingField;

/// @brief Field buttonContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonContainer, put=__cordl_internal_set_buttonContainer)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  buttonContainer;

/// @brief Field gadgetText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetText, put=__cordl_internal_set_gadgetText)) ::UnityW<::TMPro::TextMeshProUGUI>  gadgetText;

/// @brief Field imageFlattener, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_imageFlattener, put=__cordl_internal_set_imageFlattener)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  imageFlattener;

/// @brief Field selectionIndicator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionIndicator, put=__cordl_internal_set_selectionIndicator)) ::UnityW<::UnityEngine::GameObject>  selectionIndicator;

/// @brief Field textFlattener, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFlattener, put=__cordl_internal_set_textFlattener)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  textFlattener;

/// @brief Method Configure, addr 0x59dd51c, size 0x2d0, virtual false, abstract: false, final false
inline void Configure(::GlobalNamespace::ITouchScreenStation*  station, ::GlobalNamespace::SITechTreePage*  page, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  index, float_t  positionInterval, int32_t  listSize) ;

static inline ::GlobalNamespace::SIGadgetListEntry* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get_buttonContainer() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get_buttonContainer() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_gadgetText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_gadgetText() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_imageFlattener() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_imageFlattener() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_selectionIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_selectionIndicator() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_textFlattener() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_textFlattener() ;

constexpr void __cordl_internal_set__Id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_buttonContainer(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set_gadgetText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_imageFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_selectionIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_textFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

/// @brief Method .ctor, addr 0x59deae0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ButtonContainer, addr 0x59deac8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> get_ButtonContainer() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x59dead0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Id() ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x59dead8, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetListEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetListEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetListEntry(SIGadgetListEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetListEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetListEntry(SIGadgetListEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{322};

/// [SerializeField]
/// @brief Field gadgetText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___gadgetText;

/// [SerializeField]
/// @brief Field buttonContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ___buttonContainer;

/// @brief Field imageFlattener, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___imageFlattener;

/// @brief Field textFlattener, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___textFlattener;

/// @brief Field selectionIndicator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___selectionIndicator;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____Id_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ___gadgetText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ___buttonContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ___imageFlattener) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ___textFlattener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ___selectionIndicator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetListEntry, ____Id_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetListEntry) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

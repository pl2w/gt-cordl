#pragma once
// IWYU pragma private; include "GlobalNamespace/SIDispenserGadgetListEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIDispenserGadgetListEntry)
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIDispenserGadgetListEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIDispenserGadgetListEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIDispenserGadgetListEntry*, "", "SIDispenserGadgetListEntry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIDispenserGadgetListEntry
class CORDL_TYPE SIDispenserGadgetListEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DispenseButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  DispenseButton;

/// @brief Field dispenseButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenseButton, put=__cordl_internal_set_dispenseButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  dispenseButton;

/// @brief Field gadgetText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetText, put=__cordl_internal_set_gadgetText)) ::UnityW<::TMPro::TextMeshProUGUI>  gadgetText;

/// @brief Field image1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_image1, put=__cordl_internal_set_image1)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  image1;

/// @brief Field image2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_image2, put=__cordl_internal_set_image2)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  image2;

/// @brief Field infoButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_infoButton, put=__cordl_internal_set_infoButton)) ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  infoButton;

/// @brief Field text1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_text1, put=__cordl_internal_set_text1)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  text1;

/// @brief Field text2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_text2, put=__cordl_internal_set_text2)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  text2;

static inline ::GlobalNamespace::SIDispenserGadgetListEntry* New_ctor() ;

/// @brief Method SetStation, addr 0x59dc340, size 0x380, virtual false, abstract: false, final false
inline void SetStation(::GlobalNamespace::ITouchScreenStation*  station, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget) ;

/// @brief Method SetTechTreeNode, addr 0x59dc6c0, size 0xa8, virtual false, abstract: false, final false
inline void SetTechTreeNode(::GlobalNamespace::SITechTreeNode*  node) ;

/// [CompilerGenerated]
/// @brief Method <SetTechTreeNode>g__ConfigureButton|10_0, addr 0x59dc768, size 0x14, virtual false, abstract: false, final false
static inline void _SetTechTreeNode_g__ConfigureButton_10_0(::GlobalNamespace::SITouchscreenButton*  button, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data) ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get_dispenseButton() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get_dispenseButton() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_gadgetText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_gadgetText() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_image1() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_image1() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_image2() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_image2() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& __cordl_internal_get_infoButton() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& __cordl_internal_get_infoButton() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_text1() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_text1() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_text2() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_text2() ;

constexpr void __cordl_internal_set_dispenseButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set_gadgetText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_image1(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_image2(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_infoButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value) ;

constexpr void __cordl_internal_set_text1(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_text2(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

/// @brief Method .ctor, addr 0x59dc77c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DispenseButton, addr 0x59dc338, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> get_DispenseButton() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIDispenserGadgetListEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIDispenserGadgetListEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIDispenserGadgetListEntry(SIDispenserGadgetListEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIDispenserGadgetListEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIDispenserGadgetListEntry(SIDispenserGadgetListEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{316};

/// [SerializeField]
/// @brief Field gadgetText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___gadgetText;

/// [SerializeField]
/// @brief Field dispenseButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ___dispenseButton;

/// [SerializeField]
/// @brief Field infoButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  ___infoButton;

/// @brief Field image1, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___image1;

/// @brief Field image2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___image2;

/// @brief Field text1, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___text1;

/// @brief Field text2, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___text2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___gadgetText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___dispenseButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___infoButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___image1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___image2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___text1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIDispenserGadgetListEntry, ___text2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIDispenserGadgetListEntry) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/TestManipulatableSpinnerIcons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TestManipulatableSpinnerIcons)
namespace GlobalNamespace {
class ManipulatableSpinner;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TestManipulatableSpinnerIcons;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestManipulatableSpinnerIcons*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestManipulatableSpinnerIcons*, "", "TestManipulatableSpinnerIcons");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestManipulatableSpinnerIcons
class CORDL_TYPE TestManipulatableSpinnerIcons : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentRotation, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRotation, put=__cordl_internal_set_currentRotation)) float_t  currentRotation;

/// @brief Field iconCanvas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_iconCanvas, put=__cordl_internal_set_iconCanvas)) ::UnityW<::UnityEngine::GameObject>  iconCanvas;

/// @brief Field iconElementTemplate, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_iconElementTemplate, put=__cordl_internal_set_iconElementTemplate)) ::UnityW<::UnityEngine::GameObject>  iconElementTemplate;

/// @brief Field iconOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_iconOffset, put=__cordl_internal_set_iconOffset)) float_t  iconOffset;

/// @brief Field rollerElementAngle, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollerElementAngle, put=__cordl_internal_set_rollerElementAngle)) float_t  rollerElementAngle;

/// @brief Field rollerElementCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollerElementCount, put=__cordl_internal_set_rollerElementCount)) int32_t  rollerElementCount;

/// @brief Field rollerElementTemplate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollerElementTemplate, put=__cordl_internal_set_rollerElementTemplate)) ::UnityW<::UnityEngine::GameObject>  rollerElementTemplate;

/// @brief Field rotationScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationScale, put=__cordl_internal_set_rotationScale)) float_t  rotationScale;

/// @brief Field scrollableCount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scrollableCount, put=__cordl_internal_set_scrollableCount)) int32_t  scrollableCount;

/// @brief Field selectedIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedIndex, put=__cordl_internal_set_selectedIndex)) int32_t  selectedIndex;

/// @brief Field spinner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinner, put=__cordl_internal_set_spinner)) ::UnityW<::GlobalNamespace::ManipulatableSpinner>  spinner;

/// @brief Field visibleIcons, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_visibleIcons, put=__cordl_internal_set_visibleIcons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  visibleIcons;

/// @brief Method Awake, addr 0x575d534, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateRollers, addr 0x575d538, size 0x24c, virtual false, abstract: false, final false
inline void GenerateRollers() ;

/// @brief Method LateUpdate, addr 0x575d784, size 0x34, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TestManipulatableSpinnerIcons* New_ctor() ;

/// @brief Method UpdateRollers, addr 0x575d868, size 0x210, virtual false, abstract: false, final false
inline void UpdateRollers() ;

/// @brief Method UpdateSelectedIndex, addr 0x575d7b8, size 0xb0, virtual false, abstract: false, final false
inline void UpdateSelectedIndex() ;

constexpr float_t const& __cordl_internal_get_currentRotation() const;

constexpr float_t& __cordl_internal_get_currentRotation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_iconCanvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_iconCanvas() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_iconElementTemplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_iconElementTemplate() ;

constexpr float_t const& __cordl_internal_get_iconOffset() const;

constexpr float_t& __cordl_internal_get_iconOffset() ;

constexpr float_t const& __cordl_internal_get_rollerElementAngle() const;

constexpr float_t& __cordl_internal_get_rollerElementAngle() ;

constexpr int32_t const& __cordl_internal_get_rollerElementCount() const;

constexpr int32_t& __cordl_internal_get_rollerElementCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rollerElementTemplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rollerElementTemplate() ;

constexpr float_t const& __cordl_internal_get_rotationScale() const;

constexpr float_t& __cordl_internal_get_rotationScale() ;

constexpr int32_t const& __cordl_internal_get_scrollableCount() const;

constexpr int32_t& __cordl_internal_get_scrollableCount() ;

constexpr int32_t const& __cordl_internal_get_selectedIndex() const;

constexpr int32_t& __cordl_internal_get_selectedIndex() ;

constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner> const& __cordl_internal_get_spinner() const;

constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner>& __cordl_internal_get_spinner() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>* const& __cordl_internal_get_visibleIcons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*& __cordl_internal_get_visibleIcons() ;

constexpr void __cordl_internal_set_currentRotation(float_t  value) ;

constexpr void __cordl_internal_set_iconCanvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_iconElementTemplate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_iconOffset(float_t  value) ;

constexpr void __cordl_internal_set_rollerElementAngle(float_t  value) ;

constexpr void __cordl_internal_set_rollerElementCount(int32_t  value) ;

constexpr void __cordl_internal_set_rollerElementTemplate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rotationScale(float_t  value) ;

constexpr void __cordl_internal_set_scrollableCount(int32_t  value) ;

constexpr void __cordl_internal_set_selectedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_spinner(::UnityW<::GlobalNamespace::ManipulatableSpinner>  value) ;

constexpr void __cordl_internal_set_visibleIcons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  value) ;

/// @brief Method .ctor, addr 0x575da78, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestManipulatableSpinnerIcons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestManipulatableSpinnerIcons", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestManipulatableSpinnerIcons(TestManipulatableSpinnerIcons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestManipulatableSpinnerIcons", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestManipulatableSpinnerIcons(TestManipulatableSpinnerIcons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1337};

/// @brief Field spinner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManipulatableSpinner>  ___spinner;

/// @brief Field rotationScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___rotationScale;

/// @brief Field rollerElementCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___rollerElementCount;

/// @brief Field rollerElementTemplate, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rollerElementTemplate;

/// @brief Field iconCanvas, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___iconCanvas;

/// @brief Field iconElementTemplate, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___iconElementTemplate;

/// @brief Field iconOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ___iconOffset;

/// @brief Field rollerElementAngle, offset: 0x4c, size: 0x4, def value: None
 float_t  ___rollerElementAngle;

/// @brief Field visibleIcons, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  ___visibleIcons;

/// @brief Field currentRotation, offset: 0x58, size: 0x4, def value: None
 float_t  ___currentRotation;

/// @brief Field scrollableCount, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___scrollableCount;

/// @brief Field selectedIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___selectedIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___spinner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___rotationScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___rollerElementCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___rollerElementTemplate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___iconCanvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___iconElementTemplate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___iconOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___rollerElementAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___visibleIcons) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___currentRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___scrollableCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableSpinnerIcons, ___selectedIndex) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestManipulatableSpinnerIcons) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

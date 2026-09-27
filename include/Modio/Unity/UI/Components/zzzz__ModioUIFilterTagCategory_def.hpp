#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIFilterTagCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIFilterTagCategory)
namespace Modio::Mods {
class GameTagCategory;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIFilterTagCategory;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIFilterTagCategory*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIFilterTagCategory*, "Modio.Unity.UI.Components", "ModioUIFilterTagCategory");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIFilterTagCategory
class CORDL_TYPE ModioUIFilterTagCategory : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentFilterCount, put=set_CurrentFilterCount)) int32_t  CurrentFilterCount;

/// @brief Field <CurrentFilterCount>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentFilterCount_k__BackingField, put=__cordl_internal_set__CurrentFilterCount_k__BackingField)) int32_t  _CurrentFilterCount_k__BackingField;

/// @brief Field _categoryTitle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryTitle, put=__cordl_internal_set__categoryTitle)) ::UnityW<::TMPro::TMP_Text>  _categoryTitle;

/// @brief Field _filterCount, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterCount, put=__cordl_internal_set__filterCount)) ::UnityW<::TMPro::TMP_Text>  _filterCount;

/// @brief Field _filterCountBackground, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterCountBackground, put=__cordl_internal_set__filterCountBackground)) ::UnityW<::UnityEngine::GameObject>  _filterCountBackground;

static inline ::Modio::Unity::UI::Components::ModioUIFilterTagCategory* New_ctor() ;

/// @brief Method Reset, addr 0x9fb8e50, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetFilterCount, addr 0x9fb825c, size 0xf0, virtual false, abstract: false, final false
inline void SetFilterCount(int32_t  filterCount) ;

/// @brief Method Setup, addr 0x9fb8df8, size 0x3c, virtual false, abstract: false, final false
inline void Setup(::Modio::Mods::GameTagCategory*  category) ;

constexpr int32_t const& __cordl_internal_get__CurrentFilterCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentFilterCount_k__BackingField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__categoryTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__categoryTitle() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__filterCount() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__filterCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__filterCountBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__filterCountBackground() ;

constexpr void __cordl_internal_set__CurrentFilterCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__categoryTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__filterCount(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__filterCountBackground(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fb8ea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentFilterCount, addr 0x9fb8e40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentFilterCount() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentFilterCount, addr 0x9fb8e48, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentFilterCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterTagCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterTagCategory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIFilterTagCategory(ModioUIFilterTagCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterTagCategory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIFilterTagCategory(ModioUIFilterTagCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27144};

/// [SerializeField]
/// @brief Field _categoryTitle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____categoryTitle;

/// [SerializeField]
/// @brief Field _filterCount, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____filterCount;

/// [SerializeField]
/// @brief Field _filterCountBackground, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____filterCountBackground;

/// [CompilerGenerated]
/// @brief Field <CurrentFilterCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____CurrentFilterCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterTagCategory, ____categoryTitle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterTagCategory, ____filterCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterTagCategory, ____filterCountBackground) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterTagCategory, ____CurrentFilterCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIFilterTagCategory) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components

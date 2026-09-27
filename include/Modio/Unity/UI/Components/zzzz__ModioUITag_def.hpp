#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUITag)
namespace Modio::Mods {
class ModTag;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUITag;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITag*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITag*, "Modio.Unity.UI.Components", "ModioUITag");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITag
class CORDL_TYPE ModioUITag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TMP_Text>  _label;

/// @brief Field _tag, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::Modio::Mods::ModTag*  _tag;

static inline ::Modio::Unity::UI::Components::ModioUITag* New_ctor() ;

/// @brief Method Set, addr 0x9fbc108, size 0xb8, virtual true, abstract: false, final false
inline void Set(::Modio::Mods::ModTag*  tag) ;

/// @brief Method TagSelectedForSearch, addr 0x9fbc1c0, size 0x5c, virtual false, abstract: false, final false
inline void TagSelectedForSearch() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__label() ;

constexpr ::Modio::Mods::ModTag* const& __cordl_internal_get__tag() const;

constexpr ::Modio::Mods::ModTag*& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__tag(::Modio::Mods::ModTag*  value) ;

/// @brief Method .ctor, addr 0x9fbc21c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITag(ModioUITag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITag(ModioUITag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27156};

/// [SerializeField]
/// @brief Field _label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____label;

/// @brief Field _tag, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::ModTag*  ____tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITag, ____label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITag, ____tag) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITag) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components

#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceColors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BuilderResourceColors)
namespace GlobalNamespace {
struct BuilderResourceColor;
}
namespace GlobalNamespace {
struct BuilderResourceType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderResourceColors;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderResourceColors*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResourceColors*, "", "BuilderResourceColors");
// [CreateAssetMenu(fileName = "BuilderMaterialResourceColors", menuName = "Gorilla Tag/Builder/ResourceColors", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderResourceColors
class CORDL_TYPE BuilderResourceColors : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field colors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*  colors;

/// @brief Method GetColorForType, addr 0x57b3f94, size 0x174, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorForType(::GlobalNamespace::BuilderResourceType  type) ;

static inline ::GlobalNamespace::BuilderResourceColors* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>* const& __cordl_internal_get_colors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*& __cordl_internal_get_colors() ;

constexpr void __cordl_internal_set_colors(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*  value) ;

/// @brief Method .ctor, addr 0x57b4108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderResourceColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderResourceColors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderResourceColors(BuilderResourceColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderResourceColors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderResourceColors(BuilderResourceColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1572};

/// @brief Field colors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*  ___colors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResourceColors, ___colors) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResourceColors) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_Values`1_EmptyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_Values`1_EmptyData)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Values_1_StylePropertyAnimationSystem_EmptyData;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/EmptyData");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<T>
#pragma pack(push, 0)
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_EmptyData {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T>  Default;

static inline ::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T> getStaticF_Default() ;

static inline void setStaticF_Default(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Values_1_StylePropertyAnimationSystem_EmptyData() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace

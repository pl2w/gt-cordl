#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectLoadResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FusionGlobalScriptableObjectLoadResult)
namespace Fusion {
class FusionGlobalScriptableObjectUnloadDelegate;
}
namespace Fusion {
class FusionGlobalScriptableObject;
}
// Forward declare root types
namespace Fusion {
struct FusionGlobalScriptableObjectLoadResult;
}
// Write type traits
MARK_VAL_T(::Fusion::FusionGlobalScriptableObjectLoadResult);
DEFINE_IL2CPP_CLASS(::Fusion::FusionGlobalScriptableObjectLoadResult, "Fusion", "FusionGlobalScriptableObjectLoadResult");
// [IsReadOnly]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.FusionGlobalScriptableObjectLoadResult
struct CORDL_TYPE FusionGlobalScriptableObjectLoadResult {
public:
// Declarations
/// @brief Method .ctor, addr 0x5f3e6a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::FusionGlobalScriptableObject*  obj, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  unloader) ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionGlobalScriptableObjectLoadResult() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::UnityW<::Fusion::FusionGlobalScriptableObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Unloader", ty: "::Fusion::FusionGlobalScriptableObjectUnloadDelegate*", modifiers: "", def_value: None, comment: None }]
constexpr FusionGlobalScriptableObjectLoadResult(::UnityW<::Fusion::FusionGlobalScriptableObject>  Object, ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  Unloader) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Object, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionGlobalScriptableObject>  Object;

/// @brief Field Unloader, offset: 0x8, size: 0x8, def value: None
 ::Fusion::FusionGlobalScriptableObjectUnloadDelegate*  Unloader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectLoadResult, Object) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionGlobalScriptableObjectLoadResult, Unloader) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionGlobalScriptableObjectLoadResult) == 0x10, "Size mismatch!");

} // namespace end def Fusion

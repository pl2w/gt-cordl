#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSceneModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukSceneModel)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSceneModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukSceneModel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukSceneModel
struct CORDL_TYPE MRUKNativeFuncs_MrukSceneModel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukSceneModel_Unwrapped
enum struct __MRUKNativeFuncs_MrukSceneModel_Unwrapped : int32_t {
__E_V2FallbackV1 = static_cast<int32_t>(0x0),
__E_V1 = static_cast<int32_t>(0x1),
__E_V2 = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukSceneModel_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukSceneModel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukSceneModel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukSceneModel(int32_t  value__) noexcept;

/// @brief Field V1 value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel const V1;

/// @brief Field V2 value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel const V2;

/// @brief Field V2FallbackV1 value: I32(0)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel const V2FallbackV1;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

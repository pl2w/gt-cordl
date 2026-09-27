#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerationDeferrer_CallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerationDeferrer_CallbackInfo)
namespace System {
class Object;
}
namespace UnityEngine::UIElements::UIR {
class MeshGenerationCallback;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerationDeferrer_CallbackInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo, "UnityEngine.UIElements.UIR", "MeshGenerationDeferrer/CallbackInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerationDeferrer/CallbackInfo
struct CORDL_TYPE MeshGenerationDeferrer_CallbackInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerationDeferrer_CallbackInfo() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::UnityEngine::UIElements::UIR::MeshGenerationCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "userData", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerationDeferrer_CallbackInfo(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  callback, ::System::Object*  userData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field callback, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::MeshGenerationCallback*  callback;

/// @brief Field userData, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  userData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo, userData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

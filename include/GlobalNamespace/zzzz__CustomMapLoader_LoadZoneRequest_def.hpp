#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapLoader_LoadZoneRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapLoader_LoadZoneRequest)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapLoader_LoadZoneRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapLoader_LoadZoneRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader_LoadZoneRequest, "", "CustomMapLoader/LoadZoneRequest");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapLoader/LoadZoneRequest
struct CORDL_TYPE CustomMapLoader_LoadZoneRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader_LoadZoneRequest() ;

// Ctor Parameters [CppParam { name: "sceneIndexesToLoad", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneIndexesToUnload", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSceneLoadedCallback", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSceneUnloadedCallback", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapLoader_LoadZoneRequest(::ArrayW<int32_t>  sceneIndexesToLoad, ::ArrayW<int32_t>  sceneIndexesToUnload, ::System::Action_1<::StringW>*  onSceneLoadedCallback, ::System::Action_1<::StringW>*  onSceneUnloadedCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field sceneIndexesToLoad, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  sceneIndexesToLoad;

/// @brief Field sceneIndexesToUnload, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  sceneIndexesToUnload;

/// @brief Field onSceneLoadedCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSceneLoadedCallback;

/// @brief Field onSceneUnloadedCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSceneUnloadedCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader_LoadZoneRequest, sceneIndexesToLoad) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader_LoadZoneRequest, sceneIndexesToUnload) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader_LoadZoneRequest, onSceneLoadedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader_LoadZoneRequest, onSceneUnloadedCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader_LoadZoneRequest) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

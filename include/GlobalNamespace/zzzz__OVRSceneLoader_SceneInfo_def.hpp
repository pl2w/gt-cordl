#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneLoader_SceneInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneLoader_SceneInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneLoader_SceneInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneLoader_SceneInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneLoader_SceneInfo, "", "OVRSceneLoader/SceneInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneLoader/SceneInfo
struct CORDL_TYPE OVRSceneLoader_SceneInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0xa62e708, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::StringW>*  sceneList, int64_t  currentSceneEpochVersion) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneLoader_SceneInfo() ;

// Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneLoader_SceneInfo(::System::Collections::Generic::List_1<::StringW>*  scenes, int64_t  version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field scenes, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  scenes;

/// @brief Field version, offset: 0x8, size: 0x8, def value: None
 int64_t  version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneLoader_SceneInfo, scenes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneLoader_SceneInfo, version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneLoader_SceneInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

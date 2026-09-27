#pragma once
// IWYU pragma private; include "UnityEngine/LightmapSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LightmapSettings)
namespace UnityEngine {
class LightmapData;
}
namespace UnityEngine {
struct LightmapsMode;
}
// Forward declare root types
namespace UnityEngine {
class LightmapSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightmapSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightmapSettings*, "UnityEngine", "LightmapSettings");
// [StaticAccessor("GetLightmapSettings()")]
// [NativeHeader("Runtime/Graphics/LightmapSettings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightmapSettings
class CORDL_TYPE LightmapSettings : public ::UnityEngine::Object {
public:
// Declarations
/// [FreeFunction]
/// @brief Method get_lightmaps, addr 0xb580a54, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LightmapData*> get_lightmaps() ;

/// [FreeFunction(ThrowsException = true)]
/// @brief Method set_lightmaps, addr 0xb580a7c, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightmaps(/* [Unmarshalled] */ ::ArrayW<::UnityEngine::LightmapData*>  value) ;

/// [FreeFunction(ThrowsException = true)]
/// @brief Method set_lightmapsMode, addr 0xb580ab8, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightmapsMode(::UnityEngine::LightmapsMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapSettings(LightmapSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapSettings(LightmapSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightmapSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

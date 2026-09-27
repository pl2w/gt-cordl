#pragma once
// IWYU pragma private; include "GlobalNamespace/ILckVideoTextureProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckVideoTextureProvider)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ILckVideoTextureProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ILckVideoTextureProvider*, "", "ILckVideoTextureProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILckVideoTextureProvider
class CORDL_TYPE ILckVideoTextureProvider {
public:
// Declarations
 __declspec(property(get=get_CameraTrackTexture)) ::UnityW<::UnityEngine::RenderTexture>  CameraTrackTexture;

/// @brief Method get_CameraTrackTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_CameraTrackTexture() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckVideoTextureProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckVideoTextureProvider(ILckVideoTextureProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

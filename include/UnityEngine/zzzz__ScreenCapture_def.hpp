#pragma once
// IWYU pragma private; include "UnityEngine/ScreenCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScreenCapture)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine {
class ScreenCapture;
}
// Write type traits
MARK_REF_T(::UnityEngine::ScreenCapture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ScreenCapture*, "UnityEngine", "ScreenCapture");
// [NativeHeader("Modules/ScreenCapture/Public/CaptureScreenshot.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScreenCapture
class CORDL_TYPE ScreenCapture : public ::System::Object {
public:
// Declarations
/// @brief Method CaptureScreenshotIntoRenderTexture, addr 0xb6abf1c, size 0x7c, virtual false, abstract: false, final false
static inline void CaptureScreenshotIntoRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method CaptureScreenshotIntoRenderTexture_Injected, addr 0xb6abf98, size 0x3c, virtual false, abstract: false, final false
static inline void CaptureScreenshotIntoRenderTexture_Injected(::System::IntPtr  renderTexture) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenCapture(ScreenCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenCapture(ScreenCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ScreenCapture) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

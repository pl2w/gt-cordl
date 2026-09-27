#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Resolution;
}
namespace UnityEngine {
struct ScreenOrientation;
}
// Forward declare root types
namespace UnityEngine {
class Screen;
}
// Write type traits
MARK_REF_T(::UnityEngine::Screen*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Screen*, "UnityEngine", "Screen");
// [NativeHeader("Runtime/Graphics/ScreenManager.h")]
// [StaticAccessor("GetScreenManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/WindowLayout.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Screen
class CORDL_TYPE Screen : public ::System::Object {
public:
// Declarations
/// [NativeName("GetRequestedMSAASamples")]
/// @brief Method GetMSAASamples, addr 0xb57bd84, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMSAASamples() ;

/// @brief Method GetScreenOrientation, addr 0xb57bbcc, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ScreenOrientation GetScreenOrientation() ;

/// [NativeName("SetRequestedMSAASamples")]
/// @brief Method SetMSAASamples, addr 0xb57bd48, size 0x3c, virtual false, abstract: false, final false
static inline void SetMSAASamples(int32_t  numSamples) ;

/// @brief Method get_currentResolution, addr 0xb57bc1c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Resolution get_currentResolution() ;

/// @brief Method get_currentResolution_Injected, addr 0xb57bc60, size 0x3c, virtual false, abstract: false, final false
static inline void get_currentResolution_Injected(::by_ref<::UnityEngine::Resolution>  ret) ;

/// [NativeName("GetDPI")]
/// @brief Method get_dpi, addr 0xb57bba4, size 0x28, virtual false, abstract: false, final false
static inline float_t get_dpi() ;

/// [NativeName("IsFullscreen")]
/// @brief Method get_fullScreen, addr 0xb57bc9c, size 0x28, virtual false, abstract: false, final false
static inline bool get_fullScreen() ;

/// [NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
/// @brief Method get_height, addr 0xb57bb7c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_height() ;

/// @brief Method get_msaaSamples, addr 0xb57bdac, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_msaaSamples() ;

/// @brief Method get_orientation, addr 0xb57bbf4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ScreenOrientation get_orientation() ;

/// @brief Method get_safeArea, addr 0xb57bcc4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect get_safeArea() ;

/// @brief Method get_safeArea_Injected, addr 0xb57bd0c, size 0x3c, virtual false, abstract: false, final false
static inline void get_safeArea_Injected(::by_ref<::UnityEngine::Rect>  ret) ;

/// [NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
/// @brief Method get_width, addr 0xb57bb54, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_width() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Screen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Screen(Screen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Screen(Screen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Screen) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_ScopedCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVROverlayCanvas_ScopedCallback)
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayCanvas_ScopedCallback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayCanvas_ScopedCallback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas_ScopedCallback, "", "OVROverlayCanvas/ScopedCallback");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayCanvas/ScopedCallback
struct CORDL_TYPE OVROverlayCanvas_ScopedCallback {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method System.IDisposable.Dispose, addr 0xa6046a8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// [CompilerGenerated]
/// @brief Method add_OnDispose, addr 0xa603e64, size 0x9c, virtual false, abstract: false, final false
inline void add_OnDispose(::System::Action*  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDispose, addr 0xa60460c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnDispose(::System::Action*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_ScopedCallback() ;

// Ctor Parameters [CppParam { name: "OnDispose", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlayCanvas_ScopedCallback(::System::Action*  OnDispose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field OnDispose, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  OnDispose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_ScopedCallback, OnDispose) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas_ScopedCallback) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

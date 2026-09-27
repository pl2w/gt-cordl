#pragma once
// IWYU pragma private; include "Liv/Lck/ILckVideoMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckVideoMixer)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace Liv::Lck {
class ILckActiveCameraConfigurer;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckVideoMixer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckVideoMixer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckVideoMixer*, "Liv.Lck", "ILckVideoMixer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckVideoMixer
class CORDL_TYPE ILckVideoMixer {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr operator  ::GlobalNamespace::ILckVideoTextureProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr operator  ::Liv::Lck::ILckActiveCameraConfigurer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr ::GlobalNamespace::ILckVideoTextureProvider* i___GlobalNamespace__ILckVideoTextureProvider() noexcept;

/// @brief Convert to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr ::Liv::Lck::ILckActiveCameraConfigurer* i___Liv__Lck__ILckActiveCameraConfigurer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckVideoMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckVideoMixer(ILckVideoMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck

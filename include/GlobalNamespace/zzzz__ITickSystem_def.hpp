#pragma once
// IWYU pragma private; include "GlobalNamespace/ITickSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickSystem)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class ITickSystemPre;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
// Forward declare root types
namespace GlobalNamespace {
class ITickSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITickSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITickSystem*, "", "ITickSystem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITickSystem
class CORDL_TYPE ITickSystem {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITickSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITickSystem(ITickSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Fusion/ICoroutine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICoroutine)
namespace Fusion {
class IAsyncOperation;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Fusion {
class ICoroutine;
}
// Write type traits
MARK_REF_T(::Fusion::ICoroutine*);
DEFINE_IL2CPP_CLASS(::Fusion::ICoroutine*, "Fusion", "ICoroutine");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ICoroutine
class CORDL_TYPE ICoroutine {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IAsyncOperation"
constexpr operator  ::Fusion::IAsyncOperation*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert to "::Fusion::IAsyncOperation"
constexpr ::Fusion::IAsyncOperation* i___Fusion__IAsyncOperation() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICoroutine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICoroutine(ICoroutine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19049};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

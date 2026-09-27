#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/ILckCaptureErrorDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckCaptureErrorDispatcher)
namespace Liv::Lck::ErrorHandling {
struct LckCaptureError;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck::ErrorHandling {
class ILckCaptureErrorDispatcher;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*, "Liv.Lck.ErrorHandling", "ILckCaptureErrorDispatcher");
// Dependencies 
namespace Liv::Lck::ErrorHandling {
// Is value type: false
// CS Name: Liv.Lck.ErrorHandling.ILckCaptureErrorDispatcher
class CORDL_TYPE ILckCaptureErrorDispatcher {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method PushError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PushError(::Liv::Lck::ErrorHandling::LckCaptureError  error) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckCaptureErrorDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCaptureErrorDispatcher(ILckCaptureErrorDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::ErrorHandling

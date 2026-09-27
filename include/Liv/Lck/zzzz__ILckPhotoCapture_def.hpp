#pragma once
// IWYU pragma private; include "Liv/Lck/ILckPhotoCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckPhotoCapture)
namespace Liv::Lck {
class LckResult;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckPhotoCapture;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckPhotoCapture*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckPhotoCapture*, "Liv.Lck", "ILckPhotoCapture");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckPhotoCapture
class CORDL_TYPE ILckPhotoCapture {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Capture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* Capture() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckPhotoCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckPhotoCapture(ILckPhotoCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck

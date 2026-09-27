#pragma once
// IWYU pragma private; include "Liv/Lck/ILckEncodeLooper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckEncodeLooper)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckEncodeLooper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckEncodeLooper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckEncodeLooper*, "Liv.Lck", "ILckEncodeLooper");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckEncodeLooper
class CORDL_TYPE ILckEncodeLooper {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckEncodeLooper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckEncodeLooper(ILckEncodeLooper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck

#pragma once
// IWYU pragma private; include "Liv/Lck/ILckPreviewer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckPreviewer)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckPreviewer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckPreviewer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckPreviewer*, "Liv.Lck", "ILckPreviewer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckPreviewer
class CORDL_TYPE ILckPreviewer {
public:
// Declarations
 __declspec(property(get=get_IsPreviewActive, put=set_IsPreviewActive)) bool  IsPreviewActive;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_IsPreviewActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPreviewActive() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_IsPreviewActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IsPreviewActive(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckPreviewer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckPreviewer(ILckPreviewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck

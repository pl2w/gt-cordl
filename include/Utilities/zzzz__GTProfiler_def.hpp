#pragma once
// IWYU pragma private; include "Utilities/GTProfiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTProfiler)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Utilities {
class GTProfiler;
}
// Write type traits
MARK_REF_T(::Utilities::GTProfiler*);
DEFINE_IL2CPP_CLASS(::Utilities::GTProfiler*, "Utilities", "GTProfiler");
// Dependencies System.Object
namespace Utilities {
// Is value type: false
// CS Name: Utilities.GTProfiler
class CORDL_TYPE GTProfiler : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginSample, addr 0x5b710c8, size 0x8, virtual false, abstract: false, final false
static inline ::Utilities::GTProfiler* BeginSample(::StringW  sampleName) ;

/// @brief Method Dispose, addr 0x5b710d0, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Utilities::GTProfiler* New_ctor() ;

/// @brief Method .ctor, addr 0x5b710c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTProfiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTProfiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTProfiler(GTProfiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTProfiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTProfiler(GTProfiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::GTProfiler) == 0x10, "Size mismatch!");

} // namespace end def Utilities

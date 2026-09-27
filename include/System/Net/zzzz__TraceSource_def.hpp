#pragma once
// IWYU pragma private; include "System/Net/TraceSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TraceSource)
// Forward declare root types
namespace System::Net {
class TraceSource;
}
// Write type traits
MARK_REF_T(::System::Net::TraceSource*);
DEFINE_IL2CPP_CLASS(::System::Net::TraceSource*, "System.Net", "TraceSource");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TraceSource
class CORDL_TYPE TraceSource : public ::System::Object {
public:
// Declarations
static inline ::System::Net::TraceSource* New_ctor() ;

/// @brief Method .ctor, addr 0xac89800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceSource(TraceSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceSource(TraceSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::TraceSource) == 0x10, "Size mismatch!");

} // namespace end def System::Net

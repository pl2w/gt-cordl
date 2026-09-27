#pragma once
// IWYU pragma private; include "Modio/API/FilteringExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FilteringExtensions)
namespace Modio::API {
struct Filtering;
}
// Forward declare root types
namespace Modio::API {
class FilteringExtensions;
}
// Write type traits
MARK_REF_T(::Modio::API::FilteringExtensions*);
DEFINE_IL2CPP_CLASS(::Modio::API::FilteringExtensions*, "Modio.API", "FilteringExtensions");
// [Extension]
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.FilteringExtensions
class CORDL_TYPE FilteringExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ClearText, addr 0x9fded64, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW ClearText(::Modio::API::Filtering  filtering) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilteringExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilteringExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FilteringExtensions(FilteringExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilteringExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilteringExtensions(FilteringExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::FilteringExtensions) == 0x10, "Size mismatch!");

} // namespace end def Modio::API

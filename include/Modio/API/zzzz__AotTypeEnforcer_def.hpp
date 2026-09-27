#pragma once
// IWYU pragma private; include "Modio/API/AotTypeEnforcer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AotTypeEnforcer)
// Forward declare root types
namespace Modio::API {
class AotTypeEnforcer;
}
// Write type traits
MARK_REF_T(::Modio::API::AotTypeEnforcer*);
DEFINE_IL2CPP_CLASS(::Modio::API::AotTypeEnforcer*, "Modio.API", "AotTypeEnforcer");
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.AotTypeEnforcer
class CORDL_TYPE AotTypeEnforcer : public ::System::Object {
public:
// Declarations
/// @brief Method Hello, addr 0xa064518, size 0x5ec, virtual false, abstract: false, final false
static inline void Hello() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AotTypeEnforcer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AotTypeEnforcer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AotTypeEnforcer(AotTypeEnforcer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AotTypeEnforcer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AotTypeEnforcer(AotTypeEnforcer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::AotTypeEnforcer) == 0x10, "Size mismatch!");

} // namespace end def Modio::API

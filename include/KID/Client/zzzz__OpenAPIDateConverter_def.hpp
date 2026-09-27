#pragma once
// IWYU pragma private; include "KID/Client/OpenAPIDateConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IsoDateTimeConverter_def.hpp"
CORDL_MODULE_EXPORT(OpenAPIDateConverter)
// Forward declare root types
namespace KID::Client {
class OpenAPIDateConverter;
}
// Write type traits
MARK_REF_T(::KID::Client::OpenAPIDateConverter*);
DEFINE_IL2CPP_CLASS(::KID::Client::OpenAPIDateConverter*, "KID.Client", "OpenAPIDateConverter");
// Dependencies Newtonsoft.Json.Converters.IsoDateTimeConverter
namespace KID::Client {
// Is value type: false
// CS Name: KID.Client.OpenAPIDateConverter
class CORDL_TYPE OpenAPIDateConverter : public ::Newtonsoft::Json::Converters::IsoDateTimeConverter {
public:
// Declarations
static inline ::KID::Client::OpenAPIDateConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x9cdb39c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenAPIDateConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenAPIDateConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenAPIDateConverter(OpenAPIDateConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenAPIDateConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenAPIDateConverter(OpenAPIDateConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::KID::Client::OpenAPIDateConverter) == 0x28, "Size mismatch!");

} // namespace end def KID::Client

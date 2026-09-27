#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/DesigntimeLicenseContextSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DesigntimeLicenseContextSerializer)
namespace System::ComponentModel::Design {
class RuntimeLicenseContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class DesigntimeLicenseContextSerializer;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*, "System.ComponentModel.Design", "DesigntimeLicenseContextSerializer");
// Dependencies System.Object
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesigntimeLicenseContextSerializer
class CORDL_TYPE DesigntimeLicenseContextSerializer : public ::System::Object {
public:
// Declarations
/// @brief Method Deserialize, addr 0xad99410, size 0x208, virtual false, abstract: false, final false
static inline void Deserialize(::System::IO::Stream*  o, ::StringW  cryptoKey, ::System::ComponentModel::Design::RuntimeLicenseContext*  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DesigntimeLicenseContextSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DesigntimeLicenseContextSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DesigntimeLicenseContextSerializer(DesigntimeLicenseContextSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesigntimeLicenseContextSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesigntimeLicenseContextSerializer(DesigntimeLicenseContextSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::Design::DesigntimeLicenseContextSerializer) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel::Design

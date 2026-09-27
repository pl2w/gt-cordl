#pragma once
// IWYU pragma private; include "System/Data/DefaultValueTypeConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__StringConverter_def.hpp"
CORDL_MODULE_EXPORT(DefaultValueTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DefaultValueTypeConverter;
}
// Write type traits
MARK_REF_T(::System::Data::DefaultValueTypeConverter*);
DEFINE_IL2CPP_CLASS(::System::Data::DefaultValueTypeConverter*, "System.Data", "DefaultValueTypeConverter");
// Dependencies System.ComponentModel.StringConverter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DefaultValueTypeConverter
class CORDL_TYPE DefaultValueTypeConverter : public ::System::ComponentModel::StringConverter {
public:
// Declarations
/// @brief Method ConvertFrom, addr 0xa936bc8, size 0x16c, virtual true, abstract: false, final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertTo, addr 0xa936a3c, size 0x18c, virtual true, abstract: false, final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

static inline ::System::Data::DefaultValueTypeConverter* New_ctor() ;

/// @brief Method .ctor, addr 0xa936a34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultValueTypeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultValueTypeConverter(DefaultValueTypeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueTypeConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultValueTypeConverter(DefaultValueTypeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::DefaultValueTypeConverter) == 0x10, "Size mismatch!");

} // namespace end def System::Data

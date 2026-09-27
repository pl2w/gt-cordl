#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimePackingFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DateTimeOptions)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class DateTimeOptions;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::DateTimeOptions*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::DateTimeOptions*, "SouthPointe.Serialization.MessagePack", "DateTimeOptions");
// Dependencies SouthPointe.Serialization.MessagePack.DateTimePackingFormat, System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.DateTimeOptions
class CORDL_TYPE DateTimeOptions : public ::System::Object {
public:
// Declarations
/// @brief Field PackingFormat, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PackingFormat, put=__cordl_internal_set_PackingFormat)) ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  PackingFormat;

static inline ::SouthPointe::Serialization::MessagePack::DateTimeOptions* New_ctor() ;

constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat const& __cordl_internal_get_PackingFormat() const;

constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat& __cordl_internal_get_PackingFormat() ;

constexpr void __cordl_internal_set_PackingFormat(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  value) ;

/// @brief Method .ctor, addr 0x9d0aa60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeOptions(DateTimeOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeOptions(DateTimeOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31743};

/// @brief Field PackingFormat, offset: 0x10, size: 0x4, def value: None
 ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  ___PackingFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::DateTimeOptions, ___PackingFormat) == 0x10, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::DateTimeOptions) == 0x18, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack

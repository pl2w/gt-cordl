#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/EnumOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "SouthPointe/Serialization/MessagePack/zzzz__EnumPackingFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumOptions)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class EnumOptions;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::EnumOptions*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::EnumOptions*, "SouthPointe.Serialization.MessagePack", "EnumOptions");
// Dependencies SouthPointe.Serialization.MessagePack.EnumPackingFormat, System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.EnumOptions
class CORDL_TYPE EnumOptions : public ::System::Object {
public:
// Declarations
/// @brief Field PackingFormat, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PackingFormat, put=__cordl_internal_set_PackingFormat)) ::SouthPointe::Serialization::MessagePack::EnumPackingFormat  PackingFormat;

static inline ::SouthPointe::Serialization::MessagePack::EnumOptions* New_ctor() ;

constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat const& __cordl_internal_get_PackingFormat() const;

constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat& __cordl_internal_get_PackingFormat() ;

constexpr void __cordl_internal_set_PackingFormat(::SouthPointe::Serialization::MessagePack::EnumPackingFormat  value) ;

/// @brief Method .ctor, addr 0x9d0aa68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumOptions(EnumOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumOptions(EnumOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31745};

/// @brief Field PackingFormat, offset: 0x10, size: 0x4, def value: None
 ::SouthPointe::Serialization::MessagePack::EnumPackingFormat  ___PackingFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::EnumOptions, ___PackingFormat) == 0x10, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::EnumOptions) == 0x18, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack

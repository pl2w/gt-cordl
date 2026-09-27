#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/JsonOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonOptions)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class JsonOptions;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::JsonOptions*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::JsonOptions*, "SouthPointe.Serialization.MessagePack", "JsonOptions");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.JsonOptions
class CORDL_TYPE JsonOptions : public ::System::Object {
public:
// Declarations
/// @brief Field IndentationString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_IndentationString, put=__cordl_internal_set_IndentationString)) ::StringW  IndentationString;

/// @brief Field PrettyPrint, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_PrettyPrint, put=__cordl_internal_set_PrettyPrint)) bool  PrettyPrint;

/// @brief Field ValueSeparator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValueSeparator, put=__cordl_internal_set_ValueSeparator)) ::StringW  ValueSeparator;

static inline ::SouthPointe::Serialization::MessagePack::JsonOptions* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_IndentationString() const;

constexpr ::StringW& __cordl_internal_get_IndentationString() ;

constexpr bool const& __cordl_internal_get_PrettyPrint() const;

constexpr bool& __cordl_internal_get_PrettyPrint() ;

constexpr ::StringW const& __cordl_internal_get_ValueSeparator() const;

constexpr ::StringW& __cordl_internal_get_ValueSeparator() ;

constexpr void __cordl_internal_set_IndentationString(::StringW  value) ;

constexpr void __cordl_internal_set_PrettyPrint(bool  value) ;

constexpr void __cordl_internal_set_ValueSeparator(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d0aa70, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonOptions(JsonOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonOptions(JsonOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31748};

/// @brief Field PrettyPrint, offset: 0x10, size: 0x1, def value: None
 bool  ___PrettyPrint;

/// @brief Field IndentationString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___IndentationString;

/// @brief Field ValueSeparator, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ValueSeparator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonOptions, ___PrettyPrint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonOptions, ___IndentationString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::SouthPointe::Serialization::MessagePack::JsonOptions, ___ValueSeparator) == 0x20, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::JsonOptions) == 0x28, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack

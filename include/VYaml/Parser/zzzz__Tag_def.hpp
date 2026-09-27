#pragma once
// IWYU pragma private; include "VYaml/Parser/Tag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Tag)
namespace VYaml::Parser {
class ITokenContent;
}
// Forward declare root types
namespace VYaml::Parser {
class Tag;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::Tag*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Tag*, "VYaml.Parser", "Tag");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.Tag
class CORDL_TYPE Tag : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Handle)) ::StringW  Handle;

 __declspec(property(get=get_Suffix)) ::StringW  Suffix;

/// @brief Field <Handle>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Handle_k__BackingField, put=__cordl_internal_set__Handle_k__BackingField)) ::StringW  _Handle_k__BackingField;

/// @brief Field <Suffix>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Suffix_k__BackingField, put=__cordl_internal_set__Suffix_k__BackingField)) ::StringW  _Suffix_k__BackingField;

/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr operator  ::VYaml::Parser::ITokenContent*() noexcept;

/// @brief Method Equals, addr 0xb95be00, size 0x88, virtual false, abstract: false, final false
inline bool Equals(::StringW  tagString) ;

static inline ::VYaml::Parser::Tag* New_ctor(::StringW  handle, ::StringW  suffix) ;

/// @brief Method ToString, addr 0xb95bdf0, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Handle_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Handle_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Suffix_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Suffix_k__BackingField() ;

constexpr void __cordl_internal_set__Handle_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Suffix_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb95bdac, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  handle, ::StringW  suffix) ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xb95bd9c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Handle() ;

/// [CompilerGenerated]
/// @brief Method get_Suffix, addr 0xb95bda4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Suffix() ;

/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* i___VYaml__Parser__ITokenContent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tag(Tag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tag(Tag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29014};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Handle_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Suffix>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Suffix_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Tag, ____Handle_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Tag, ____Suffix_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Tag) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Parser

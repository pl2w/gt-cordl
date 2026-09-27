#pragma once
// IWYU pragma private; include "VYaml/Parser/Anchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Anchor)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace VYaml::Parser {
class Anchor;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::Anchor*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Anchor*, "VYaml.Parser", "Anchor");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.Anchor
class CORDL_TYPE Anchor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Id)) int32_t  Id;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <Id>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) int32_t  _Id_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Convert operator to "::System::IEquatable_1<::VYaml::Parser::Anchor*>"
constexpr operator  ::System::IEquatable_1<::VYaml::Parser::Anchor*>*() noexcept;

/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb95bbc4, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [NullableContext(2)]
/// @brief Method Equals, addr 0xb95bba4, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::VYaml::Parser::Anchor*  other) ;

/// @brief Method GetHashCode, addr 0xb95bc50, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::VYaml::Parser::Anchor* New_ctor(::StringW  name, int32_t  id) ;

/// @brief Method ToString, addr 0xb95bc58, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb95bb68, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  id) ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0xb95bb60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb95bb58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Convert to "::System::IEquatable_1<::VYaml::Parser::Anchor*>"
constexpr ::System::IEquatable_1<::VYaml::Parser::Anchor*>* i___System__IEquatable_1___VYaml__Parser__Anchor__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Anchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Anchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Anchor(Anchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Anchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Anchor(Anchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29011};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Id_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Anchor, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Anchor, ____Id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Anchor) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Parser

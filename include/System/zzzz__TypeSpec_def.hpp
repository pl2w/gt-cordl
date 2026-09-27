#pragma once
// IWYU pragma private; include "System/TypeSpec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeSpec)
namespace GlobalNamespace {
struct TypeSpec_DisplayNameFormat;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class ModifierSpec;
}
namespace System {
class TypeIdentifier;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class TypeSpec;
}
// Write type traits
MARK_REF_T(::System::TypeSpec*);
DEFINE_IL2CPP_CLASS(::System::TypeSpec*, "System", "TypeSpec");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TypeSpec
class CORDL_TYPE TypeSpec : public ::System::Object {
public:
// Declarations
using DisplayNameFormat = ::GlobalNamespace::TypeSpec_DisplayNameFormat;

 __declspec(property(get=get_DisplayFullName)) ::StringW  DisplayFullName;

 __declspec(property(get=get_HasModifiers)) bool  HasModifiers;

/// @brief Field assembly_name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_assembly_name, put=__cordl_internal_set_assembly_name)) ::StringW  assembly_name;

/// @brief Field display_fullname, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_display_fullname, put=__cordl_internal_set_display_fullname)) ::StringW  display_fullname;

/// @brief Field generic_params, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_generic_params, put=__cordl_internal_set_generic_params)) ::System::Collections::Generic::List_1<::System::TypeSpec*>*  generic_params;

/// @brief Field is_byref, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_is_byref, put=__cordl_internal_set_is_byref)) bool  is_byref;

/// @brief Field modifier_spec, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifier_spec, put=__cordl_internal_set_modifier_spec)) ::System::Collections::Generic::List_1<::System::ModifierSpec*>*  modifier_spec;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::System::TypeIdentifier*  name;

/// @brief Field nested, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nested, put=__cordl_internal_set_nested)) ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*  nested;

/// @brief Method AddModifier, addr 0xa33a1e4, size 0x100, virtual false, abstract: false, final false
inline void AddModifier(::System::ModifierSpec*  md) ;

/// @brief Method AddName, addr 0xa33a09c, size 0x140, virtual false, abstract: false, final false
inline void AddName(::StringW  type_name) ;

/// @brief Method BoundCheck, addr 0xa33a374, size 0x84, virtual false, abstract: false, final false
static inline void BoundCheck(int32_t  idx, ::StringW  s) ;

/// @brief Method GetDisplayFullName, addr 0xa338350, size 0x430, virtual false, abstract: false, final false
inline ::StringW GetDisplayFullName(::GlobalNamespace::TypeSpec_DisplayNameFormat  flags) ;

/// @brief Method GetModifierString, addr 0xa3387c4, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder*  sb) ;

static inline ::System::TypeSpec* New_ctor() ;

/// @brief Method Parse, addr 0xa338a64, size 0xbe4, virtual false, abstract: false, final false
static inline ::System::TypeSpec* Parse(::StringW  name, ::by_ref<int32_t>  p, bool  is_recurse, bool  allow_aqn) ;

/// @brief Method Parse, addr 0xa338994, size 0xd0, virtual false, abstract: false, final false
static inline ::System::TypeSpec* Parse(::StringW  typeName) ;

/// @brief Method ParsedTypeIdentifier, addr 0xa33a1dc, size 0x8, virtual false, abstract: false, final false
static inline ::System::TypeIdentifier* ParsedTypeIdentifier(::StringW  displayName) ;

/// @brief Method Resolve, addr 0xa33973c, size 0x960, virtual false, abstract: false, final false
inline ::System::Type* Resolve(::System::Func_2<::System::Reflection::AssemblyName*,::System::Reflection::Assembly*>*  assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*,::StringW,bool,::System::Type*>*  typeResolver, bool  throwOnError, bool  ignoreCase, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method SkipSpace, addr 0xa33a2e4, size 0x90, virtual false, abstract: false, final false
static inline void SkipSpace(::StringW  name, ::by_ref<int32_t>  pos) ;

/// @brief Method UnescapeInternalName, addr 0xa339648, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW UnescapeInternalName(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get_assembly_name() const;

constexpr ::StringW& __cordl_internal_get_assembly_name() ;

constexpr ::StringW const& __cordl_internal_get_display_fullname() const;

constexpr ::StringW& __cordl_internal_get_display_fullname() ;

constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>* const& __cordl_internal_get_generic_params() const;

constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>*& __cordl_internal_get_generic_params() ;

constexpr bool const& __cordl_internal_get_is_byref() const;

constexpr bool& __cordl_internal_get_is_byref() ;

constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>* const& __cordl_internal_get_modifier_spec() const;

constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>*& __cordl_internal_get_modifier_spec() ;

constexpr ::System::TypeIdentifier* const& __cordl_internal_get_name() const;

constexpr ::System::TypeIdentifier*& __cordl_internal_get_name() ;

constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>* const& __cordl_internal_get_nested() const;

constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*& __cordl_internal_get_nested() ;

constexpr void __cordl_internal_set_assembly_name(::StringW  value) ;

constexpr void __cordl_internal_set_display_fullname(::StringW  value) ;

constexpr void __cordl_internal_set_generic_params(::System::Collections::Generic::List_1<::System::TypeSpec*>*  value) ;

constexpr void __cordl_internal_set_is_byref(bool  value) ;

constexpr void __cordl_internal_set_modifier_spec(::System::Collections::Generic::List_1<::System::ModifierSpec*>*  value) ;

constexpr void __cordl_internal_set_name(::System::TypeIdentifier*  value) ;

constexpr void __cordl_internal_set_nested(::System::Collections::Generic::List_1<::System::TypeIdentifier*>*  value) ;

/// @brief Method .ctor, addr 0xa33a3f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayFullName, addr 0xa338780, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_DisplayFullName() ;

/// @brief Method get_HasModifiers, addr 0xa338340, size 0x10, virtual false, abstract: false, final false
inline bool get_HasModifiers() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeSpec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeSpec(TypeSpec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeSpec(TypeSpec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5761};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::System::TypeIdentifier*  ___name;

/// @brief Field assembly_name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___assembly_name;

/// @brief Field nested, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*  ___nested;

/// @brief Field generic_params, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::TypeSpec*>*  ___generic_params;

/// @brief Field modifier_spec, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ModifierSpec*>*  ___modifier_spec;

/// @brief Field is_byref, offset: 0x38, size: 0x1, def value: None
 bool  ___is_byref;

/// @brief Field display_fullname, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___display_fullname;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TypeSpec, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___assembly_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___nested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___generic_params) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___modifier_spec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___is_byref) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TypeSpec, ___display_fullname) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::TypeSpec) == 0x48, "Size mismatch!");

} // namespace end def System

#pragma once
// IWYU pragma private; include "System/ComponentModel/ParenthesizePropertyNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParenthesizePropertyNameAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ParenthesizePropertyNameAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ParenthesizePropertyNameAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ParenthesizePropertyNameAttribute*, "System.ComponentModel", "ParenthesizePropertyNameAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ParenthesizePropertyNameAttribute
class CORDL_TYPE ParenthesizePropertyNameAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::ParenthesizePropertyNameAttribute*  Default;

 __declspec(property(get=get_NeedParenthesis)) bool  NeedParenthesis;

/// @brief Field needParenthesis, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_needParenthesis, put=__cordl_internal_set_needParenthesis)) bool  needParenthesis;

/// @brief Method Equals, addr 0xad97eb8, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0xad97f28, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad97f30, size 0x68, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* New_ctor() ;

static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* New_ctor(bool  needParenthesis) ;

constexpr bool const& __cordl_internal_get_needParenthesis() const;

constexpr bool& __cordl_internal_get_needParenthesis() ;

constexpr void __cordl_internal_set_needParenthesis(bool  value) ;

/// @brief Method .ctor, addr 0xad97e6c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad97e88, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  needParenthesis) ;

static inline ::System::ComponentModel::ParenthesizePropertyNameAttribute* getStaticF_Default() ;

/// @brief Method get_NeedParenthesis, addr 0xad97eb0, size 0x8, virtual false, abstract: false, final false
inline bool get_NeedParenthesis() ;

static inline void setStaticF_Default(::System::ComponentModel::ParenthesizePropertyNameAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParenthesizePropertyNameAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParenthesizePropertyNameAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParenthesizePropertyNameAttribute(ParenthesizePropertyNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParenthesizePropertyNameAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParenthesizePropertyNameAttribute(ParenthesizePropertyNameAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10301};

/// @brief Field needParenthesis, offset: 0x10, size: 0x1, def value: None
 bool  ___needParenthesis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ParenthesizePropertyNameAttribute, ___needParenthesis) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ParenthesizePropertyNameAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel

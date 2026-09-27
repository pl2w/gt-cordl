#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/RequiredListLengthAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequiredListLengthAttribute)
// Forward declare root types
namespace Sirenix::OdinInspector {
class RequiredListLengthAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::RequiredListLengthAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::RequiredListLengthAttribute*, "Sirenix.OdinInspector", "RequiredListLengthAttribute");
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.RequiredListLengthAttribute
class CORDL_TYPE RequiredListLengthAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field MaxLengthGetter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxLengthGetter, put=__cordl_internal_set_MaxLengthGetter)) ::StringW  MaxLengthGetter;

/// [ShowInInspector]
/// @brief [OdinDesignerBinding(new[] { "minLength", "minLengthIsSet" })]
 __declspec(property(put=set_MinLength)) int32_t  MinLength;

/// @brief Field MinLengthGetter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinLengthGetter, put=__cordl_internal_set_MinLengthGetter)) ::StringW  MinLengthGetter;

/// @brief Field minLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minLength, put=__cordl_internal_set_minLength)) int32_t  minLength;

/// @brief Field minLengthIsSet, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_minLengthIsSet, put=__cordl_internal_set_minLengthIsSet)) bool  minLengthIsSet;

static inline ::Sirenix::OdinInspector::RequiredListLengthAttribute* New_ctor(::StringW  fixedLengthGetter) ;

static inline ::Sirenix::OdinInspector::RequiredListLengthAttribute* New_ctor(int32_t  minLength, ::StringW  maxLengthGetter) ;

constexpr ::StringW const& __cordl_internal_get_MaxLengthGetter() const;

constexpr ::StringW& __cordl_internal_get_MaxLengthGetter() ;

constexpr ::StringW const& __cordl_internal_get_MinLengthGetter() const;

constexpr ::StringW& __cordl_internal_get_MinLengthGetter() ;

constexpr int32_t const& __cordl_internal_get_minLength() const;

constexpr int32_t& __cordl_internal_get_minLength() ;

constexpr bool const& __cordl_internal_get_minLengthIsSet() const;

constexpr bool& __cordl_internal_get_minLengthIsSet() ;

constexpr void __cordl_internal_set_MaxLengthGetter(::StringW  value) ;

constexpr void __cordl_internal_set_MinLengthGetter(::StringW  value) ;

constexpr void __cordl_internal_set_minLength(int32_t  value) ;

constexpr void __cordl_internal_set_minLengthIsSet(bool  value) ;

/// @brief Method .ctor, addr 0xa84e78c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  fixedLengthGetter) ;

/// @brief Method .ctor, addr 0xa84e74c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  minLength, ::StringW  maxLengthGetter) ;

/// @brief Method set_MinLength, addr 0xa84e73c, size 0x10, virtual false, abstract: false, final false
inline void set_MinLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequiredListLengthAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequiredListLengthAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequiredListLengthAttribute(RequiredListLengthAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequiredListLengthAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequiredListLengthAttribute(RequiredListLengthAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33045};

/// @brief Field minLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ___minLength;

/// @brief Field minLengthIsSet, offset: 0x14, size: 0x1, def value: None
 bool  ___minLengthIsSet;

/// @brief Field MinLengthGetter, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MinLengthGetter;

/// @brief Field MaxLengthGetter, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MaxLengthGetter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Sirenix::OdinInspector::RequiredListLengthAttribute, ___minLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Sirenix::OdinInspector::RequiredListLengthAttribute, ___minLengthIsSet) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Sirenix::OdinInspector::RequiredListLengthAttribute, ___MinLengthGetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Sirenix::OdinInspector::RequiredListLengthAttribute, ___MaxLengthGetter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Sirenix::OdinInspector::RequiredListLengthAttribute) == 0x28, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector

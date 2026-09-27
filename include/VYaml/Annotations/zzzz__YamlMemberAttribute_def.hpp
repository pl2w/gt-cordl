#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlMemberAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(YamlMemberAttribute)
// Forward declare root types
namespace VYaml::Annotations {
class YamlMemberAttribute;
}
// Write type traits
MARK_REF_T(::VYaml::Annotations::YamlMemberAttribute*);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::YamlMemberAttribute*, "VYaml.Annotations", "YamlMemberAttribute");
// [NullableContext(2)]
// [Nullable(0)]
// [AttributeUsage((System.AttributeTargets)384, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace VYaml::Annotations {
// Is value type: false
// CS Name: VYaml.Annotations.YamlMemberAttribute
class CORDL_TYPE YamlMemberAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Order, put=set_Order)) int32_t  Order;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Order>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Order_k__BackingField, put=__cordl_internal_set__Order_k__BackingField)) int32_t  _Order_k__BackingField;

static inline ::VYaml::Annotations::YamlMemberAttribute* New_ctor(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Order_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Order_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Order_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xb9730e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb9730c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Order, addr 0xb9730d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Order() ;

/// [CompilerGenerated]
/// @brief Method set_Order, addr 0xb9730d8, size 0x8, virtual false, abstract: false, final false
inline void set_Order(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlMemberAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlMemberAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlMemberAttribute(YamlMemberAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlMemberAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlMemberAttribute(YamlMemberAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29049};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Order>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Order_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Annotations::YamlMemberAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Annotations::YamlMemberAttribute, ____Order_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Annotations::YamlMemberAttribute) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Annotations

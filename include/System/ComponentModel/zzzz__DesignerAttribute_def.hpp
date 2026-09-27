#pragma once
// IWYU pragma private; include "System/ComponentModel/DesignerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DesignerAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DesignerAttribute*, "System.ComponentModel", "DesignerAttribute");
// [Conditional("FALSE")]
// [AttributeUsage((System.AttributeTargets)1028, AllowMultiple = true, Inherited = true)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DesignerAttribute
class CORDL_TYPE DesignerAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_DesignerBaseTypeName)) ::StringW  DesignerBaseTypeName;

 __declspec(property(get=get_DesignerTypeName)) ::StringW  DesignerTypeName;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Field designerBaseTypeName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_designerBaseTypeName, put=__cordl_internal_set_designerBaseTypeName)) ::StringW  designerBaseTypeName;

/// @brief Field designerTypeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_designerTypeName, put=__cordl_internal_set_designerTypeName)) ::StringW  designerTypeName;

/// @brief Field typeId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeId, put=__cordl_internal_set_typeId)) ::StringW  typeId;

/// @brief Method Equals, addr 0xad71480, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad71518, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::System::Type*  designerType) ;

static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::System::Type*  designerType, ::System::Type*  designerBaseType) ;

static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW  designerTypeName) ;

static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW  designerTypeName, ::System::Type*  designerBaseType) ;

static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW  designerTypeName, ::StringW  designerBaseTypeName) ;

constexpr ::StringW const& __cordl_internal_get_designerBaseTypeName() const;

constexpr ::StringW& __cordl_internal_get_designerBaseTypeName() ;

constexpr ::StringW const& __cordl_internal_get_designerTypeName() const;

constexpr ::StringW& __cordl_internal_get_designerTypeName() ;

constexpr ::StringW const& __cordl_internal_get_typeId() const;

constexpr ::StringW& __cordl_internal_get_typeId() ;

constexpr void __cordl_internal_set_designerBaseTypeName(::StringW  value) ;

constexpr void __cordl_internal_set_designerTypeName(::StringW  value) ;

constexpr void __cordl_internal_set_typeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xad7112c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  designerType) ;

/// @brief Method .ctor, addr 0xad71358, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  designerType, ::System::Type*  designerBaseType) ;

/// @brief Method .ctor, addr 0xad71038, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::StringW  designerTypeName) ;

/// @brief Method .ctor, addr 0xad71298, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  designerTypeName, ::System::Type*  designerBaseType) ;

/// @brief Method .ctor, addr 0xad711f0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  designerTypeName, ::StringW  designerBaseTypeName) ;

/// @brief Method get_DesignerBaseTypeName, addr 0xad713d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DesignerBaseTypeName() ;

/// @brief Method get_DesignerTypeName, addr 0xad713d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DesignerTypeName() ;

/// @brief Method get_TypeId, addr 0xad713e0, size 0xa0, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DesignerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DesignerAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DesignerAttribute(DesignerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DesignerAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DesignerAttribute(DesignerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10266};

/// @brief Field designerTypeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___designerTypeName;

/// @brief Field designerBaseTypeName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___designerBaseTypeName;

/// @brief Field typeId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___typeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___designerTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___designerBaseTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___typeId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::DesignerAttribute) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel

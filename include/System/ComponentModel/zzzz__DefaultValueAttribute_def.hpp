#pragma once
// IWYU pragma private; include "System/ComponentModel/DefaultValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DefaultValueAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DefaultValueAttribute
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Object*  _value;

/// @brief Field s_convertFromInvariantString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_convertFromInvariantString, put=setStaticF_s_convertFromInvariantString)) ::System::Object*  s_convertFromInvariantString;

/// @brief Method Equals, addr 0xad44e14, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad44f14, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Type*  type, ::StringW  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::StringW  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Object*  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(bool  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(char16_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(double_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(float_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int16_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int32_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int64_t  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(int8_t  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint16_t  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint32_t  value) ;

/// @brief [CLSCompliant(false)]
static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint64_t  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(uint8_t  value) ;

/// @brief Method SetValue, addr 0xad44f1c, size 0x8, virtual false, abstract: false, final false
inline void SetValue(::System::Object*  value) ;

constexpr ::System::Object* const& __cordl_internal_get__value() const;

constexpr ::System::Object*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>g__TryConvertFromInvariantString|2_0, addr 0xad44818, size 0x204, virtual false, abstract: false, final false
static inline bool __ctor_g__TryConvertFromInvariantString_2_0(::System::Type*  typeToConvert, ::StringW  stringValue, ::by_ref<::System::Object*>  conversionResult) ;

/// @brief Method .ctor, addr 0xad44534, size 0x2e4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::StringW  value) ;

/// @brief Method .ctor, addr 0xad44c7c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xad44cac, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad44c30, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(bool  value) ;

/// @brief Method .ctor, addr 0xad44a1c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(char16_t  value) ;

/// @brief Method .ctor, addr 0xad44be4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xad44b98, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xad44ab4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int16_t  value) ;

/// @brief Method .ctor, addr 0xad44b00, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0xad44b4c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xad44cdc, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int8_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xad44d28, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xad44d74, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xad44dc0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

/// @brief Method .ctor, addr 0xad44a68, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

static inline ::System::Object* getStaticF_s_convertFromInvariantString() ;

/// @brief Method get_Value, addr 0xad44e0c, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_Value() ;

static inline void setStaticF_s_convertFromInvariantString(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultValueAttribute(DefaultValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultValueAttribute(DefaultValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10086};

/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DefaultValueAttribute, ____value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::DefaultValueAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel

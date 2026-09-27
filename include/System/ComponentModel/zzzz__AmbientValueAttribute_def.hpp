#pragma once
// IWYU pragma private; include "System/ComponentModel/AmbientValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientValueAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AmbientValueAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AmbientValueAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AmbientValueAttribute
class CORDL_TYPE AmbientValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::System::Object*  _Value_k__BackingField;

/// @brief Method Equals, addr 0xad488bc, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad48954, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::System::Type*  type, ::StringW  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::StringW  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(::System::Object*  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(bool  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(char16_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(double_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(float_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int16_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int32_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(int64_t  value) ;

static inline ::System::ComponentModel::AmbientValueAttribute* New_ctor(uint8_t  value) ;

constexpr ::System::Object* const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad484d4, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::StringW  value) ;

/// @brief Method .ctor, addr 0xad48854, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xad48884, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad48808, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(bool  value) ;

/// @brief Method .ctor, addr 0xad485f4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(char16_t  value) ;

/// @brief Method .ctor, addr 0xad487bc, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xad48770, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xad4868c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int16_t  value) ;

/// @brief Method .ctor, addr 0xad486d8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0xad48724, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// @brief Method .ctor, addr 0xad48640, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0xad488b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbientValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientValueAttribute(AmbientValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientValueAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientValueAttribute(AmbientValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10114};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AmbientValueAttribute, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::AmbientValueAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel

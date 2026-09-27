#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DefaultParameterValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DefaultParameterValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DefaultParameterValueAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::DefaultParameterValueAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::DefaultParameterValueAttribute*, "System.Runtime.InteropServices", "DefaultParameterValueAttribute");
// [AttributeUsage((System.AttributeTargets)2048)]
// Dependencies System.Attribute
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.DefaultParameterValueAttribute
class CORDL_TYPE DefaultParameterValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::Object*  value;

static inline ::System::Runtime::InteropServices::DefaultParameterValueAttribute* New_ctor(::System::Object*  value) ;

constexpr ::System::Object* const& __cordl_internal_get_value() const;

constexpr ::System::Object*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad07d34, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method get_Value, addr 0xad07d64, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultParameterValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultParameterValueAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultParameterValueAttribute(DefaultParameterValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultParameterValueAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultParameterValueAttribute(DefaultParameterValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9957};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::DefaultParameterValueAttribute, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::InteropServices::DefaultParameterValueAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices

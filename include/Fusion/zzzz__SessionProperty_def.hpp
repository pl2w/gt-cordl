#pragma once
// IWYU pragma private; include "Fusion/SessionProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SessionProperty)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class SessionProperty;
}
// Write type traits
MARK_REF_T(::Fusion::SessionProperty*);
DEFINE_IL2CPP_CLASS(::Fusion::SessionProperty*, "Fusion", "SessionProperty");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SessionProperty
class CORDL_TYPE SessionProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsInt)) bool  IsInt;

 __declspec(property(get=get_IsString)) bool  IsString;

 __declspec(property(get=get_Isbool)) bool  Isbool;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_PropertyValue)) ::System::Object*  PropertyValue;

/// @brief Field _value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Object*  _value;

/// @brief Method Convert, addr 0x5f48200, size 0xa8, virtual false, abstract: false, final false
static inline ::Fusion::SessionProperty* Convert(::System::Object*  obj) ;

static inline ::Fusion::SessionProperty* New_ctor() ;

/// @brief Method Support, addr 0x5f481c4, size 0x3c, virtual false, abstract: false, final false
static inline bool Support(::System::Object*  obj) ;

/// @brief Method ToString, addr 0x5f482a8, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Object* const& __cordl_internal_get__value() const;

constexpr ::System::Object*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5f47e94, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInt, addr 0x5f47e10, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsInt() ;

/// @brief Method get_IsString, addr 0x5f47e3c, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsString() ;

/// @brief Method get_Isbool, addr 0x5f47e68, size 0x2c, virtual false, abstract: false, final false
inline bool get_Isbool() ;

/// @brief Method get_PropertyType, addr 0x5f47df8, size 0x18, virtual false, abstract: false, final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_PropertyValue, addr 0x5f47df0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_PropertyValue() ;

/// @brief Method op_Implicit, addr 0x5f48030, size 0x80, virtual false, abstract: false, final false
static inline ::Fusion::SessionProperty* op_Implicit___Fusion__SessionProperty_(::StringW  v) ;

/// @brief Method op_Implicit, addr 0x5f48120, size 0xa4, virtual false, abstract: false, final false
static inline ::Fusion::SessionProperty* op_Implicit___Fusion__SessionProperty_(bool  v) ;

/// @brief Method op_Implicit, addr 0x5f47f28, size 0xa0, virtual false, abstract: false, final false
static inline ::Fusion::SessionProperty* op_Implicit___Fusion__SessionProperty_(int32_t  v) ;

/// @brief Method op_Implicit, addr 0x5f47fc8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Fusion::SessionProperty*  sessionProperty) ;

/// @brief Method op_Implicit, addr 0x5f480b0, size 0x70, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::SessionProperty*  sessionProperty) ;

/// @brief Method op_Implicit, addr 0x5f47eb8, size 0x70, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Fusion::SessionProperty*  sessionProperty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionProperty(SessionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionProperty(SessionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28035};

/// @brief Field _value, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SessionProperty, ____value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::SessionProperty) == 0x18, "Size mismatch!");

} // namespace end def Fusion

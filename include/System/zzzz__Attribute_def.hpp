#pragma once
// IWYU pragma private; include "System/Attribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Attribute)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Attribute;
}
// Write type traits
MARK_REF_T(::System::Attribute*);
DEFINE_IL2CPP_CLASS(::System::Attribute*, "System", "Attribute");
// [AttributeUsage((System.AttributeTargets)32767, Inherited = true, AllowMultiple = false)]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Attribute
class CORDL_TYPE Attribute : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Method AreFieldValuesEqual, addr 0xa30cb4c, size 0x1b4, virtual false, abstract: false, final false
static inline bool AreFieldValuesEqual(::System::Object*  thisValue, ::System::Object*  thatValue) ;

/// @brief Method Equals, addr 0xa30c908, size 0x238, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetCustomAttribute, addr 0xa30c878, size 0x8, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttribute, addr 0xa30c880, size 0x88, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttribute, addr 0xa30bca0, size 0x8, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttribute, addr 0xa30bca8, size 0x88, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30c74c, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element) ;

/// @brief Method GetCustomAttributes, addr 0xa30c524, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttributes, addr 0xa30c52c, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30c754, size 0x124, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30b7b8, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element) ;

/// @brief Method GetCustomAttributes, addr 0xa30b7c0, size 0x210, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30b4c8, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, ::System::Type*  type) ;

/// @brief Method GetCustomAttributes, addr 0xa30b4d0, size 0x2e8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30c2e0, size 0x244, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30c190, size 0x150, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30bd30, size 0x2a8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa30bfd8, size 0x1b8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo*  element, bool  inherit) ;

/// @brief Method GetHashCode, addr 0xa30cd00, size 0x12c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InternalGetCustomAttributes, addr 0xa30ae24, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::EventInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method InternalGetCustomAttributes, addr 0xa30ad78, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::PropertyInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method InternalIsDefined, addr 0xa30b458, size 0x70, virtual false, abstract: false, final false
static inline bool InternalIsDefined(::System::Reflection::EventInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method InternalIsDefined, addr 0xa30b3e8, size 0x70, virtual false, abstract: false, final false
static inline bool InternalIsDefined(::System::Reflection::PropertyInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method InternalParamGetCustomAttributes, addr 0xa30aed0, size 0x518, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo*  parameter, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsDefaultAttribute, addr 0xa30ce40, size 0x8, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

/// @brief Method IsDefined, addr 0xa30b9d0, size 0x8, virtual false, abstract: false, final false
static inline bool IsDefined(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType) ;

/// @brief Method IsDefined, addr 0xa30b9d8, size 0x2c8, virtual false, abstract: false, final false
static inline bool IsDefined(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method Match, addr 0xa30ce34, size 0xc, virtual true, abstract: false, final false
inline bool Match(::System::Object*  obj) ;

static inline ::System::Attribute* New_ctor() ;

/// @brief Method .ctor, addr 0xa3085c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TypeId, addr 0xa30ce2c, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Attribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Attribute(Attribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Attribute(Attribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Attribute) == 0x10, "Size mismatch!");

} // namespace end def System

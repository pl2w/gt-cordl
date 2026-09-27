#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/TypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeExtensions;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::TypeExtensions*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::TypeExtensions*, "Newtonsoft.Json.Utilities", "TypeExtensions");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Assembly, addr 0xa39e318, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* Assembly(::System::Type*  type) ;

/// [Extension]
/// @brief Method AssignableToTypeName, addr 0xa3a8540, size 0x18, virtual false, abstract: false, final false
static inline bool AssignableToTypeName(::System::Type*  type, ::StringW  fullTypeName, bool  searchInterfaces) ;

/// [Extension]
/// @brief Method AssignableToTypeName, addr 0xa3a83dc, size 0x164, virtual false, abstract: false, final false
static inline bool AssignableToTypeName(::System::Type*  type, ::StringW  fullTypeName, bool  searchInterfaces, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::System::Type*>  match) ;

/// [Extension]
/// @brief Method BaseType, addr 0xa3a4374, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Type* BaseType(::System::Type*  type) ;

/// [Extension]
/// @brief Method ContainsGenericParameters, addr 0xa3a8384, size 0x1c, virtual false, abstract: false, final false
static inline bool ContainsGenericParameters(::System::Type*  type) ;

/// [Extension]
/// @brief Method ImplementInterface, addr 0xa3a8558, size 0x3b8, virtual false, abstract: false, final false
static inline bool ImplementInterface(::System::Type*  type, ::System::Type*  interfaceType) ;

/// [Extension]
/// @brief Method IsAbstract, addr 0xa3a83b4, size 0x14, virtual false, abstract: false, final false
static inline bool IsAbstract(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsClass, addr 0xa3a4264, size 0x14, virtual false, abstract: false, final false
static inline bool IsClass(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsEnum, addr 0xa39cc50, size 0x1c, virtual false, abstract: false, final false
static inline bool IsEnum(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsGenericType, addr 0xa39e2f4, size 0x1c, virtual false, abstract: false, final false
static inline bool IsGenericType(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsGenericTypeDefinition, addr 0xa3a4080, size 0x1c, virtual false, abstract: false, final false
static inline bool IsGenericTypeDefinition(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsInterface, addr 0xa3a406c, size 0x14, virtual false, abstract: false, final false
static inline bool IsInterface(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsSealed, addr 0xa3a83a0, size 0x14, virtual false, abstract: false, final false
static inline bool IsSealed(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsValueType, addr 0xa3a3908, size 0x14, virtual false, abstract: false, final false
static inline bool IsValueType(::System::Type*  type) ;

/// [Extension]
/// @brief Method IsVisible, addr 0xa3a83c8, size 0x14, virtual false, abstract: false, final false
static inline bool IsVisible(::System::Type*  type) ;

/// [Extension]
/// @brief Method MemberType, addr 0xa3a2c18, size 0x18, virtual false, abstract: false, final false
static inline ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo*  memberInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeExtensions(TypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeExtensions(TypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::TypeExtensions) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities

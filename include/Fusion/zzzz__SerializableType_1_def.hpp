#pragma once
// IWYU pragma private; include "Fusion/SerializableType_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableType_1)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
template<typename BaseType>
struct SerializableType_1;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::SerializableType_1);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::SerializableType_1, "Fusion", "SerializableType`1");
// Dependencies 
namespace Fusion {
// cpp template
template<typename BaseType>
// Is value type: true
// CS Name: Fusion.SerializableType`1<BaseType>
struct CORDL_TYPE SerializableType_1 {
public:
// Declarations
 __declspec(property(get=get_Value)) ::System::Type*  Value;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>"
constexpr operator  ::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>*() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::Fusion::SerializableType_1<BaseType>  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Type* get_Value() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>"
constexpr ::System::IEquatable_1<::Fusion::SerializableType_1<BaseType>>* i___System__IEquatable_1___Fusion__SerializableType_1_BaseType__() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Type* op_Implicit___System__Type_(::Fusion::SerializableType_1<BaseType>  serializableType) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableType_1() ;

// Ctor Parameters [CppParam { name: "AssemblyQualifiedName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr SerializableType_1(::StringW  AssemblyQualifiedName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field AssemblyQualifiedName, offset: 0x0, size: 0x8, def value: None
 ::StringW  AssemblyQualifiedName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion

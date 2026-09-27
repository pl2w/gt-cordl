#pragma once
// IWYU pragma private; include "Fusion/SerializableType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableType)
namespace Fusion {
class SerializableType_Cache;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text::RegularExpressions {
class Regex;
}
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
class SerializableType_Cache;
}
namespace Fusion {
struct SerializableType;
}
// Write type traits
MARK_REF_T(::Fusion::SerializableType_Cache*);
MARK_VAL_T(::Fusion::SerializableType);
DEFINE_IL2CPP_CLASS(::Fusion::SerializableType_Cache*, "Fusion", "SerializableType/Cache");
DEFINE_IL2CPP_CLASS(::Fusion::SerializableType, "Fusion", "SerializableType");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SerializableType
struct CORDL_TYPE SerializableType {
public:
// Declarations
using Cache = ::Fusion::SerializableType_Cache;

 __declspec(property(get=get_Value)) ::System::Type*  Value;

/// @brief Field s_shortNameRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_shortNameRegex, put=setStaticF_s_shortNameRegex)) ::System::Text::RegularExpressions::Regex*  s_shortNameRegex;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SerializableType>"
constexpr operator  ::System::IEquatable_1<::Fusion::SerializableType>*() ;

/// @brief Method Equals, addr 0x5f3ddb8, size 0x94, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f3ddac, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::SerializableType  other) ;

/// @brief Method GetHashCode, addr 0x5f3de4c, size 0x18, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetShortAssemblyQualifiedName, addr 0x5f3dfa4, size 0x80, virtual false, abstract: false, final false
static inline ::StringW GetShortAssemblyQualifiedName(::StringW  assemblyQualifiedName) ;

/// @brief Method GetShortAssemblyQualifiedName, addr 0x5f3de64, size 0x140, virtual false, abstract: false, final false
static inline ::StringW GetShortAssemblyQualifiedName(::System::Type*  type) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_shortNameRegex() ;

/// @brief Method get_Value, addr 0x5f3d9a0, size 0x40c, virtual false, abstract: false, final false
inline ::System::Type* get_Value() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::SerializableType>"
constexpr ::System::IEquatable_1<::Fusion::SerializableType>* i___System__IEquatable_1___Fusion__SerializableType_() ;

static inline void setStaticF_s_shortNameRegex(::System::Text::RegularExpressions::Regex*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableType() ;

// Ctor Parameters [CppParam { name: "AssemblyQualifiedName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr SerializableType(::StringW  AssemblyQualifiedName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field AssemblyQualifiedName, offset: 0x0, size: 0x8, def value: None
 ::StringW  AssemblyQualifiedName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SerializableType, AssemblyQualifiedName) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SerializableType) == 0x8, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SerializableType/Cache
class CORDL_TYPE SerializableType_Cache : public ::System::Object {
public:
// Declarations
/// @brief Field Types, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Types, put=setStaticF_Types)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Types;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF_Types() ;

static inline void setStaticF_Types(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableType_Cache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableType_Cache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableType_Cache(SerializableType_Cache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableType_Cache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableType_Cache(SerializableType_Cache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SerializableType_Cache) == 0x10, "Size mismatch!");

} // namespace end def Fusion

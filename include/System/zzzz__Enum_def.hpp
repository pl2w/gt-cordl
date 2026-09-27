#pragma once
// IWYU pragma private; include "System/Enum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum)
namespace GlobalNamespace {
struct Enum_EnumResult;
}
namespace GlobalNamespace {
struct Enum_ParseFailureKind;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Enum_ValuesAndNames;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Enum;
}
namespace System {
class Enum_ValuesAndNames;
}
// Write type traits
MARK_REF_T(::System::Enum*);
MARK_REF_T(::System::Enum_ValuesAndNames*);
DEFINE_IL2CPP_CLASS(::System::Enum*, "System", "Enum");
DEFINE_IL2CPP_CLASS(::System::Enum_ValuesAndNames*, "System", "Enum/ValuesAndNames");
// [ComVisible(true)]
// Dependencies System.ValueType
namespace System {
// Is value type: false
// CS Name: System.Enum
class CORDL_TYPE Enum : public ::System::ValueType {
public:
// Declarations
using EnumResult = ::GlobalNamespace::Enum_EnumResult;

using ParseFailureKind = ::GlobalNamespace::Enum_ParseFailureKind;

using ValuesAndNames = ::System::Enum_ValuesAndNames;

/// @brief Field enumSeperatorCharArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_enumSeperatorCharArray, put=setStaticF_enumSeperatorCharArray)) ::ArrayW<char16_t>  enumSeperatorCharArray;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Enum()   {
}
public:

// Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Enum(Enum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Enum(Enum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5682};

/// @brief Field enumSeperator offset 0xffffffff size 0x8
static constexpr ::ConstString  enumSeperator{u", "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Enum) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Enum/ValuesAndNames
class CORDL_TYPE Enum_ValuesAndNames : public ::System::Object {
public:
// Declarations
/// @brief Field Names, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Names, put=__cordl_internal_set_Names)) ::ArrayW<::StringW>  Names;

/// @brief Field Values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Values, put=__cordl_internal_set_Values)) ::ArrayW<uint64_t>  Values;

static inline ::System::Enum_ValuesAndNames* New_ctor(::ArrayW<uint64_t>  values, ::ArrayW<::StringW>  names) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Names() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get_Values() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get_Values() ;

constexpr void __cordl_internal_set_Names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_Values(::ArrayW<uint64_t>  value) ;

/// @brief Method .ctor, addr 0xa312f1c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint64_t>  values, ::ArrayW<::StringW>  names) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Enum_ValuesAndNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Enum_ValuesAndNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Enum_ValuesAndNames(Enum_ValuesAndNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Enum_ValuesAndNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Enum_ValuesAndNames(Enum_ValuesAndNames const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5681};

/// @brief Field Values, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint64_t>  ___Values;

/// @brief Field Names, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Names;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Enum_ValuesAndNames, ___Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Enum_ValuesAndNames, ___Names) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Enum_ValuesAndNames) == 0x20, "Size mismatch!");

} // namespace end def System

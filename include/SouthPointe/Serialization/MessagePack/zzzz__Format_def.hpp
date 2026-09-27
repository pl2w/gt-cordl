#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Format.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Format)
namespace System {
class Object;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
struct Format;
}
// Write type traits
MARK_VAL_T(::SouthPointe::Serialization::MessagePack::Format);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::Format, "SouthPointe.Serialization.MessagePack", "Format");
// Dependencies 
namespace SouthPointe::Serialization::MessagePack {
// Is value type: true
// CS Name: SouthPointe.Serialization.MessagePack.Format
struct CORDL_TYPE Format {
public:
// Declarations
 __declspec(property(get=get_IsArray16)) bool  IsArray16;

 __declspec(property(get=get_IsArray32)) bool  IsArray32;

 __declspec(property(get=get_IsArrayFamily)) bool  IsArrayFamily;

 __declspec(property(get=get_IsBin16)) bool  IsBin16;

 __declspec(property(get=get_IsBin32)) bool  IsBin32;

 __declspec(property(get=get_IsBin8)) bool  IsBin8;

 __declspec(property(get=get_IsBinaryFamily)) bool  IsBinaryFamily;

 __declspec(property(get=get_IsEmptyArray)) bool  IsEmptyArray;

 __declspec(property(get=get_IsExt16)) bool  IsExt16;

 __declspec(property(get=get_IsExt32)) bool  IsExt32;

 __declspec(property(get=get_IsExt8)) bool  IsExt8;

 __declspec(property(get=get_IsExtFamily)) bool  IsExtFamily;

 __declspec(property(get=get_IsFalse)) bool  IsFalse;

 __declspec(property(get=get_IsFixArray)) bool  IsFixArray;

 __declspec(property(get=get_IsFixExt1)) bool  IsFixExt1;

 __declspec(property(get=get_IsFixExt16)) bool  IsFixExt16;

 __declspec(property(get=get_IsFixExt2)) bool  IsFixExt2;

 __declspec(property(get=get_IsFixExt4)) bool  IsFixExt4;

 __declspec(property(get=get_IsFixExt8)) bool  IsFixExt8;

 __declspec(property(get=get_IsFixMap)) bool  IsFixMap;

 __declspec(property(get=get_IsFixStr)) bool  IsFixStr;

 __declspec(property(get=get_IsFloat32)) bool  IsFloat32;

 __declspec(property(get=get_IsFloat64)) bool  IsFloat64;

 __declspec(property(get=get_IsFloatFamily)) bool  IsFloatFamily;

 __declspec(property(get=get_IsInt16)) bool  IsInt16;

 __declspec(property(get=get_IsInt32)) bool  IsInt32;

 __declspec(property(get=get_IsInt64)) bool  IsInt64;

 __declspec(property(get=get_IsInt8)) bool  IsInt8;

 __declspec(property(get=get_IsIntFamily)) bool  IsIntFamily;

 __declspec(property(get=get_IsMap16)) bool  IsMap16;

 __declspec(property(get=get_IsMap32)) bool  IsMap32;

 __declspec(property(get=get_IsMapFamily)) bool  IsMapFamily;

 __declspec(property(get=get_IsNegativeFixInt)) bool  IsNegativeFixInt;

 __declspec(property(get=get_IsNil)) bool  IsNil;

 __declspec(property(get=get_IsPositiveFixInt)) bool  IsPositiveFixInt;

 __declspec(property(get=get_IsStr16)) bool  IsStr16;

 __declspec(property(get=get_IsStr32)) bool  IsStr32;

 __declspec(property(get=get_IsStr8)) bool  IsStr8;

 __declspec(property(get=get_IsStringFamily)) bool  IsStringFamily;

 __declspec(property(get=get_IsTrue)) bool  IsTrue;

 __declspec(property(get=get_IsUInt16)) bool  IsUInt16;

 __declspec(property(get=get_IsUInt32)) bool  IsUInt32;

 __declspec(property(get=get_IsUInt64)) bool  IsUInt64;

 __declspec(property(get=get_IsUInt8)) bool  IsUInt8;

/// @brief Method Between, addr 0x9d05f08, size 0x18, virtual false, abstract: false, final false
inline bool Between(uint8_t  min, uint8_t  max) ;

/// @brief Method Equals, addr 0x9d0625c, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9d06254, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x9d062f0, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9d05ef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

/// @brief Method get_IsArray16, addr 0x9d06108, size 0x10, virtual false, abstract: false, final false
inline bool get_IsArray16() ;

/// @brief Method get_IsArray32, addr 0x9d06118, size 0x10, virtual false, abstract: false, final false
inline bool get_IsArray32() ;

/// @brief Method get_IsArrayFamily, addr 0x9d061ec, size 0x20, virtual false, abstract: false, final false
inline bool get_IsArrayFamily() ;

/// @brief Method get_IsBin16, addr 0x9d05f98, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBin16() ;

/// @brief Method get_IsBin32, addr 0x9d05fa8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBin32() ;

/// @brief Method get_IsBin8, addr 0x9d05f88, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBin8() ;

/// @brief Method get_IsBinaryFamily, addr 0x9d061d4, size 0x18, virtual false, abstract: false, final false
inline bool get_IsBinaryFamily() ;

/// @brief Method get_IsEmptyArray, addr 0x9d06158, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmptyArray() ;

/// @brief Method get_IsExt16, addr 0x9d05fc8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExt16() ;

/// @brief Method get_IsExt32, addr 0x9d05fd8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExt32() ;

/// @brief Method get_IsExt8, addr 0x9d05fb8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExt8() ;

/// @brief Method get_IsExtFamily, addr 0x9d0622c, size 0x28, virtual false, abstract: false, final false
inline bool get_IsExtFamily() ;

/// @brief Method get_IsFalse, addr 0x9d05f68, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFalse() ;

/// @brief Method get_IsFixArray, addr 0x9d05f30, size 0x14, virtual false, abstract: false, final false
inline bool get_IsFixArray() ;

/// @brief Method get_IsFixExt1, addr 0x9d06088, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixExt1() ;

/// @brief Method get_IsFixExt16, addr 0x9d060c8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixExt16() ;

/// @brief Method get_IsFixExt2, addr 0x9d06098, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixExt2() ;

/// @brief Method get_IsFixExt4, addr 0x9d060a8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixExt4() ;

/// @brief Method get_IsFixExt8, addr 0x9d060b8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixExt8() ;

/// @brief Method get_IsFixMap, addr 0x9d05f20, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFixMap() ;

/// @brief Method get_IsFixStr, addr 0x9d05f44, size 0x14, virtual false, abstract: false, final false
inline bool get_IsFixStr() ;

/// @brief Method get_IsFloat32, addr 0x9d05fe8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFloat32() ;

/// @brief Method get_IsFloat64, addr 0x9d05ff8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFloat64() ;

/// @brief Method get_IsFloatFamily, addr 0x9d06198, size 0x14, virtual false, abstract: false, final false
inline bool get_IsFloatFamily() ;

/// @brief Method get_IsInt16, addr 0x9d06058, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInt16() ;

/// @brief Method get_IsInt32, addr 0x9d06068, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInt32() ;

/// @brief Method get_IsInt64, addr 0x9d06078, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInt64() ;

/// @brief Method get_IsInt8, addr 0x9d06048, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInt8() ;

/// @brief Method get_IsIntFamily, addr 0x9d06168, size 0x30, virtual false, abstract: false, final false
inline bool get_IsIntFamily() ;

/// @brief Method get_IsMap16, addr 0x9d06128, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMap16() ;

/// @brief Method get_IsMap32, addr 0x9d06138, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMap32() ;

/// @brief Method get_IsMapFamily, addr 0x9d0620c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsMapFamily() ;

/// @brief Method get_IsNegativeFixInt, addr 0x9d06148, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNegativeFixInt() ;

/// @brief Method get_IsNil, addr 0x9d05f58, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNil() ;

/// @brief Method get_IsPositiveFixInt, addr 0x9d05ef8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPositiveFixInt() ;

/// @brief Method get_IsStr16, addr 0x9d060e8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStr16() ;

/// @brief Method get_IsStr32, addr 0x9d060f8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStr32() ;

/// @brief Method get_IsStr8, addr 0x9d060d8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStr8() ;

/// @brief Method get_IsStringFamily, addr 0x9d061ac, size 0x28, virtual false, abstract: false, final false
inline bool get_IsStringFamily() ;

/// @brief Method get_IsTrue, addr 0x9d05f78, size 0x10, virtual false, abstract: false, final false
inline bool get_IsTrue() ;

/// @brief Method get_IsUInt16, addr 0x9d06018, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUInt16() ;

/// @brief Method get_IsUInt32, addr 0x9d06028, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUInt32() ;

/// @brief Method get_IsUInt64, addr 0x9d06038, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUInt64() ;

/// @brief Method get_IsUInt8, addr 0x9d06008, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUInt8() ;

/// @brief Method op_BitwiseAnd, addr 0x9d062e8, size 0x8, virtual false, abstract: false, final false
static inline uint8_t op_BitwiseAnd(::SouthPointe::Serialization::MessagePack::Format  f1, uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Format() ;

// Ctor Parameters [CppParam { name: "Value", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Format(uint8_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31736};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Value, offset: 0x0, size: 0x1, def value: None
 uint8_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::SouthPointe::Serialization::MessagePack::Format, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::SouthPointe::Serialization::MessagePack::Format) == 0x1, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack

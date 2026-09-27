#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__TypeInformation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertUtils)
namespace GlobalNamespace {
struct ConvertUtils_ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils___c__DisplayClass8_0;
}
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json::Utilities {
template<typename T1,typename T2>
struct StructMultiKey_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IConvertible;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ConvertUtils;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::ConvertUtils*);
MARK_REF_T(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ConvertUtils*, "Newtonsoft.Json.Utilities", "ConvertUtils");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass8_0");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Utilities.TypeInformation, System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils
class CORDL_TYPE ConvertUtils : public ::System::Object {
public:
// Declarations
using ConvertResult = ::GlobalNamespace::ConvertUtils_ConvertResult;

using __c__DisplayClass8_0 = ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0;

/// @brief Field CastConverters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CastConverters, put=setStaticF_CastConverters)) ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::System::Type*>,::System::Func_2<::System::Object*,::System::Object*>*>*  CastConverters;

/// @brief Field PrimitiveTypeCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PrimitiveTypeCodes, put=setStaticF_PrimitiveTypeCodes)) ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*>  PrimitiveTypeCodes;

/// @brief Field TypeCodeMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeCodeMap, put=setStaticF_TypeCodeMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*  TypeCodeMap;

/// @brief Method Convert, addr 0xa39309c, size 0x268, virtual false, abstract: false, final false
static inline ::System::Object* Convert(::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType) ;

/// @brief Method ConvertOrCast, addr 0xa3940a0, size 0x154, virtual false, abstract: false, final false
static inline ::System::Object* ConvertOrCast(/* [Nullable(2)] */ ::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType) ;

/// [NullableContext(2)]
/// @brief Method CreateCastConverter, addr 0xa3926c8, size 0x258, virtual false, abstract: false, final false
static inline ::System::Func_2<::System::Object*,::System::Object*>* CreateCastConverter(/* [Nullable(new[] { 0, 1, 1 })] */ ::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::System::Type*>  t) ;

/// @brief Method DecimalTryParse, addr 0xa3944e4, size 0x9d4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::ParseResult DecimalTryParse(::ArrayW<char16_t>  chars, int32_t  start, int32_t  length, ::by_ref<::System::Decimal>  value) ;

/// @brief Method EnsureTypeAssignable, addr 0xa393e90, size 0x210, virtual false, abstract: false, final false
static inline ::System::Object* EnsureTypeAssignable(/* [Nullable(2)] */ ::System::Object*  value, ::System::Type*  initialType, ::System::Type*  targetType) ;

/// @brief Method FromBigInteger, addr 0xa392c10, size 0x48c, virtual false, abstract: false, final false
static inline ::System::Object* FromBigInteger(::System::Numerics::BigInteger  i, ::System::Type*  targetType) ;

/// @brief Method GetTypeCode, addr 0xa38ecc8, size 0x68, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type*  t) ;

/// @brief Method GetTypeCode, addr 0xa39235c, size 0x25c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type*  t, ::by_ref<bool>  isEnum) ;

/// @brief Method GetTypeInformation, addr 0xa38fec0, size 0xec, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible*  convertable) ;

/// @brief Method Int32TryParse, addr 0xa3941f4, size 0x188, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t>  chars, int32_t  start, int32_t  length, ::by_ref<int32_t>  value) ;

/// @brief Method Int64TryParse, addr 0xa39437c, size 0x168, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t>  chars, int32_t  start, int32_t  length, ::by_ref<int64_t>  value) ;

/// @brief Method IsConvertible, addr 0xa3925b8, size 0x80, virtual false, abstract: false, final false
static inline bool IsConvertible(::System::Type*  t) ;

/// @brief Method IsInteger, addr 0xa393dfc, size 0x8c, virtual false, abstract: false, final false
static inline bool IsInteger(::System::Object*  value) ;

/// @brief Method ParseTimeSpan, addr 0xa392638, size 0x90, virtual false, abstract: false, final false
static inline ::System::TimeSpan ParseTimeSpan(::StringW  input) ;

/// @brief Method ToBigInteger, addr 0xa392920, size 0x2f0, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ToBigInteger(::System::Object*  value) ;

/// @brief Method TryConvert, addr 0xa393cd4, size 0x128, virtual false, abstract: false, final false
static inline bool TryConvert(/* [Nullable(2)] */ ::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType, /* [Nullable(2)] */ ::by_ref<::System::Object*>  value) ;

/// @brief Method TryConvertGuid, addr 0xa394eb8, size 0x5c, virtual false, abstract: false, final false
static inline bool TryConvertGuid(::StringW  s, ::by_ref<::System::Guid>  g) ;

/// @brief Method TryConvertInternal, addr 0xa393304, size 0x9d0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ConvertUtils_ConvertResult TryConvertInternal(/* [Nullable(2)] */ ::System::Object*  initialValue, ::System::Globalization::CultureInfo*  culture, ::System::Type*  targetType, /* [Nullable(2)] */ ::by_ref<::System::Object*>  value) ;

/// @brief Method TryHexTextToInt, addr 0xa394f14, size 0xd0, virtual false, abstract: false, final false
static inline bool TryHexTextToInt(::ArrayW<char16_t>  text, int32_t  start, int32_t  end, ::by_ref<int32_t>  value) ;

/// @brief Method VersionTryParse, addr 0xa393e88, size 0x8, virtual false, abstract: false, final false
static inline bool VersionTryParse(::StringW  input, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::System::Version*>  result) ;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::System::Type*>,::System::Func_2<::System::Object*,::System::Object*>*>* getStaticF_CastConverters() ;

static inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*> getStaticF_PrimitiveTypeCodes() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* getStaticF_TypeCodeMap() ;

static inline void setStaticF_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::System::Type*>,::System::Func_2<::System::Object*,::System::Object*>*>*  value) ;

static inline void setStaticF_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*>  value) ;

static inline void setStaticF_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::Newtonsoft::Json::Utilities::PrimitiveTypeCode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConvertUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConvertUtils(ConvertUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConvertUtils(ConvertUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::ConvertUtils) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0
class CORDL_TYPE ConvertUtils___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field call, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_call, put=__cordl_internal_set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  call;

static inline ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0* New_ctor() ;

/// [NullableContext(2)]
/// @brief Method <CreateCastConverter>b__0, addr 0xa3961a0, size 0xc0, virtual false, abstract: false, final false
inline ::System::Object* _CreateCastConverter_b__0(::System::Object*  o) ;

constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>* const& __cordl_internal_get_call() const;

constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*& __cordl_internal_get_call() ;

constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa396198, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConvertUtils___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConvertUtils___c__DisplayClass8_0(ConvertUtils___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConvertUtils___c__DisplayClass8_0(ConvertUtils___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23169};

/// [Nullable(new[] { 0, 2, 2 })]
/// @brief Field call, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  ___call;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0, ___call) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities

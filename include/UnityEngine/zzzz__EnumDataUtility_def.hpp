#pragma once
// IWYU pragma private; include "UnityEngine/EnumDataUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDataUtility)
namespace GlobalNamespace {
struct EnumDataUtility_CachedType;
}
namespace GlobalNamespace {
struct EnumDataUtility___c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Enum;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class EnumDataUtility___c;
}
namespace UnityEngine {
class EnumDataUtility___c__DisplayClass2_0;
}
namespace UnityEngine {
struct EnumData;
}
// Forward declare root types
namespace UnityEngine {
class EnumDataUtility;
}
namespace UnityEngine {
class EnumDataUtility___c;
}
namespace UnityEngine {
class EnumDataUtility___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::EnumDataUtility*);
MARK_REF_T(::UnityEngine::EnumDataUtility___c*);
MARK_REF_T(::UnityEngine::EnumDataUtility___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::EnumDataUtility*, "UnityEngine", "EnumDataUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::EnumDataUtility___c*, "UnityEngine", "EnumDataUtility/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::EnumDataUtility___c__DisplayClass2_0*, "UnityEngine", "EnumDataUtility/<>c__DisplayClass2_0");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.EnumDataUtility
class CORDL_TYPE EnumDataUtility : public ::System::Object {
public:
// Declarations
using CachedType = ::GlobalNamespace::EnumDataUtility_CachedType;

using __c__DisplayClass8_0 = ::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0;

using __c = ::UnityEngine::EnumDataUtility___c;

using __c__DisplayClass2_0 = ::UnityEngine::EnumDataUtility___c__DisplayClass2_0;

/// @brief Field s_EnumData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EnumData, put=setStaticF_s_EnumData)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::EnumDataUtility_CachedType,::System::Type*>,::UnityEngine::EnumData>*  s_EnumData;

/// @brief Method CheckObsoleteAddition, addr 0xb5de1e0, size 0x114, virtual false, abstract: false, final false
static inline bool CheckObsoleteAddition(::System::Reflection::FieldInfo*  field, ::GlobalNamespace::EnumDataUtility_CachedType  cachedType) ;

/// @brief Method EnumNameFromEnumField, addr 0xb5de914, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW EnumNameFromEnumField(::System::Reflection::FieldInfo*  field, ::System::Func_2<::StringW,::StringW>*  nicifyName) ;

/// @brief Method EnumTooltipFromEnumField, addr 0xb5de804, size 0x110, virtual false, abstract: false, final false
static inline ::StringW EnumTooltipFromEnumField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method GetCachedEnumData, addr 0xb5dd2f0, size 0xee8, virtual false, abstract: false, final false
static inline ::UnityEngine::EnumData GetCachedEnumData(::System::Type*  enumType, ::GlobalNamespace::EnumDataUtility_CachedType  cachedType, ::System::Func_2<::StringW,::StringW>*  nicifyName) ;

/// @brief Method HandleInspectorOrderAttribute, addr 0xb5de2f4, size 0x510, virtual false, abstract: false, final false
static inline void HandleInspectorOrderAttribute(::System::Type*  enumType, ::by_ref<::UnityEngine::EnumData>  enumData) ;

/// [CompilerGenerated]
/// @brief Method <EnumNameFromEnumField>g__NicifyName|8_0, addr 0xb5deb10, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW _EnumNameFromEnumField_g__NicifyName_8_0(::by_ref<::GlobalNamespace::EnumDataUtility___c__DisplayClass8_0>  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::EnumDataUtility_CachedType,::System::Type*>,::UnityEngine::EnumData>* getStaticF_s_EnumData() ;

static inline void setStaticF_s_EnumData(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::EnumDataUtility_CachedType,::System::Type*>,::UnityEngine::EnumData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumDataUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumDataUtility(EnumDataUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumDataUtility(EnumDataUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::EnumDataUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.EnumDataUtility/<>c__DisplayClass2_0
class CORDL_TYPE EnumDataUtility___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field nicifyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nicifyName, put=__cordl_internal_set_nicifyName)) ::System::Func_2<::StringW,::StringW>*  nicifyName;

static inline ::UnityEngine::EnumDataUtility___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetCachedEnumData>b__0, addr 0xb5dedfc, size 0x68, virtual false, abstract: false, final false
inline ::StringW _GetCachedEnumData_b__0(::System::Reflection::FieldInfo*  f) ;

constexpr ::System::Func_2<::StringW,::StringW>* const& __cordl_internal_get_nicifyName() const;

constexpr ::System::Func_2<::StringW,::StringW>*& __cordl_internal_get_nicifyName() ;

constexpr void __cordl_internal_set_nicifyName(::System::Func_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb5de1d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumDataUtility___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumDataUtility___c__DisplayClass2_0(EnumDataUtility___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumDataUtility___c__DisplayClass2_0(EnumDataUtility___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15074};

/// @brief Field nicifyName, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::StringW,::StringW>*  ___nicifyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EnumDataUtility___c__DisplayClass2_0, ___nicifyName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::EnumDataUtility___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.EnumDataUtility/<>c
class CORDL_TYPE EnumDataUtility___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::EnumDataUtility___c*  __9;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Func_2<::System::Reflection::FieldInfo*,::System::Enum*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Func_2<::System::Enum*,int32_t>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Func_2<::System::Enum*,int32_t>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Func_2<::System::Reflection::FieldInfo*,int32_t>*  __9__2_5;

static inline ::UnityEngine::EnumDataUtility___c* New_ctor() ;

/// @brief Method <GetCachedEnumData>b__2_1, addr 0xb5dec88, size 0x54, virtual false, abstract: false, final false
inline ::StringW _GetCachedEnumData_b__2_1(::System::Reflection::FieldInfo*  f) ;

/// @brief Method <GetCachedEnumData>b__2_2, addr 0xb5decdc, size 0x68, virtual false, abstract: false, final false
inline ::System::Enum* _GetCachedEnumData_b__2_2(::System::Reflection::FieldInfo*  f) ;

/// @brief Method <GetCachedEnumData>b__2_3, addr 0xb5ded44, size 0x5c, virtual false, abstract: false, final false
inline int32_t _GetCachedEnumData_b__2_3(::System::Enum*  v) ;

/// @brief Method <GetCachedEnumData>b__2_4, addr 0xb5deda0, size 0x5c, virtual false, abstract: false, final false
inline int32_t _GetCachedEnumData_b__2_4(::System::Enum*  v) ;

/// @brief Method <GetCachedEnumData>b__2_5, addr 0xb5dec64, size 0x24, virtual false, abstract: false, final false
inline int32_t _GetCachedEnumData_b__2_5(::System::Reflection::FieldInfo*  f) ;

/// @brief Method .ctor, addr 0xb5dec5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::EnumDataUtility___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,::StringW>* getStaticF___9__2_1() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,::System::Enum*>* getStaticF___9__2_2() ;

static inline ::System::Func_2<::System::Enum*,int32_t>* getStaticF___9__2_3() ;

static inline ::System::Func_2<::System::Enum*,int32_t>* getStaticF___9__2_4() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,int32_t>* getStaticF___9__2_5() ;

static inline void setStaticF___9(::UnityEngine::EnumDataUtility___c*  value) ;

static inline void setStaticF___9__2_1(::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*  value) ;

static inline void setStaticF___9__2_2(::System::Func_2<::System::Reflection::FieldInfo*,::System::Enum*>*  value) ;

static inline void setStaticF___9__2_3(::System::Func_2<::System::Enum*,int32_t>*  value) ;

static inline void setStaticF___9__2_4(::System::Func_2<::System::Enum*,int32_t>*  value) ;

static inline void setStaticF___9__2_5(::System::Func_2<::System::Reflection::FieldInfo*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumDataUtility___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumDataUtility___c(EnumDataUtility___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumDataUtility___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumDataUtility___c(EnumDataUtility___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::EnumDataUtility___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

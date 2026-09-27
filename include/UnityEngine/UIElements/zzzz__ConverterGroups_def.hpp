#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroups.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterGroups)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
template<typename TSource,typename TDestination>
class TypeConverter_2;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::UIElements {
class ConverterGroup;
}
namespace UnityEngine::UIElements {
class ConverterGroups___c;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ConverterGroups;
}
namespace UnityEngine::UIElements {
class ConverterGroups___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ConverterGroups*);
MARK_REF_T(::UnityEngine::UIElements::ConverterGroups___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ConverterGroups*, "UnityEngine.UIElements", "ConverterGroups");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ConverterGroups___c*, "UnityEngine.UIElements", "ConverterGroups/<>c");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroups
class CORDL_TYPE ConverterGroups : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::UIElements::ConverterGroups___c;

/// @brief Field s_BindingConverterGroups, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BindingConverterGroups, put=setStaticF_s_BindingConverterGroups)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::ConverterGroup*>*  s_BindingConverterGroups;

/// @brief Field s_GlobalConverters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GlobalConverters, put=setStaticF_s_GlobalConverters)) ::UnityEngine::UIElements::ConverterGroup*  s_GlobalConverters;

/// @brief Field s_PrimitivesConverters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PrimitivesConverters, put=setStaticF_s_PrimitivesConverters)) ::UnityEngine::UIElements::ConverterGroup*  s_PrimitivesConverters;

/// @brief Method RegisterBooleanConverters, addr 0xb721a60, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterBooleanConverters() ;

/// @brief Method RegisterCharConverters, addr 0xb72286c, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterCharConverters() ;

/// @brief Method RegisterColorConverters, addr 0xb723678, size 0x2fc, virtual false, abstract: false, final false
static inline void RegisterColorConverters() ;

/// @brief Method RegisterDoubleConverters, addr 0xb720b34, size 0xf2c, virtual false, abstract: false, final false
static inline void RegisterDoubleConverters() ;

/// @brief Method RegisterFloatConverters, addr 0xb71fc08, size 0xf2c, virtual false, abstract: false, final false
static inline void RegisterFloatConverters() ;

/// @brief Method RegisterGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TDestination>
static inline void RegisterGlobal(::Unity::Properties::TypeConverter_2<TSource,TDestination>*  converter) ;

/// @brief Method RegisterInt16Converters, addr 0xb7198e0, size 0xddc, virtual false, abstract: false, final false
static inline void RegisterInt16Converters() ;

/// @brief Method RegisterInt32Converters, addr 0xb71a6bc, size 0xdf0, virtual false, abstract: false, final false
static inline void RegisterInt32Converters() ;

/// @brief Method RegisterInt64Converters, addr 0xb71b4ac, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterInt64Converters() ;

/// @brief Method RegisterInt8Converters, addr 0xb718b04, size 0xddc, virtual false, abstract: false, final false
static inline void RegisterInt8Converters() ;

/// @brief Method RegisterPrimitivesConverter, addr 0xb718a88, size 0x7c, virtual false, abstract: false, final false
static inline void RegisterPrimitivesConverter() ;

/// @brief Method RegisterUInt16Converters, addr 0xb71d1e4, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterUInt16Converters() ;

/// @brief Method RegisterUInt32Converters, addr 0xb71dff0, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterUInt32Converters() ;

/// @brief Method RegisterUInt64Converters, addr 0xb71edfc, size 0xe0c, virtual false, abstract: false, final false
static inline void RegisterUInt64Converters() ;

/// @brief Method RegisterUInt8Converters, addr 0xb71c2b8, size 0xf2c, virtual false, abstract: false, final false
static inline void RegisterUInt8Converters() ;

/// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TDestination>
static inline bool TryConvert(::by_ref<TSource>  source, ::by_ref<TDestination>  destination) ;

/// @brief Method TrySetValueGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContainer,typename TValue>
static inline bool TrySetValueGlobal(::by_ref<TContainer>  container, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath>  path, TValue  value, ::by_ref<::Unity::Properties::VisitReturnCode>  returnCode) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::ConverterGroup*>* getStaticF_s_BindingConverterGroups() ;

static inline ::UnityEngine::UIElements::ConverterGroup* getStaticF_s_GlobalConverters() ;

static inline ::UnityEngine::UIElements::ConverterGroup* getStaticF_s_PrimitivesConverters() ;

static inline void setStaticF_s_BindingConverterGroups(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::ConverterGroup*>*  value) ;

static inline void setStaticF_s_GlobalConverters(::UnityEngine::UIElements::ConverterGroup*  value) ;

static inline void setStaticF_s_PrimitivesConverters(::UnityEngine::UIElements::ConverterGroup*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterGroups() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterGroups(ConverterGroups && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterGroups(ConverterGroups const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ConverterGroups) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroups/<>c
class CORDL_TYPE ConverterGroups___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::ConverterGroups___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::Unity::Properties::TypeConverter_2<int8_t,bool>*  __9__17_0;

/// @brief Field <>9__17_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_1, put=setStaticF___9__17_1)) ::Unity::Properties::TypeConverter_2<int8_t,char16_t>*  __9__17_1;

/// @brief Field <>9__17_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_10, put=setStaticF___9__17_10)) ::Unity::Properties::TypeConverter_2<int8_t,double_t>*  __9__17_10;

/// @brief Field <>9__17_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_11, put=setStaticF___9__17_11)) ::Unity::Properties::TypeConverter_2<::StringW,int8_t>*  __9__17_11;

/// @brief Field <>9__17_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_2, put=setStaticF___9__17_2)) ::Unity::Properties::TypeConverter_2<int8_t,int16_t>*  __9__17_2;

/// @brief Field <>9__17_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_3, put=setStaticF___9__17_3)) ::Unity::Properties::TypeConverter_2<int8_t,int32_t>*  __9__17_3;

/// @brief Field <>9__17_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_4, put=setStaticF___9__17_4)) ::Unity::Properties::TypeConverter_2<int8_t,int64_t>*  __9__17_4;

/// @brief Field <>9__17_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_5, put=setStaticF___9__17_5)) ::Unity::Properties::TypeConverter_2<int8_t,uint8_t>*  __9__17_5;

/// @brief Field <>9__17_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_6, put=setStaticF___9__17_6)) ::Unity::Properties::TypeConverter_2<int8_t,uint16_t>*  __9__17_6;

/// @brief Field <>9__17_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_7, put=setStaticF___9__17_7)) ::Unity::Properties::TypeConverter_2<int8_t,uint32_t>*  __9__17_7;

/// @brief Field <>9__17_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_8, put=setStaticF___9__17_8)) ::Unity::Properties::TypeConverter_2<int8_t,uint64_t>*  __9__17_8;

/// @brief Field <>9__17_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_9, put=setStaticF___9__17_9)) ::Unity::Properties::TypeConverter_2<int8_t,float_t>*  __9__17_9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::Unity::Properties::TypeConverter_2<int16_t,bool>*  __9__18_0;

/// @brief Field <>9__18_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_1, put=setStaticF___9__18_1)) ::Unity::Properties::TypeConverter_2<int16_t,int8_t>*  __9__18_1;

/// @brief Field <>9__18_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_10, put=setStaticF___9__18_10)) ::Unity::Properties::TypeConverter_2<int16_t,double_t>*  __9__18_10;

/// @brief Field <>9__18_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_11, put=setStaticF___9__18_11)) ::Unity::Properties::TypeConverter_2<::StringW,int16_t>*  __9__18_11;

/// @brief Field <>9__18_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_2, put=setStaticF___9__18_2)) ::Unity::Properties::TypeConverter_2<int16_t,char16_t>*  __9__18_2;

/// @brief Field <>9__18_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_3, put=setStaticF___9__18_3)) ::Unity::Properties::TypeConverter_2<int16_t,int32_t>*  __9__18_3;

/// @brief Field <>9__18_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_4, put=setStaticF___9__18_4)) ::Unity::Properties::TypeConverter_2<int16_t,int64_t>*  __9__18_4;

/// @brief Field <>9__18_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_5, put=setStaticF___9__18_5)) ::Unity::Properties::TypeConverter_2<int16_t,uint8_t>*  __9__18_5;

/// @brief Field <>9__18_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_6, put=setStaticF___9__18_6)) ::Unity::Properties::TypeConverter_2<int16_t,uint16_t>*  __9__18_6;

/// @brief Field <>9__18_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_7, put=setStaticF___9__18_7)) ::Unity::Properties::TypeConverter_2<int16_t,uint32_t>*  __9__18_7;

/// @brief Field <>9__18_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_8, put=setStaticF___9__18_8)) ::Unity::Properties::TypeConverter_2<int16_t,uint64_t>*  __9__18_8;

/// @brief Field <>9__18_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_9, put=setStaticF___9__18_9)) ::Unity::Properties::TypeConverter_2<int16_t,float_t>*  __9__18_9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::Unity::Properties::TypeConverter_2<int32_t,bool>*  __9__19_0;

/// @brief Field <>9__19_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_1, put=setStaticF___9__19_1)) ::Unity::Properties::TypeConverter_2<int32_t,int8_t>*  __9__19_1;

/// @brief Field <>9__19_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_10, put=setStaticF___9__19_10)) ::Unity::Properties::TypeConverter_2<int32_t,double_t>*  __9__19_10;

/// @brief Field <>9__19_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_11, put=setStaticF___9__19_11)) ::Unity::Properties::TypeConverter_2<::StringW,int32_t>*  __9__19_11;

/// @brief Field <>9__19_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_2, put=setStaticF___9__19_2)) ::Unity::Properties::TypeConverter_2<int32_t,char16_t>*  __9__19_2;

/// @brief Field <>9__19_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_3, put=setStaticF___9__19_3)) ::Unity::Properties::TypeConverter_2<int32_t,int16_t>*  __9__19_3;

/// @brief Field <>9__19_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_4, put=setStaticF___9__19_4)) ::Unity::Properties::TypeConverter_2<int32_t,int64_t>*  __9__19_4;

/// @brief Field <>9__19_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_5, put=setStaticF___9__19_5)) ::Unity::Properties::TypeConverter_2<int32_t,uint8_t>*  __9__19_5;

/// @brief Field <>9__19_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_6, put=setStaticF___9__19_6)) ::Unity::Properties::TypeConverter_2<int32_t,uint16_t>*  __9__19_6;

/// @brief Field <>9__19_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_7, put=setStaticF___9__19_7)) ::Unity::Properties::TypeConverter_2<int32_t,uint32_t>*  __9__19_7;

/// @brief Field <>9__19_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_8, put=setStaticF___9__19_8)) ::Unity::Properties::TypeConverter_2<int32_t,uint64_t>*  __9__19_8;

/// @brief Field <>9__19_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_9, put=setStaticF___9__19_9)) ::Unity::Properties::TypeConverter_2<int32_t,float_t>*  __9__19_9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::Unity::Properties::TypeConverter_2<int64_t,bool>*  __9__20_0;

/// @brief Field <>9__20_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_1, put=setStaticF___9__20_1)) ::Unity::Properties::TypeConverter_2<int64_t,int8_t>*  __9__20_1;

/// @brief Field <>9__20_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_10, put=setStaticF___9__20_10)) ::Unity::Properties::TypeConverter_2<int64_t,double_t>*  __9__20_10;

/// @brief Field <>9__20_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_11, put=setStaticF___9__20_11)) ::Unity::Properties::TypeConverter_2<::StringW,int64_t>*  __9__20_11;

/// @brief Field <>9__20_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_2, put=setStaticF___9__20_2)) ::Unity::Properties::TypeConverter_2<int64_t,char16_t>*  __9__20_2;

/// @brief Field <>9__20_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_3, put=setStaticF___9__20_3)) ::Unity::Properties::TypeConverter_2<int64_t,int16_t>*  __9__20_3;

/// @brief Field <>9__20_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_4, put=setStaticF___9__20_4)) ::Unity::Properties::TypeConverter_2<int64_t,int32_t>*  __9__20_4;

/// @brief Field <>9__20_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_5, put=setStaticF___9__20_5)) ::Unity::Properties::TypeConverter_2<int64_t,uint8_t>*  __9__20_5;

/// @brief Field <>9__20_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_6, put=setStaticF___9__20_6)) ::Unity::Properties::TypeConverter_2<int64_t,uint16_t>*  __9__20_6;

/// @brief Field <>9__20_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_7, put=setStaticF___9__20_7)) ::Unity::Properties::TypeConverter_2<int64_t,uint32_t>*  __9__20_7;

/// @brief Field <>9__20_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_8, put=setStaticF___9__20_8)) ::Unity::Properties::TypeConverter_2<int64_t,uint64_t>*  __9__20_8;

/// @brief Field <>9__20_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_9, put=setStaticF___9__20_9)) ::Unity::Properties::TypeConverter_2<int64_t,float_t>*  __9__20_9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::Unity::Properties::TypeConverter_2<uint8_t,bool>*  __9__21_0;

/// @brief Field <>9__21_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_1, put=setStaticF___9__21_1)) ::Unity::Properties::TypeConverter_2<uint8_t,int8_t>*  __9__21_1;

/// @brief Field <>9__21_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_10, put=setStaticF___9__21_10)) ::Unity::Properties::TypeConverter_2<uint8_t,double_t>*  __9__21_10;

/// @brief Field <>9__21_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_11, put=setStaticF___9__21_11)) ::Unity::Properties::TypeConverter_2<uint8_t,::System::Object*>*  __9__21_11;

/// @brief Field <>9__21_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_12, put=setStaticF___9__21_12)) ::Unity::Properties::TypeConverter_2<::StringW,uint8_t>*  __9__21_12;

/// @brief Field <>9__21_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_2, put=setStaticF___9__21_2)) ::Unity::Properties::TypeConverter_2<uint8_t,char16_t>*  __9__21_2;

/// @brief Field <>9__21_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_3, put=setStaticF___9__21_3)) ::Unity::Properties::TypeConverter_2<uint8_t,int16_t>*  __9__21_3;

/// @brief Field <>9__21_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_4, put=setStaticF___9__21_4)) ::Unity::Properties::TypeConverter_2<uint8_t,int32_t>*  __9__21_4;

/// @brief Field <>9__21_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_5, put=setStaticF___9__21_5)) ::Unity::Properties::TypeConverter_2<uint8_t,int64_t>*  __9__21_5;

/// @brief Field <>9__21_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_6, put=setStaticF___9__21_6)) ::Unity::Properties::TypeConverter_2<uint8_t,uint16_t>*  __9__21_6;

/// @brief Field <>9__21_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_7, put=setStaticF___9__21_7)) ::Unity::Properties::TypeConverter_2<uint8_t,uint32_t>*  __9__21_7;

/// @brief Field <>9__21_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_8, put=setStaticF___9__21_8)) ::Unity::Properties::TypeConverter_2<uint8_t,uint64_t>*  __9__21_8;

/// @brief Field <>9__21_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_9, put=setStaticF___9__21_9)) ::Unity::Properties::TypeConverter_2<uint8_t,float_t>*  __9__21_9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::Unity::Properties::TypeConverter_2<uint16_t,bool>*  __9__22_0;

/// @brief Field <>9__22_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_1, put=setStaticF___9__22_1)) ::Unity::Properties::TypeConverter_2<uint16_t,int8_t>*  __9__22_1;

/// @brief Field <>9__22_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_10, put=setStaticF___9__22_10)) ::Unity::Properties::TypeConverter_2<uint16_t,double_t>*  __9__22_10;

/// @brief Field <>9__22_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_11, put=setStaticF___9__22_11)) ::Unity::Properties::TypeConverter_2<::StringW,uint16_t>*  __9__22_11;

/// @brief Field <>9__22_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_2, put=setStaticF___9__22_2)) ::Unity::Properties::TypeConverter_2<uint16_t,char16_t>*  __9__22_2;

/// @brief Field <>9__22_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_3, put=setStaticF___9__22_3)) ::Unity::Properties::TypeConverter_2<uint16_t,int16_t>*  __9__22_3;

/// @brief Field <>9__22_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_4, put=setStaticF___9__22_4)) ::Unity::Properties::TypeConverter_2<uint16_t,int32_t>*  __9__22_4;

/// @brief Field <>9__22_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_5, put=setStaticF___9__22_5)) ::Unity::Properties::TypeConverter_2<uint16_t,int64_t>*  __9__22_5;

/// @brief Field <>9__22_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_6, put=setStaticF___9__22_6)) ::Unity::Properties::TypeConverter_2<uint16_t,uint8_t>*  __9__22_6;

/// @brief Field <>9__22_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_7, put=setStaticF___9__22_7)) ::Unity::Properties::TypeConverter_2<uint16_t,uint32_t>*  __9__22_7;

/// @brief Field <>9__22_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_8, put=setStaticF___9__22_8)) ::Unity::Properties::TypeConverter_2<uint16_t,uint64_t>*  __9__22_8;

/// @brief Field <>9__22_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_9, put=setStaticF___9__22_9)) ::Unity::Properties::TypeConverter_2<uint16_t,float_t>*  __9__22_9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::Unity::Properties::TypeConverter_2<uint32_t,bool>*  __9__23_0;

/// @brief Field <>9__23_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_1, put=setStaticF___9__23_1)) ::Unity::Properties::TypeConverter_2<uint32_t,int8_t>*  __9__23_1;

/// @brief Field <>9__23_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_10, put=setStaticF___9__23_10)) ::Unity::Properties::TypeConverter_2<uint32_t,double_t>*  __9__23_10;

/// @brief Field <>9__23_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_11, put=setStaticF___9__23_11)) ::Unity::Properties::TypeConverter_2<::StringW,uint32_t>*  __9__23_11;

/// @brief Field <>9__23_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_2, put=setStaticF___9__23_2)) ::Unity::Properties::TypeConverter_2<uint32_t,char16_t>*  __9__23_2;

/// @brief Field <>9__23_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_3, put=setStaticF___9__23_3)) ::Unity::Properties::TypeConverter_2<uint32_t,int16_t>*  __9__23_3;

/// @brief Field <>9__23_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_4, put=setStaticF___9__23_4)) ::Unity::Properties::TypeConverter_2<uint32_t,int32_t>*  __9__23_4;

/// @brief Field <>9__23_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_5, put=setStaticF___9__23_5)) ::Unity::Properties::TypeConverter_2<uint32_t,int64_t>*  __9__23_5;

/// @brief Field <>9__23_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_6, put=setStaticF___9__23_6)) ::Unity::Properties::TypeConverter_2<uint32_t,uint8_t>*  __9__23_6;

/// @brief Field <>9__23_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_7, put=setStaticF___9__23_7)) ::Unity::Properties::TypeConverter_2<uint32_t,uint16_t>*  __9__23_7;

/// @brief Field <>9__23_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_8, put=setStaticF___9__23_8)) ::Unity::Properties::TypeConverter_2<uint32_t,uint64_t>*  __9__23_8;

/// @brief Field <>9__23_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_9, put=setStaticF___9__23_9)) ::Unity::Properties::TypeConverter_2<uint32_t,float_t>*  __9__23_9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::Unity::Properties::TypeConverter_2<uint64_t,bool>*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::Unity::Properties::TypeConverter_2<uint64_t,int8_t>*  __9__24_1;

/// @brief Field <>9__24_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_10, put=setStaticF___9__24_10)) ::Unity::Properties::TypeConverter_2<uint64_t,double_t>*  __9__24_10;

/// @brief Field <>9__24_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_11, put=setStaticF___9__24_11)) ::Unity::Properties::TypeConverter_2<::StringW,uint64_t>*  __9__24_11;

/// @brief Field <>9__24_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_2, put=setStaticF___9__24_2)) ::Unity::Properties::TypeConverter_2<uint64_t,char16_t>*  __9__24_2;

/// @brief Field <>9__24_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_3, put=setStaticF___9__24_3)) ::Unity::Properties::TypeConverter_2<uint64_t,int16_t>*  __9__24_3;

/// @brief Field <>9__24_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_4, put=setStaticF___9__24_4)) ::Unity::Properties::TypeConverter_2<uint64_t,int32_t>*  __9__24_4;

/// @brief Field <>9__24_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_5, put=setStaticF___9__24_5)) ::Unity::Properties::TypeConverter_2<uint64_t,int64_t>*  __9__24_5;

/// @brief Field <>9__24_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_6, put=setStaticF___9__24_6)) ::Unity::Properties::TypeConverter_2<uint64_t,uint8_t>*  __9__24_6;

/// @brief Field <>9__24_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_7, put=setStaticF___9__24_7)) ::Unity::Properties::TypeConverter_2<uint64_t,uint16_t>*  __9__24_7;

/// @brief Field <>9__24_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_8, put=setStaticF___9__24_8)) ::Unity::Properties::TypeConverter_2<uint64_t,uint32_t>*  __9__24_8;

/// @brief Field <>9__24_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_9, put=setStaticF___9__24_9)) ::Unity::Properties::TypeConverter_2<uint64_t,float_t>*  __9__24_9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::Unity::Properties::TypeConverter_2<float_t,bool>*  __9__25_0;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::Unity::Properties::TypeConverter_2<float_t,int8_t>*  __9__25_1;

/// @brief Field <>9__25_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_10, put=setStaticF___9__25_10)) ::Unity::Properties::TypeConverter_2<float_t,double_t>*  __9__25_10;

/// @brief Field <>9__25_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_11, put=setStaticF___9__25_11)) ::Unity::Properties::TypeConverter_2<float_t,::StringW>*  __9__25_11;

/// @brief Field <>9__25_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_12, put=setStaticF___9__25_12)) ::Unity::Properties::TypeConverter_2<::StringW,float_t>*  __9__25_12;

/// @brief Field <>9__25_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_2, put=setStaticF___9__25_2)) ::Unity::Properties::TypeConverter_2<float_t,char16_t>*  __9__25_2;

/// @brief Field <>9__25_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_3, put=setStaticF___9__25_3)) ::Unity::Properties::TypeConverter_2<float_t,int16_t>*  __9__25_3;

/// @brief Field <>9__25_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_4, put=setStaticF___9__25_4)) ::Unity::Properties::TypeConverter_2<float_t,int32_t>*  __9__25_4;

/// @brief Field <>9__25_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_5, put=setStaticF___9__25_5)) ::Unity::Properties::TypeConverter_2<float_t,int64_t>*  __9__25_5;

/// @brief Field <>9__25_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_6, put=setStaticF___9__25_6)) ::Unity::Properties::TypeConverter_2<float_t,uint8_t>*  __9__25_6;

/// @brief Field <>9__25_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_7, put=setStaticF___9__25_7)) ::Unity::Properties::TypeConverter_2<float_t,uint16_t>*  __9__25_7;

/// @brief Field <>9__25_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_8, put=setStaticF___9__25_8)) ::Unity::Properties::TypeConverter_2<float_t,uint32_t>*  __9__25_8;

/// @brief Field <>9__25_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_9, put=setStaticF___9__25_9)) ::Unity::Properties::TypeConverter_2<float_t,uint64_t>*  __9__25_9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::Unity::Properties::TypeConverter_2<double_t,bool>*  __9__26_0;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::Unity::Properties::TypeConverter_2<double_t,int8_t>*  __9__26_1;

/// @brief Field <>9__26_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_10, put=setStaticF___9__26_10)) ::Unity::Properties::TypeConverter_2<double_t,float_t>*  __9__26_10;

/// @brief Field <>9__26_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_11, put=setStaticF___9__26_11)) ::Unity::Properties::TypeConverter_2<double_t,::StringW>*  __9__26_11;

/// @brief Field <>9__26_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_12, put=setStaticF___9__26_12)) ::Unity::Properties::TypeConverter_2<::StringW,double_t>*  __9__26_12;

/// @brief Field <>9__26_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_2, put=setStaticF___9__26_2)) ::Unity::Properties::TypeConverter_2<double_t,char16_t>*  __9__26_2;

/// @brief Field <>9__26_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_3, put=setStaticF___9__26_3)) ::Unity::Properties::TypeConverter_2<double_t,int16_t>*  __9__26_3;

/// @brief Field <>9__26_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_4, put=setStaticF___9__26_4)) ::Unity::Properties::TypeConverter_2<double_t,int32_t>*  __9__26_4;

/// @brief Field <>9__26_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_5, put=setStaticF___9__26_5)) ::Unity::Properties::TypeConverter_2<double_t,int64_t>*  __9__26_5;

/// @brief Field <>9__26_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_6, put=setStaticF___9__26_6)) ::Unity::Properties::TypeConverter_2<double_t,uint8_t>*  __9__26_6;

/// @brief Field <>9__26_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_7, put=setStaticF___9__26_7)) ::Unity::Properties::TypeConverter_2<double_t,uint16_t>*  __9__26_7;

/// @brief Field <>9__26_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_8, put=setStaticF___9__26_8)) ::Unity::Properties::TypeConverter_2<double_t,uint32_t>*  __9__26_8;

/// @brief Field <>9__26_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_9, put=setStaticF___9__26_9)) ::Unity::Properties::TypeConverter_2<double_t,uint64_t>*  __9__26_9;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::Unity::Properties::TypeConverter_2<bool,char16_t>*  __9__27_0;

/// @brief Field <>9__27_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_1, put=setStaticF___9__27_1)) ::Unity::Properties::TypeConverter_2<bool,int8_t>*  __9__27_1;

/// @brief Field <>9__27_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_10, put=setStaticF___9__27_10)) ::Unity::Properties::TypeConverter_2<bool,double_t>*  __9__27_10;

/// @brief Field <>9__27_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_11, put=setStaticF___9__27_11)) ::Unity::Properties::TypeConverter_2<::StringW,bool>*  __9__27_11;

/// @brief Field <>9__27_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_2, put=setStaticF___9__27_2)) ::Unity::Properties::TypeConverter_2<bool,int16_t>*  __9__27_2;

/// @brief Field <>9__27_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_3, put=setStaticF___9__27_3)) ::Unity::Properties::TypeConverter_2<bool,int32_t>*  __9__27_3;

/// @brief Field <>9__27_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_4, put=setStaticF___9__27_4)) ::Unity::Properties::TypeConverter_2<bool,int64_t>*  __9__27_4;

/// @brief Field <>9__27_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_5, put=setStaticF___9__27_5)) ::Unity::Properties::TypeConverter_2<bool,uint8_t>*  __9__27_5;

/// @brief Field <>9__27_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_6, put=setStaticF___9__27_6)) ::Unity::Properties::TypeConverter_2<bool,uint16_t>*  __9__27_6;

/// @brief Field <>9__27_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_7, put=setStaticF___9__27_7)) ::Unity::Properties::TypeConverter_2<bool,uint32_t>*  __9__27_7;

/// @brief Field <>9__27_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_8, put=setStaticF___9__27_8)) ::Unity::Properties::TypeConverter_2<bool,uint64_t>*  __9__27_8;

/// @brief Field <>9__27_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_9, put=setStaticF___9__27_9)) ::Unity::Properties::TypeConverter_2<bool,float_t>*  __9__27_9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::Unity::Properties::TypeConverter_2<char16_t,bool>*  __9__28_0;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::Unity::Properties::TypeConverter_2<char16_t,int8_t>*  __9__28_1;

/// @brief Field <>9__28_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_10, put=setStaticF___9__28_10)) ::Unity::Properties::TypeConverter_2<char16_t,double_t>*  __9__28_10;

/// @brief Field <>9__28_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_11, put=setStaticF___9__28_11)) ::Unity::Properties::TypeConverter_2<::StringW,char16_t>*  __9__28_11;

/// @brief Field <>9__28_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_2, put=setStaticF___9__28_2)) ::Unity::Properties::TypeConverter_2<char16_t,int16_t>*  __9__28_2;

/// @brief Field <>9__28_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_3, put=setStaticF___9__28_3)) ::Unity::Properties::TypeConverter_2<char16_t,int32_t>*  __9__28_3;

/// @brief Field <>9__28_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_4, put=setStaticF___9__28_4)) ::Unity::Properties::TypeConverter_2<char16_t,int64_t>*  __9__28_4;

/// @brief Field <>9__28_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_5, put=setStaticF___9__28_5)) ::Unity::Properties::TypeConverter_2<char16_t,uint8_t>*  __9__28_5;

/// @brief Field <>9__28_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_6, put=setStaticF___9__28_6)) ::Unity::Properties::TypeConverter_2<char16_t,uint16_t>*  __9__28_6;

/// @brief Field <>9__28_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_7, put=setStaticF___9__28_7)) ::Unity::Properties::TypeConverter_2<char16_t,uint32_t>*  __9__28_7;

/// @brief Field <>9__28_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_8, put=setStaticF___9__28_8)) ::Unity::Properties::TypeConverter_2<char16_t,uint64_t>*  __9__28_8;

/// @brief Field <>9__28_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_9, put=setStaticF___9__28_9)) ::Unity::Properties::TypeConverter_2<char16_t,float_t>*  __9__28_9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::Unity::Properties::TypeConverter_2<::UnityEngine::Color,::UnityEngine::Color32>*  __9__29_0;

/// @brief Field <>9__29_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_1, put=setStaticF___9__29_1)) ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::Color>*  __9__29_1;

static inline ::UnityEngine::UIElements::ConverterGroups___c* New_ctor() ;

/// @brief Method <RegisterBooleanConverters>b__27_0, addr 0xb724750, size 0x10, virtual false, abstract: false, final false
inline char16_t _RegisterBooleanConverters_b__27_0(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_1, addr 0xb724760, size 0x10, virtual false, abstract: false, final false
inline int8_t _RegisterBooleanConverters_b__27_1(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_10, addr 0xb7247f8, size 0x18, virtual false, abstract: false, final false
inline double_t _RegisterBooleanConverters_b__27_10(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_11, addr 0xb724810, size 0xec, virtual false, abstract: false, final false
inline bool _RegisterBooleanConverters_b__27_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_2, addr 0xb724770, size 0x10, virtual false, abstract: false, final false
inline int16_t _RegisterBooleanConverters_b__27_2(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_3, addr 0xb724780, size 0x10, virtual false, abstract: false, final false
inline int32_t _RegisterBooleanConverters_b__27_3(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_4, addr 0xb724790, size 0x10, virtual false, abstract: false, final false
inline int64_t _RegisterBooleanConverters_b__27_4(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_5, addr 0xb7247a0, size 0x10, virtual false, abstract: false, final false
inline uint8_t _RegisterBooleanConverters_b__27_5(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_6, addr 0xb7247b0, size 0x10, virtual false, abstract: false, final false
inline uint16_t _RegisterBooleanConverters_b__27_6(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_7, addr 0xb7247c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t _RegisterBooleanConverters_b__27_7(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_8, addr 0xb7247d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t _RegisterBooleanConverters_b__27_8(::by_ref<bool>  v) ;

/// @brief Method <RegisterBooleanConverters>b__27_9, addr 0xb7247e0, size 0x18, virtual false, abstract: false, final false
inline float_t _RegisterBooleanConverters_b__27_9(::by_ref<bool>  v) ;

/// @brief Method <RegisterCharConverters>b__28_0, addr 0xb7248fc, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterCharConverters_b__28_0(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_1, addr 0xb72490c, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterCharConverters_b__28_1(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_10, addr 0xb724958, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterCharConverters_b__28_10(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_11, addr 0xb724964, size 0x40, virtual false, abstract: false, final false
inline char16_t _RegisterCharConverters_b__28_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterCharConverters>b__28_2, addr 0xb724914, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterCharConverters_b__28_2(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_3, addr 0xb72491c, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterCharConverters_b__28_3(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_4, addr 0xb724924, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterCharConverters_b__28_4(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_5, addr 0xb72492c, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterCharConverters_b__28_5(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_6, addr 0xb724934, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterCharConverters_b__28_6(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_7, addr 0xb72493c, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterCharConverters_b__28_7(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_8, addr 0xb724944, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterCharConverters_b__28_8(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterCharConverters>b__28_9, addr 0xb72494c, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterCharConverters_b__28_9(::by_ref<char16_t>  v) ;

/// @brief Method <RegisterColorConverters>b__29_0, addr 0xb7249a4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 _RegisterColorConverters_b__29_0(::by_ref<::UnityEngine::Color>  v) ;

/// @brief Method <RegisterColorConverters>b__29_1, addr 0xb7249b4, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color _RegisterColorConverters_b__29_1(::by_ref<::UnityEngine::Color32>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_0, addr 0xb7245cc, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterDoubleConverters_b__26_0(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_1, addr 0xb7245dc, size 0x1c, virtual false, abstract: false, final false
inline int8_t _RegisterDoubleConverters_b__26_1(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_10, addr 0xb7246c0, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterDoubleConverters_b__26_10(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_11, addr 0xb7246cc, size 0x64, virtual false, abstract: false, final false
inline ::StringW _RegisterDoubleConverters_b__26_11(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_12, addr 0xb724730, size 0x20, virtual false, abstract: false, final false
inline double_t _RegisterDoubleConverters_b__26_12(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_2, addr 0xb7245f8, size 0x14, virtual false, abstract: false, final false
inline char16_t _RegisterDoubleConverters_b__26_2(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_3, addr 0xb72460c, size 0x1c, virtual false, abstract: false, final false
inline int16_t _RegisterDoubleConverters_b__26_3(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_4, addr 0xb724628, size 0x20, virtual false, abstract: false, final false
inline int32_t _RegisterDoubleConverters_b__26_4(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_5, addr 0xb724648, size 0x20, virtual false, abstract: false, final false
inline int64_t _RegisterDoubleConverters_b__26_5(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_6, addr 0xb724668, size 0x14, virtual false, abstract: false, final false
inline uint8_t _RegisterDoubleConverters_b__26_6(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_7, addr 0xb72467c, size 0x14, virtual false, abstract: false, final false
inline uint16_t _RegisterDoubleConverters_b__26_7(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_8, addr 0xb724690, size 0x18, virtual false, abstract: false, final false
inline uint32_t _RegisterDoubleConverters_b__26_8(::by_ref<double_t>  v) ;

/// @brief Method <RegisterDoubleConverters>b__26_9, addr 0xb7246a8, size 0x18, virtual false, abstract: false, final false
inline uint64_t _RegisterDoubleConverters_b__26_9(::by_ref<double_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_0, addr 0xb7243a0, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterFloatConverters_b__25_0(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_1, addr 0xb7243b0, size 0x1c, virtual false, abstract: false, final false
inline int8_t _RegisterFloatConverters_b__25_1(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_10, addr 0xb724494, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterFloatConverters_b__25_10(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_11, addr 0xb7244a0, size 0x64, virtual false, abstract: false, final false
inline ::StringW _RegisterFloatConverters_b__25_11(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_12, addr 0xb724504, size 0xc8, virtual false, abstract: false, final false
inline float_t _RegisterFloatConverters_b__25_12(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_2, addr 0xb7243cc, size 0x14, virtual false, abstract: false, final false
inline char16_t _RegisterFloatConverters_b__25_2(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_3, addr 0xb7243e0, size 0x1c, virtual false, abstract: false, final false
inline int16_t _RegisterFloatConverters_b__25_3(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_4, addr 0xb7243fc, size 0x20, virtual false, abstract: false, final false
inline int32_t _RegisterFloatConverters_b__25_4(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_5, addr 0xb72441c, size 0x20, virtual false, abstract: false, final false
inline int64_t _RegisterFloatConverters_b__25_5(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_6, addr 0xb72443c, size 0x14, virtual false, abstract: false, final false
inline uint8_t _RegisterFloatConverters_b__25_6(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_7, addr 0xb724450, size 0x14, virtual false, abstract: false, final false
inline uint16_t _RegisterFloatConverters_b__25_7(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_8, addr 0xb724464, size 0x18, virtual false, abstract: false, final false
inline uint32_t _RegisterFloatConverters_b__25_8(::by_ref<float_t>  v) ;

/// @brief Method <RegisterFloatConverters>b__25_9, addr 0xb72447c, size 0x18, virtual false, abstract: false, final false
inline uint64_t _RegisterFloatConverters_b__25_9(::by_ref<float_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_0, addr 0xb723b18, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterInt16Converters_b__18_0(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_1, addr 0xb723b28, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterInt16Converters_b__18_1(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_10, addr 0xb723b74, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterInt16Converters_b__18_10(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_11, addr 0xb723b80, size 0xcc, virtual false, abstract: false, final false
inline int16_t _RegisterInt16Converters_b__18_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_2, addr 0xb723b30, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterInt16Converters_b__18_2(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_3, addr 0xb723b38, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterInt16Converters_b__18_3(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_4, addr 0xb723b40, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterInt16Converters_b__18_4(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_5, addr 0xb723b48, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterInt16Converters_b__18_5(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_6, addr 0xb723b50, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterInt16Converters_b__18_6(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_7, addr 0xb723b58, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterInt16Converters_b__18_7(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_8, addr 0xb723b60, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterInt16Converters_b__18_8(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt16Converters>b__18_9, addr 0xb723b68, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterInt16Converters_b__18_9(::by_ref<int16_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_0, addr 0xb723c4c, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterInt32Converters_b__19_0(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_1, addr 0xb723c5c, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterInt32Converters_b__19_1(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_10, addr 0xb723ca8, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterInt32Converters_b__19_10(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_11, addr 0xb723cb4, size 0xc8, virtual false, abstract: false, final false
inline int32_t _RegisterInt32Converters_b__19_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_2, addr 0xb723c64, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterInt32Converters_b__19_2(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_3, addr 0xb723c6c, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterInt32Converters_b__19_3(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_4, addr 0xb723c74, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterInt32Converters_b__19_4(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_5, addr 0xb723c7c, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterInt32Converters_b__19_5(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_6, addr 0xb723c84, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterInt32Converters_b__19_6(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_7, addr 0xb723c8c, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterInt32Converters_b__19_7(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_8, addr 0xb723c94, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterInt32Converters_b__19_8(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt32Converters>b__19_9, addr 0xb723c9c, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterInt32Converters_b__19_9(::by_ref<int32_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_0, addr 0xb723d7c, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterInt64Converters_b__20_0(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_1, addr 0xb723d8c, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterInt64Converters_b__20_1(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_10, addr 0xb723dd8, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterInt64Converters_b__20_10(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_11, addr 0xb723de4, size 0xc8, virtual false, abstract: false, final false
inline int64_t _RegisterInt64Converters_b__20_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_2, addr 0xb723d94, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterInt64Converters_b__20_2(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_3, addr 0xb723d9c, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterInt64Converters_b__20_3(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_4, addr 0xb723da4, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterInt64Converters_b__20_4(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_5, addr 0xb723dac, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterInt64Converters_b__20_5(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_6, addr 0xb723db4, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterInt64Converters_b__20_6(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_7, addr 0xb723dbc, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterInt64Converters_b__20_7(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_8, addr 0xb723dc4, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterInt64Converters_b__20_8(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt64Converters>b__20_9, addr 0xb723dcc, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterInt64Converters_b__20_9(::by_ref<int64_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_0, addr 0xb7239e4, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterInt8Converters_b__17_0(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_1, addr 0xb7239f4, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterInt8Converters_b__17_1(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_10, addr 0xb723a40, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterInt8Converters_b__17_10(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_11, addr 0xb723a4c, size 0xcc, virtual false, abstract: false, final false
inline int8_t _RegisterInt8Converters_b__17_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_2, addr 0xb7239fc, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterInt8Converters_b__17_2(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_3, addr 0xb723a04, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterInt8Converters_b__17_3(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_4, addr 0xb723a0c, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterInt8Converters_b__17_4(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_5, addr 0xb723a14, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterInt8Converters_b__17_5(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_6, addr 0xb723a1c, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterInt8Converters_b__17_6(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_7, addr 0xb723a24, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterInt8Converters_b__17_7(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_8, addr 0xb723a2c, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterInt8Converters_b__17_8(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterInt8Converters>b__17_9, addr 0xb723a34, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterInt8Converters_b__17_9(::by_ref<int8_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_0, addr 0xb724008, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterUInt16Converters_b__22_0(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_1, addr 0xb724018, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterUInt16Converters_b__22_1(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_10, addr 0xb724064, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterUInt16Converters_b__22_10(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_11, addr 0xb724070, size 0xcc, virtual false, abstract: false, final false
inline uint16_t _RegisterUInt16Converters_b__22_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_2, addr 0xb724020, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterUInt16Converters_b__22_2(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_3, addr 0xb724028, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterUInt16Converters_b__22_3(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_4, addr 0xb724030, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterUInt16Converters_b__22_4(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_5, addr 0xb724038, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterUInt16Converters_b__22_5(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_6, addr 0xb724040, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterUInt16Converters_b__22_6(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_7, addr 0xb724048, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterUInt16Converters_b__22_7(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_8, addr 0xb724050, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterUInt16Converters_b__22_8(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt16Converters>b__22_9, addr 0xb724058, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterUInt16Converters_b__22_9(::by_ref<uint16_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_0, addr 0xb72413c, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterUInt32Converters_b__23_0(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_1, addr 0xb72414c, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterUInt32Converters_b__23_1(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_10, addr 0xb724198, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterUInt32Converters_b__23_10(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_11, addr 0xb7241a4, size 0xc8, virtual false, abstract: false, final false
inline uint32_t _RegisterUInt32Converters_b__23_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_2, addr 0xb724154, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterUInt32Converters_b__23_2(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_3, addr 0xb72415c, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterUInt32Converters_b__23_3(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_4, addr 0xb724164, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterUInt32Converters_b__23_4(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_5, addr 0xb72416c, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterUInt32Converters_b__23_5(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_6, addr 0xb724174, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterUInt32Converters_b__23_6(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_7, addr 0xb72417c, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterUInt32Converters_b__23_7(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_8, addr 0xb724184, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterUInt32Converters_b__23_8(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt32Converters>b__23_9, addr 0xb72418c, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterUInt32Converters_b__23_9(::by_ref<uint32_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_0, addr 0xb72426c, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterUInt64Converters_b__24_0(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_1, addr 0xb72427c, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterUInt64Converters_b__24_1(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_10, addr 0xb7242cc, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterUInt64Converters_b__24_10(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_11, addr 0xb7242d8, size 0xc8, virtual false, abstract: false, final false
inline uint64_t _RegisterUInt64Converters_b__24_11(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_2, addr 0xb724284, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterUInt64Converters_b__24_2(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_3, addr 0xb72428c, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterUInt64Converters_b__24_3(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_4, addr 0xb724294, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterUInt64Converters_b__24_4(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_5, addr 0xb72429c, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterUInt64Converters_b__24_5(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_6, addr 0xb7242a4, size 0x8, virtual false, abstract: false, final false
inline uint8_t _RegisterUInt64Converters_b__24_6(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_7, addr 0xb7242ac, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterUInt64Converters_b__24_7(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_8, addr 0xb7242b4, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterUInt64Converters_b__24_8(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt64Converters>b__24_9, addr 0xb7242bc, size 0x10, virtual false, abstract: false, final false
inline float_t _RegisterUInt64Converters_b__24_9(::by_ref<uint64_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_0, addr 0xb723eac, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterUInt8Converters_b__21_0(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_1, addr 0xb723ebc, size 0x8, virtual false, abstract: false, final false
inline int8_t _RegisterUInt8Converters_b__21_1(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_10, addr 0xb723f08, size 0xc, virtual false, abstract: false, final false
inline double_t _RegisterUInt8Converters_b__21_10(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_11, addr 0xb723f14, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _RegisterUInt8Converters_b__21_11(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_12, addr 0xb723f3c, size 0xcc, virtual false, abstract: false, final false
inline uint8_t _RegisterUInt8Converters_b__21_12(::by_ref<::StringW>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_2, addr 0xb723ec4, size 0x8, virtual false, abstract: false, final false
inline char16_t _RegisterUInt8Converters_b__21_2(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_3, addr 0xb723ecc, size 0x8, virtual false, abstract: false, final false
inline int16_t _RegisterUInt8Converters_b__21_3(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_4, addr 0xb723ed4, size 0x8, virtual false, abstract: false, final false
inline int32_t _RegisterUInt8Converters_b__21_4(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_5, addr 0xb723edc, size 0x8, virtual false, abstract: false, final false
inline int64_t _RegisterUInt8Converters_b__21_5(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_6, addr 0xb723ee4, size 0x8, virtual false, abstract: false, final false
inline uint16_t _RegisterUInt8Converters_b__21_6(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_7, addr 0xb723eec, size 0x8, virtual false, abstract: false, final false
inline uint32_t _RegisterUInt8Converters_b__21_7(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_8, addr 0xb723ef4, size 0x8, virtual false, abstract: false, final false
inline uint64_t _RegisterUInt8Converters_b__21_8(::by_ref<uint8_t>  v) ;

/// @brief Method <RegisterUInt8Converters>b__21_9, addr 0xb723efc, size 0xc, virtual false, abstract: false, final false
inline float_t _RegisterUInt8Converters_b__21_9(::by_ref<uint8_t>  v) ;

/// @brief Method .ctor, addr 0xb7239dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::ConverterGroups___c* getStaticF___9() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,bool>* getStaticF___9__17_0() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,char16_t>* getStaticF___9__17_1() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,double_t>* getStaticF___9__17_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,int8_t>* getStaticF___9__17_11() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,int16_t>* getStaticF___9__17_2() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,int32_t>* getStaticF___9__17_3() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,int64_t>* getStaticF___9__17_4() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,uint8_t>* getStaticF___9__17_5() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,uint16_t>* getStaticF___9__17_6() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,uint32_t>* getStaticF___9__17_7() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,uint64_t>* getStaticF___9__17_8() ;

static inline ::Unity::Properties::TypeConverter_2<int8_t,float_t>* getStaticF___9__17_9() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,bool>* getStaticF___9__18_0() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,int8_t>* getStaticF___9__18_1() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,double_t>* getStaticF___9__18_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,int16_t>* getStaticF___9__18_11() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,char16_t>* getStaticF___9__18_2() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,int32_t>* getStaticF___9__18_3() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,int64_t>* getStaticF___9__18_4() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,uint8_t>* getStaticF___9__18_5() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,uint16_t>* getStaticF___9__18_6() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,uint32_t>* getStaticF___9__18_7() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,uint64_t>* getStaticF___9__18_8() ;

static inline ::Unity::Properties::TypeConverter_2<int16_t,float_t>* getStaticF___9__18_9() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,bool>* getStaticF___9__19_0() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,int8_t>* getStaticF___9__19_1() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,double_t>* getStaticF___9__19_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,int32_t>* getStaticF___9__19_11() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,char16_t>* getStaticF___9__19_2() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,int16_t>* getStaticF___9__19_3() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,int64_t>* getStaticF___9__19_4() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,uint8_t>* getStaticF___9__19_5() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,uint16_t>* getStaticF___9__19_6() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,uint32_t>* getStaticF___9__19_7() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,uint64_t>* getStaticF___9__19_8() ;

static inline ::Unity::Properties::TypeConverter_2<int32_t,float_t>* getStaticF___9__19_9() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,bool>* getStaticF___9__20_0() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,int8_t>* getStaticF___9__20_1() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,double_t>* getStaticF___9__20_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,int64_t>* getStaticF___9__20_11() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,char16_t>* getStaticF___9__20_2() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,int16_t>* getStaticF___9__20_3() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,int32_t>* getStaticF___9__20_4() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,uint8_t>* getStaticF___9__20_5() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,uint16_t>* getStaticF___9__20_6() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,uint32_t>* getStaticF___9__20_7() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,uint64_t>* getStaticF___9__20_8() ;

static inline ::Unity::Properties::TypeConverter_2<int64_t,float_t>* getStaticF___9__20_9() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,bool>* getStaticF___9__21_0() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,int8_t>* getStaticF___9__21_1() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,double_t>* getStaticF___9__21_10() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,::System::Object*>* getStaticF___9__21_11() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,uint8_t>* getStaticF___9__21_12() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,char16_t>* getStaticF___9__21_2() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,int16_t>* getStaticF___9__21_3() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,int32_t>* getStaticF___9__21_4() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,int64_t>* getStaticF___9__21_5() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,uint16_t>* getStaticF___9__21_6() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,uint32_t>* getStaticF___9__21_7() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,uint64_t>* getStaticF___9__21_8() ;

static inline ::Unity::Properties::TypeConverter_2<uint8_t,float_t>* getStaticF___9__21_9() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,bool>* getStaticF___9__22_0() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,int8_t>* getStaticF___9__22_1() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,double_t>* getStaticF___9__22_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,uint16_t>* getStaticF___9__22_11() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,char16_t>* getStaticF___9__22_2() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,int16_t>* getStaticF___9__22_3() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,int32_t>* getStaticF___9__22_4() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,int64_t>* getStaticF___9__22_5() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,uint8_t>* getStaticF___9__22_6() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,uint32_t>* getStaticF___9__22_7() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,uint64_t>* getStaticF___9__22_8() ;

static inline ::Unity::Properties::TypeConverter_2<uint16_t,float_t>* getStaticF___9__22_9() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,bool>* getStaticF___9__23_0() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,int8_t>* getStaticF___9__23_1() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,double_t>* getStaticF___9__23_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,uint32_t>* getStaticF___9__23_11() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,char16_t>* getStaticF___9__23_2() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,int16_t>* getStaticF___9__23_3() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,int32_t>* getStaticF___9__23_4() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,int64_t>* getStaticF___9__23_5() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,uint8_t>* getStaticF___9__23_6() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,uint16_t>* getStaticF___9__23_7() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,uint64_t>* getStaticF___9__23_8() ;

static inline ::Unity::Properties::TypeConverter_2<uint32_t,float_t>* getStaticF___9__23_9() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,bool>* getStaticF___9__24_0() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,int8_t>* getStaticF___9__24_1() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,double_t>* getStaticF___9__24_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,uint64_t>* getStaticF___9__24_11() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,char16_t>* getStaticF___9__24_2() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,int16_t>* getStaticF___9__24_3() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,int32_t>* getStaticF___9__24_4() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,int64_t>* getStaticF___9__24_5() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,uint8_t>* getStaticF___9__24_6() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,uint16_t>* getStaticF___9__24_7() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,uint32_t>* getStaticF___9__24_8() ;

static inline ::Unity::Properties::TypeConverter_2<uint64_t,float_t>* getStaticF___9__24_9() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,bool>* getStaticF___9__25_0() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,int8_t>* getStaticF___9__25_1() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,double_t>* getStaticF___9__25_10() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,::StringW>* getStaticF___9__25_11() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,float_t>* getStaticF___9__25_12() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,char16_t>* getStaticF___9__25_2() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,int16_t>* getStaticF___9__25_3() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,int32_t>* getStaticF___9__25_4() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,int64_t>* getStaticF___9__25_5() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,uint8_t>* getStaticF___9__25_6() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,uint16_t>* getStaticF___9__25_7() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,uint32_t>* getStaticF___9__25_8() ;

static inline ::Unity::Properties::TypeConverter_2<float_t,uint64_t>* getStaticF___9__25_9() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,bool>* getStaticF___9__26_0() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,int8_t>* getStaticF___9__26_1() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,float_t>* getStaticF___9__26_10() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,::StringW>* getStaticF___9__26_11() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,double_t>* getStaticF___9__26_12() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,char16_t>* getStaticF___9__26_2() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,int16_t>* getStaticF___9__26_3() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,int32_t>* getStaticF___9__26_4() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,int64_t>* getStaticF___9__26_5() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,uint8_t>* getStaticF___9__26_6() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,uint16_t>* getStaticF___9__26_7() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,uint32_t>* getStaticF___9__26_8() ;

static inline ::Unity::Properties::TypeConverter_2<double_t,uint64_t>* getStaticF___9__26_9() ;

static inline ::Unity::Properties::TypeConverter_2<bool,char16_t>* getStaticF___9__27_0() ;

static inline ::Unity::Properties::TypeConverter_2<bool,int8_t>* getStaticF___9__27_1() ;

static inline ::Unity::Properties::TypeConverter_2<bool,double_t>* getStaticF___9__27_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,bool>* getStaticF___9__27_11() ;

static inline ::Unity::Properties::TypeConverter_2<bool,int16_t>* getStaticF___9__27_2() ;

static inline ::Unity::Properties::TypeConverter_2<bool,int32_t>* getStaticF___9__27_3() ;

static inline ::Unity::Properties::TypeConverter_2<bool,int64_t>* getStaticF___9__27_4() ;

static inline ::Unity::Properties::TypeConverter_2<bool,uint8_t>* getStaticF___9__27_5() ;

static inline ::Unity::Properties::TypeConverter_2<bool,uint16_t>* getStaticF___9__27_6() ;

static inline ::Unity::Properties::TypeConverter_2<bool,uint32_t>* getStaticF___9__27_7() ;

static inline ::Unity::Properties::TypeConverter_2<bool,uint64_t>* getStaticF___9__27_8() ;

static inline ::Unity::Properties::TypeConverter_2<bool,float_t>* getStaticF___9__27_9() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,bool>* getStaticF___9__28_0() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,int8_t>* getStaticF___9__28_1() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,double_t>* getStaticF___9__28_10() ;

static inline ::Unity::Properties::TypeConverter_2<::StringW,char16_t>* getStaticF___9__28_11() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,int16_t>* getStaticF___9__28_2() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,int32_t>* getStaticF___9__28_3() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,int64_t>* getStaticF___9__28_4() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,uint8_t>* getStaticF___9__28_5() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,uint16_t>* getStaticF___9__28_6() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,uint32_t>* getStaticF___9__28_7() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,uint64_t>* getStaticF___9__28_8() ;

static inline ::Unity::Properties::TypeConverter_2<char16_t,float_t>* getStaticF___9__28_9() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::Color,::UnityEngine::Color32>* getStaticF___9__29_0() ;

static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::Color>* getStaticF___9__29_1() ;

static inline void setStaticF___9(::UnityEngine::UIElements::ConverterGroups___c*  value) ;

static inline void setStaticF___9__17_0(::Unity::Properties::TypeConverter_2<int8_t,bool>*  value) ;

static inline void setStaticF___9__17_1(::Unity::Properties::TypeConverter_2<int8_t,char16_t>*  value) ;

static inline void setStaticF___9__17_10(::Unity::Properties::TypeConverter_2<int8_t,double_t>*  value) ;

static inline void setStaticF___9__17_11(::Unity::Properties::TypeConverter_2<::StringW,int8_t>*  value) ;

static inline void setStaticF___9__17_2(::Unity::Properties::TypeConverter_2<int8_t,int16_t>*  value) ;

static inline void setStaticF___9__17_3(::Unity::Properties::TypeConverter_2<int8_t,int32_t>*  value) ;

static inline void setStaticF___9__17_4(::Unity::Properties::TypeConverter_2<int8_t,int64_t>*  value) ;

static inline void setStaticF___9__17_5(::Unity::Properties::TypeConverter_2<int8_t,uint8_t>*  value) ;

static inline void setStaticF___9__17_6(::Unity::Properties::TypeConverter_2<int8_t,uint16_t>*  value) ;

static inline void setStaticF___9__17_7(::Unity::Properties::TypeConverter_2<int8_t,uint32_t>*  value) ;

static inline void setStaticF___9__17_8(::Unity::Properties::TypeConverter_2<int8_t,uint64_t>*  value) ;

static inline void setStaticF___9__17_9(::Unity::Properties::TypeConverter_2<int8_t,float_t>*  value) ;

static inline void setStaticF___9__18_0(::Unity::Properties::TypeConverter_2<int16_t,bool>*  value) ;

static inline void setStaticF___9__18_1(::Unity::Properties::TypeConverter_2<int16_t,int8_t>*  value) ;

static inline void setStaticF___9__18_10(::Unity::Properties::TypeConverter_2<int16_t,double_t>*  value) ;

static inline void setStaticF___9__18_11(::Unity::Properties::TypeConverter_2<::StringW,int16_t>*  value) ;

static inline void setStaticF___9__18_2(::Unity::Properties::TypeConverter_2<int16_t,char16_t>*  value) ;

static inline void setStaticF___9__18_3(::Unity::Properties::TypeConverter_2<int16_t,int32_t>*  value) ;

static inline void setStaticF___9__18_4(::Unity::Properties::TypeConverter_2<int16_t,int64_t>*  value) ;

static inline void setStaticF___9__18_5(::Unity::Properties::TypeConverter_2<int16_t,uint8_t>*  value) ;

static inline void setStaticF___9__18_6(::Unity::Properties::TypeConverter_2<int16_t,uint16_t>*  value) ;

static inline void setStaticF___9__18_7(::Unity::Properties::TypeConverter_2<int16_t,uint32_t>*  value) ;

static inline void setStaticF___9__18_8(::Unity::Properties::TypeConverter_2<int16_t,uint64_t>*  value) ;

static inline void setStaticF___9__18_9(::Unity::Properties::TypeConverter_2<int16_t,float_t>*  value) ;

static inline void setStaticF___9__19_0(::Unity::Properties::TypeConverter_2<int32_t,bool>*  value) ;

static inline void setStaticF___9__19_1(::Unity::Properties::TypeConverter_2<int32_t,int8_t>*  value) ;

static inline void setStaticF___9__19_10(::Unity::Properties::TypeConverter_2<int32_t,double_t>*  value) ;

static inline void setStaticF___9__19_11(::Unity::Properties::TypeConverter_2<::StringW,int32_t>*  value) ;

static inline void setStaticF___9__19_2(::Unity::Properties::TypeConverter_2<int32_t,char16_t>*  value) ;

static inline void setStaticF___9__19_3(::Unity::Properties::TypeConverter_2<int32_t,int16_t>*  value) ;

static inline void setStaticF___9__19_4(::Unity::Properties::TypeConverter_2<int32_t,int64_t>*  value) ;

static inline void setStaticF___9__19_5(::Unity::Properties::TypeConverter_2<int32_t,uint8_t>*  value) ;

static inline void setStaticF___9__19_6(::Unity::Properties::TypeConverter_2<int32_t,uint16_t>*  value) ;

static inline void setStaticF___9__19_7(::Unity::Properties::TypeConverter_2<int32_t,uint32_t>*  value) ;

static inline void setStaticF___9__19_8(::Unity::Properties::TypeConverter_2<int32_t,uint64_t>*  value) ;

static inline void setStaticF___9__19_9(::Unity::Properties::TypeConverter_2<int32_t,float_t>*  value) ;

static inline void setStaticF___9__20_0(::Unity::Properties::TypeConverter_2<int64_t,bool>*  value) ;

static inline void setStaticF___9__20_1(::Unity::Properties::TypeConverter_2<int64_t,int8_t>*  value) ;

static inline void setStaticF___9__20_10(::Unity::Properties::TypeConverter_2<int64_t,double_t>*  value) ;

static inline void setStaticF___9__20_11(::Unity::Properties::TypeConverter_2<::StringW,int64_t>*  value) ;

static inline void setStaticF___9__20_2(::Unity::Properties::TypeConverter_2<int64_t,char16_t>*  value) ;

static inline void setStaticF___9__20_3(::Unity::Properties::TypeConverter_2<int64_t,int16_t>*  value) ;

static inline void setStaticF___9__20_4(::Unity::Properties::TypeConverter_2<int64_t,int32_t>*  value) ;

static inline void setStaticF___9__20_5(::Unity::Properties::TypeConverter_2<int64_t,uint8_t>*  value) ;

static inline void setStaticF___9__20_6(::Unity::Properties::TypeConverter_2<int64_t,uint16_t>*  value) ;

static inline void setStaticF___9__20_7(::Unity::Properties::TypeConverter_2<int64_t,uint32_t>*  value) ;

static inline void setStaticF___9__20_8(::Unity::Properties::TypeConverter_2<int64_t,uint64_t>*  value) ;

static inline void setStaticF___9__20_9(::Unity::Properties::TypeConverter_2<int64_t,float_t>*  value) ;

static inline void setStaticF___9__21_0(::Unity::Properties::TypeConverter_2<uint8_t,bool>*  value) ;

static inline void setStaticF___9__21_1(::Unity::Properties::TypeConverter_2<uint8_t,int8_t>*  value) ;

static inline void setStaticF___9__21_10(::Unity::Properties::TypeConverter_2<uint8_t,double_t>*  value) ;

static inline void setStaticF___9__21_11(::Unity::Properties::TypeConverter_2<uint8_t,::System::Object*>*  value) ;

static inline void setStaticF___9__21_12(::Unity::Properties::TypeConverter_2<::StringW,uint8_t>*  value) ;

static inline void setStaticF___9__21_2(::Unity::Properties::TypeConverter_2<uint8_t,char16_t>*  value) ;

static inline void setStaticF___9__21_3(::Unity::Properties::TypeConverter_2<uint8_t,int16_t>*  value) ;

static inline void setStaticF___9__21_4(::Unity::Properties::TypeConverter_2<uint8_t,int32_t>*  value) ;

static inline void setStaticF___9__21_5(::Unity::Properties::TypeConverter_2<uint8_t,int64_t>*  value) ;

static inline void setStaticF___9__21_6(::Unity::Properties::TypeConverter_2<uint8_t,uint16_t>*  value) ;

static inline void setStaticF___9__21_7(::Unity::Properties::TypeConverter_2<uint8_t,uint32_t>*  value) ;

static inline void setStaticF___9__21_8(::Unity::Properties::TypeConverter_2<uint8_t,uint64_t>*  value) ;

static inline void setStaticF___9__21_9(::Unity::Properties::TypeConverter_2<uint8_t,float_t>*  value) ;

static inline void setStaticF___9__22_0(::Unity::Properties::TypeConverter_2<uint16_t,bool>*  value) ;

static inline void setStaticF___9__22_1(::Unity::Properties::TypeConverter_2<uint16_t,int8_t>*  value) ;

static inline void setStaticF___9__22_10(::Unity::Properties::TypeConverter_2<uint16_t,double_t>*  value) ;

static inline void setStaticF___9__22_11(::Unity::Properties::TypeConverter_2<::StringW,uint16_t>*  value) ;

static inline void setStaticF___9__22_2(::Unity::Properties::TypeConverter_2<uint16_t,char16_t>*  value) ;

static inline void setStaticF___9__22_3(::Unity::Properties::TypeConverter_2<uint16_t,int16_t>*  value) ;

static inline void setStaticF___9__22_4(::Unity::Properties::TypeConverter_2<uint16_t,int32_t>*  value) ;

static inline void setStaticF___9__22_5(::Unity::Properties::TypeConverter_2<uint16_t,int64_t>*  value) ;

static inline void setStaticF___9__22_6(::Unity::Properties::TypeConverter_2<uint16_t,uint8_t>*  value) ;

static inline void setStaticF___9__22_7(::Unity::Properties::TypeConverter_2<uint16_t,uint32_t>*  value) ;

static inline void setStaticF___9__22_8(::Unity::Properties::TypeConverter_2<uint16_t,uint64_t>*  value) ;

static inline void setStaticF___9__22_9(::Unity::Properties::TypeConverter_2<uint16_t,float_t>*  value) ;

static inline void setStaticF___9__23_0(::Unity::Properties::TypeConverter_2<uint32_t,bool>*  value) ;

static inline void setStaticF___9__23_1(::Unity::Properties::TypeConverter_2<uint32_t,int8_t>*  value) ;

static inline void setStaticF___9__23_10(::Unity::Properties::TypeConverter_2<uint32_t,double_t>*  value) ;

static inline void setStaticF___9__23_11(::Unity::Properties::TypeConverter_2<::StringW,uint32_t>*  value) ;

static inline void setStaticF___9__23_2(::Unity::Properties::TypeConverter_2<uint32_t,char16_t>*  value) ;

static inline void setStaticF___9__23_3(::Unity::Properties::TypeConverter_2<uint32_t,int16_t>*  value) ;

static inline void setStaticF___9__23_4(::Unity::Properties::TypeConverter_2<uint32_t,int32_t>*  value) ;

static inline void setStaticF___9__23_5(::Unity::Properties::TypeConverter_2<uint32_t,int64_t>*  value) ;

static inline void setStaticF___9__23_6(::Unity::Properties::TypeConverter_2<uint32_t,uint8_t>*  value) ;

static inline void setStaticF___9__23_7(::Unity::Properties::TypeConverter_2<uint32_t,uint16_t>*  value) ;

static inline void setStaticF___9__23_8(::Unity::Properties::TypeConverter_2<uint32_t,uint64_t>*  value) ;

static inline void setStaticF___9__23_9(::Unity::Properties::TypeConverter_2<uint32_t,float_t>*  value) ;

static inline void setStaticF___9__24_0(::Unity::Properties::TypeConverter_2<uint64_t,bool>*  value) ;

static inline void setStaticF___9__24_1(::Unity::Properties::TypeConverter_2<uint64_t,int8_t>*  value) ;

static inline void setStaticF___9__24_10(::Unity::Properties::TypeConverter_2<uint64_t,double_t>*  value) ;

static inline void setStaticF___9__24_11(::Unity::Properties::TypeConverter_2<::StringW,uint64_t>*  value) ;

static inline void setStaticF___9__24_2(::Unity::Properties::TypeConverter_2<uint64_t,char16_t>*  value) ;

static inline void setStaticF___9__24_3(::Unity::Properties::TypeConverter_2<uint64_t,int16_t>*  value) ;

static inline void setStaticF___9__24_4(::Unity::Properties::TypeConverter_2<uint64_t,int32_t>*  value) ;

static inline void setStaticF___9__24_5(::Unity::Properties::TypeConverter_2<uint64_t,int64_t>*  value) ;

static inline void setStaticF___9__24_6(::Unity::Properties::TypeConverter_2<uint64_t,uint8_t>*  value) ;

static inline void setStaticF___9__24_7(::Unity::Properties::TypeConverter_2<uint64_t,uint16_t>*  value) ;

static inline void setStaticF___9__24_8(::Unity::Properties::TypeConverter_2<uint64_t,uint32_t>*  value) ;

static inline void setStaticF___9__24_9(::Unity::Properties::TypeConverter_2<uint64_t,float_t>*  value) ;

static inline void setStaticF___9__25_0(::Unity::Properties::TypeConverter_2<float_t,bool>*  value) ;

static inline void setStaticF___9__25_1(::Unity::Properties::TypeConverter_2<float_t,int8_t>*  value) ;

static inline void setStaticF___9__25_10(::Unity::Properties::TypeConverter_2<float_t,double_t>*  value) ;

static inline void setStaticF___9__25_11(::Unity::Properties::TypeConverter_2<float_t,::StringW>*  value) ;

static inline void setStaticF___9__25_12(::Unity::Properties::TypeConverter_2<::StringW,float_t>*  value) ;

static inline void setStaticF___9__25_2(::Unity::Properties::TypeConverter_2<float_t,char16_t>*  value) ;

static inline void setStaticF___9__25_3(::Unity::Properties::TypeConverter_2<float_t,int16_t>*  value) ;

static inline void setStaticF___9__25_4(::Unity::Properties::TypeConverter_2<float_t,int32_t>*  value) ;

static inline void setStaticF___9__25_5(::Unity::Properties::TypeConverter_2<float_t,int64_t>*  value) ;

static inline void setStaticF___9__25_6(::Unity::Properties::TypeConverter_2<float_t,uint8_t>*  value) ;

static inline void setStaticF___9__25_7(::Unity::Properties::TypeConverter_2<float_t,uint16_t>*  value) ;

static inline void setStaticF___9__25_8(::Unity::Properties::TypeConverter_2<float_t,uint32_t>*  value) ;

static inline void setStaticF___9__25_9(::Unity::Properties::TypeConverter_2<float_t,uint64_t>*  value) ;

static inline void setStaticF___9__26_0(::Unity::Properties::TypeConverter_2<double_t,bool>*  value) ;

static inline void setStaticF___9__26_1(::Unity::Properties::TypeConverter_2<double_t,int8_t>*  value) ;

static inline void setStaticF___9__26_10(::Unity::Properties::TypeConverter_2<double_t,float_t>*  value) ;

static inline void setStaticF___9__26_11(::Unity::Properties::TypeConverter_2<double_t,::StringW>*  value) ;

static inline void setStaticF___9__26_12(::Unity::Properties::TypeConverter_2<::StringW,double_t>*  value) ;

static inline void setStaticF___9__26_2(::Unity::Properties::TypeConverter_2<double_t,char16_t>*  value) ;

static inline void setStaticF___9__26_3(::Unity::Properties::TypeConverter_2<double_t,int16_t>*  value) ;

static inline void setStaticF___9__26_4(::Unity::Properties::TypeConverter_2<double_t,int32_t>*  value) ;

static inline void setStaticF___9__26_5(::Unity::Properties::TypeConverter_2<double_t,int64_t>*  value) ;

static inline void setStaticF___9__26_6(::Unity::Properties::TypeConverter_2<double_t,uint8_t>*  value) ;

static inline void setStaticF___9__26_7(::Unity::Properties::TypeConverter_2<double_t,uint16_t>*  value) ;

static inline void setStaticF___9__26_8(::Unity::Properties::TypeConverter_2<double_t,uint32_t>*  value) ;

static inline void setStaticF___9__26_9(::Unity::Properties::TypeConverter_2<double_t,uint64_t>*  value) ;

static inline void setStaticF___9__27_0(::Unity::Properties::TypeConverter_2<bool,char16_t>*  value) ;

static inline void setStaticF___9__27_1(::Unity::Properties::TypeConverter_2<bool,int8_t>*  value) ;

static inline void setStaticF___9__27_10(::Unity::Properties::TypeConverter_2<bool,double_t>*  value) ;

static inline void setStaticF___9__27_11(::Unity::Properties::TypeConverter_2<::StringW,bool>*  value) ;

static inline void setStaticF___9__27_2(::Unity::Properties::TypeConverter_2<bool,int16_t>*  value) ;

static inline void setStaticF___9__27_3(::Unity::Properties::TypeConverter_2<bool,int32_t>*  value) ;

static inline void setStaticF___9__27_4(::Unity::Properties::TypeConverter_2<bool,int64_t>*  value) ;

static inline void setStaticF___9__27_5(::Unity::Properties::TypeConverter_2<bool,uint8_t>*  value) ;

static inline void setStaticF___9__27_6(::Unity::Properties::TypeConverter_2<bool,uint16_t>*  value) ;

static inline void setStaticF___9__27_7(::Unity::Properties::TypeConverter_2<bool,uint32_t>*  value) ;

static inline void setStaticF___9__27_8(::Unity::Properties::TypeConverter_2<bool,uint64_t>*  value) ;

static inline void setStaticF___9__27_9(::Unity::Properties::TypeConverter_2<bool,float_t>*  value) ;

static inline void setStaticF___9__28_0(::Unity::Properties::TypeConverter_2<char16_t,bool>*  value) ;

static inline void setStaticF___9__28_1(::Unity::Properties::TypeConverter_2<char16_t,int8_t>*  value) ;

static inline void setStaticF___9__28_10(::Unity::Properties::TypeConverter_2<char16_t,double_t>*  value) ;

static inline void setStaticF___9__28_11(::Unity::Properties::TypeConverter_2<::StringW,char16_t>*  value) ;

static inline void setStaticF___9__28_2(::Unity::Properties::TypeConverter_2<char16_t,int16_t>*  value) ;

static inline void setStaticF___9__28_3(::Unity::Properties::TypeConverter_2<char16_t,int32_t>*  value) ;

static inline void setStaticF___9__28_4(::Unity::Properties::TypeConverter_2<char16_t,int64_t>*  value) ;

static inline void setStaticF___9__28_5(::Unity::Properties::TypeConverter_2<char16_t,uint8_t>*  value) ;

static inline void setStaticF___9__28_6(::Unity::Properties::TypeConverter_2<char16_t,uint16_t>*  value) ;

static inline void setStaticF___9__28_7(::Unity::Properties::TypeConverter_2<char16_t,uint32_t>*  value) ;

static inline void setStaticF___9__28_8(::Unity::Properties::TypeConverter_2<char16_t,uint64_t>*  value) ;

static inline void setStaticF___9__28_9(::Unity::Properties::TypeConverter_2<char16_t,float_t>*  value) ;

static inline void setStaticF___9__29_0(::Unity::Properties::TypeConverter_2<::UnityEngine::Color,::UnityEngine::Color32>*  value) ;

static inline void setStaticF___9__29_1(::Unity::Properties::TypeConverter_2<::UnityEngine::Color32,::UnityEngine::Color>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterGroups___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterGroups___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterGroups___c(ConverterGroups___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterGroups___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterGroups___c(ConverterGroups___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ConverterGroups___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

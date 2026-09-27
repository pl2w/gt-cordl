#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumData_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TEnum>
class EnumData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::EnumData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::EnumData_1, "", "EnumData`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: EnumData`1<TEnum>
class CORDL_TYPE EnumData_1 : public ::System::Object {
public:
// Declarations
/// @brief Field EnumToIndex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnumToIndex, put=__cordl_internal_set_EnumToIndex)) ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*  EnumToIndex;

/// @brief Field EnumToLong, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnumToLong, put=__cordl_internal_set_EnumToLong)) ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*  EnumToLong;

/// @brief Field EnumToName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnumToName, put=__cordl_internal_set_EnumToName)) ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*  EnumToName;

/// @brief Field IndexToEnum, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_IndexToEnum, put=__cordl_internal_set_IndexToEnum)) ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*  IndexToEnum;

/// @brief Field IsBitMaskCompatible, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsBitMaskCompatible, put=__cordl_internal_set_IsBitMaskCompatible)) bool  IsBitMaskCompatible;

/// @brief Field LongToEnum, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_LongToEnum, put=__cordl_internal_set_LongToEnum)) ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*  LongToEnum;

/// @brief Field LongValues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LongValues, put=__cordl_internal_set_LongValues)) ::ArrayW<int64_t>  LongValues;

/// @brief Field MaxInt, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxInt, put=__cordl_internal_set_MaxInt)) int32_t  MaxInt;

/// @brief Field MaxLong, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxLong, put=__cordl_internal_set_MaxLong)) int64_t  MaxLong;

/// @brief Field MaxValue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxValue, put=__cordl_internal_set_MaxValue)) TEnum  MaxValue;

/// @brief Field MinInt, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinInt, put=__cordl_internal_set_MinInt)) int32_t  MinInt;

/// @brief Field MinLong, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinLong, put=__cordl_internal_set_MinLong)) int64_t  MinLong;

/// @brief Field MinValue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinValue, put=__cordl_internal_set_MinValue)) TEnum  MinValue;

/// @brief Field NameToEnum, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NameToEnum, put=__cordl_internal_set_NameToEnum)) ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*  NameToEnum;

/// @brief Field Names, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Names, put=__cordl_internal_set_Names)) ::ArrayW<::StringW>  Names;

/// @brief Field Values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Values, put=__cordl_internal_set_Values)) ::ArrayW<TEnum>  Values;

/// @brief Field <Shared>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Shared_k__BackingField, put=setStaticF__Shared_k__BackingField)) ::GlobalNamespace::EnumData_1<TEnum>*  _Shared_k__BackingField;

static inline ::GlobalNamespace::EnumData_1<TEnum>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>* const& __cordl_internal_get_EnumToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*& __cordl_internal_get_EnumToIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>* const& __cordl_internal_get_EnumToLong() const;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*& __cordl_internal_get_EnumToLong() ;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>* const& __cordl_internal_get_EnumToName() const;

constexpr ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*& __cordl_internal_get_EnumToName() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>* const& __cordl_internal_get_IndexToEnum() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*& __cordl_internal_get_IndexToEnum() ;

constexpr bool const& __cordl_internal_get_IsBitMaskCompatible() const;

constexpr bool& __cordl_internal_get_IsBitMaskCompatible() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>* const& __cordl_internal_get_LongToEnum() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*& __cordl_internal_get_LongToEnum() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_LongValues() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_LongValues() ;

constexpr int32_t const& __cordl_internal_get_MaxInt() const;

constexpr int32_t& __cordl_internal_get_MaxInt() ;

constexpr int64_t const& __cordl_internal_get_MaxLong() const;

constexpr int64_t& __cordl_internal_get_MaxLong() ;

constexpr TEnum const& __cordl_internal_get_MaxValue() const;

constexpr TEnum& __cordl_internal_get_MaxValue() ;

constexpr int32_t const& __cordl_internal_get_MinInt() const;

constexpr int32_t& __cordl_internal_get_MinInt() ;

constexpr int64_t const& __cordl_internal_get_MinLong() const;

constexpr int64_t& __cordl_internal_get_MinLong() ;

constexpr TEnum const& __cordl_internal_get_MinValue() const;

constexpr TEnum& __cordl_internal_get_MinValue() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>* const& __cordl_internal_get_NameToEnum() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*& __cordl_internal_get_NameToEnum() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Names() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Names() ;

constexpr ::ArrayW<TEnum> const& __cordl_internal_get_Values() const;

constexpr ::ArrayW<TEnum>& __cordl_internal_get_Values() ;

constexpr void __cordl_internal_set_EnumToIndex(::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*  value) ;

constexpr void __cordl_internal_set_EnumToLong(::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*  value) ;

constexpr void __cordl_internal_set_EnumToName(::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*  value) ;

constexpr void __cordl_internal_set_IndexToEnum(::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*  value) ;

constexpr void __cordl_internal_set_IsBitMaskCompatible(bool  value) ;

constexpr void __cordl_internal_set_LongToEnum(::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*  value) ;

constexpr void __cordl_internal_set_LongValues(::ArrayW<int64_t>  value) ;

constexpr void __cordl_internal_set_MaxInt(int32_t  value) ;

constexpr void __cordl_internal_set_MaxLong(int64_t  value) ;

constexpr void __cordl_internal_set_MaxValue(TEnum  value) ;

constexpr void __cordl_internal_set_MinInt(int32_t  value) ;

constexpr void __cordl_internal_set_MinLong(int64_t  value) ;

constexpr void __cordl_internal_set_MinValue(TEnum  value) ;

constexpr void __cordl_internal_set_NameToEnum(::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*  value) ;

constexpr void __cordl_internal_set_Names(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_Values(::ArrayW<TEnum>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::EnumData_1<TEnum>* getStaticF__Shared_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Shared, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EnumData_1<TEnum>* get_Shared() ;

static inline void setStaticF__Shared_k__BackingField(::GlobalNamespace::EnumData_1<TEnum>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumData_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumData_1(EnumData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumData_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumData_1(EnumData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2801};

/// @brief Field Names, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Names;

/// @brief Field Values, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<TEnum>  ___Values;

/// @brief Field LongValues, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___LongValues;

/// @brief Field IsBitMaskCompatible, offset: 0x28, size: 0x1, def value: None
 bool  ___IsBitMaskCompatible;

/// @brief Field EnumToName, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TEnum,::StringW>*  ___EnumToName;

/// @brief Field NameToEnum, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,TEnum>*  ___NameToEnum;

/// @brief Field EnumToIndex, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TEnum,int32_t>*  ___EnumToIndex;

/// @brief Field IndexToEnum, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,TEnum>*  ___IndexToEnum;

/// @brief Field EnumToLong, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TEnum,int64_t>*  ___EnumToLong;

/// @brief Field LongToEnum, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,TEnum>*  ___LongToEnum;

/// @brief Field MinValue, offset: 0x60, size: 0x8, def value: None
 TEnum  ___MinValue;

/// @brief Field MaxValue, offset: 0x68, size: 0x8, def value: None
 TEnum  ___MaxValue;

/// @brief Field MinInt, offset: 0x70, size: 0x4, def value: None
 int32_t  ___MinInt;

/// @brief Field MaxInt, offset: 0x74, size: 0x4, def value: None
 int32_t  ___MaxInt;

/// @brief Field MinLong, offset: 0x78, size: 0x8, def value: None
 int64_t  ___MinLong;

/// @brief Field MaxLong, offset: 0x80, size: 0x8, def value: None
 int64_t  ___MaxLong;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

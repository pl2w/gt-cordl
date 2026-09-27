#pragma once
// IWYU pragma private; include "System/DefaultBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/zzzz__DefaultBinder_Primitives_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultBinder)
namespace GlobalNamespace {
struct DefaultBinder_Primitives;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class DefaultBinder_BinderState;
}
namespace System {
class DefaultBinder___c;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class DefaultBinder;
}
namespace System {
class DefaultBinder_BinderState;
}
namespace System {
class DefaultBinder___c;
}
// Write type traits
MARK_REF_T(::System::DefaultBinder*);
MARK_REF_T(::System::DefaultBinder_BinderState*);
MARK_REF_T(::System::DefaultBinder___c*);
DEFINE_IL2CPP_CLASS(::System::DefaultBinder*, "System", "DefaultBinder");
DEFINE_IL2CPP_CLASS(::System::DefaultBinder_BinderState*, "System", "DefaultBinder/BinderState");
DEFINE_IL2CPP_CLASS(::System::DefaultBinder___c*, "System", "DefaultBinder/<>c");
// Dependencies System.DefaultBinder::Primitives, System.Reflection.Binder
namespace System {
// Is value type: false
// CS Name: System.DefaultBinder
class CORDL_TYPE DefaultBinder : public ::System::Reflection::Binder {
public:
// Declarations
using Primitives = ::GlobalNamespace::DefaultBinder_Primitives;

using BinderState = ::System::DefaultBinder_BinderState;

using __c = ::System::DefaultBinder___c;

/// @brief Field _primitiveConversions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__primitiveConversions, put=setStaticF__primitiveConversions)) ::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>  _primitiveConversions;

/// @brief Method BindToField, addr 0xa30fc74, size 0x488, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*>  match, ::System::Object*  value, ::System::Globalization::CultureInfo*  cultureInfo) ;

/// @brief Method BindToMethod, addr 0xa30d594, size 0x2048, virtual true, abstract: false, final false
inline ::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*>  match, ::by_ref<::ArrayW<::System::Object*>>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  cultureInfo, ::ArrayW<::StringW>  names, ::by_ref<::System::Object*>  state) ;

/// @brief Method CanChangePrimitive, addr 0xa312a64, size 0x64, virtual false, abstract: false, final false
static inline bool CanChangePrimitive(::System::Type*  source, ::System::Type*  target) ;

/// @brief Method CanConvertPrimitive, addr 0xa310bf0, size 0x22c, virtual false, abstract: false, final false
static inline bool CanConvertPrimitive(::System::RuntimeType*  source, ::System::RuntimeType*  target) ;

/// @brief Method CanConvertPrimitiveObjectToType, addr 0xa30f830, size 0x104, virtual false, abstract: false, final false
static inline bool CanConvertPrimitiveObjectToType(::System::Object*  source, ::System::RuntimeType*  type) ;

/// @brief Method CanPrimitiveWiden, addr 0xa312ac8, size 0xc4, virtual false, abstract: false, final false
static inline bool CanPrimitiveWiden(::System::Type*  source, ::System::Type*  target) ;

/// @brief Method ChangeType, addr 0xa311688, size 0x58, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  type, ::System::Globalization::CultureInfo*  cultureInfo) ;

/// @brief Method CompareMethodSig, addr 0xa312224, size 0x134, virtual false, abstract: false, final false
static inline bool CompareMethodSig(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2) ;

/// @brief Method CompareMethodSigAndName, addr 0xa31207c, size 0x134, virtual false, abstract: false, final false
static inline bool CompareMethodSigAndName(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2) ;

/// @brief Method CreateParamOrder, addr 0xa30f5dc, size 0x254, virtual false, abstract: false, final false
static inline bool CreateParamOrder(::ArrayW<int32_t>  paramOrder, ::ArrayW<::System::Reflection::ParameterInfo*>  pars, ::ArrayW<::StringW>  names) ;

/// @brief Method ExactBinding, addr 0xa311a10, size 0x278, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* ExactBinding(::ArrayW<::System::Reflection::MethodBase*>  match, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method ExactPropertyBinding, addr 0xa311dd4, size 0x2a8, virtual false, abstract: false, final false
static inline ::System::Reflection::PropertyInfo* ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method FindMostDerivedNewSlotMeth, addr 0xa311c88, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*>  match, int32_t  cMatches) ;

/// @brief Method FindMostSpecific, addr 0xa3111b0, size 0x3f0, virtual false, abstract: false, final false
static inline int32_t FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*>  p1, ::ArrayW<int32_t>  paramOrder1, ::System::Type*  paramArrayType1, ::ArrayW<::System::Reflection::ParameterInfo*>  p2, ::ArrayW<int32_t>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Object*>  args) ;

/// @brief Method FindMostSpecificField, addr 0xa3100fc, size 0xe8, virtual false, abstract: false, final false
static inline int32_t FindMostSpecificField(::System::Reflection::FieldInfo*  cur1, ::System::Reflection::FieldInfo*  cur2) ;

/// @brief Method FindMostSpecificMethod, addr 0xa30faf8, size 0x17c, virtual false, abstract: false, final false
static inline int32_t FindMostSpecificMethod(::System::Reflection::MethodBase*  m1, ::ArrayW<int32_t>  paramOrder1, ::System::Type*  paramArrayType1, ::System::Reflection::MethodBase*  m2, ::ArrayW<int32_t>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Object*>  args) ;

/// @brief Method FindMostSpecificProperty, addr 0xa3115a0, size 0xe8, virtual false, abstract: false, final false
static inline int32_t FindMostSpecificProperty(::System::Reflection::PropertyInfo*  cur1, ::System::Reflection::PropertyInfo*  cur2) ;

/// @brief Method FindMostSpecificType, addr 0xa310e1c, size 0x394, virtual false, abstract: false, final false
static inline int32_t FindMostSpecificType(::System::Type*  c1, ::System::Type*  c2, ::System::Type*  t) ;

/// @brief Method GetHierarchyDepth, addr 0xa3121b0, size 0x74, virtual false, abstract: false, final false
static inline int32_t GetHierarchyDepth(::System::Type*  t) ;

static inline ::System::DefaultBinder* New_ctor() ;

/// @brief Method ReorderArgumentArray, addr 0xa3116e0, size 0x330, virtual true, abstract: false, final false
inline void ReorderArgumentArray(::by_ref<::ArrayW<::System::Object*>>  args, ::System::Object*  state) ;

/// @brief Method ReorderParams, addr 0xa30f980, size 0x178, virtual false, abstract: false, final false
static inline void ReorderParams(::ArrayW<int32_t>  paramOrder, ::ArrayW<::System::Object*>  vars) ;

/// @brief Method SelectMethod, addr 0xa312358, size 0x70c, virtual true, abstract: false, final true
inline ::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*>  match, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method SelectProperty, addr 0xa3101e4, size 0xa0c, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*>  indexes, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method .ctor, addr 0xa312b8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::DefaultBinder_Primitives> getStaticF__primitiveConversions() ;

static inline void setStaticF__primitiveConversions(::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultBinder(DefaultBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultBinder(DefaultBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DefaultBinder) == 0x10, "Size mismatch!");

} // namespace end def System
// [CompilerGenerated]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DefaultBinder/<>c
class CORDL_TYPE DefaultBinder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::DefaultBinder___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Predicate_1<::System::Type*>*  __9__2_0;

static inline ::System::DefaultBinder___c* New_ctor() ;

/// @brief Method <SelectProperty>b__2_0, addr 0xa312ca4, size 0x34, virtual false, abstract: false, final false
inline bool _SelectProperty_b__2_0(::System::Type*  t) ;

/// @brief Method .ctor, addr 0xa312c9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DefaultBinder___c* getStaticF___9() ;

static inline ::System::Predicate_1<::System::Type*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::System::DefaultBinder___c*  value) ;

static inline void setStaticF___9__2_0(::System::Predicate_1<::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultBinder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultBinder___c(DefaultBinder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultBinder___c(DefaultBinder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::DefaultBinder___c) == 0x10, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DefaultBinder/BinderState
class CORDL_TYPE DefaultBinder_BinderState : public ::System::Object {
public:
// Declarations
/// @brief Field m_argsMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_argsMap, put=__cordl_internal_set_m_argsMap)) ::ArrayW<int32_t>  m_argsMap;

/// @brief Field m_isParamArray, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_isParamArray, put=__cordl_internal_set_m_isParamArray)) bool  m_isParamArray;

/// @brief Field m_originalSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_originalSize, put=__cordl_internal_set_m_originalSize)) int32_t  m_originalSize;

static inline ::System::DefaultBinder_BinderState* New_ctor(::ArrayW<int32_t>  argsMap, int32_t  originalSize, bool  isParamArray) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_argsMap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_argsMap() ;

constexpr bool const& __cordl_internal_get_m_isParamArray() const;

constexpr bool& __cordl_internal_get_m_isParamArray() ;

constexpr int32_t const& __cordl_internal_get_m_originalSize() const;

constexpr int32_t& __cordl_internal_get_m_originalSize() ;

constexpr void __cordl_internal_set_m_argsMap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_isParamArray(bool  value) ;

constexpr void __cordl_internal_set_m_originalSize(int32_t  value) ;

/// @brief Method .ctor, addr 0xa30f934, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  argsMap, int32_t  originalSize, bool  isParamArray) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultBinder_BinderState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder_BinderState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultBinder_BinderState(DefaultBinder_BinderState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultBinder_BinderState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultBinder_BinderState(DefaultBinder_BinderState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5674};

/// @brief Field m_argsMap, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_argsMap;

/// @brief Field m_originalSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_originalSize;

/// @brief Field m_isParamArray, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_isParamArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::DefaultBinder_BinderState, ___m_argsMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::DefaultBinder_BinderState, ___m_originalSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::DefaultBinder_BinderState, ___m_isParamArray) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::DefaultBinder_BinderState) == 0x20, "Size mismatch!");

} // namespace end def System

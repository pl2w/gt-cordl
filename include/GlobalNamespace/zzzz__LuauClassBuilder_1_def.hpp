#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauClassBuilder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LuauClassBuilder_1)
namespace GlobalNamespace {
class lua_CFunction;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Type;
}
namespace Unity::Burst {
template<typename T>
struct FunctionPointer_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class LuauClassBuilder_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::LuauClassBuilder_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LuauClassBuilder_1, "", "LuauClassBuilder`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LuauClassBuilder`1<T>
class CORDL_TYPE LuauClassBuilder_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _classFields, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__classFields, put=__cordl_internal_set__classFields)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  _classFields;

/// @brief Field _className, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__className, put=__cordl_internal_set__className)) ::StringW  _className;

/// @brief Field _classType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__classType, put=__cordl_internal_set__classType)) ::System::Type*  _classType;

/// @brief Field _functionPtrs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__functionPtrs, put=__cordl_internal_set__functionPtrs)) ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  _functionPtrs;

/// @brief Field _functions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__functions, put=__cordl_internal_set__functions)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  _functions;

/// @brief Field _properties, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  _properties;

/// @brief Field _propertyPtrs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyPtrs, put=__cordl_internal_set__propertyPtrs)) ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  _propertyPtrs;

/// @brief Field _staticFunctionPtrs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__staticFunctionPtrs, put=__cordl_internal_set__staticFunctionPtrs)) ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  _staticFunctionPtrs;

/// @brief Field _staticFunctions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__staticFunctions, put=__cordl_internal_set__staticFunctions)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  _staticFunctions;

/// @brief Method AddField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddField(::StringW  luaName, ::StringW  fieldName) ;

/// @brief Method AddFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddFunction(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function) ;

/// @brief Method AddFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddFunction(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function) ;

/// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddProperty(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function) ;

/// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddProperty(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function) ;

/// @brief Method AddStaticFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddStaticFunction(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function) ;

/// @brief Method AddStaticFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* AddStaticFunction(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function) ;

/// @brief Method Build, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauClassBuilder_1<T>* Build(::GlobalNamespace::lua_State*  L, bool  global) ;

static inline ::GlobalNamespace::LuauClassBuilder_1<T>* New_ctor(::StringW  className) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>* const& __cordl_internal_get__classFields() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*& __cordl_internal_get__classFields() ;

constexpr ::StringW const& __cordl_internal_get__className() const;

constexpr ::StringW& __cordl_internal_get__className() ;

constexpr ::System::Type* const& __cordl_internal_get__classType() const;

constexpr ::System::Type*& __cordl_internal_get__classType() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& __cordl_internal_get__functionPtrs() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& __cordl_internal_get__functionPtrs() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>* const& __cordl_internal_get__functions() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*& __cordl_internal_get__functions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>* const& __cordl_internal_get__properties() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*& __cordl_internal_get__properties() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& __cordl_internal_get__propertyPtrs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& __cordl_internal_get__propertyPtrs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& __cordl_internal_get__staticFunctionPtrs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& __cordl_internal_get__staticFunctionPtrs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>* const& __cordl_internal_get__staticFunctions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*& __cordl_internal_get__staticFunctions() ;

constexpr void __cordl_internal_set__classFields(::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  value) ;

constexpr void __cordl_internal_set__className(::StringW  value) ;

constexpr void __cordl_internal_set__classType(::System::Type*  value) ;

constexpr void __cordl_internal_set__functionPtrs(::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value) ;

constexpr void __cordl_internal_set__functions(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  value) ;

constexpr void __cordl_internal_set__properties(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  value) ;

constexpr void __cordl_internal_set__propertyPtrs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value) ;

constexpr void __cordl_internal_set__staticFunctionPtrs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value) ;

constexpr void __cordl_internal_set__staticFunctions(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  className) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuauClassBuilder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuauClassBuilder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuauClassBuilder_1(LuauClassBuilder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuauClassBuilder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuauClassBuilder_1(LuauClassBuilder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3217};

/// @brief Field _className, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____className;

/// @brief Field _classType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____classType;

/// @brief Field _staticFunctions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  ____staticFunctions;

/// @brief Field _staticFunctionPtrs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  ____staticFunctionPtrs;

/// @brief Field _classFields, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  ____classFields;

/// @brief Field _properties, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  ____properties;

/// @brief Field _propertyPtrs, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  ____propertyPtrs;

/// @brief Field _functions, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  ____functions;

/// @brief Field _functionPtrs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  ____functionPtrs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

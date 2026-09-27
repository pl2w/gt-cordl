#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauClassBuilder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LuauClassBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__lua_CFunction_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
template<typename T>
constexpr ::StringW& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__className()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____className;
}
template<typename T>
constexpr ::StringW const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__className() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____className;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__className(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____className = value;
}
template<typename T>
constexpr ::System::Type*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__classType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classType;
}
template<typename T>
constexpr ::System::Type* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__classType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classType;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__classType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____classType = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__staticFunctions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticFunctions;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__staticFunctions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticFunctions;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__staticFunctions(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____staticFunctions = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__staticFunctionPtrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticFunctionPtrs;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__staticFunctionPtrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____staticFunctionPtrs;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__staticFunctionPtrs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____staticFunctionPtrs = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__classFields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classFields;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__classFields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classFields;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__classFields(::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____classFields = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__properties(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__propertyPtrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyPtrs;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__propertyPtrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyPtrs;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__propertyPtrs(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyPtrs = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__functions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functions;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__functions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functions;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__functions(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____functions = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__functionPtrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functionPtrs;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>* const& GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_get__functionPtrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functionPtrs;
}
template<typename T>
constexpr void GlobalNamespace::LuauClassBuilder_1<T>::__cordl_internal_set__functionPtrs(::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____functionPtrs = value;
}
template<typename T>
inline void GlobalNamespace::LuauClassBuilder_1<T>::_ctor(::StringW  className)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddField(::StringW  luaName, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddField", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, fieldName);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddStaticFunction(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddStaticFunction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddStaticFunction(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddStaticFunction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddProperty(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddProperty(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddFunction(::StringW  luaName, ::GlobalNamespace::lua_CFunction*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddFunction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::AddFunction(::StringW  luaName, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"AddFunction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, luaName, function);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::Build(::GlobalNamespace::lua_State*  L, bool  global)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauClassBuilder_1<T>*>(),
                        {"Build", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauClassBuilder_1<T>*>(this, ___internal_method, L, global);
}
template<typename T>
inline ::GlobalNamespace::LuauClassBuilder_1<T>* GlobalNamespace::LuauClassBuilder_1<T>::New_ctor(::StringW  className)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LuauClassBuilder_1<T>*>(className));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LuauClassBuilder_1<T>::LuauClassBuilder_1()   {
}

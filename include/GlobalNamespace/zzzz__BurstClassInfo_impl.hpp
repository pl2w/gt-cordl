#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_ClassInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_impl.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_def.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_BurstFieldInfo_def.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_ClassInfo_def.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_EFieldTypes_def.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_def.hpp"
#include "GlobalNamespace/zzzz__lua_CFunction_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::Index)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a90d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"Index", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.NewIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::NewIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a90d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NewIndex", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.NameCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::NameCall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a90d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NameCall", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.Index$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::Index$BurstManaged)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5a91050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"Index$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.NewIndex$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::NewIndex$BurstManaged)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5a919a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NewIndex$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo.NameCall$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo::NameCall$BurstManaged)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5a92000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NameCall$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo::setStaticF__k_metatableLookup(::Unity::Collections::FixedString32Bytes  value)  {
::cordl_internals::setStaticField<::Unity::Collections::FixedString32Bytes, "_k_metatableLookup", ::GlobalNamespace::BurstClassInfo*>(std::forward<::Unity::Collections::FixedString32Bytes>(value));
}
inline ::Unity::Collections::FixedString32Bytes GlobalNamespace::BurstClassInfo::getStaticF__k_metatableLookup()  {
return ::cordl_internals::getStaticField<::Unity::Collections::FixedString32Bytes, "_k_metatableLookup", ::GlobalNamespace::BurstClassInfo*>();
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::BurstClassInfo::NewClass(::StringW  className, ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  fieldList, ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  functionList, ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  functionPtrList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                    {"NewClass", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, className, fieldList, functionList, functionPtrList);
}
inline int32_t GlobalNamespace::BurstClassInfo::Index(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"Index", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::BurstClassInfo::NewIndex(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NewIndex", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::BurstClassInfo::NameCall(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NameCall", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::BurstClassInfo::Index$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"Index$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::BurstClassInfo::NewIndex$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NewIndex$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::BurstClassInfo::NameCall$BurstManaged(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo*>(),
                        {"NameCall$BurstManaged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo::BurstClassInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a92bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a92ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a90ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>();
}
inline void GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall::BurstClassInfo_NameCall_00004E50$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a92ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a92b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a92b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a92bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate* GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a929c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a92ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a90e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>();
}
inline void GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a928bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a9296c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a92980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a929a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate* GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a927b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a928a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a90d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>();
}
inline void GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::Invoke(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall::BurstClassInfo_Index_00004E4E$BurstDirectCall()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a926a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a92758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::*)(::GlobalNamespace::lua_State*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a9276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::Invoke(::GlobalNamespace::lua_State*  L)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, L);
}
inline ::System::IAsyncResult* GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, L, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate* GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::GlobalNamespace::BurstClassInfo_ClassList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstClassInfo_ClassList::*)()>(&::GlobalNamespace::BurstClassInfo_ClassList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a92610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_ClassList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstClassInfo_ClassList::setStaticF_InfoFields(::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>, "InfoFields", ::GlobalNamespace::BurstClassInfo_ClassList*>(std::forward<::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>> GlobalNamespace::BurstClassInfo_ClassList::getStaticF_InfoFields()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>, "InfoFields", ::GlobalNamespace::BurstClassInfo_ClassList*>();
}
inline void GlobalNamespace::BurstClassInfo_ClassList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstClassInfo_ClassList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstClassInfo_ClassList* GlobalNamespace::BurstClassInfo_ClassList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstClassInfo_ClassList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_ClassList::BurstClassInfo_ClassList()   {
}
template<typename T>
inline void GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>::setStaticF_Name(::Unity::Collections::FixedString32Bytes  value)  {
::cordl_internals::setStaticField<::Unity::Collections::FixedString32Bytes, "Name", ::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>*>(std::forward<::Unity::Collections::FixedString32Bytes>(value));
}
template<typename T>
inline ::Unity::Collections::FixedString32Bytes GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>::getStaticF_Name()  {
return ::cordl_internals::getStaticField<::Unity::Collections::FixedString32Bytes, "Name", ::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>::ClassList_BurstClassInfo_MetatableNames_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::ClassList_BurstClassInfo_FieldKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClassList_BurstClassInfo_FieldKey::*)()>(&::GlobalNamespace::ClassList_BurstClassInfo_FieldKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a926a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClassList_BurstClassInfo_FieldKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ClassList_BurstClassInfo_FieldKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClassList_BurstClassInfo_FieldKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClassList_BurstClassInfo_FieldKey* GlobalNamespace::ClassList_BurstClassInfo_FieldKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClassList_BurstClassInfo_FieldKey*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClassList_BurstClassInfo_FieldKey::ClassList_BurstClassInfo_FieldKey()   {
}

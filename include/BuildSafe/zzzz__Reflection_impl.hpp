#pragma once
// IWYU pragma private; include "BuildSafe/Reflection.hpp"
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "BuildSafe/zzzz__Reflection_def.hpp"
#include "BuildSafe/zzzz__Reflection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::BuildSafe::Reflection.get_AllAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(&::BuildSafe::Reflection::get_AllAssemblies)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c4eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"get_AllAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection.get_AllTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::BuildSafe::Reflection::get_AllTypes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c4eeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"get_AllTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection.PreFetchAllAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(&::BuildSafe::Reflection::PreFetchAllAssemblies)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c4ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"PreFetchAllAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection.PreFetchAllTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::BuildSafe::Reflection::PreFetchAllTypes)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5c4eef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"PreFetchAllTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::Reflection::setStaticF_gAssemblyCache(::ArrayW<::System::Reflection::Assembly*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::Assembly*>, "gAssemblyCache", ::BuildSafe::Reflection*>(std::forward<::ArrayW<::System::Reflection::Assembly*>>(value));
}
inline ::ArrayW<::System::Reflection::Assembly*> BuildSafe::Reflection::getStaticF_gAssemblyCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::Assembly*>, "gAssemblyCache", ::BuildSafe::Reflection*>();
}
inline void BuildSafe::Reflection::setStaticF_gTypeCache(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "gTypeCache", ::BuildSafe::Reflection*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> BuildSafe::Reflection::getStaticF_gTypeCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "gTypeCache", ::BuildSafe::Reflection*>();
}
inline ::ArrayW<::System::Reflection::Assembly*> BuildSafe::Reflection::get_AllAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"get_AllAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Type*> BuildSafe::Reflection::get_AllTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"get_AllTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Assembly*> BuildSafe::Reflection::PreFetchAllAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"PreFetchAllAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Type*> BuildSafe::Reflection::PreFetchAllTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection*>(),
                        {"PreFetchAllTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline ::ArrayW<::System::Reflection::MethodInfo*> BuildSafe::Reflection::GetMethodsWithAttribute()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::Reflection*>(),
                    {"GetMethodsWithAttribute", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BuildSafe::Reflection::Reflection()   {
}
template<typename T>
inline void BuildSafe::Reflection___c__9_1<T>::setStaticF___9(::BuildSafe::Reflection___c__9_1<T>*  value)  {
::cordl_internals::setStaticField<::BuildSafe::Reflection___c__9_1<T>*, "<>9", ::BuildSafe::Reflection___c__9_1<T>*>(std::forward<::BuildSafe::Reflection___c__9_1<T>*>(value));
}
template<typename T>
inline ::BuildSafe::Reflection___c__9_1<T>* BuildSafe::Reflection___c__9_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::BuildSafe::Reflection___c__9_1<T>*, "<>9", ::BuildSafe::Reflection___c__9_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection___c__9_1<T>::setStaticF___9__9_0(::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*, "<>9__9_0", ::BuildSafe::Reflection___c__9_1<T>*>(std::forward<::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>* BuildSafe::Reflection___c__9_1<T>::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*, "<>9__9_0", ::BuildSafe::Reflection___c__9_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection___c__9_1<T>::setStaticF___9__9_1(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__9_1", ::BuildSafe::Reflection___c__9_1<T>*>(std::forward<::System::Func_2<::System::Reflection::MethodInfo*,bool>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* BuildSafe::Reflection___c__9_1<T>::getStaticF___9__9_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__9_1", ::BuildSafe::Reflection___c__9_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection___c__9_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c__9_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* BuildSafe::Reflection___c__9_1<T>::_GetMethodsWithAttribute_b__9_0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c__9_1<T>*>(),
                        {"<GetMethodsWithAttribute>b__9_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>(this, ___internal_method, t);
}
template<typename T>
inline bool BuildSafe::Reflection___c__9_1<T>::_GetMethodsWithAttribute_b__9_1(::System::Reflection::MethodInfo*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c__9_1<T>*>(),
                        {"<GetMethodsWithAttribute>b__9_1", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
template<typename T>
inline ::BuildSafe::Reflection___c__9_1<T>* BuildSafe::Reflection___c__9_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::Reflection___c__9_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::BuildSafe::Reflection___c__9_1<T>::Reflection___c__9_1()   {
}
//  Writing Method size for method: ::BuildSafe::Reflection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::Reflection___c::*)()>(&::BuildSafe::Reflection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection___c._PreFetchAllAssemblies_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BuildSafe::Reflection___c::*)(::System::Reflection::Assembly*)>(&::BuildSafe::Reflection___c::_PreFetchAllAssemblies_b__7_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c4f1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllAssemblies>b__7_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection___c._PreFetchAllTypes_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::BuildSafe::Reflection___c::*)(::System::Reflection::Assembly*)>(&::BuildSafe::Reflection___c::_PreFetchAllTypes_b__8_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c4f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllTypes>b__8_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::Reflection___c._PreFetchAllTypes_b__8_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BuildSafe::Reflection___c::*)(::System::Type*)>(&::BuildSafe::Reflection___c::_PreFetchAllTypes_b__8_1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c4f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllTypes>b__8_1", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::Reflection___c::setStaticF___9(::BuildSafe::Reflection___c*  value)  {
::cordl_internals::setStaticField<::BuildSafe::Reflection___c*, "<>9", ::BuildSafe::Reflection___c*>(std::forward<::BuildSafe::Reflection___c*>(value));
}
inline ::BuildSafe::Reflection___c* BuildSafe::Reflection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::BuildSafe::Reflection___c*, "<>9", ::BuildSafe::Reflection___c*>();
}
inline void BuildSafe::Reflection___c::setStaticF___9__7_0(::System::Func_2<::System::Reflection::Assembly*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*,bool>*, "<>9__7_0", ::BuildSafe::Reflection___c*>(std::forward<::System::Func_2<::System::Reflection::Assembly*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*,bool>* BuildSafe::Reflection___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*,bool>*, "<>9__7_0", ::BuildSafe::Reflection___c*>();
}
inline void BuildSafe::Reflection___c::setStaticF___9__8_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__8_0", ::BuildSafe::Reflection___c*>(std::forward<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* BuildSafe::Reflection___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__8_0", ::BuildSafe::Reflection___c*>();
}
inline void BuildSafe::Reflection___c::setStaticF___9__8_1(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__8_1", ::BuildSafe::Reflection___c*>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
inline ::System::Func_2<::System::Type*,bool>* BuildSafe::Reflection___c::getStaticF___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__8_1", ::BuildSafe::Reflection___c*>();
}
inline void BuildSafe::Reflection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BuildSafe::Reflection___c::_PreFetchAllAssemblies_b__7_0(::System::Reflection::Assembly*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllAssemblies>b__7_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* BuildSafe::Reflection___c::_PreFetchAllTypes_b__8_0(::System::Reflection::Assembly*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllTypes>b__8_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, a);
}
inline bool BuildSafe::Reflection___c::_PreFetchAllTypes_b__8_1(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection___c*>(),
                        {"<PreFetchAllTypes>b__8_1", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::BuildSafe::Reflection___c* BuildSafe::Reflection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::Reflection___c*>());
}
// Ctor Parameters []
constexpr ::BuildSafe::Reflection___c::Reflection___c()   {
}

#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ReflectionUtils.hpp"
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblies)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb3f8aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedTypesPerAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>* (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::GetCachedTypesPerAssembly)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb3f8b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedTypesPerAssembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedAssemblyTypeMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>* (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblyTypeMaps)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xb3f8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedAssemblyTypeMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.PreWarmTypeCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::PreWarmTypeCache)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3f9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"PreWarmTypeCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.ForEachAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Reflection::Assembly*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::ForEachAssembly)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3f9154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"ForEachAssembly", {}, {::i2c::type_of<::System::Action_1<::System::Reflection::Assembly*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.ForEachType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::ForEachType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb3f0afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"ForEachType", {}, {::i2c::type_of<::System::Action_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Func_2<::System::Type*,bool>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb3f925c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindType", {}, {::i2c::type_of<::System::Func_2<::System::Type*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypeByFullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypeByFullName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb3f9414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypeByFullName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypesBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*,bool>*>*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypesBatch)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb3f957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypesBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*,bool>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypesByFullNameBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypesByFullNameBatch)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xb3f97ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypesByFullNameBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypeInAssemblyByFullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, ::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypeInAssemblyByFullName)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb3f9b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypeInAssemblyByFullName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.NicifyVariableName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::NicifyVariableName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb3f9cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"NicifyVariableName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::Assembly*>, "s_Assemblies", ::Unity::XR::CoreUtils::ReflectionUtils*>(std::forward<::ArrayW<::System::Reflection::Assembly*>>(value));
}
inline ::ArrayW<::System::Reflection::Assembly*> Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_Assemblies()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::Assembly*>, "s_Assemblies", ::Unity::XR::CoreUtils::ReflectionUtils*>();
}
inline void Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_TypesPerAssembly(::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*, "s_TypesPerAssembly", ::Unity::XR::CoreUtils::ReflectionUtils*>(std::forward<::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*>(value));
}
inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>* Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_TypesPerAssembly()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*, "s_TypesPerAssembly", ::Unity::XR::CoreUtils::ReflectionUtils*>();
}
inline void Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_AssemblyTypeMaps(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*, "s_AssemblyTypeMaps", ::Unity::XR::CoreUtils::ReflectionUtils*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>* Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_AssemblyTypeMaps()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*, "s_AssemblyTypeMaps", ::Unity::XR::CoreUtils::ReflectionUtils*>();
}
inline ::ArrayW<::System::Reflection::Assembly*> Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>* Unity::XR::CoreUtils::ReflectionUtils::GetCachedTypesPerAssembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedTypesPerAssembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>* Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblyTypeMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"GetCachedAssemblyTypeMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*>(nullptr, ___internal_method);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::PreWarmTypeCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"PreWarmTypeCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"ForEachAssembly", {}, {::i2c::type_of<::System::Action_1<::System::Reflection::Assembly*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::ForEachType(::System::Action_1<::System::Type*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"ForEachType", {}, {::i2c::type_of<::System::Action_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindType(::System::Func_2<::System::Type*,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindType", {}, {::i2c::type_of<::System::Func_2<::System::Type*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, predicate);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindTypeByFullName(::StringW  fullName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypeByFullName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, fullName);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::FindTypesBatch(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*,bool>*>*  predicates, ::System::Collections::Generic::List_1<::System::Type*>*  resultList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypesBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*,bool>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, predicates, resultList);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::FindTypesByFullNameBatch(::System::Collections::Generic::List_1<::StringW>*  typeNames, ::System::Collections::Generic::List_1<::System::Type*>*  resultList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypesByFullNameBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, typeNames, resultList);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindTypeInAssemblyByFullName(::StringW  assemblyName, ::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"FindTypeInAssemblyByFullName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, assemblyName, typeName);
}
inline ::StringW Unity::XR::CoreUtils::ReflectionUtils::NicifyVariableName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ReflectionUtils*>(),
                        {"NicifyVariableName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ReflectionUtils::ReflectionUtils()   {
}

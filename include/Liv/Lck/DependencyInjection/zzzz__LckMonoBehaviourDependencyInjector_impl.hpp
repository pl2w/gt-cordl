#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckMonoBehaviourDependencyInjector.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckMonoBehaviourDependencyInjector_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckMonoBehaviourDependencyInjector_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::*)(::Liv::Lck::DependencyInjection::LckServiceProvider*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d35078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector.Inject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::*)(::UnityEngine::MonoBehaviour*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::Inject)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x9d33d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {"Inject", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector.IsInjectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::IsInjectable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9d356a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {"IsInjectable", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider*& Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::__cordl_internal_get__lckServiceProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckServiceProvider;
}
constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider* const& Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::__cordl_internal_get__lckServiceProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckServiceProvider;
}
constexpr void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::__cordl_internal_set__lckServiceProvider(::Liv::Lck::DependencyInjection::LckServiceProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckServiceProvider = value;
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::_ctor(::Liv::Lck::DependencyInjection::LckServiceProvider*  lckServiceProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckServiceProvider);
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::Inject(::UnityEngine::MonoBehaviour*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {"Inject", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline bool Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::IsInjectable(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(),
                        {"IsInjectable", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::New_ctor(::Liv::Lck::DependencyInjection::LckServiceProvider*  lckServiceProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*>(lckServiceProvider));
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::LckMonoBehaviourDependencyInjector()   {
}
constexpr ::System::Reflection::BindingFlags  Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector::_bindingFlags{static_cast<int32_t>(0x36)};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::*)()>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d35a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c._Inject_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::*)(::System::Reflection::MethodInfo*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_Inject_b__3_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d35a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<Inject>b__3_0", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c._Inject_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::*)(::System::Reflection::ParameterInfo*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_Inject_b__3_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d35aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<Inject>b__3_1", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c._IsInjectable_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::*)(::System::Reflection::MemberInfo*)>(&::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_IsInjectable_b__4_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d35ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<IsInjectable>b__4_0", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::setStaticF___9(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*, "<>9", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(std::forward<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(value));
}
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*, "<>9", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>();
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::setStaticF___9__3_0(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__3_0", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(std::forward<::System::Func_2<::System::Reflection::MethodInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MethodInfo*,bool>*, "<>9__3_0", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>();
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::setStaticF___9__3_1(::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*, "<>9__3_1", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(std::forward<::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*>(value));
}
inline ::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ParameterInfo*,::System::Type*>*, "<>9__3_1", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>();
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::setStaticF___9__4_0(::System::Func_2<::System::Reflection::MemberInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MemberInfo*,bool>*, "<>9__4_0", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(std::forward<::System::Func_2<::System::Reflection::MemberInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MemberInfo*,bool>* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MemberInfo*,bool>*, "<>9__4_0", ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>();
}
inline void Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_Inject_b__3_0(::System::Reflection::MethodInfo*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<Inject>b__3_0", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member);
}
inline ::System::Type* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_Inject_b__3_1(::System::Reflection::ParameterInfo*  parameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<Inject>b__3_1", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, parameter);
}
inline bool Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::_IsInjectable_b__4_0(::System::Reflection::MemberInfo*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>(),
                        {"<IsInjectable>b__4_0", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member);
}
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c* Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector___c::LckMonoBehaviourDependencyInjector___c()   {
}

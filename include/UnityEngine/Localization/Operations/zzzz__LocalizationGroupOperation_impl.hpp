#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LocalizationGroupOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LocalizationGroupOperation_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LocalizationGroupOperation_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Operations::LocalizationGroupOperation.InvokeWaitForCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Operations::LocalizationGroupOperation::*)()>(&::UnityEngine::Localization::Operations::LocalizationGroupOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb04e744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::LocalizationGroupOperation.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::LocalizationGroupOperation::*)()>(&::UnityEngine::Localization::Operations::LocalizationGroupOperation::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb04e964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::LocalizationGroupOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::LocalizationGroupOperation::*)()>(&::UnityEngine::Localization::Operations::LocalizationGroupOperation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Operations::LocalizationGroupOperation::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*, "Pool", ::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>* UnityEngine::Localization::Operations::LocalizationGroupOperation::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>*, "Pool", ::UnityEngine::Localization::Operations::LocalizationGroupOperation*>();
}
inline bool UnityEngine::Localization::Operations::LocalizationGroupOperation::InvokeWaitForCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::LocalizationGroupOperation::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::LocalizationGroupOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation* UnityEngine::Localization::Operations::LocalizationGroupOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::LocalizationGroupOperation::LocalizationGroupOperation()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::LocalizationGroupOperation___c::*)()>(&::UnityEngine::Localization::Operations::LocalizationGroupOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04eb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Operations::LocalizationGroupOperation* (::UnityEngine::Localization::Operations::LocalizationGroupOperation___c::*)()>(&::UnityEngine::Localization::Operations::LocalizationGroupOperation___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb04eba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Operations::LocalizationGroupOperation___c::setStaticF___9(::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*, "<>9", ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(std::forward<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(value));
}
inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c* UnityEngine::Localization::Operations::LocalizationGroupOperation___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*, "<>9", ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>();
}
inline void UnityEngine::Localization::Operations::LocalizationGroupOperation___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation* UnityEngine::Localization::Operations::LocalizationGroupOperation___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::LocalizationGroupOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c* UnityEngine::Localization::Operations::LocalizationGroupOperation___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LocalizationGroupOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::LocalizationGroupOperation___c::LocalizationGroupOperation___c()   {
}

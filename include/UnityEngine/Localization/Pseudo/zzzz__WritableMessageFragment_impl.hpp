#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/WritableMessageFragment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__MessageFragment_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::WritableMessageFragment.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::WritableMessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::WritableMessageFragment::get_Text)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb02202c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::WritableMessageFragment.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::WritableMessageFragment::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::WritableMessageFragment::set_Text)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb022038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::WritableMessageFragment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::WritableMessageFragment::*)()>(&::UnityEngine::Localization::Pseudo::WritableMessageFragment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb022048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::WritableMessageFragment::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*, "Pool", ::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>* UnityEngine::Localization::Pseudo::WritableMessageFragment::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>*, "Pool", ::UnityEngine::Localization::Pseudo::WritableMessageFragment*>();
}
inline ::StringW UnityEngine::Localization::Pseudo::WritableMessageFragment::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::WritableMessageFragment::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::WritableMessageFragment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* UnityEngine::Localization::Pseudo::WritableMessageFragment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::WritableMessageFragment::WritableMessageFragment()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::WritableMessageFragment___c::*)()>(&::UnityEngine::Localization::Pseudo::WritableMessageFragment___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0221f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Pseudo::WritableMessageFragment* (::UnityEngine::Localization::Pseudo::WritableMessageFragment___c::*)()>(&::UnityEngine::Localization::Pseudo::WritableMessageFragment___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb0221fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::WritableMessageFragment___c::setStaticF___9(::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*, "<>9", ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(std::forward<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(value));
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c* UnityEngine::Localization::Pseudo::WritableMessageFragment___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*, "<>9", ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>();
}
inline void UnityEngine::Localization::Pseudo::WritableMessageFragment___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* UnityEngine::Localization::Pseudo::WritableMessageFragment___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c* UnityEngine::Localization::Pseudo::WritableMessageFragment___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::WritableMessageFragment___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::WritableMessageFragment___c::WritableMessageFragment___c()   {
}

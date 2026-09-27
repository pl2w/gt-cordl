#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/PermissionCallbackAsyncAndroid.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__PermissionCallbackAsyncAndroid_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGalleryCallbackHelper_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__PermissionCallbackAsyncAndroid_def.hpp"
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::*)(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*)>(&::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa368414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid.OnPermissionResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::*)(int32_t)>(&::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::OnPermissionResult)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa368518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*>(),
                        {"OnPermissionResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback* const& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_set_callback(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_get__nativeGalleryCallbackHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeGalleryCallbackHelper;
}
constexpr ::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper> const& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_get__nativeGalleryCallbackHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeGalleryCallbackHelper;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::__cordl_internal_set__nativeGalleryCallbackHelper(::UnityW<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeGalleryCallbackHelper = value;
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::_ctor(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::OnPermissionResult(int32_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*>(),
                        {"OnPermissionResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid* Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::New_ctor(::Liv::NativeGalleryBridge::NativeGallery_PermissionCallback*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*>(callback));
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid::PermissionCallbackAsyncAndroid()   {
}
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::*)()>(&::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3685ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0._OnPermissionResult_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::*)()>(&::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::_OnPermissionResult_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa3685f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*>(),
                        {"<OnPermissionResult>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid* const& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_set___4__this(::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr int32_t const& Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::__cordl_internal_set_result(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::_OnPermissionResult_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*>(),
                        {"<OnPermissionResult>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0* Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAsyncAndroid___c__DisplayClass3_0::PermissionCallbackAsyncAndroid___c__DisplayClass3_0()   {
}

#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/PermissionCallbackAndroid.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__PermissionCallbackAndroid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAndroid.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::NativeGalleryBridge::PermissionCallbackAndroid::*)()>(&::Liv::NativeGalleryBridge::PermissionCallbackAndroid::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3682ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAndroid.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAndroid::*)(int32_t)>(&::Liv::NativeGalleryBridge::PermissionCallbackAndroid::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3682b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"set_Result", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAndroid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAndroid::*)(::System::Object*)>(&::Liv::NativeGalleryBridge::PermissionCallbackAndroid::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa3682bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::PermissionCallbackAndroid.OnPermissionResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::PermissionCallbackAndroid::*)(int32_t)>(&::Liv::NativeGalleryBridge::PermissionCallbackAndroid::OnPermissionResult)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa368350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"OnPermissionResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_get_threadLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadLock;
}
constexpr ::System::Object* const& Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_get_threadLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadLock;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_set_threadLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadLock = value;
}
constexpr int32_t& Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_get__Result_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr int32_t const& Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_get__Result_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr void Liv::NativeGalleryBridge::PermissionCallbackAndroid::__cordl_internal_set__Result_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Result_k__BackingField = value;
}
inline int32_t Liv::NativeGalleryBridge::PermissionCallbackAndroid::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAndroid::set_Result(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"set_Result", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAndroid::_ctor(::System::Object*  threadLock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threadLock);
}
inline void Liv::NativeGalleryBridge::PermissionCallbackAndroid::OnPermissionResult(int32_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(),
                        {"OnPermissionResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::NativeGalleryBridge::PermissionCallbackAndroid* Liv::NativeGalleryBridge::PermissionCallbackAndroid::New_ctor(::System::Object*  threadLock)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::PermissionCallbackAndroid*>(threadLock));
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::PermissionCallbackAndroid::PermissionCallbackAndroid()   {
}

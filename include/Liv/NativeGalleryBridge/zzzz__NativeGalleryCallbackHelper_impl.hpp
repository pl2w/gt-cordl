#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGalleryCallbackHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGalleryCallbackHelper_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::*)()>(&::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa368134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::*)()>(&::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::Update)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa3681a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper.CallOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::*)(::System::Action*)>(&::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::CallOnMainThread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::*)()>(&::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3682a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::__cordl_internal_get_mainThreadAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainThreadAction;
}
constexpr ::System::Action* const& Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::__cordl_internal_get_mainThreadAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainThreadAction;
}
constexpr void Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::__cordl_internal_set_mainThreadAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainThreadAction = value;
}
inline void Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::CallOnMainThread(::System::Action*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {"CallOnMainThread", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, function);
}
inline void Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper* Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper*>());
}
// Ctor Parameters []
constexpr ::Liv::NativeGalleryBridge::NativeGalleryCallbackHelper::NativeGalleryCallbackHelper()   {
}

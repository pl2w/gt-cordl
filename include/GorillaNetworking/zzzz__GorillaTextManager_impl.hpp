#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaTextManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaTextManager_def.hpp"
#include "GorillaNetworking/zzzz__GorillaText_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaTextManager.RegisterText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::GorillaText*)>(&::GorillaNetworking::GorillaTextManager::RegisterText)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5c878d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"RegisterText", {}, {::i2c::type_of<::GorillaNetworking::GorillaText*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaTextManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaTextManager::*)()>(&::GorillaNetworking::GorillaTextManager::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c87f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaTextManager.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaTextManager::*)()>(&::GorillaNetworking::GorillaTextManager::PostTick)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c8806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaTextManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaNetworking::GorillaTextManager::CreateManager)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c87e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaTextManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaTextManager::*)()>(&::GorillaNetworking::GorillaTextManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c880f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*& GorillaNetworking::GorillaTextManager::__cordl_internal_get_gorillaTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTexts;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>* const& GorillaNetworking::GorillaTextManager::__cordl_internal_get_gorillaTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaTexts;
}
constexpr void GorillaNetworking::GorillaTextManager::__cordl_internal_set_gorillaTexts(::System::Collections::Generic::List_1<::GorillaNetworking::GorillaText*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaTexts = value;
}
inline void GorillaNetworking::GorillaTextManager::setStaticF_instance(::UnityW<::GorillaNetworking::GorillaTextManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::GorillaTextManager>, "instance", ::GorillaNetworking::GorillaTextManager*>(std::forward<::UnityW<::GorillaNetworking::GorillaTextManager>>(value));
}
inline ::UnityW<::GorillaNetworking::GorillaTextManager> GorillaNetworking::GorillaTextManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::GorillaTextManager>, "instance", ::GorillaNetworking::GorillaTextManager*>();
}
inline void GorillaNetworking::GorillaTextManager::RegisterText(::GorillaNetworking::GorillaText*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"RegisterText", {}, {::i2c::type_of<::GorillaNetworking::GorillaText*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text);
}
inline void GorillaNetworking::GorillaTextManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaTextManager::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaTextManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaNetworking::GorillaTextManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaTextManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaTextManager* GorillaNetworking::GorillaTextManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaTextManager*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaTextManager::GorillaTextManager()   {
}

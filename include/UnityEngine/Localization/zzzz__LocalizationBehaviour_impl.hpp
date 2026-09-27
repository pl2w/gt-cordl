#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizationBehaviour.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizationBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.GetGameObjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocalizationBehaviour::*)()>(&::UnityEngine::Localization::LocalizationBehaviour::GetGameObjectName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb015884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.ReleaseNextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::LocalizationBehaviour::ReleaseNextFrame)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb0158c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"ReleaseNextFrame", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.TimeSinceStartupMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Localization::LocalizationBehaviour::TimeSinceStartupMs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb015a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"TimeSinceStartupMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.DoReleaseNextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizationBehaviour::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::LocalizationBehaviour::DoReleaseNextFrame)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb015934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"DoReleaseNextFrame", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizationBehaviour::*)()>(&::UnityEngine::Localization::LocalizationBehaviour::LateUpdate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb015a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour.ForceRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::LocalizationBehaviour::ForceRelease)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb015bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"ForceRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizationBehaviour::*)()>(&::UnityEngine::Localization::LocalizationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb015d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*& UnityEngine::Localization::LocalizationBehaviour::__cordl_internal_get_m_ReleaseQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>* const& UnityEngine::Localization::LocalizationBehaviour::__cordl_internal_get_m_ReleaseQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseQueue;
}
constexpr void UnityEngine::Localization::LocalizationBehaviour::__cordl_internal_set_m_ReleaseQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReleaseQueue = value;
}
inline ::StringW UnityEngine::Localization::LocalizationBehaviour::GetGameObjectName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizationBehaviour::ReleaseNextFrame(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"ReleaseNextFrame", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline int64_t UnityEngine::Localization::LocalizationBehaviour::TimeSinceStartupMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"TimeSinceStartupMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::LocalizationBehaviour::DoReleaseNextFrame(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"DoReleaseNextFrame", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Localization::LocalizationBehaviour::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizationBehaviour::ForceRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {"ForceRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::LocalizationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalizationBehaviour* UnityEngine::Localization::LocalizationBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizationBehaviour*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizationBehaviour::LocalizationBehaviour()   {
}

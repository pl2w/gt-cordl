#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest__InnerRead_d__25_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest__ProcessOperation_d__24_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest__StartOperation_d__23_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8d47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_Parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_RunSynchronously
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8d47b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_RunSynchronously", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_Name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa8d47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_UserResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8d47e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_UserResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.set_UserResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolRequest::set_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8d47ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"set_UserResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream*, bool)>(&::Mono::Net::Security::AsyncProtocolRequest::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa8d47f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.RequestRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolRequest::RequestRead)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa8d488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"RequestRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.RequestWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::RequestWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa8d4954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"RequestWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.StartOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::StartOperation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa8d4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"StartOperation", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.ProcessOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::ProcessOperation)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa8d4a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"ProcessOperation", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.InnerRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::InnerRead)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa8d4b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"InnerRead", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncProtocolRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(&::Mono::Net::Security::AsyncProtocolRequest::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                    {::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa8d4cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                    {::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__Parent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream* const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__Parent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parent_k__BackingField = value;
}
constexpr bool& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__RunSynchronously_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunSynchronously_k__BackingField;
}
constexpr bool const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__RunSynchronously_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunSynchronously_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set__RunSynchronously_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunSynchronously_k__BackingField = value;
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__UserResult_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserResult_k__BackingField;
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get__UserResult_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserResult_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set__UserResult_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserResult_k__BackingField = value;
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_Started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Started;
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_Started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Started;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set_Started(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Started = value;
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_RequestedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedSize;
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_RequestedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestedSize;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set_RequestedSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestedSize = value;
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_WriteRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteRequested;
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_WriteRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteRequested;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set_WriteRequested(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WriteRequested = value;
}
constexpr ::System::Object*& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_locker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locker;
}
constexpr ::System::Object* const& Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_get_locker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locker;
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__cordl_internal_set_locker(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locker = value;
}
inline void Mono::Net::Security::AsyncProtocolRequest::setStaticF_next_id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "next_id", ::Mono::Net::Security::AsyncProtocolRequest*>(std::forward<int32_t>(value));
}
inline int32_t Mono::Net::Security::AsyncProtocolRequest::getStaticF_next_id()  {
return ::cordl_internals::getStaticField<int32_t, "next_id", ::Mono::Net::Security::AsyncProtocolRequest*>();
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::AsyncProtocolRequest::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*>(this, ___internal_method);
}
inline bool Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_RunSynchronously", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Mono::Net::Security::AsyncProtocolRequest::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::AsyncProtocolRequest::get_UserResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"get_UserResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Net::Security::AsyncProtocolRequest::set_UserResult(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"set_UserResult", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Net::Security::AsyncProtocolRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Net::Security::MobileAuthenticatedStream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, sync);
}
inline void Mono::Net::Security::AsyncProtocolRequest::RequestRead(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"RequestRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void Mono::Net::Security::AsyncProtocolRequest::RequestWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"RequestWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* Mono::Net::Security::AsyncProtocolRequest::StartOperation(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"StartOperation", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::AsyncProtocolRequest::ProcessOperation(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"ProcessOperation", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* Mono::Net::Security::AsyncProtocolRequest::InnerRead(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(),
                        {"InnerRead", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*>(this, ___internal_method, cancellationToken);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncProtocolRequest::Run(::Mono::Net::Security::AsyncOperationStatus  status)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus>(this, ___internal_method, status);
}
inline ::StringW Mono::Net::Security::AsyncProtocolRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Net::Security::AsyncProtocolRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Net::Security::AsyncProtocolRequest* Mono::Net::Security::AsyncProtocolRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::AsyncProtocolRequest*>(parent, sync));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncProtocolRequest::AsyncProtocolRequest()   {
}

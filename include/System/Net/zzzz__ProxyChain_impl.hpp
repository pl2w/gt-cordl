#pragma once
// IWYU pragma private; include "System/Net/ProxyChain.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__HttpAbortDelegate_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ProxyChain_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ProxyChain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain::*)(::System::Uri*)>(&::System::Net::ProxyChain::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac73398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>* (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac73434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac734f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac734f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ProxyChain*>(),
                    {::i2c::class_of<::System::Net::ProxyChain*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.get_Enumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>* (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::get_Enumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac734fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_Enumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.get_Destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::get_Destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac73510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_Destination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::Abort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac73518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ProxyChain*>(),
                    {::i2c::class_of<::System::Net::ProxyChain*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.HttpAbort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ProxyChain::*)(::System::Net::HttpWebRequest*, ::System::Net::WebException*)>(&::System::Net::ProxyChain::HttpAbort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac7351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"HttpAbort", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::WebException*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.get_HttpAbortDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpAbortDelegate* (::System::Net::ProxyChain::*)()>(&::System::Net::ProxyChain::get_HttpAbortDelegate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac73538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_HttpAbortDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain.GetNextProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ProxyChain::*)(::by_ref<::System::Uri*>)>(&::System::Net::ProxyChain::GetNextProxy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ProxyChain*>(),
                    {::i2c::class_of<::System::Net::ProxyChain*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Uri*>*& System::Net::ProxyChain::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::System::Collections::Generic::List_1<::System::Uri*>* const& System::Net::ProxyChain::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void System::Net::ProxyChain::__cordl_internal_set_m_Cache(::System::Collections::Generic::List_1<::System::Uri*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cache = value;
}
constexpr bool& System::Net::ProxyChain::__cordl_internal_get_m_CacheComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheComplete;
}
constexpr bool const& System::Net::ProxyChain::__cordl_internal_get_m_CacheComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheComplete;
}
constexpr void System::Net::ProxyChain::__cordl_internal_set_m_CacheComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CacheComplete = value;
}
constexpr ::System::Net::ProxyChain_ProxyEnumerator*& System::Net::ProxyChain::__cordl_internal_get_m_MainEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MainEnumerator;
}
constexpr ::System::Net::ProxyChain_ProxyEnumerator* const& System::Net::ProxyChain::__cordl_internal_get_m_MainEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MainEnumerator;
}
constexpr void System::Net::ProxyChain::__cordl_internal_set_m_MainEnumerator(::System::Net::ProxyChain_ProxyEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MainEnumerator = value;
}
constexpr ::System::Uri*& System::Net::ProxyChain::__cordl_internal_get_m_Destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Destination;
}
constexpr ::System::Uri* const& System::Net::ProxyChain::__cordl_internal_get_m_Destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Destination;
}
constexpr void System::Net::ProxyChain::__cordl_internal_set_m_Destination(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Destination = value;
}
constexpr ::System::Net::HttpAbortDelegate*& System::Net::ProxyChain::__cordl_internal_get_m_HttpAbortDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HttpAbortDelegate;
}
constexpr ::System::Net::HttpAbortDelegate* const& System::Net::ProxyChain::__cordl_internal_get_m_HttpAbortDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HttpAbortDelegate;
}
constexpr void System::Net::ProxyChain::__cordl_internal_set_m_HttpAbortDelegate(::System::Net::HttpAbortDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HttpAbortDelegate = value;
}
inline void System::Net::ProxyChain::_ctor(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* System::Net::ProxyChain::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Uri*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::ProxyChain::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Net::ProxyChain::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ProxyChain*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* System::Net::ProxyChain::get_Enumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_Enumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Uri*>*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::ProxyChain::get_Destination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_Destination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::ProxyChain::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ProxyChain*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::ProxyChain::HttpAbort(::System::Net::HttpWebRequest*  request, ::System::Net::WebException*  webException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"HttpAbort", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::WebException*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request, webException);
}
inline ::System::Net::HttpAbortDelegate* System::Net::ProxyChain::get_HttpAbortDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain*>(),
                        {"get_HttpAbortDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpAbortDelegate*>(this, ___internal_method);
}
inline bool System::Net::ProxyChain::GetNextProxy(::by_ref<::System::Uri*>  proxy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ProxyChain*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, proxy);
}
inline ::System::Net::ProxyChain* System::Net::ProxyChain::New_ctor(::System::Uri*  destination)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ProxyChain*>(destination));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Uri*>"
constexpr  System::Net::ProxyChain::operator ::System::Collections::Generic::IEnumerable_1<::System::Uri*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Uri*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Uri*>* System::Net::ProxyChain::i___System__Collections__Generic__IEnumerable_1___System__Uri__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Net::ProxyChain::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::ProxyChain::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::ProxyChain::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::ProxyChain::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::ProxyChain::ProxyChain()   {
}
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain_ProxyEnumerator::*)(::System::Net::ProxyChain*)>(&::System::Net::ProxyChain_ProxyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac734bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::ProxyChain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::ProxyChain_ProxyEnumerator::*)()>(&::System::Net::ProxyChain_ProxyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xac735c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ProxyChain_ProxyEnumerator::*)()>(&::System::Net::ProxyChain_ProxyEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac73680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ProxyChain_ProxyEnumerator::*)()>(&::System::Net::ProxyChain_ProxyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xac73684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain_ProxyEnumerator::*)()>(&::System::Net::ProxyChain_ProxyEnumerator::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac73924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ProxyChain_ProxyEnumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ProxyChain_ProxyEnumerator::*)()>(&::System::Net::ProxyChain_ProxyEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac73934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::ProxyChain*& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_Chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Chain;
}
constexpr ::System::Net::ProxyChain* const& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_Chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Chain;
}
constexpr void System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_set_m_Chain(::System::Net::ProxyChain*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Chain = value;
}
constexpr bool& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_Finished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Finished;
}
constexpr bool const& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_Finished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Finished;
}
constexpr void System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_set_m_Finished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Finished = value;
}
constexpr int32_t& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr int32_t const& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr void System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_set_m_CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentIndex = value;
}
constexpr bool& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_TriedDirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriedDirect;
}
constexpr bool const& System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_get_m_TriedDirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriedDirect;
}
constexpr void System::Net::ProxyChain_ProxyEnumerator::__cordl_internal_set_m_TriedDirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriedDirect = value;
}
inline void System::Net::ProxyChain_ProxyEnumerator::_ctor(::System::Net::ProxyChain*  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::ProxyChain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chain);
}
inline ::System::Uri* System::Net::ProxyChain_ProxyEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Object* System::Net::ProxyChain_ProxyEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::ProxyChain_ProxyEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::ProxyChain_ProxyEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ProxyChain_ProxyEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ProxyChain_ProxyEnumerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ProxyChain_ProxyEnumerator* System::Net::ProxyChain_ProxyEnumerator::New_ctor(::System::Net::ProxyChain*  chain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ProxyChain_ProxyEnumerator*>(chain));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Uri*>"
constexpr  System::Net::ProxyChain_ProxyEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::System::Uri*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Uri*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* System::Net::ProxyChain_ProxyEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Uri__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::ProxyChain_ProxyEnumerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::ProxyChain_ProxyEnumerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Net::ProxyChain_ProxyEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Net::ProxyChain_ProxyEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::ProxyChain_ProxyEnumerator::ProxyChain_ProxyEnumerator()   {
}

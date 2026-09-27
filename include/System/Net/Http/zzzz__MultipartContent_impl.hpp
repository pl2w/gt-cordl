#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent.hpp"
#include "System/Net/Http/zzzz__HttpContent_impl.hpp"
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__MultipartContent__SerializeToStreamAsync_d__8_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MultipartContent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartContent::*)(::StringW)>(&::System::Net::Http::MultipartContent::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa9e2c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartContent::*)(::StringW, ::StringW)>(&::System::Net::Http::MultipartContent::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa9e2ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.IsValidRFC2049
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::MultipartContent::IsValidRFC2049)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa9e2ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"IsValidRFC2049", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartContent::*)(::System::Net::Http::HttpContent*)>(&::System::Net::Http::MultipartContent::Add)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa9e3190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                    {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::MultipartContent::*)(bool)>(&::System::Net::Http::MultipartContent::Dispose)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa9e32dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                    {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.SerializeToStreamAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::MultipartContent::*)(::System::IO::Stream*, ::System::Net::TransportContext*)>(&::System::Net::Http::MultipartContent::SerializeToStreamAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa9e3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                    {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.TryComputeLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::MultipartContent::*)(::by_ref<int64_t>)>(&::System::Net::Http::MultipartContent::TryComputeLength)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0xa9e3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                    {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* (::System::Net::Http::MultipartContent::*)()>(&::System::Net::Http::MultipartContent::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa9e3b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartContent.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::Http::MultipartContent::*)()>(&::System::Net::Http::MultipartContent::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa9e3bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*& System::Net::Http::MultipartContent::__cordl_internal_get_nested_content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nested_content;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* const& System::Net::Http::MultipartContent::__cordl_internal_get_nested_content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nested_content;
}
constexpr void System::Net::Http::MultipartContent::__cordl_internal_set_nested_content(::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nested_content = value;
}
constexpr ::StringW& System::Net::Http::MultipartContent::__cordl_internal_get_boundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundary;
}
constexpr ::StringW const& System::Net::Http::MultipartContent::__cordl_internal_get_boundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundary;
}
constexpr void System::Net::Http::MultipartContent::__cordl_internal_set_boundary(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundary = value;
}
inline void System::Net::Http::MultipartContent::_ctor(::StringW  subtype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subtype);
}
inline void System::Net::Http::MultipartContent::_ctor(::StringW  subtype, ::StringW  boundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subtype, boundary);
}
inline bool System::Net::Http::MultipartContent::IsValidRFC2049(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"IsValidRFC2049", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline void System::Net::Http::MultipartContent::Add(::System::Net::Http::HttpContent*  content)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline void System::Net::Http::MultipartContent::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::MultipartContent::SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stream, context);
}
inline bool System::Net::Http::MultipartContent::TryComputeLength(::by_ref<int64_t>  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::MultipartContent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, length);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* System::Net::Http::MultipartContent::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::Http::MultipartContent::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::MultipartContent*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Net::Http::MultipartContent* System::Net::Http::MultipartContent::New_ctor(::StringW  subtype)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::MultipartContent*>(subtype));
}
inline ::System::Net::Http::MultipartContent* System::Net::Http::MultipartContent::New_ctor(::StringW  subtype, ::StringW  boundary)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::MultipartContent*>(subtype, boundary));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr  System::Net::Http::MultipartContent::operator ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>* System::Net::Http::MultipartContent::i___System__Collections__Generic__IEnumerable_1___System__Net__Http__HttpContent__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Net::Http::MultipartContent::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::Http::MultipartContent::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::MultipartContent::MultipartContent()   {
}

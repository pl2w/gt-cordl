#pragma once
// IWYU pragma private; include "WebSocketSharp/PayloadData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__PayloadData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__PayloadData_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::PayloadData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::PayloadData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb97f82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData::*)(::ArrayW<uint8_t>, int64_t)>(&::WebSocketSharp::PayloadData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb97f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData::*)(uint16_t, ::StringW)>(&::WebSocketSharp::PayloadData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb979f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::get_Code)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb97f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.get_HasReservedCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::get_HasReservedCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb97cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_HasReservedCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.get_ApplicationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::get_ApplicationData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb977abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_ApplicationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97f90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.Mask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::PayloadData::Mask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb97f914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"Mask", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>* (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb97f9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::ToArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb97fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                    {::i2c::class_of<::WebSocketSharp::PayloadData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WebSocketSharp::PayloadData::*)()>(&::WebSocketSharp::PayloadData::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb97fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& WebSocketSharp::PayloadData::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::PayloadData::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void WebSocketSharp::PayloadData::__cordl_internal_set__data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr int64_t& WebSocketSharp::PayloadData::__cordl_internal_get__extDataLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extDataLength;
}
constexpr int64_t const& WebSocketSharp::PayloadData::__cordl_internal_get__extDataLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extDataLength;
}
constexpr void WebSocketSharp::PayloadData::__cordl_internal_set__extDataLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extDataLength = value;
}
constexpr int64_t& WebSocketSharp::PayloadData::__cordl_internal_get__length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr int64_t const& WebSocketSharp::PayloadData::__cordl_internal_get__length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr void WebSocketSharp::PayloadData::__cordl_internal_set__length(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____length = value;
}
inline void WebSocketSharp::PayloadData::setStaticF_Empty(::WebSocketSharp::PayloadData*  value)  {
::cordl_internals::setStaticField<::WebSocketSharp::PayloadData*, "Empty", ::WebSocketSharp::PayloadData*>(std::forward<::WebSocketSharp::PayloadData*>(value));
}
inline ::WebSocketSharp::PayloadData* WebSocketSharp::PayloadData::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::WebSocketSharp::PayloadData*, "Empty", ::WebSocketSharp::PayloadData*>();
}
inline void WebSocketSharp::PayloadData::setStaticF_MaxLength(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "MaxLength", ::WebSocketSharp::PayloadData*>(std::forward<uint64_t>(value));
}
inline uint64_t WebSocketSharp::PayloadData::getStaticF_MaxLength()  {
return ::cordl_internals::getStaticField<uint64_t, "MaxLength", ::WebSocketSharp::PayloadData*>();
}
inline void WebSocketSharp::PayloadData::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void WebSocketSharp::PayloadData::_ctor(::ArrayW<uint8_t>  data, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length);
}
inline void WebSocketSharp::PayloadData::_ctor(uint16_t  code, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, reason);
}
inline uint16_t WebSocketSharp::PayloadData::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline bool WebSocketSharp::PayloadData::get_HasReservedCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_HasReservedCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> WebSocketSharp::PayloadData::get_ApplicationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_ApplicationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline uint64_t WebSocketSharp::PayloadData::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void WebSocketSharp::PayloadData::Mask(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"Mask", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* WebSocketSharp::PayloadData::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> WebSocketSharp::PayloadData::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::PayloadData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::PayloadData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* WebSocketSharp::PayloadData::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::WebSocketSharp::PayloadData* WebSocketSharp::PayloadData::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::PayloadData*>(data));
}
inline ::WebSocketSharp::PayloadData* WebSocketSharp::PayloadData::New_ctor(::ArrayW<uint8_t>  data, int64_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::PayloadData*>(data, length));
}
inline ::WebSocketSharp::PayloadData* WebSocketSharp::PayloadData::New_ctor(uint16_t  code, ::StringW  reason)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::PayloadData*>(code, reason));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr  WebSocketSharp::PayloadData::operator ::System::Collections::Generic::IEnumerable_1<uint8_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<uint8_t>* WebSocketSharp::PayloadData::i___System__Collections__Generic__IEnumerable_1_uint8_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  WebSocketSharp::PayloadData::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* WebSocketSharp::PayloadData::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::PayloadData::PayloadData()   {
}
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)(int32_t)>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb97fa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)()>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb97fa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)()>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb97fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25.System_Collections_Generic_IEnumerator_System_Byte__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)()>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_Generic_IEnumerator_System_Byte__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97fb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Byte>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)()>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb97fb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::PayloadData__GetEnumerator_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::WebSocketSharp::PayloadData__GetEnumerator_d__25::*)()>(&::WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb97fb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr uint8_t& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr uint8_t const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set___2__current(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::WebSocketSharp::PayloadData*& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WebSocketSharp::PayloadData* const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set___4__this(::WebSocketSharp::PayloadData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set___s__1(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
constexpr int32_t& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr int32_t const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
constexpr uint8_t& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get__b_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__3;
}
constexpr uint8_t const& WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_get__b_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__3;
}
constexpr void WebSocketSharp::PayloadData__GetEnumerator_d__25::__cordl_internal_set__b_5__3(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b_5__3 = value;
}
inline void WebSocketSharp::PayloadData__GetEnumerator_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void WebSocketSharp::PayloadData__GetEnumerator_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::PayloadData__GetEnumerator_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_Generic_IEnumerator_System_Byte__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Byte>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* WebSocketSharp::PayloadData__GetEnumerator_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::WebSocketSharp::PayloadData__GetEnumerator_d__25* WebSocketSharp::PayloadData__GetEnumerator_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::PayloadData__GetEnumerator_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr  WebSocketSharp::PayloadData__GetEnumerator_d__25::operator ::System::Collections::Generic::IEnumerator_1<uint8_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<uint8_t>* WebSocketSharp::PayloadData__GetEnumerator_d__25::i___System__Collections__Generic__IEnumerator_1_uint8_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  WebSocketSharp::PayloadData__GetEnumerator_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* WebSocketSharp::PayloadData__GetEnumerator_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  WebSocketSharp::PayloadData__GetEnumerator_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* WebSocketSharp::PayloadData__GetEnumerator_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::PayloadData__GetEnumerator_d__25::PayloadData__GetEnumerator_d__25()   {
}

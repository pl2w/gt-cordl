#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/CookieCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__CookieCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/Net/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb974f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.get_Sorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>* (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::get_Sorted)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb9834cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_Sorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb97b574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::add)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb985004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"add", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.compareForSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::WebSocketSharp::Net::Cookie*, ::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::compareForSorted)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb985198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"compareForSorted", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>(), ::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.parseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::CookieCollection* (*)(::StringW)>(&::WebSocketSharp::Net::CookieCollection::parseRequest)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xb985204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"parseRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.parseResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::CookieCollection* (*)(::StringW)>(&::WebSocketSharp::Net::CookieCollection::parseResponse)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0xb9856c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"parseResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.search
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::search)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9850f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"search", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.urlDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::WebSocketSharp::Net::CookieCollection::urlDecode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb98609c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"urlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::CookieCollection* (*)(::StringW, bool)>(&::WebSocketSharp::Net::CookieCollection::Parse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb975028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.SetOrRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::SetOrRemove)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb986310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"SetOrRemove", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.SetOrRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::CookieCollection*)>(&::WebSocketSharp::Net::CookieCollection::SetOrRemove)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb97cdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"SetOrRemove", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::Add)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb986464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Add", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::Clear)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb986514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::Contains)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb9865d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::CookieCollection::*)(::ArrayW<::WebSocketSharp::Net::Cookie*>, int32_t)>(&::WebSocketSharp::Net::CookieCollection::CopyTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb986638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::WebSocketSharp::Net::Cookie*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::WebSocketSharp::Net::Cookie*>* (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9867a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::CookieCollection::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::CookieCollection::Remove)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb986830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::CookieCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::WebSocketSharp::Net::CookieCollection::*)()>(&::WebSocketSharp::Net::CookieCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb986948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr ::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>* const& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr void WebSocketSharp::Net::CookieCollection::__cordl_internal_set__list(::System::Collections::Generic::List_1<::WebSocketSharp::Net::Cookie*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____list = value;
}
constexpr bool& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr bool const& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr void WebSocketSharp::Net::CookieCollection::__cordl_internal_set__readOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readOnly = value;
}
constexpr ::System::Object*& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sync;
}
constexpr ::System::Object* const& WebSocketSharp::Net::CookieCollection::__cordl_internal_get__sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sync;
}
constexpr void WebSocketSharp::Net::CookieCollection::__cordl_internal_set__sync(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sync = value;
}
inline void WebSocketSharp::Net::CookieCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>* WebSocketSharp::Net::CookieCollection::get_Sorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_Sorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*>(this, ___internal_method);
}
inline int32_t WebSocketSharp::Net::CookieCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::CookieCollection::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WebSocketSharp::Net::CookieCollection::add(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"add", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline int32_t WebSocketSharp::Net::CookieCollection::compareForSorted(::WebSocketSharp::Net::Cookie*  x, ::WebSocketSharp::Net::Cookie*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"compareForSorted", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>(), ::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::Net::CookieCollection::parseRequest(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"parseRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::CookieCollection*>(nullptr, ___internal_method, value);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::Net::CookieCollection::parseResponse(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"parseResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::CookieCollection*>(nullptr, ___internal_method, value);
}
inline int32_t WebSocketSharp::Net::CookieCollection::search(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"search", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cookie);
}
inline ::StringW WebSocketSharp::Net::CookieCollection::urlDecode(::StringW  s, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"urlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, encoding);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::Net::CookieCollection::Parse(::StringW  value, bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::CookieCollection*>(nullptr, ___internal_method, value, response);
}
inline void WebSocketSharp::Net::CookieCollection::SetOrRemove(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"SetOrRemove", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline void WebSocketSharp::Net::CookieCollection::SetOrRemove(::WebSocketSharp::Net::CookieCollection*  cookies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"SetOrRemove", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline void WebSocketSharp::Net::CookieCollection::Add(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Add", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline void WebSocketSharp::Net::CookieCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::CookieCollection::Contains(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cookie);
}
inline void WebSocketSharp::Net::CookieCollection::CopyTo(::ArrayW<::WebSocketSharp::Net::Cookie*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::WebSocketSharp::Net::Cookie*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::Generic::IEnumerator_1<::WebSocketSharp::Net::Cookie*>* WebSocketSharp::Net::CookieCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::WebSocketSharp::Net::Cookie*>*>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::CookieCollection::Remove(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cookie);
}
inline ::System::Collections::IEnumerator* WebSocketSharp::Net::CookieCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::CookieCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::Net::CookieCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::CookieCollection*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>"
constexpr  WebSocketSharp::Net::CookieCollection::operator ::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>"
constexpr ::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>* WebSocketSharp::Net::CookieCollection::i___System__Collections__Generic__ICollection_1___WebSocketSharp__Net__Cookie__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::WebSocketSharp::Net::Cookie*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>"
constexpr  WebSocketSharp::Net::CookieCollection::operator ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>* WebSocketSharp::Net::CookieCollection::i___System__Collections__Generic__IEnumerable_1___WebSocketSharp__Net__Cookie__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::WebSocketSharp::Net::Cookie*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  WebSocketSharp::Net::CookieCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* WebSocketSharp::Net::CookieCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::CookieCollection::CookieCollection()   {
}
